import streamlit as st
import pandas as pd

st.title("Hybrid Temperature Control Dashboard")

st.write("This dashboard displays logged temperature data.")

# Load data
data = pd.read_csv("../data/temperature_log.csv")

st.subheader("Temperature Data")
st.dataframe(data)

st.subheader("Temperature Trend")
st.line_chart(data["temperature"])
