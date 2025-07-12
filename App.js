import { StatusBar } from "expo-status-bar";
import { useEffect } from "react";
import { StyleSheet, Text, View, NativeModules } from "react-native";
const { HidModule } = NativeModules;
export default function App() {
  const initializeSDK = async () => {
    try {
      const data = await HidModule.initializeSDK();
      console.log(data, "jjj");
    } catch (e) {
      alert(e);
    }
  };

  useEffect(() => {
    initializeSDK();
  }, []);
  return (
    <View style={styles.container}>
      <Text>Open up App.js to start working on your app!</Text>
      <StatusBar style="auto" />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: "#fff",
    alignItems: "center",
    justifyContent: "center",
  },
});
