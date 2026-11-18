// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 45

// OpenProcessToken @ 15015a377

BOOL __stdcall OpenProcessToken(HANDLE ProcessHandle,DWORD DesiredAccess,PHANDLE TokenHandle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OpenProcessToken(ProcessHandle,DesiredAccess,TokenHandle);
  return BVar1;
}

// AdjustTokenPrivileges @ 15015a383

BOOL __stdcall
AdjustTokenPrivileges
          (HANDLE TokenHandle,BOOL DisableAllPrivileges,PTOKEN_PRIVILEGES NewState,
          DWORD BufferLength,PTOKEN_PRIVILEGES PreviousState,PDWORD ReturnLength)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AdjustTokenPrivileges
                    (TokenHandle,DisableAllPrivileges,NewState,BufferLength,PreviousState,
                     ReturnLength);
  return BVar1;
}

// GetTokenInformation @ 15015a38f

BOOL __stdcall
GetTokenInformation(HANDLE TokenHandle,TOKEN_INFORMATION_CLASS TokenInformationClass,
                   LPVOID TokenInformation,DWORD TokenInformationLength,PDWORD ReturnLength)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a38f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTokenInformation(TokenHandle,TokenInformationClass,TokenInformation,
                              TokenInformationLength,ReturnLength);
  return BVar1;
}

// LookupPrivilegeValueW @ 15015a39b

BOOL __stdcall LookupPrivilegeValueW(LPCWSTR lpSystemName,LPCWSTR lpName,PLUID lpLuid)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a39b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LookupPrivilegeValueW(lpSystemName,lpName,lpLuid);
  return BVar1;
}

// StartTraceW @ 15015a3a7

void StartTraceW(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015a3a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  StartTraceW();
  return;
}

// ControlTraceW @ 15015a3b3

void ControlTraceW(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015a3b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ControlTraceW();
  return;
}

// TraceSetInformation @ 15015a3bf

void TraceSetInformation(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015a3bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TraceSetInformation();
  return;
}

// OpenTraceW @ 15015a3cb

void OpenTraceW(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015a3cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OpenTraceW();
  return;
}

// ProcessTrace @ 15015a3d7

void ProcessTrace(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015a3d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ProcessTrace();
  return;
}

// CloseTrace @ 15015a3e3

void CloseTrace(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015a3e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseTrace();
  return;
}

// DeregisterEventSource @ 15015a3ef

BOOL __stdcall DeregisterEventSource(HANDLE hEventLog)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a3ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeregisterEventSource(hEventLog);
  return BVar1;
}

// RegisterEventSourceW @ 15015a3fb

HANDLE __stdcall RegisterEventSourceW(LPCWSTR lpUNCServerName,LPCWSTR lpSourceName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a3fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = RegisterEventSourceW(lpUNCServerName,lpSourceName);
  return pvVar1;
}

// ReportEventW @ 15015a407

BOOL __stdcall
ReportEventW(HANDLE hEventLog,WORD wType,WORD wCategory,DWORD dwEventID,PSID lpUserSid,
            WORD wNumStrings,DWORD dwDataSize,LPCWSTR *lpStrings,LPVOID lpRawData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a407. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReportEventW(hEventLog,wType,wCategory,dwEventID,lpUserSid,wNumStrings,dwDataSize,
                       lpStrings,lpRawData);
  return BVar1;
}

// GetUserNameW @ 15015a413

BOOL __stdcall GetUserNameW(LPWSTR lpBuffer,LPDWORD pcbBuffer)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetUserNameW(lpBuffer,pcbBuffer);
  return BVar1;
}

// RegCloseKey @ 15015a41f

LSTATUS __stdcall RegCloseKey(HKEY hKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a41f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCloseKey(hKey);
  return LVar1;
}

// RegCreateKeyExW @ 15015a42b

LSTATUS __stdcall
RegCreateKeyExW(HKEY hKey,LPCWSTR lpSubKey,DWORD Reserved,LPWSTR lpClass,DWORD dwOptions,
               REGSAM samDesired,LPSECURITY_ATTRIBUTES lpSecurityAttributes,PHKEY phkResult,
               LPDWORD lpdwDisposition)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a42b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCreateKeyExW(hKey,lpSubKey,Reserved,lpClass,dwOptions,samDesired,lpSecurityAttributes,
                          phkResult,lpdwDisposition);
  return LVar1;
}

// RegDeleteKeyW @ 15015a437

LSTATUS __stdcall RegDeleteKeyW(HKEY hKey,LPCWSTR lpSubKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegDeleteKeyW(hKey,lpSubKey);
  return LVar1;
}

