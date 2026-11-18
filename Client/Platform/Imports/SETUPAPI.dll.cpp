// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 7

// SetupDiEnumDeviceInfo @ 15015a98a

BOOL __stdcall
SetupDiEnumDeviceInfo(HDEVINFO DeviceInfoSet,DWORD MemberIndex,PSP_DEVINFO_DATA DeviceInfoData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a98a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetupDiEnumDeviceInfo(DeviceInfoSet,MemberIndex,DeviceInfoData);
  return BVar1;
}

// SetupDiDestroyDeviceInfoList @ 15015a996

BOOL __stdcall SetupDiDestroyDeviceInfoList(HDEVINFO DeviceInfoSet)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetupDiDestroyDeviceInfoList(DeviceInfoSet);
  return BVar1;
}

// SetupDiGetClassDevsW @ 15015a9a2

HDEVINFO __stdcall
SetupDiGetClassDevsW(GUID *ClassGuid,PCWSTR Enumerator,HWND hwndParent,DWORD Flags)

{
  HDEVINFO pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a9a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SetupDiGetClassDevsW(ClassGuid,Enumerator,hwndParent,Flags);
  return pvVar1;
}

// SetupDiGetDevicePropertyW @ 15015a9ae

BOOL __stdcall
SetupDiGetDevicePropertyW
          (HDEVINFO DeviceInfoSet,PSP_DEVINFO_DATA DeviceInfoData,DEVPROPKEY *PropertyKey,
          DEVPROPTYPE *PropertyType,PBYTE PropertyBuffer,DWORD PropertyBufferSize,
          PDWORD RequiredSize,DWORD Flags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a9ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetupDiGetDevicePropertyW
                    (DeviceInfoSet,DeviceInfoData,PropertyKey,PropertyType,PropertyBuffer,
                     PropertyBufferSize,RequiredSize,Flags);
  return BVar1;
}

// SetupDiGetClassDevsExW @ 15015a9ba

HDEVINFO __stdcall
SetupDiGetClassDevsExW
          (GUID *ClassGuid,PCWSTR Enumerator,HWND hwndParent,DWORD Flags,HDEVINFO DeviceInfoSet,
          PCWSTR MachineName,PVOID Reserved)

{
  HDEVINFO pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a9ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = SetupDiGetClassDevsExW
                     (ClassGuid,Enumerator,hwndParent,Flags,DeviceInfoSet,MachineName,Reserved);
  return pvVar1;
}

// SetupDiOpenDevRegKey @ 15015a9c6

HKEY __stdcall
SetupDiOpenDevRegKey
          (HDEVINFO DeviceInfoSet,PSP_DEVINFO_DATA DeviceInfoData,DWORD Scope,DWORD HwProfile,
          DWORD KeyType,REGSAM samDesired)

{
  HKEY pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a9c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = SetupDiOpenDevRegKey(DeviceInfoSet,DeviceInfoData,Scope,HwProfile,KeyType,samDesired);
  return pHVar1;
}

// CM_Get_Device_IDW @ 15015a9d2

void CM_Get_Device_IDW(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015a9d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CM_Get_Device_IDW();
  return;
}