// RegDeleteValueW @ 15015a443

LSTATUS __stdcall RegDeleteValueW(HKEY hKey,LPCWSTR lpValueName)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a443. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegDeleteValueW(hKey,lpValueName);
  return LVar1;
}

// RegEnumKeyExW @ 15015a44f

LSTATUS __stdcall
RegEnumKeyExW(HKEY hKey,DWORD dwIndex,LPWSTR lpName,LPDWORD lpcchName,LPDWORD lpReserved,
             LPWSTR lpClass,LPDWORD lpcchClass,PFILETIME lpftLastWriteTime)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a44f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegEnumKeyExW(hKey,dwIndex,lpName,lpcchName,lpReserved,lpClass,lpcchClass,
                        lpftLastWriteTime);
  return LVar1;
}

// RegEnumValueW @ 15015a45b

LSTATUS __stdcall
RegEnumValueW(HKEY hKey,DWORD dwIndex,LPWSTR lpValueName,LPDWORD lpcchValueName,LPDWORD lpReserved,
             LPDWORD lpType,LPBYTE lpData,LPDWORD lpcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a45b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegEnumValueW(hKey,dwIndex,lpValueName,lpcchValueName,lpReserved,lpType,lpData,lpcbData);
  return LVar1;
}

// RegOpenKeyExW @ 15015a467

LSTATUS __stdcall
RegOpenKeyExW(HKEY hKey,LPCWSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a467. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegOpenKeyExW(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  return LVar1;
}

// RegQueryValueExW @ 15015a473

LSTATUS __stdcall
RegQueryValueExW(HKEY hKey,LPCWSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,
                LPDWORD lpcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryValueExW(hKey,lpValueName,lpReserved,lpType,lpData,lpcbData);
  return LVar1;
}

// RegSetValueExW @ 15015a47f

LSTATUS __stdcall
RegSetValueExW(HKEY hKey,LPCWSTR lpValueName,DWORD Reserved,DWORD dwType,BYTE *lpData,DWORD cbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a47f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegSetValueExW(hKey,lpValueName,Reserved,dwType,lpData,cbData);
  return LVar1;
}

// RegDeleteTreeW @ 15015a48b

LSTATUS __stdcall RegDeleteTreeW(HKEY hKey,LPCWSTR lpSubKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a48b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegDeleteTreeW(hKey,lpSubKey);
  return LVar1;
}

// RegGetValueW @ 15015a497

LSTATUS __stdcall
RegGetValueW(HKEY hkey,LPCWSTR lpSubKey,LPCWSTR lpValue,DWORD dwFlags,LPDWORD pdwType,PVOID pvData,
            LPDWORD pcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegGetValueW(hkey,lpSubKey,lpValue,dwFlags,pdwType,pvData,pcbData);
  return LVar1;
}

// RegDeleteKeyExW @ 15015a4a3

LSTATUS __stdcall RegDeleteKeyExW(HKEY hKey,LPCWSTR lpSubKey,REGSAM samDesired,DWORD Reserved)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a4a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegDeleteKeyExW(hKey,lpSubKey,samDesired,Reserved);
  return LVar1;
}

// AllocateLocallyUniqueId @ 15015a4af

BOOL __stdcall AllocateLocallyUniqueId(PLUID Luid)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a4af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AllocateLocallyUniqueId(Luid);
  return BVar1;
}

// EventRegister @ 15015a4bb

ULONG __stdcall
EventRegister(LPCGUID ProviderId,PENABLECALLBACK EnableCallback,PVOID CallbackContext,
             PREGHANDLE RegHandle)

{
  ULONG UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a4bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = EventRegister(ProviderId,EnableCallback,CallbackContext,RegHandle);
  return UVar1;
}

// EventUnregister @ 15015a4c7

ULONG __stdcall EventUnregister(REGHANDLE RegHandle)

{
  ULONG UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a4c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = EventUnregister(RegHandle);
  return UVar1;
}

// EventSetInformation @ 15015a4d3

void EventSetInformation(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015a4d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EventSetInformation();
  return;
}

// EventWriteTransfer @ 15015a4df

ULONG __stdcall
EventWriteTransfer(REGHANDLE RegHandle,PCEVENT_DESCRIPTOR EventDescriptor,LPCGUID ActivityId,
                  LPCGUID RelatedActivityId,ULONG UserDataCount,PEVENT_DATA_DESCRIPTOR UserData)

{
  ULONG UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a4df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = EventWriteTransfer(RegHandle,EventDescriptor,ActivityId,RelatedActivityId,UserDataCount,
                             UserData);
  return UVar1;
}

// CryptAcquireContextW @ 15015a4eb

BOOL __stdcall
CryptAcquireContextW
          (HCRYPTPROV *phProv,LPCWSTR szContainer,LPCWSTR szProvider,DWORD dwProvType,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a4eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CryptAcquireContextW(phProv,szContainer,szProvider,dwProvType,dwFlags);
  return BVar1;
}

// CryptReleaseContext @ 15015a4f7

BOOL __stdcall CryptReleaseContext(HCRYPTPROV hProv,ULONG_PTR dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a4f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CryptReleaseContext(hProv,dwFlags);
  return BVar1;
}

// CryptDestroyKey @ 15015a503

BOOL __stdcall CryptDestroyKey(HCRYPTKEY hKey)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CryptDestroyKey(hKey);
  return BVar1;
}

// CryptSetHashParam @ 15015a50f

BOOL __stdcall CryptSetHashParam(HCRYPTHASH hHash,DWORD dwParam,BYTE *pbData,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a50f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CryptSetHashParam(hHash,dwParam,pbData,dwFlags);
  return BVar1;
}

// CryptGetProvParam @ 15015a51b

BOOL __stdcall
CryptGetProvParam(HCRYPTPROV hProv,DWORD dwParam,BYTE *pbData,DWORD *pdwDataLen,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a51b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CryptGetProvParam(hProv,dwParam,pbData,pdwDataLen,dwFlags);
  return BVar1;
}

// CryptGetUserKey @ 15015a527

BOOL __stdcall CryptGetUserKey(HCRYPTPROV hProv,DWORD dwKeySpec,HCRYPTKEY *phUserKey)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a527. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CryptGetUserKey(hProv,dwKeySpec,phUserKey);
  return BVar1;
}

// CryptExportKey @ 15015a533

BOOL __stdcall
CryptExportKey(HCRYPTKEY hKey,HCRYPTKEY hExpKey,DWORD dwBlobType,DWORD dwFlags,BYTE *pbData,
              DWORD *pdwDataLen)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a533. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CryptExportKey(hKey,hExpKey,dwBlobType,dwFlags,pbData,pdwDataLen);
  return BVar1;
}

// CryptDecrypt @ 15015a53f

BOOL __stdcall
CryptDecrypt(HCRYPTKEY hKey,HCRYPTHASH hHash,BOOL Final,DWORD dwFlags,BYTE *pbData,DWORD *pdwDataLen
            )

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a53f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CryptDecrypt(hKey,hHash,Final,dwFlags,pbData,pdwDataLen);
  return BVar1;
}

// CryptCreateHash @ 15015a54b

BOOL __stdcall
CryptCreateHash(HCRYPTPROV hProv,ALG_ID Algid,HCRYPTKEY hKey,DWORD dwFlags,HCRYPTHASH *phHash)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a54b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CryptCreateHash(hProv,Algid,hKey,dwFlags,phHash);
  return BVar1;
}

// CryptDestroyHash @ 15015a557

BOOL __stdcall CryptDestroyHash(HCRYPTHASH hHash)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CryptDestroyHash(hHash);
  return BVar1;
}

// CryptSignHashW @ 15015a563

BOOL __stdcall
CryptSignHashW(HCRYPTHASH hHash,DWORD dwKeySpec,LPCWSTR szDescription,DWORD dwFlags,
              BYTE *pbSignature,DWORD *pdwSigLen)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CryptSignHashW(hHash,dwKeySpec,szDescription,dwFlags,pbSignature,pdwSigLen);
  return BVar1;
}

// CryptEnumProvidersW @ 15015a56f

BOOL __stdcall
CryptEnumProvidersW(DWORD dwIndex,DWORD *pdwReserved,DWORD dwFlags,DWORD *pdwProvType,
                   LPWSTR szProvName,DWORD *pcbProvName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a56f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CryptEnumProvidersW(dwIndex,pdwReserved,dwFlags,pdwProvType,szProvName,pcbProvName);
  return BVar1;
}

// RegOpenKeyExA @ 150244530

LSTATUS __stdcall
RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150244530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegOpenKeyExA(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  return LVar1;
}

// RegQueryValueExA @ 15024453c

LSTATUS __stdcall
RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,
                LPDWORD lpcbData)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015024453c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegQueryValueExA(hKey,lpValueName,lpReserved,lpType,lpData,lpcbData);
  return LVar1;
}

