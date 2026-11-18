// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 321

// CreateFileA @ 150158bef

HANDLE __stdcall
CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
           LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
           DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158bef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}

// ReadFile @ 150158bfb

BOOL __stdcall
ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,
        LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158bfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return BVar1;
}

// WriteFile @ 150158c07

BOOL __stdcall
WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten,
         LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158c07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  return BVar1;
}

// CloseHandle @ 150158c13

BOOL __stdcall CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158c13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}

// GetLastError @ 150158c1f

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}

// SetLastError @ 150158c2b

void __stdcall SetLastError(DWORD dwErrCode)

{
                    /* WARNING: Could not recover jumptable at 0x000150158c2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}

// QueryPerformanceCounter @ 150158c37

BOOL __stdcall QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158c37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = QueryPerformanceCounter(lpPerformanceCount);
  return BVar1;
}

// QueryPerformanceFrequency @ 150158c43

BOOL __stdcall QueryPerformanceFrequency(LARGE_INTEGER *lpFrequency)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = QueryPerformanceFrequency(lpFrequency);
  return BVar1;
}

// WaitForSingleObject @ 150158c4f

DWORD __stdcall WaitForSingleObject(HANDLE hHandle,DWORD dwMilliseconds)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WaitForSingleObject(hHandle,dwMilliseconds);
  return DVar1;
}

// Sleep @ 150158c5b

void __stdcall Sleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x000150158c5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}

// CreateThread @ 150158c67

HANDLE __stdcall
CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes,SIZE_T dwStackSize,
            LPTHREAD_START_ROUTINE lpStartAddress,LPVOID lpParameter,DWORD dwCreationFlags,
            LPDWORD lpThreadId)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateThread(lpThreadAttributes,dwStackSize,lpStartAddress,lpParameter,dwCreationFlags,
                        lpThreadId);
  return pvVar1;
}

// FormatMessageA @ 150158c73

DWORD __stdcall
FormatMessageA(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,LPSTR lpBuffer,
              DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158c73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageA(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}

// InitializeCriticalSectionAndSpinCount @ 150158c7f

BOOL __stdcall
InitializeCriticalSectionAndSpinCount(LPCRITICAL_SECTION lpCriticalSection,DWORD dwSpinCount)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158c7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InitializeCriticalSectionAndSpinCount(lpCriticalSection,dwSpinCount);
  return BVar1;
}

// EnterCriticalSection @ 150158c8b

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000150158c8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(lpCriticalSection);
  return;
}

// LeaveCriticalSection @ 150158c97

void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000150158c97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// DeleteCriticalSection @ 150158ca3

void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000150158ca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}

// GetCurrentThreadId @ 150158caf

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}

// TlsAlloc @ 150158cbb

DWORD __stdcall TlsAlloc(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158cbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = TlsAlloc();
  return DVar1;
}

// TlsGetValue @ 150158cc7

LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158cc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}

// TlsSetValue @ 150158cd3

BOOL __stdcall TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158cd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsSetValue(dwTlsIndex,lpTlsValue);
  return BVar1;
}

// TlsFree @ 150158cdf

BOOL __stdcall TlsFree(DWORD dwTlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158cdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TlsFree(dwTlsIndex);
  return BVar1;
}

// TryEnterCriticalSection @ 150158ceb

BOOL __stdcall TryEnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158ceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  return BVar1;
}

// AcquireSRWLockShared @ 150158cf7

void __stdcall AcquireSRWLockShared(PSRWLOCK SRWLock)

{
                    /* WARNING: Could not recover jumptable at 0x000150158cf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AcquireSRWLockShared(SRWLock);
  return;
}

// ReleaseSRWLockShared @ 150158d03

void __stdcall ReleaseSRWLockShared(PSRWLOCK SRWLock)

{
                    /* WARNING: Could not recover jumptable at 0x000150158d03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared(SRWLock);
  return;
}

// AcquireSRWLockExclusive @ 150158d0f

void __stdcall AcquireSRWLockExclusive(PSRWLOCK SRWLock)

{
                    /* WARNING: Could not recover jumptable at 0x000150158d0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AcquireSRWLockExclusive(SRWLock);
  return;
}

// ReleaseSRWLockExclusive @ 150158d1b

void __stdcall ReleaseSRWLockExclusive(PSRWLOCK SRWLock)

{
                    /* WARNING: Could not recover jumptable at 0x000150158d1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(SRWLock);
  return;
}

// TryAcquireSRWLockExclusive @ 150158d27

BOOLEAN __stdcall TryAcquireSRWLockExclusive(PSRWLOCK SRWLock)

{
  BOOLEAN BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158d27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TryAcquireSRWLockExclusive(SRWLock);
  return BVar1;
}

// HeapSetInformation @ 150158d33

BOOL __stdcall
HeapSetInformation(HANDLE HeapHandle,HEAP_INFORMATION_CLASS HeapInformationClass,
                  PVOID HeapInformation,SIZE_T HeapInformationLength)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapSetInformation(HeapHandle,HeapInformationClass,HeapInformation,HeapInformationLength);
  return BVar1;
}

// VirtualAlloc @ 150158d3f

LPVOID __stdcall VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158d3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAlloc(lpAddress,dwSize,flAllocationType,flProtect);
  return pvVar1;
}

// VirtualFree @ 150158d4b

BOOL __stdcall VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158d4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualFree(lpAddress,dwSize,dwFreeType);
  return BVar1;
}

// GetModuleHandleW @ 150158d57

HMODULE __stdcall GetModuleHandleW(LPCWSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158d57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleW(lpModuleName);
  return pHVar1;
}

// RtlLookupFunctionEntry @ 150158d63

PRUNTIME_FUNCTION __stdcall
RtlLookupFunctionEntry(DWORD64 ControlPc,PDWORD64 ImageBase,PUNWIND_HISTORY_TABLE HistoryTable)

{
  PRUNTIME_FUNCTION p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = RtlLookupFunctionEntry(ControlPc,ImageBase,HistoryTable);
  return p_Var1;
}

// RtlVirtualUnwind @ 150158d6f

PEXCEPTION_ROUTINE __stdcall
RtlVirtualUnwind(DWORD HandlerType,DWORD64 ImageBase,DWORD64 ControlPc,
                PRUNTIME_FUNCTION FunctionEntry,PCONTEXT ContextRecord,PVOID *HandlerData,
                PDWORD64 EstablisherFrame,PKNONVOLATILE_CONTEXT_POINTERS ContextPointers)

{
  PEXCEPTION_ROUTINE puVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158d6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = RtlVirtualUnwind(HandlerType,ImageBase,ControlPc,FunctionEntry,ContextRecord,HandlerData,
                            EstablisherFrame,ContextPointers);
  return puVar1;
}

// GetCurrentProcess @ 150158d7b

HANDLE __stdcall GetCurrentProcess(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158d7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentProcess();
  return pvVar1;
}

// K32EnumProcessModulesEx @ 150158d87

void K32EnumProcessModulesEx(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150158d87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  K32EnumProcessModulesEx();
  return;
}

// K32GetModuleBaseNameW @ 150158d93

void K32GetModuleBaseNameW(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150158d93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  K32GetModuleBaseNameW();
  return;
}

// K32GetModuleFileNameExW @ 150158d9f

void K32GetModuleFileNameExW(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150158d9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  K32GetModuleFileNameExW();
  return;
}

// K32GetModuleInformation @ 150158dab

void K32GetModuleInformation(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150158dab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  K32GetModuleInformation();
  return;
}

// GetStdHandle @ 150158db7

HANDLE __stdcall GetStdHandle(DWORD nStdHandle)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158db7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetStdHandle(nStdHandle);
  return pvVar1;
}

// GetFileType @ 150158dc3

DWORD __stdcall GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileType(hFile);
  return DVar1;
}

// SetHandleInformation @ 150158dcf

BOOL __stdcall SetHandleInformation(HANDLE hObject,DWORD dwMask,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158dcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetHandleInformation(hObject,dwMask,dwFlags);
  return BVar1;
}

// CreatePipe @ 150158ddb

BOOL __stdcall
CreatePipe(PHANDLE hReadPipe,PHANDLE hWritePipe,LPSECURITY_ATTRIBUTES lpPipeAttributes,DWORD nSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158ddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreatePipe(hReadPipe,hWritePipe,lpPipeAttributes,nSize);
  return BVar1;
}

// WriteConsoleW @ 150158de7

BOOL __stdcall
WriteConsoleW(HANDLE hConsoleOutput,void *lpBuffer,DWORD nNumberOfCharsToWrite,
             LPDWORD lpNumberOfCharsWritten,LPVOID lpReserved)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158de7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteConsoleW(hConsoleOutput,lpBuffer,nNumberOfCharsToWrite,lpNumberOfCharsWritten,
                        lpReserved);
  return BVar1;
}

// FindClose @ 150158df3

BOOL __stdcall FindClose(HANDLE hFindFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindClose(hFindFile);
  return BVar1;
}

// FindFirstFileW @ 150158dff

HANDLE __stdcall FindFirstFileW(LPCWSTR lpFileName,LPWIN32_FIND_DATAW lpFindFileData)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158dff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FindFirstFileW(lpFileName,lpFindFileData);
  return pvVar1;
}

// GetCommandLineW @ 150158e0b

LPWSTR __stdcall GetCommandLineW(void)

{
  LPWSTR pWVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158e0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pWVar1 = GetCommandLineW();
  return pWVar1;
}

// OpenEventW @ 150158e17

HANDLE __stdcall OpenEventW(DWORD dwDesiredAccess,BOOL bInheritHandle,LPCWSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = OpenEventW(dwDesiredAccess,bInheritHandle,lpName);
  return pvVar1;
}

// GetCurrentProcessId @ 150158e23

DWORD __stdcall GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158e23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}

// GetExitCodeProcess @ 150158e2f

BOOL __stdcall GetExitCodeProcess(HANDLE hProcess,LPDWORD lpExitCode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158e2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetExitCodeProcess(hProcess,lpExitCode);
  return BVar1;
}

// OpenThread @ 150158e3b

HANDLE __stdcall OpenThread(DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwThreadId)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158e3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = OpenThread(dwDesiredAccess,bInheritHandle,dwThreadId);
  return pvVar1;
}

// CreateProcessW @ 150158e47

BOOL __stdcall
CreateProcessW(LPCWSTR lpApplicationName,LPWSTR lpCommandLine,
              LPSECURITY_ATTRIBUTES lpProcessAttributes,LPSECURITY_ATTRIBUTES lpThreadAttributes,
              BOOL bInheritHandles,DWORD dwCreationFlags,LPVOID lpEnvironment,
              LPCWSTR lpCurrentDirectory,LPSTARTUPINFOW lpStartupInfo,
              LPPROCESS_INFORMATION lpProcessInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158e47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreateProcessW(lpApplicationName,lpCommandLine,lpProcessAttributes,lpThreadAttributes,
                         bInheritHandles,dwCreationFlags,lpEnvironment,lpCurrentDirectory,
                         lpStartupInfo,lpProcessInformation);
  return BVar1;
}

// GetProcessIdOfThread @ 150158e53

DWORD __stdcall GetProcessIdOfThread(HANDLE Thread)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158e53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetProcessIdOfThread(Thread);
  return DVar1;
}

// FlushInstructionCache @ 150158e5f

BOOL __stdcall FlushInstructionCache(HANDLE hProcess,LPCVOID lpBaseAddress,SIZE_T dwSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158e5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlushInstructionCache(hProcess,lpBaseAddress,dwSize);
  return BVar1;
}

// OpenProcess @ 150158e6b

HANDLE __stdcall OpenProcess(DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwProcessId)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158e6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = OpenProcess(dwDesiredAccess,bInheritHandle,dwProcessId);
  return pvVar1;
}

// GetSystemInfo @ 150158e77

void __stdcall GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)

{
                    /* WARNING: Could not recover jumptable at 0x000150158e77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemInfo(lpSystemInfo);
  return;
}

// VirtualProtect @ 150158e83

BOOL __stdcall
VirtualProtect(LPVOID lpAddress,SIZE_T dwSize,DWORD flNewProtect,PDWORD lpflOldProtect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualProtect(lpAddress,dwSize,flNewProtect,lpflOldProtect);
  return BVar1;
}

// VirtualQuery @ 150158e8f

SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158e8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = VirtualQuery(lpAddress,lpBuffer,dwLength);
  return SVar1;
}

// VirtualAllocEx @ 150158e9b

LPVOID __stdcall
VirtualAllocEx(HANDLE hProcess,LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect
              )

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158e9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAllocEx(hProcess,lpAddress,dwSize,flAllocationType,flProtect);
  return pvVar1;
}

// VirtualFreeEx @ 150158ea7

BOOL __stdcall VirtualFreeEx(HANDLE hProcess,LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualFreeEx(hProcess,lpAddress,dwSize,dwFreeType);
  return BVar1;
}

// QueryInformationJobObject @ 150158eb3

BOOL __stdcall
QueryInformationJobObject
          (HANDLE hJob,JOBOBJECTINFOCLASS JobObjectInformationClass,LPVOID lpJobObjectInformation,
          DWORD cbJobObjectInformationLength,LPDWORD lpReturnLength)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = QueryInformationJobObject
                    (hJob,JobObjectInformationClass,lpJobObjectInformation,
                     cbJobObjectInformationLength,lpReturnLength);
  return BVar1;
}

// FreeLibrary @ 150158ebf

BOOL __stdcall FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158ebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}

// GetProcAddress @ 150158ecb

FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158ecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}

// LoadLibraryW @ 150158ed7

HMODULE __stdcall LoadLibraryW(LPCWSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158ed7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryW(lpLibFileName);
  return pHVar1;
}

// LocalFree @ 150158ee3

HLOCAL __stdcall LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158ee3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}

// QueryFullProcessImageNameW @ 150158eef

BOOL __stdcall
QueryFullProcessImageNameW(HANDLE hProcess,DWORD dwFlags,LPWSTR lpExeName,PDWORD lpdwSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = QueryFullProcessImageNameW(hProcess,dwFlags,lpExeName,lpdwSize);
  return BVar1;
}

// ConnectNamedPipe @ 150158efb

BOOL __stdcall ConnectNamedPipe(HANDLE hNamedPipe,LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158efb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ConnectNamedPipe(hNamedPipe,lpOverlapped);
  return BVar1;
}

// GetOverlappedResult @ 150158f07

BOOL __stdcall
GetOverlappedResult(HANDLE hFile,LPOVERLAPPED lpOverlapped,LPDWORD lpNumberOfBytesTransferred,
                   BOOL bWait)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158f07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetOverlappedResult(hFile,lpOverlapped,lpNumberOfBytesTransferred,bWait);
  return BVar1;
}

// RtlCaptureStackBackTrace @ 150158f13

void RtlCaptureStackBackTrace(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150158f13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlCaptureStackBackTrace();
  return;
}

// VerSetConditionMask @ 150158f1f

void VerSetConditionMask(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150158f1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VerSetConditionMask();
  return;
}

// GetEnvironmentVariableW @ 150158f2b

DWORD __stdcall GetEnvironmentVariableW(LPCWSTR lpName,LPWSTR lpBuffer,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetEnvironmentVariableW(lpName,lpBuffer,nSize);
  return DVar1;
}

// SetEnvironmentVariableW @ 150158f37

BOOL __stdcall SetEnvironmentVariableW(LPCWSTR lpName,LPCWSTR lpValue)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158f37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEnvironmentVariableW(lpName,lpValue);
  return BVar1;
}

// SetCurrentDirectoryW @ 150158f43

BOOL __stdcall SetCurrentDirectoryW(LPCWSTR lpPathName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158f43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetCurrentDirectoryW(lpPathName);
  return BVar1;
}

// GetCurrentDirectoryW @ 150158f4f

DWORD __stdcall GetCurrentDirectoryW(DWORD nBufferLength,LPWSTR lpBuffer)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158f4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentDirectoryW(nBufferLength,lpBuffer);
  return DVar1;
}

// CreateDirectoryW @ 150158f5b

BOOL __stdcall CreateDirectoryW(LPCWSTR lpPathName,LPSECURITY_ATTRIBUTES lpSecurityAttributes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158f5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreateDirectoryW(lpPathName,lpSecurityAttributes);
  return BVar1;
}

// CreateFileW @ 150158f67

HANDLE __stdcall
CreateFileW(LPCWSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
           LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
           DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158f67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileW(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}

// DeleteFileW @ 150158f73

BOOL __stdcall DeleteFileW(LPCWSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158f73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteFileW(lpFileName);
  return BVar1;
}

// FindNextFileW @ 150158f7f

BOOL __stdcall FindNextFileW(HANDLE hFindFile,LPWIN32_FIND_DATAW lpFindFileData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindNextFileW(hFindFile,lpFindFileData);
  return BVar1;
}

// FlushFileBuffers @ 150158f8b

BOOL __stdcall FlushFileBuffers(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158f8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlushFileBuffers(hFile);
  return BVar1;
}

// GetDiskFreeSpaceExW @ 150158f97

BOOL __stdcall
GetDiskFreeSpaceExW(LPCWSTR lpDirectoryName,PULARGE_INTEGER lpFreeBytesAvailableToCaller,
                   PULARGE_INTEGER lpTotalNumberOfBytes,PULARGE_INTEGER lpTotalNumberOfFreeBytes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158f97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetDiskFreeSpaceExW(lpDirectoryName,lpFreeBytesAvailableToCaller,lpTotalNumberOfBytes,
                              lpTotalNumberOfFreeBytes);
  return BVar1;
}

// GetFileAttributesW @ 150158fa3

DWORD __stdcall GetFileAttributesW(LPCWSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158fa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesW(lpFileName);
  return DVar1;
}

// GetFileAttributesExW @ 150158faf

BOOL __stdcall
GetFileAttributesExW
          (LPCWSTR lpFileName,GET_FILEEX_INFO_LEVELS fInfoLevelId,LPVOID lpFileInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158faf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileAttributesExW(lpFileName,fInfoLevelId,lpFileInformation);
  return BVar1;
}

// GetFileSizeEx @ 150158fbb

BOOL __stdcall GetFileSizeEx(HANDLE hFile,PLARGE_INTEGER lpFileSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158fbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileSizeEx(hFile,lpFileSize);
  return BVar1;
}

// GetFinalPathNameByHandleW @ 150158fc7

DWORD __stdcall
GetFinalPathNameByHandleW(HANDLE hFile,LPWSTR lpszFilePath,DWORD cchFilePath,DWORD dwFlags)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158fc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFinalPathNameByHandleW(hFile,lpszFilePath,cchFilePath,dwFlags);
  return DVar1;
}

// GetFullPathNameW @ 150158fd3

DWORD __stdcall
GetFullPathNameW(LPCWSTR lpFileName,DWORD nBufferLength,LPWSTR lpBuffer,LPWSTR *lpFilePart)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFullPathNameW(lpFileName,nBufferLength,lpBuffer,lpFilePart);
  return DVar1;
}

// GetLongPathNameW @ 150158fdf

DWORD __stdcall GetLongPathNameW(LPCWSTR lpszShortPath,LPWSTR lpszLongPath,DWORD cchBuffer)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158fdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLongPathNameW(lpszShortPath,lpszLongPath,cchBuffer);
  return DVar1;
}

// RemoveDirectoryW @ 150158feb

BOOL __stdcall RemoveDirectoryW(LPCWSTR lpPathName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158feb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RemoveDirectoryW(lpPathName);
  return BVar1;
}

// SetEndOfFile @ 150158ff7

BOOL __stdcall SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150158ff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}

// SetFileAttributesW @ 150159003

BOOL __stdcall SetFileAttributesW(LPCWSTR lpFileName,DWORD dwFileAttributes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetFileAttributesW(lpFileName,dwFileAttributes);
  return BVar1;
}

// SetFilePointer @ 15015900f

DWORD __stdcall
SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015900f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}

// SetFileTime @ 15015901b

BOOL __stdcall
SetFileTime(HANDLE hFile,FILETIME *lpCreationTime,FILETIME *lpLastAccessTime,
           FILETIME *lpLastWriteTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015901b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetFileTime(hFile,lpCreationTime,lpLastAccessTime,lpLastWriteTime);
  return BVar1;
}

// GetTempPathW @ 150159027

DWORD __stdcall GetTempPathW(DWORD nBufferLength,LPWSTR lpBuffer)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTempPathW(nBufferLength,lpBuffer);
  return DVar1;
}

// IsDebuggerPresent @ 150159033

BOOL __stdcall IsDebuggerPresent(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsDebuggerPresent();
  return BVar1;
}

// DebugBreak @ 15015903f

void __stdcall DebugBreak(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015903f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DebugBreak();
  return;
}

// OutputDebugStringW @ 15015904b

void __stdcall OutputDebugStringW(LPCWSTR lpOutputString)

{
                    /* WARNING: Could not recover jumptable at 0x00015015904b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OutputDebugStringW(lpOutputString);
  return;
}

// GetHandleInformation @ 150159057

BOOL __stdcall GetHandleInformation(HANDLE hObject,LPDWORD lpdwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetHandleInformation(hObject,lpdwFlags);
  return BVar1;
}

// RaiseException @ 150159063

void __stdcall
RaiseException(DWORD dwExceptionCode,DWORD dwExceptionFlags,DWORD nNumberOfArguments,
              ULONG_PTR *lpArguments)

{
                    /* WARNING: Could not recover jumptable at 0x000150159063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RaiseException(dwExceptionCode,dwExceptionFlags,nNumberOfArguments,lpArguments);
  return;
}

// SetUnhandledExceptionFilter @ 15015906f

LPTOP_LEVEL_EXCEPTION_FILTER __stdcall
SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)

{
  LPTOP_LEVEL_EXCEPTION_FILTER pPVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015906f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pPVar1 = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
  return pPVar1;
}

// SetThreadErrorMode @ 15015907b

BOOL __stdcall SetThreadErrorMode(DWORD dwNewMode,LPDWORD lpOldMode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015907b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadErrorMode(dwNewMode,lpOldMode);
  return BVar1;
}

// DisconnectNamedPipe @ 150159087

BOOL __stdcall DisconnectNamedPipe(HANDLE hNamedPipe)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159087. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DisconnectNamedPipe(hNamedPipe);
  return BVar1;
}

// PeekNamedPipe @ 150159093

BOOL __stdcall
PeekNamedPipe(HANDLE hNamedPipe,LPVOID lpBuffer,DWORD nBufferSize,LPDWORD lpBytesRead,
             LPDWORD lpTotalBytesAvail,LPDWORD lpBytesLeftThisMessage)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PeekNamedPipe(hNamedPipe,lpBuffer,nBufferSize,lpBytesRead,lpTotalBytesAvail,
                        lpBytesLeftThisMessage);
  return BVar1;
}

// CreateNamedPipeW @ 15015909f

HANDLE __stdcall
CreateNamedPipeW(LPCWSTR lpName,DWORD dwOpenMode,DWORD dwPipeMode,DWORD nMaxInstances,
                DWORD nOutBufferSize,DWORD nInBufferSize,DWORD nDefaultTimeOut,
                LPSECURITY_ATTRIBUTES lpSecurityAttributes)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015909f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateNamedPipeW(lpName,dwOpenMode,dwPipeMode,nMaxInstances,nOutBufferSize,nInBufferSize,
                            nDefaultTimeOut,lpSecurityAttributes);
  return pvVar1;
}

// InitializeSRWLock @ 1501590ab

void __stdcall InitializeSRWLock(PSRWLOCK SRWLock)

{
                    /* WARNING: Could not recover jumptable at 0x0001501590ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSRWLock(SRWLock);
  return;
}

// SetEvent @ 1501590b7

BOOL __stdcall SetEvent(HANDLE hEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501590b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEvent(hEvent);
  return BVar1;
}

// ResetEvent @ 1501590c3

BOOL __stdcall ResetEvent(HANDLE hEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501590c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ResetEvent(hEvent);
  return BVar1;
}

// ReleaseSemaphore @ 1501590cf

BOOL __stdcall ReleaseSemaphore(HANDLE hSemaphore,LONG lReleaseCount,LPLONG lpPreviousCount)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501590cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReleaseSemaphore(hSemaphore,lReleaseCount,lpPreviousCount);
  return BVar1;
}

// ReleaseMutex @ 1501590db

BOOL __stdcall ReleaseMutex(HANDLE hMutex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501590db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReleaseMutex(hMutex);
  return BVar1;
}

// CreateMutexW @ 1501590e7

HANDLE __stdcall
CreateMutexW(LPSECURITY_ATTRIBUTES lpMutexAttributes,BOOL bInitialOwner,LPCWSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501590e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateMutexW(lpMutexAttributes,bInitialOwner,lpName);
  return pvVar1;
}

// CreateEventW @ 1501590f3

HANDLE __stdcall
CreateEventW(LPSECURITY_ATTRIBUTES lpEventAttributes,BOOL bManualReset,BOOL bInitialState,
            LPCWSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501590f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateEventW(lpEventAttributes,bManualReset,bInitialState,lpName);
  return pvVar1;
}

// OpenSemaphoreW @ 1501590ff

HANDLE __stdcall OpenSemaphoreW(DWORD dwDesiredAccess,BOOL bInheritHandle,LPCWSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501590ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = OpenSemaphoreW(dwDesiredAccess,bInheritHandle,lpName);
  return pvVar1;
}

// WaitForMultipleObjects @ 15015910b

DWORD __stdcall
WaitForMultipleObjects(DWORD nCount,HANDLE *lpHandles,BOOL bWaitAll,DWORD dwMilliseconds)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015910b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WaitForMultipleObjects(nCount,lpHandles,bWaitAll,dwMilliseconds);
  return DVar1;
}

// CreateSemaphoreW @ 150159117

HANDLE __stdcall
CreateSemaphoreW(LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,LONG lInitialCount,LONG lMaximumCount,
                LPCWSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateSemaphoreW(lpSemaphoreAttributes,lInitialCount,lMaximumCount,lpName);
  return pvVar1;
}

// ExitProcess @ 150159123

void __stdcall ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x000150159123. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}

// TerminateProcess @ 15015912f

BOOL __stdcall TerminateProcess(HANDLE hProcess,UINT uExitCode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015912f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TerminateProcess(hProcess,uExitCode);
  return BVar1;
}

// SwitchToThread @ 15015913b

BOOL __stdcall SwitchToThread(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015913b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SwitchToThread();
  return BVar1;
}

// GetCurrentThread @ 150159147

HANDLE __stdcall GetCurrentThread(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159147. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetCurrentThread();
  return pvVar1;
}

// SetThreadPriority @ 150159153

BOOL __stdcall SetThreadPriority(HANDLE hThread,int nPriority)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadPriority(hThread,nPriority);
  return BVar1;
}

// SuspendThread @ 15015915f

DWORD __stdcall SuspendThread(HANDLE hThread)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015915f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SuspendThread(hThread);
  return DVar1;
}

// ResumeThread @ 15015916b

DWORD __stdcall ResumeThread(HANDLE hThread)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015916b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = ResumeThread(hThread);
  return DVar1;
}

// SetPriorityClass @ 150159177

BOOL __stdcall SetPriorityClass(HANDLE hProcess,DWORD dwPriorityClass)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetPriorityClass(hProcess,dwPriorityClass);
  return BVar1;
}

// GetProcessId @ 150159183

DWORD __stdcall GetProcessId(HANDLE Process)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetProcessId(Process);
  return DVar1;
}

// FlushProcessWriteBuffers @ 15015918f

void __stdcall FlushProcessWriteBuffers(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015918f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FlushProcessWriteBuffers();
  return;
}

// InitializeProcThreadAttributeList @ 15015919b

BOOL __stdcall
InitializeProcThreadAttributeList
          (LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,DWORD dwAttributeCount,DWORD dwFlags,
          PSIZE_T lpSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015919b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InitializeProcThreadAttributeList(lpAttributeList,dwAttributeCount,dwFlags,lpSize);
  return BVar1;
}

// DeleteProcThreadAttributeList @ 1501591a7

void __stdcall DeleteProcThreadAttributeList(LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList)

{
                    /* WARNING: Could not recover jumptable at 0x0001501591a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteProcThreadAttributeList(lpAttributeList);
  return;
}

// UpdateProcThreadAttribute @ 1501591b3

BOOL __stdcall
UpdateProcThreadAttribute
          (LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,DWORD dwFlags,DWORD_PTR Attribute,
          PVOID lpValue,SIZE_T cbSize,PVOID lpPreviousValue,PSIZE_T lpReturnSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501591b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UpdateProcThreadAttribute
                    (lpAttributeList,dwFlags,Attribute,lpValue,cbSize,lpPreviousValue,lpReturnSize);
  return BVar1;
}

// GetThreadContext @ 1501591bf

BOOL __stdcall GetThreadContext(HANDLE hThread,LPCONTEXT lpContext)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501591bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetThreadContext(hThread,lpContext);
  return BVar1;
}

// GetCurrentProcessorNumber @ 1501591cb

DWORD __stdcall GetCurrentProcessorNumber(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501591cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessorNumber();
  return DVar1;
}

// GetThreadIdealProcessorEx @ 1501591d7

BOOL __stdcall GetThreadIdealProcessorEx(HANDLE hThread,PPROCESSOR_NUMBER lpIdealProcessor)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501591d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetThreadIdealProcessorEx(hThread,lpIdealProcessor);
  return BVar1;
}

// GlobalMemoryStatusEx @ 1501591e3

BOOL __stdcall GlobalMemoryStatusEx(LPMEMORYSTATUSEX lpBuffer)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501591e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GlobalMemoryStatusEx(lpBuffer);
  return BVar1;
}

// GetVersionExW @ 1501591ef

BOOL __stdcall GetVersionExW(LPOSVERSIONINFOW lpVersionInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501591ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetVersionExW(lpVersionInformation);
  return BVar1;
}

// GetLogicalProcessorInformationEx @ 1501591fb

BOOL __stdcall
GetLogicalProcessorInformationEx
          (LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
          PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Buffer,PDWORD ReturnedLength)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501591fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetLogicalProcessorInformationEx(RelationshipType,Buffer,ReturnedLength);
  return BVar1;
}

// GetNativeSystemInfo @ 150159207

void __stdcall GetNativeSystemInfo(LPSYSTEM_INFO lpSystemInfo)

{
                    /* WARNING: Could not recover jumptable at 0x000150159207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetNativeSystemInfo(lpSystemInfo);
  return;
}

// CreateFileMappingW @ 150159213

HANDLE __stdcall
CreateFileMappingW(HANDLE hFile,LPSECURITY_ATTRIBUTES lpFileMappingAttributes,DWORD flProtect,
                  DWORD dwMaximumSizeHigh,DWORD dwMaximumSizeLow,LPCWSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileMappingW(hFile,lpFileMappingAttributes,flProtect,dwMaximumSizeHigh,
                              dwMaximumSizeLow,lpName);
  return pvVar1;
}

// OpenFileMappingW @ 15015921f

HANDLE __stdcall OpenFileMappingW(DWORD dwDesiredAccess,BOOL bInheritHandle,LPCWSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015921f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = OpenFileMappingW(dwDesiredAccess,bInheritHandle,lpName);
  return pvVar1;
}

// MapViewOfFile @ 15015922b

LPVOID __stdcall
MapViewOfFile(HANDLE hFileMappingObject,DWORD dwDesiredAccess,DWORD dwFileOffsetHigh,
             DWORD dwFileOffsetLow,SIZE_T dwNumberOfBytesToMap)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015922b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = MapViewOfFile(hFileMappingObject,dwDesiredAccess,dwFileOffsetHigh,dwFileOffsetLow,
                         dwNumberOfBytesToMap);
  return pvVar1;
}

// UnmapViewOfFile @ 150159237

BOOL __stdcall UnmapViewOfFile(LPCVOID lpBaseAddress)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnmapViewOfFile(lpBaseAddress);
  return BVar1;
}

// CreateMemoryResourceNotification @ 150159243

HANDLE __stdcall
CreateMemoryResourceNotification(MEMORY_RESOURCE_NOTIFICATION_TYPE NotificationType)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateMemoryResourceNotification(NotificationType);
  return pvVar1;
}

// QueryMemoryResourceNotification @ 15015924f

BOOL __stdcall
QueryMemoryResourceNotification(HANDLE ResourceNotificationHandle,PBOOL ResourceState)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015924f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = QueryMemoryResourceNotification(ResourceNotificationHandle,ResourceState);
  return BVar1;
}

// IsProcessInJob @ 15015925b

BOOL __stdcall IsProcessInJob(HANDLE ProcessHandle,HANDLE JobHandle,PBOOL Result)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015925b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsProcessInJob(ProcessHandle,JobHandle,Result);
  return BVar1;
}

// CreateJobObjectW @ 150159267

HANDLE __stdcall CreateJobObjectW(LPSECURITY_ATTRIBUTES lpJobAttributes,LPCWSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateJobObjectW(lpJobAttributes,lpName);
  return pvVar1;
}

// AssignProcessToJobObject @ 150159273

BOOL __stdcall AssignProcessToJobObject(HANDLE hJob,HANDLE hProcess)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AssignProcessToJobObject(hJob,hProcess);
  return BVar1;
}

// SetInformationJobObject @ 15015927f

BOOL __stdcall
SetInformationJobObject
          (HANDLE hJob,JOBOBJECTINFOCLASS JobObjectInformationClass,LPVOID lpJobObjectInformation,
          DWORD cbJobObjectInformationLength)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015927f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetInformationJobObject
                    (hJob,JobObjectInformationClass,lpJobObjectInformation,
                     cbJobObjectInformationLength);
  return BVar1;
}

// GetModuleFileNameW @ 15015928b

DWORD __stdcall GetModuleFileNameW(HMODULE hModule,LPWSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015928b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameW(hModule,lpFilename,nSize);
  return DVar1;
}

// GetModuleHandleExW @ 150159297

BOOL __stdcall GetModuleHandleExW(DWORD dwFlags,LPCWSTR lpModuleName,HMODULE *phModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetModuleHandleExW(dwFlags,lpModuleName,phModule);
  return BVar1;
}

// LoadResource @ 1501592a3

HGLOBAL __stdcall LoadResource(HMODULE hModule,HRSRC hResInfo)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501592a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LoadResource(hModule,hResInfo);
  return pvVar1;
}

// LockResource @ 1501592af

LPVOID __stdcall LockResource(HGLOBAL hResData)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501592af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LockResource(hResData);
  return pvVar1;
}

// SizeofResource @ 1501592bb

DWORD __stdcall SizeofResource(HMODULE hModule,HRSRC hResInfo)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501592bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SizeofResource(hModule,hResInfo);
  return DVar1;
}

// FindResourceW @ 1501592c7

HRSRC __stdcall FindResourceW(HMODULE hModule,LPCWSTR lpName,LPCWSTR lpType)

{
  HRSRC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501592c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = FindResourceW(hModule,lpName,lpType);
  return pHVar1;
}

// GetNumaNodeProcessorMaskEx @ 1501592d3

BOOL __stdcall GetNumaNodeProcessorMaskEx(USHORT Node,PGROUP_AFFINITY ProcessorMask)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501592d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetNumaNodeProcessorMaskEx(Node,ProcessorMask);
  return BVar1;
}

// QueryProcessCycleTime @ 1501592df

BOOL __stdcall QueryProcessCycleTime(HANDLE ProcessHandle,PULONG64 CycleTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501592df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = QueryProcessCycleTime(ProcessHandle,CycleTime);
  return BVar1;
}

// QueryIdleProcessorCycleTime @ 1501592eb

BOOL __stdcall QueryIdleProcessorCycleTime(PULONG BufferLength,PULONG64 ProcessorIdleCycleTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501592eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = QueryIdleProcessorCycleTime(BufferLength,ProcessorIdleCycleTime);
  return BVar1;
}

// GlobalAlloc @ 1501592f7

HGLOBAL __stdcall GlobalAlloc(UINT uFlags,SIZE_T dwBytes)

{
  HGLOBAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501592f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalAlloc(uFlags,dwBytes);
  return pvVar1;
}

// GlobalUnlock @ 150159303

BOOL __stdcall GlobalUnlock(HGLOBAL hMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GlobalUnlock(hMem);
  return BVar1;
}

// GlobalLock @ 15015930f

LPVOID __stdcall GlobalLock(HGLOBAL hMem)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015930f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GlobalLock(hMem);
  return pvVar1;
}

// SetProcessAffinityMask @ 15015931b

BOOL __stdcall SetProcessAffinityMask(HANDLE hProcess,DWORD_PTR dwProcessAffinityMask)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015931b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetProcessAffinityMask(hProcess,dwProcessAffinityMask);
  return BVar1;
}

// GetProcessIoCounters @ 150159327

BOOL __stdcall GetProcessIoCounters(HANDLE hProcess,PIO_COUNTERS lpIoCounters)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159327. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetProcessIoCounters(hProcess,lpIoCounters);
  return BVar1;
}

// SetThreadAffinityMask @ 150159333

DWORD_PTR __stdcall SetThreadAffinityMask(HANDLE hThread,DWORD_PTR dwThreadAffinityMask)

{
  DWORD_PTR DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetThreadAffinityMask(hThread,dwThreadAffinityMask);
  return DVar1;
}

// FormatMessageW @ 15015933f

DWORD __stdcall
FormatMessageW(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,LPWSTR lpBuffer,
              DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015933f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageW(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}

// GetPrivateProfileIntW @ 15015934b

UINT __stdcall
GetPrivateProfileIntW(LPCWSTR lpAppName,LPCWSTR lpKeyName,INT nDefault,LPCWSTR lpFileName)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015934b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetPrivateProfileIntW(lpAppName,lpKeyName,nDefault,lpFileName);
  return UVar1;
}

// GetPrivateProfileStringW @ 150159357

DWORD __stdcall
GetPrivateProfileStringW
          (LPCWSTR lpAppName,LPCWSTR lpKeyName,LPCWSTR lpDefault,LPWSTR lpReturnedString,DWORD nSize
          ,LPCWSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetPrivateProfileStringW(lpAppName,lpKeyName,lpDefault,lpReturnedString,nSize,lpFileName);
  return DVar1;
}

// WritePrivateProfileStringW @ 150159363

BOOL __stdcall
WritePrivateProfileStringW(LPCWSTR lpAppName,LPCWSTR lpKeyName,LPCWSTR lpString,LPCWSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WritePrivateProfileStringW(lpAppName,lpKeyName,lpString,lpFileName);
  return BVar1;
}

// SetDllDirectoryW @ 15015936f

BOOL __stdcall SetDllDirectoryW(LPCWSTR lpPathName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015936f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetDllDirectoryW(lpPathName);
  return BVar1;
}

// GetDllDirectoryW @ 15015937b

DWORD __stdcall GetDllDirectoryW(DWORD nBufferLength,LPWSTR lpBuffer)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015937b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetDllDirectoryW(nBufferLength,lpBuffer);
  return DVar1;
}

// ReOpenFile @ 150159387

HANDLE __stdcall
ReOpenFile(HANDLE hOriginalFile,DWORD dwDesiredAccess,DWORD dwShareMode,DWORD dwFlagsAndAttributes)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = ReOpenFile(hOriginalFile,dwDesiredAccess,dwShareMode,dwFlagsAndAttributes);
  return pvVar1;
}

// MoveFileW @ 150159393

BOOL __stdcall MoveFileW(LPCWSTR lpExistingFileName,LPCWSTR lpNewFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveFileW(lpExistingFileName,lpNewFileName);
  return BVar1;
}

// GetComputerNameW @ 15015939f

BOOL __stdcall GetComputerNameW(LPWSTR lpBuffer,LPDWORD nSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015939f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetComputerNameW(lpBuffer,nSize);
  return BVar1;
}

// VerifyVersionInfoW @ 1501593ab

BOOL __stdcall
VerifyVersionInfoW(LPOSVERSIONINFOEXW lpVersionInformation,DWORD dwTypeMask,
                  DWORDLONG dwlConditionMask)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501593ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VerifyVersionInfoW(lpVersionInformation,dwTypeMask,dwlConditionMask);
  return BVar1;
}

// FileTimeToSystemTime @ 1501593b7

BOOL __stdcall FileTimeToSystemTime(FILETIME *lpFileTime,LPSYSTEMTIME lpSystemTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501593b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FileTimeToSystemTime(lpFileTime,lpSystemTime);
  return BVar1;
}

// SystemTimeToFileTime @ 1501593c3

BOOL __stdcall SystemTimeToFileTime(SYSTEMTIME *lpSystemTime,LPFILETIME lpFileTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501593c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SystemTimeToFileTime(lpSystemTime,lpFileTime);
  return BVar1;
}

// GetSystemPowerStatus @ 1501593cf

BOOL __stdcall GetSystemPowerStatus(LPSYSTEM_POWER_STATUS lpSystemPowerStatus)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501593cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetSystemPowerStatus(lpSystemPowerStatus);
  return BVar1;
}

// GetNumaProcessorNodeEx @ 1501593db

BOOL __stdcall GetNumaProcessorNodeEx(PPROCESSOR_NUMBER Processor,PUSHORT NodeNumber)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501593db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetNumaProcessorNodeEx(Processor,NodeNumber);
  return BVar1;
}

// GetUserPreferredUILanguages @ 1501593e7

BOOL __stdcall
GetUserPreferredUILanguages
          (DWORD dwFlags,PULONG pulNumLanguages,PZZWSTR pwszLanguagesBuffer,
          PULONG pcchLanguagesBuffer)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501593e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetUserPreferredUILanguages
                    (dwFlags,pulNumLanguages,pwszLanguagesBuffer,pcchLanguagesBuffer);
  return BVar1;
}

// GetUserDefaultLocaleName @ 1501593f3

int __stdcall GetUserDefaultLocaleName(LPWSTR lpLocaleName,int cchLocaleName)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501593f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetUserDefaultLocaleName(lpLocaleName,cchLocaleName);
  return iVar1;
}

// SetConsoleCtrlHandler @ 1501593ff

BOOL __stdcall SetConsoleCtrlHandler(PHANDLER_ROUTINE HandlerRoutine,BOOL Add)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501593ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleCtrlHandler(HandlerRoutine,Add);
  return BVar1;
}

// SetConsoleOutputCP @ 15015940b

BOOL __stdcall SetConsoleOutputCP(UINT wCodePageID)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015940b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleOutputCP(wCodePageID);
  return BVar1;
}

// GetConsoleWindow @ 150159417

HWND __stdcall GetConsoleWindow(void)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159417. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetConsoleWindow();
  return pHVar1;
}

// K32GetProcessMemoryInfo @ 150159423

void K32GetProcessMemoryInfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150159423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  K32GetProcessMemoryInfo();
  return;
}

// CreateToolhelp32Snapshot @ 15015942f

void CreateToolhelp32Snapshot(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015942f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateToolhelp32Snapshot();
  return;
}

// Process32FirstW @ 15015943b

void Process32FirstW(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015943b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Process32FirstW();
  return;
}

// Process32NextW @ 150159447

void Process32NextW(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150159447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Process32NextW();
  return;
}

// Thread32First @ 150159453

void Thread32First(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150159453. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Thread32First();
  return;
}

// Thread32Next @ 15015945f

void Thread32Next(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015945f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Thread32Next();
  return;
}

// GetProcessTimes @ 15015946b

BOOL __stdcall
GetProcessTimes(HANDLE hProcess,LPFILETIME lpCreationTime,LPFILETIME lpExitTime,
               LPFILETIME lpKernelTime,LPFILETIME lpUserTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015946b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetProcessTimes(hProcess,lpCreationTime,lpExitTime,lpKernelTime,lpUserTime);
  return BVar1;
}

// GetThreadTimes @ 150159477

BOOL __stdcall
GetThreadTimes(HANDLE hThread,LPFILETIME lpCreationTime,LPFILETIME lpExitTime,
              LPFILETIME lpKernelTime,LPFILETIME lpUserTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetThreadTimes(hThread,lpCreationTime,lpExitTime,lpKernelTime,lpUserTime);
  return BVar1;
}

// GetSystemTime @ 150159483

void __stdcall GetSystemTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x000150159483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemTime(lpSystemTime);
  return;
}

// GetSystemTimeAsFileTime @ 15015948f

void __stdcall GetSystemTimeAsFileTime(LPFILETIME lpSystemTimeAsFileTime)

{
                    /* WARNING: Could not recover jumptable at 0x00015015948f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
  return;
}

// GetLocalTime @ 15015949b

void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x00015015949b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetLocalTime(lpSystemTime);
  return;
}

// SetThreadGroupAffinity @ 1501594a7

BOOL __stdcall
SetThreadGroupAffinity
          (HANDLE hThread,GROUP_AFFINITY *GroupAffinity,PGROUP_AFFINITY PreviousGroupAffinity)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501594a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadGroupAffinity(hThread,GroupAffinity,PreviousGroupAffinity);
  return BVar1;
}

// GetEnvironmentVariableA @ 1501594b3

DWORD __stdcall GetEnvironmentVariableA(LPCSTR lpName,LPSTR lpBuffer,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501594b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetEnvironmentVariableA(lpName,lpBuffer,nSize);
  return DVar1;
}

// GetFullPathNameA @ 1501594bf

DWORD __stdcall
GetFullPathNameA(LPCSTR lpFileName,DWORD nBufferLength,LPSTR lpBuffer,LPSTR *lpFilePart)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501594bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFullPathNameA(lpFileName,nBufferLength,lpBuffer,lpFilePart);
  return DVar1;
}

// FlsAlloc @ 1501594cb

DWORD __stdcall FlsAlloc(PFLS_CALLBACK_FUNCTION lpCallback)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501594cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FlsAlloc(lpCallback);
  return DVar1;
}

// FlsSetValue @ 1501594d7

BOOL __stdcall FlsSetValue(DWORD dwFlsIndex,PVOID lpFlsData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501594d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsSetValue(dwFlsIndex,lpFlsData);
  return BVar1;
}

// FlsFree @ 1501594e3

BOOL __stdcall FlsFree(DWORD dwFlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501594e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsFree(dwFlsIndex);
  return BVar1;
}

// GetLargePageMinimum @ 1501594ef

SIZE_T __stdcall GetLargePageMinimum(void)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501594ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = GetLargePageMinimum();
  return SVar1;
}

// VirtualUnlock @ 1501594fb

BOOL __stdcall VirtualUnlock(LPVOID lpAddress,SIZE_T dwSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501594fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualUnlock(lpAddress,dwSize);
  return BVar1;
}

// GetNumaHighestNodeNumber @ 150159507

BOOL __stdcall GetNumaHighestNodeNumber(PULONG HighestNodeNumber)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetNumaHighestNodeNumber(HighestNodeNumber);
  return BVar1;
}

// GetNumaProcessorNode @ 150159513

BOOL __stdcall GetNumaProcessorNode(UCHAR Processor,PUCHAR NodeNumber)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159513. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetNumaProcessorNode(Processor,NodeNumber);
  return BVar1;
}

// GetNumaNodeProcessorMask @ 15015951f

BOOL __stdcall GetNumaNodeProcessorMask(UCHAR Node,PULONGLONG ProcessorMask)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015951f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetNumaNodeProcessorMask(Node,ProcessorMask);
  return BVar1;
}

// SetWaitableTimer @ 15015952b

BOOL __stdcall
SetWaitableTimer(HANDLE hTimer,LARGE_INTEGER *lpDueTime,LONG lPeriod,
                PTIMERAPCROUTINE pfnCompletionRoutine,LPVOID lpArgToCompletionRoutine,BOOL fResume)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015952b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWaitableTimer(hTimer,lpDueTime,lPeriod,pfnCompletionRoutine,lpArgToCompletionRoutine,
                           fResume);
  return BVar1;
}

// CreateWaitableTimerW @ 150159537

HANDLE __stdcall
CreateWaitableTimerW(LPSECURITY_ATTRIBUTES lpTimerAttributes,BOOL bManualReset,LPCWSTR lpTimerName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateWaitableTimerW(lpTimerAttributes,bManualReset,lpTimerName);
  return pvVar1;
}

// GetProcessHandleCount @ 150159543

BOOL __stdcall GetProcessHandleCount(HANDLE hProcess,PDWORD pdwHandleCount)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetProcessHandleCount(hProcess,pdwHandleCount);
  return BVar1;
}

// GetVersion @ 15015954f

DWORD __stdcall GetVersion(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015954f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetVersion();
  return DVar1;
}

// MulDiv @ 15015955b

int __stdcall MulDiv(int nNumber,int nNumerator,int nDenominator)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015955b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MulDiv(nNumber,nNumerator,nDenominator);
  return iVar1;
}

// GetLocaleInfoW @ 150159567

int __stdcall GetLocaleInfoW(LCID Locale,LCTYPE LCType,LPWSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159567. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoW(Locale,LCType,lpLCData,cchData);
  return iVar1;
}

// GetSystemDefaultLCID @ 150159573

LCID __stdcall GetSystemDefaultLCID(void)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetSystemDefaultLCID();
  return LVar1;
}

// AllocConsole @ 15015957f

BOOL __stdcall AllocConsole(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015957f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AllocConsole();
  return BVar1;
}

// FreeConsole @ 15015958b

BOOL __stdcall FreeConsole(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015958b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeConsole();
  return BVar1;
}

// AttachConsole @ 150159597

BOOL __stdcall AttachConsole(DWORD dwProcessId)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AttachConsole(dwProcessId);
  return BVar1;
}

// GetConsoleScreenBufferInfo @ 1501595a3

BOOL __stdcall
GetConsoleScreenBufferInfo
          (HANDLE hConsoleOutput,PCONSOLE_SCREEN_BUFFER_INFO lpConsoleScreenBufferInfo)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501595a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetConsoleScreenBufferInfo(hConsoleOutput,lpConsoleScreenBufferInfo);
  return BVar1;
}

// SetConsoleScreenBufferSize @ 1501595af

BOOL __stdcall SetConsoleScreenBufferSize(HANDLE hConsoleOutput,COORD dwSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501595af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleScreenBufferSize(hConsoleOutput,dwSize);
  return BVar1;
}

// SetConsoleTextAttribute @ 1501595bb

BOOL __stdcall SetConsoleTextAttribute(HANDLE hConsoleOutput,WORD wAttributes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501595bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleTextAttribute(hConsoleOutput,wAttributes);
  return BVar1;
}

// SetConsoleWindowInfo @ 1501595c7

BOOL __stdcall
SetConsoleWindowInfo(HANDLE hConsoleOutput,BOOL bAbsolute,SMALL_RECT *lpConsoleWindow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501595c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleWindowInfo(hConsoleOutput,bAbsolute,lpConsoleWindow);
  return BVar1;
}

// SetConsoleTitleW @ 1501595d3

BOOL __stdcall SetConsoleTitleW(LPCWSTR lpConsoleTitle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501595d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleTitleW(lpConsoleTitle);
  return BVar1;
}

// SetFileInformationByHandle @ 1501595df

BOOL __stdcall
SetFileInformationByHandle
          (HANDLE hFile,FILE_INFO_BY_HANDLE_CLASS FileInformationClass,LPVOID lpFileInformation,
          DWORD dwBufferSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501595df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetFileInformationByHandle(hFile,FileInformationClass,lpFileInformation,dwBufferSize);
  return BVar1;
}

// DeviceIoControl @ 1501595eb

BOOL __stdcall
DeviceIoControl(HANDLE hDevice,DWORD dwIoControlCode,LPVOID lpInBuffer,DWORD nInBufferSize,
               LPVOID lpOutBuffer,DWORD nOutBufferSize,LPDWORD lpBytesReturned,
               LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501595eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeviceIoControl(hDevice,dwIoControlCode,lpInBuffer,nInBufferSize,lpOutBuffer,
                          nOutBufferSize,lpBytesReturned,lpOverlapped);
  return BVar1;
}

// InitializeCriticalSection @ 1501595f7

void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x0001501595f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeCriticalSection(lpCriticalSection);
  return;
}

// AddVectoredExceptionHandler @ 150159603

PVOID __stdcall AddVectoredExceptionHandler(ULONG First,PVECTORED_EXCEPTION_HANDLER Handler)

{
  PVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = AddVectoredExceptionHandler(First,Handler);
  return pvVar1;
}

// RemoveVectoredExceptionHandler @ 15015960f

ULONG __stdcall RemoveVectoredExceptionHandler(PVOID Handle)

{
  ULONG UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015960f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RemoveVectoredExceptionHandler(Handle);
  return UVar1;
}

// LoadLibraryA @ 15015961b

HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015961b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}

// HeapAlloc @ 150159627

LPVOID __stdcall HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  return pvVar1;
}

// HeapFree @ 150159633

BOOL __stdcall HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = HeapFree(hHeap,dwFlags,lpMem);
  return BVar1;
}

// GetProcessHeap @ 15015963f

HANDLE __stdcall GetProcessHeap(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015963f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetProcessHeap();
  return pvVar1;
}

// GetFileSize @ 15015964b

DWORD __stdcall GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015964b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileSize(hFile,lpFileSizeHigh);
  return DVar1;
}

// FlushViewOfFile @ 150159657

BOOL __stdcall FlushViewOfFile(LPCVOID lpBaseAddress,SIZE_T dwNumberOfBytesToFlush)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlushViewOfFile(lpBaseAddress,dwNumberOfBytesToFlush);
  return BVar1;
}

// LoadLibraryExW @ 150159663

HMODULE __stdcall LoadLibraryExW(LPCWSTR lpLibFileName,HANDLE hFile,DWORD dwFlags)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryExW(lpLibFileName,hFile,dwFlags);
  return pHVar1;
}

// GetFileInformationByHandle @ 15015966f

BOOL __stdcall
GetFileInformationByHandle(HANDLE hFile,LPBY_HANDLE_FILE_INFORMATION lpFileInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015966f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileInformationByHandle(hFile,lpFileInformation);
  return BVar1;
}

// DuplicateHandle @ 15015967b

BOOL __stdcall
DuplicateHandle(HANDLE hSourceProcessHandle,HANDLE hSourceHandle,HANDLE hTargetProcessHandle,
               LPHANDLE lpTargetHandle,DWORD dwDesiredAccess,BOOL bInheritHandle,DWORD dwOptions)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015967b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          dwDesiredAccess,bInheritHandle,dwOptions);
  return BVar1;
}

// SetNamedPipeHandleState @ 150159687

BOOL __stdcall
SetNamedPipeHandleState
          (HANDLE hNamedPipe,LPDWORD lpMode,LPDWORD lpMaxCollectionCount,
          LPDWORD lpCollectDataTimeout)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetNamedPipeHandleState(hNamedPipe,lpMode,lpMaxCollectionCount,lpCollectDataTimeout);
  return BVar1;
}

// GetThreadPriority @ 150159693

int __stdcall GetThreadPriority(HANDLE hThread)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetThreadPriority(hThread);
  return iVar1;
}

// TerminateThread @ 15015969f

BOOL __stdcall TerminateThread(HANDLE hThread,DWORD dwExitCode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015969f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TerminateThread(hThread,dwExitCode);
  return BVar1;
}

// GetThreadId @ 1501596ab

DWORD __stdcall GetThreadId(HANDLE Thread)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501596ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetThreadId(Thread);
  return DVar1;
}

// SetThreadContext @ 1501596b7

BOOL __stdcall SetThreadContext(HANDLE hThread,CONTEXT *lpContext)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501596b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetThreadContext(hThread,lpContext);
  return BVar1;
}

// VirtualProtectEx @ 1501596c3

BOOL __stdcall
VirtualProtectEx(HANDLE hProcess,LPVOID lpAddress,SIZE_T dwSize,DWORD flNewProtect,
                PDWORD lpflOldProtect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501596c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualProtectEx(hProcess,lpAddress,dwSize,flNewProtect,lpflOldProtect);
  return BVar1;
}

// VirtualQueryEx @ 1501596cf

SIZE_T __stdcall
VirtualQueryEx(HANDLE hProcess,LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength)

{
  SIZE_T SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501596cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = VirtualQueryEx(hProcess,lpAddress,lpBuffer,dwLength);
  return SVar1;
}

// GetModuleHandleA @ 1501596db

HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501596db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = GetModuleHandleA(lpModuleName);
  return pHVar1;
}

// MultiByteToWideChar @ 1501596e7

int __stdcall
MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,
                   LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501596e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}

// SetErrorMode @ 1501596f3

UINT __stdcall SetErrorMode(UINT uMode)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501596f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetErrorMode(uMode);
  return UVar1;
}

// SetFilePointerEx @ 1501596ff

BOOL __stdcall
SetFilePointerEx(HANDLE hFile,LARGE_INTEGER liDistanceToMove,PLARGE_INTEGER lpNewFilePointer,
                DWORD dwMoveMethod)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501596ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetFilePointerEx(hFile,liDistanceToMove,lpNewFilePointer,dwMoveMethod);
  return BVar1;
}

// WideCharToMultiByte @ 15015970b

int __stdcall
WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,
                   LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,
                   LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015970b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}

// CreateIoCompletionPort @ 150159717

HANDLE __stdcall
CreateIoCompletionPort
          (HANDLE FileHandle,HANDLE ExistingCompletionPort,ULONG_PTR CompletionKey,
          DWORD NumberOfConcurrentThreads)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateIoCompletionPort
                     (FileHandle,ExistingCompletionPort,CompletionKey,NumberOfConcurrentThreads);
  return pvVar1;
}

// GetQueuedCompletionStatus @ 150159723

BOOL __stdcall
GetQueuedCompletionStatus
          (HANDLE CompletionPort,LPDWORD lpNumberOfBytesTransferred,PULONG_PTR lpCompletionKey,
          LPOVERLAPPED *lpOverlapped,DWORD dwMilliseconds)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetQueuedCompletionStatus
                    (CompletionPort,lpNumberOfBytesTransferred,lpCompletionKey,lpOverlapped,
                     dwMilliseconds);
  return BVar1;
}

// PostQueuedCompletionStatus @ 15015972f

BOOL __stdcall
PostQueuedCompletionStatus
          (HANDLE CompletionPort,DWORD dwNumberOfBytesTransferred,ULONG_PTR dwCompletionKey,
          LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015972f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = PostQueuedCompletionStatus
                    (CompletionPort,dwNumberOfBytesTransferred,dwCompletionKey,lpOverlapped);
  return BVar1;
}

// CancelIoEx @ 15015973b

BOOL __stdcall CancelIoEx(HANDLE hFile,LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015973b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CancelIoEx(hFile,lpOverlapped);
  return BVar1;
}

// CancelIo @ 150159747

BOOL __stdcall CancelIo(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159747. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CancelIo(hFile);
  return BVar1;
}

// SleepEx @ 150159753

DWORD __stdcall SleepEx(DWORD dwMilliseconds,BOOL bAlertable)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SleepEx(dwMilliseconds,bAlertable);
  return DVar1;
}

// QueueUserAPC @ 15015975f

DWORD __stdcall QueueUserAPC(PAPCFUNC pfnAPC,HANDLE hThread,ULONG_PTR dwData)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015975f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = QueueUserAPC(pfnAPC,hThread,dwData);
  return DVar1;
}

// UnregisterWaitEx @ 15015976b

BOOL __stdcall UnregisterWaitEx(HANDLE WaitHandle,HANDLE CompletionEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015976b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnregisterWaitEx(WaitHandle,CompletionEvent);
  return BVar1;
}

// GetCommState @ 150159777

BOOL __stdcall GetCommState(HANDLE hFile,LPDCB lpDCB)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCommState(hFile,lpDCB);
  return BVar1;
}

// SetCommState @ 150159783

BOOL __stdcall SetCommState(HANDLE hFile,LPDCB lpDCB)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetCommState(hFile,lpDCB);
  return BVar1;
}

// SetCommTimeouts @ 15015978f

BOOL __stdcall SetCommTimeouts(HANDLE hFile,LPCOMMTIMEOUTS lpCommTimeouts)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015978f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetCommTimeouts(hFile,lpCommTimeouts);
  return BVar1;
}

// RegisterWaitForSingleObject @ 15015979b

BOOL __stdcall
RegisterWaitForSingleObject
          (PHANDLE phNewWaitObject,HANDLE hObject,WAITORTIMERCALLBACK Callback,PVOID Context,
          ULONG dwMilliseconds,ULONG dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015979b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RegisterWaitForSingleObject
                    (phNewWaitObject,hObject,Callback,Context,dwMilliseconds,dwFlags);
  return BVar1;
}

// LocalAlloc @ 1501597a7

HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501597a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalAlloc(uFlags,uBytes);
  return pvVar1;
}

// GetACP @ 1501597b3

UINT __stdcall GetACP(void)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501597b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetACP();
  return UVar1;
}

// GetLocaleInfoEx @ 1501597bf

int __stdcall GetLocaleInfoEx(LPCWSTR lpLocaleName,LCTYPE LCType,LPWSTR lpLCData,int cchData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501597bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetLocaleInfoEx(lpLocaleName,LCType,lpLCData,cchData);
  return iVar1;
}

// GetDynamicTimeZoneInformation @ 1501597cb

DWORD __stdcall GetDynamicTimeZoneInformation(PDYNAMIC_TIME_ZONE_INFORMATION pTimeZoneInformation)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501597cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetDynamicTimeZoneInformation(pTimeZoneInformation);
  return DVar1;
}

// GetGeoInfoW @ 1501597d7

int __stdcall GetGeoInfoW(GEOID Location,GEOTYPE GeoType,LPWSTR lpGeoData,int cchData,LANGID LangId)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501597d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetGeoInfoW(Location,GeoType,lpGeoData,cchData,LangId);
  return iVar1;
}

// GetUserGeoID @ 1501597e3

GEOID __stdcall GetUserGeoID(GEOCLASS GeoClass)

{
  GEOID GVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501597e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GVar1 = GetUserGeoID(GeoClass);
  return GVar1;
}

// LCIDToLocaleName @ 1501597ef

int __stdcall LCIDToLocaleName(LCID Locale,LPWSTR lpName,int cchName,DWORD dwFlags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501597ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = LCIDToLocaleName(Locale,lpName,cchName,dwFlags);
  return iVar1;
}

// LocaleNameToLCID @ 1501597fb

LCID __stdcall LocaleNameToLCID(LPCWSTR lpName,DWORD dwFlags)

{
  LCID LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501597fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = LocaleNameToLCID(lpName,dwFlags);
  return LVar1;
}

// GetNumberFormatEx @ 150159807

int __stdcall
GetNumberFormatEx(LPCWSTR lpLocaleName,DWORD dwFlags,LPCWSTR lpValue,NUMBERFMTW *lpFormat,
                 LPWSTR lpNumberStr,int cchNumber)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetNumberFormatEx(lpLocaleName,dwFlags,lpValue,lpFormat,lpNumberStr,cchNumber);
  return iVar1;
}

// GetCurrencyFormatEx @ 150159813

int __stdcall
GetCurrencyFormatEx(LPCWSTR lpLocaleName,DWORD dwFlags,LPCWSTR lpValue,CURRENCYFMTW *lpFormat,
                   LPWSTR lpCurrencyStr,int cchCurrency)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetCurrencyFormatEx(lpLocaleName,dwFlags,lpValue,lpFormat,lpCurrencyStr,cchCurrency);
  return iVar1;
}

// ResolveLocaleName @ 15015981f

int __stdcall ResolveLocaleName(LPCWSTR lpNameToResolve,LPWSTR lpLocaleName,int cchLocaleName)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015981f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ResolveLocaleName(lpNameToResolve,lpLocaleName,cchLocaleName);
  return iVar1;
}

// SystemTimeToTzSpecificLocalTime @ 15015982b

BOOL __stdcall
SystemTimeToTzSpecificLocalTime
          (TIME_ZONE_INFORMATION *lpTimeZoneInformation,SYSTEMTIME *lpUniversalTime,
          LPSYSTEMTIME lpLocalTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015982b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SystemTimeToTzSpecificLocalTime(lpTimeZoneInformation,lpUniversalTime,lpLocalTime);
  return BVar1;
}

// GetTimeZoneInformation @ 150159837

DWORD __stdcall GetTimeZoneInformation(LPTIME_ZONE_INFORMATION lpTimeZoneInformation)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTimeZoneInformation(lpTimeZoneInformation);
  return DVar1;
}

// GetTimeFormatEx @ 150159843

int __stdcall
GetTimeFormatEx(LPCWSTR lpLocaleName,DWORD dwFlags,SYSTEMTIME *lpTime,LPCWSTR lpFormat,
               LPWSTR lpTimeStr,int cchTime)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetTimeFormatEx(lpLocaleName,dwFlags,lpTime,lpFormat,lpTimeStr,cchTime);
  return iVar1;
}

// GetDateFormatEx @ 15015984f

int __stdcall
GetDateFormatEx(LPCWSTR lpLocaleName,DWORD dwFlags,SYSTEMTIME *lpDate,LPCWSTR lpFormat,
               LPWSTR lpDateStr,int cchDate,LPCWSTR lpCalendar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015984f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDateFormatEx(lpLocaleName,dwFlags,lpDate,lpFormat,lpDateStr,cchDate,lpCalendar);
  return iVar1;
}

// OutputDebugStringA @ 15015985b

void __stdcall OutputDebugStringA(LPCSTR lpOutputString)

{
                    /* WARNING: Could not recover jumptable at 0x00015015985b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OutputDebugStringA(lpOutputString);
  return;
}

// QueryUnbiasedInterruptTime @ 150159867

BOOL __stdcall QueryUnbiasedInterruptTime(PULONGLONG UnbiasedTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = QueryUnbiasedInterruptTime(UnbiasedTime);
  return BVar1;
}

// InitializeConditionVariable @ 150159873

void __stdcall InitializeConditionVariable(PCONDITION_VARIABLE ConditionVariable)

{
                    /* WARNING: Could not recover jumptable at 0x000150159873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeConditionVariable(ConditionVariable);
  return;
}

// SleepConditionVariableCS @ 15015987f

BOOL __stdcall
SleepConditionVariableCS
          (PCONDITION_VARIABLE ConditionVariable,PCRITICAL_SECTION CriticalSection,
          DWORD dwMilliseconds)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015987f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SleepConditionVariableCS(ConditionVariable,CriticalSection,dwMilliseconds);
  return BVar1;
}

// WakeAllConditionVariable @ 15015988b

void __stdcall WakeAllConditionVariable(PCONDITION_VARIABLE ConditionVariable)

{
                    /* WARNING: Could not recover jumptable at 0x00015015988b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable(ConditionVariable);
  return;
}

// InitOnceExecuteOnce @ 150159897

BOOL __stdcall
InitOnceExecuteOnce(PINIT_ONCE InitOnce,PINIT_ONCE_FN InitFn,PVOID Parameter,LPVOID *Context)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InitOnceExecuteOnce(InitOnce,InitFn,Parameter,Context);
  return BVar1;
}

// lstrcmpA @ 1501598a3

int __stdcall lstrcmpA(LPCSTR lpString1,LPCSTR lpString2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501598a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrcmpA(lpString1,lpString2);
  return iVar1;
}

// CreateFileMappingA @ 1501598af

HANDLE __stdcall
CreateFileMappingA(HANDLE hFile,LPSECURITY_ATTRIBUTES lpFileMappingAttributes,DWORD flProtect,
                  DWORD dwMaximumSizeHigh,DWORD dwMaximumSizeLow,LPCSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501598af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileMappingA(hFile,lpFileMappingAttributes,flProtect,dwMaximumSizeHigh,
                              dwMaximumSizeLow,lpName);
  return pvVar1;
}

// CreateFile2 @ 1501598bb

void CreateFile2(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501598bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateFile2();
  return;
}

// lstrlenA @ 1501598c7

int __stdcall lstrlenA(LPCSTR lpString)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501598c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrlenA(lpString);
  return iVar1;
}

// ReplaceFileW @ 1501598d3

BOOL __stdcall
ReplaceFileW(LPCWSTR lpReplacedFileName,LPCWSTR lpReplacementFileName,LPCWSTR lpBackupFileName,
            DWORD dwReplaceFlags,LPVOID lpExclude,LPVOID lpReserved)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501598d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReplaceFileW(lpReplacedFileName,lpReplacementFileName,lpBackupFileName,dwReplaceFlags,
                       lpExclude,lpReserved);
  return BVar1;
}

// SwitchToFiber @ 1501598df

void __stdcall SwitchToFiber(LPVOID lpFiber)

{
                    /* WARNING: Could not recover jumptable at 0x0001501598df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SwitchToFiber(lpFiber);
  return;
}

// DeleteFiber @ 1501598eb

void __stdcall DeleteFiber(LPVOID lpFiber)

{
                    /* WARNING: Could not recover jumptable at 0x0001501598eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteFiber(lpFiber);
  return;
}

// CreateFiber @ 1501598f7

LPVOID __stdcall
CreateFiber(SIZE_T dwStackSize,LPFIBER_START_ROUTINE lpStartAddress,LPVOID lpParameter)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501598f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFiber(dwStackSize,lpStartAddress,lpParameter);
  return pvVar1;
}

// ConvertFiberToThread @ 150159903

BOOL __stdcall ConvertFiberToThread(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ConvertFiberToThread();
  return BVar1;
}

// ConvertThreadToFiber @ 15015990f

LPVOID __stdcall ConvertThreadToFiber(LPVOID lpParameter)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015990f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = ConvertThreadToFiber(lpParameter);
  return pvVar1;
}

// GetConsoleMode @ 15015991b

BOOL __stdcall GetConsoleMode(HANDLE hConsoleHandle,LPDWORD lpMode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015991b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetConsoleMode(hConsoleHandle,lpMode);
  return BVar1;
}

// SetConsoleMode @ 150159927

BOOL __stdcall SetConsoleMode(HANDLE hConsoleHandle,DWORD dwMode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleMode(hConsoleHandle,dwMode);
  return BVar1;
}

// ReadConsoleA @ 150159933

BOOL __stdcall
ReadConsoleA(HANDLE hConsoleInput,LPVOID lpBuffer,DWORD nNumberOfCharsToRead,
            LPDWORD lpNumberOfCharsRead,PCONSOLE_READCONSOLE_CONTROL pInputControl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadConsoleA(hConsoleInput,lpBuffer,nNumberOfCharsToRead,lpNumberOfCharsRead,pInputControl
                      );
  return BVar1;
}

// ReadConsoleW @ 15015993f

BOOL __stdcall
ReadConsoleW(HANDLE hConsoleInput,LPVOID lpBuffer,DWORD nNumberOfCharsToRead,
            LPDWORD lpNumberOfCharsRead,PCONSOLE_READCONSOLE_CONTROL pInputControl)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015993f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadConsoleW(hConsoleInput,lpBuffer,nNumberOfCharsToRead,lpNumberOfCharsRead,pInputControl
                      );
  return BVar1;
}

// InitializeCriticalSectionEx @ 15015994b

BOOL __stdcall
InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection,DWORD dwSpinCount,DWORD Flags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015994b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InitializeCriticalSectionEx(lpCriticalSection,dwSpinCount,Flags);
  return BVar1;
}

// GetSystemDirectoryA @ 150159957

UINT __stdcall GetSystemDirectoryA(LPSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemDirectoryA(lpBuffer,uSize);
  return UVar1;
}

// GetTickCount @ 150159963

DWORD __stdcall GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159963. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}

// MoveFileExA @ 15015996f

BOOL __stdcall MoveFileExA(LPCSTR lpExistingFileName,LPCSTR lpNewFileName,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015996f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveFileExA(lpExistingFileName,lpNewFileName,dwFlags);
  return BVar1;
}

// WaitForSingleObjectEx @ 15015997b

DWORD __stdcall WaitForSingleObjectEx(HANDLE hHandle,DWORD dwMilliseconds,BOOL bAlertable)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015997b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = WaitForSingleObjectEx(hHandle,dwMilliseconds,bAlertable);
  return DVar1;
}

// CompareFileTime @ 150159987

LONG __stdcall CompareFileTime(FILETIME *lpFileTime1,FILETIME *lpFileTime2)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = CompareFileTime(lpFileTime1,lpFileTime2);
  return LVar1;
}

// lstrcmpW @ 150159993

int __stdcall lstrcmpW(LPCWSTR lpString1,LPCWSTR lpString2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = lstrcmpW(lpString1,lpString2);
  return iVar1;
}

// GetSystemDirectoryW @ 15015999f

UINT __stdcall GetSystemDirectoryW(LPWSTR lpBuffer,UINT uSize)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015999f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetSystemDirectoryW(lpBuffer,uSize);
  return UVar1;
}

// GetModuleFileNameA @ 1501599ab

DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501599ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetModuleFileNameA(hModule,lpFilename,nSize);
  return DVar1;
}

// CreateProcessA @ 1501599b7

BOOL __stdcall
CreateProcessA(LPCSTR lpApplicationName,LPSTR lpCommandLine,
              LPSECURITY_ATTRIBUTES lpProcessAttributes,LPSECURITY_ATTRIBUTES lpThreadAttributes,
              BOOL bInheritHandles,DWORD dwCreationFlags,LPVOID lpEnvironment,
              LPCSTR lpCurrentDirectory,LPSTARTUPINFOA lpStartupInfo,
              LPPROCESS_INFORMATION lpProcessInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501599b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreateProcessA(lpApplicationName,lpCommandLine,lpProcessAttributes,lpThreadAttributes,
                         bInheritHandles,dwCreationFlags,lpEnvironment,lpCurrentDirectory,
                         lpStartupInfo,lpProcessInformation);
  return BVar1;
}

// K32EnumProcessModules @ 1501599c3

void K32EnumProcessModules(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001501599c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  K32EnumProcessModules();
  return;
}

// LoadLibraryExA @ 1501599cf

HMODULE __stdcall LoadLibraryExA(LPCSTR lpLibFileName,HANDLE hFile,DWORD dwFlags)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501599cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryExA(lpLibFileName,hFile,dwFlags);
  return pHVar1;
}

// GetCommandLineA @ 1501599db

LPSTR __stdcall GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501599db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}

// GetTempPathA @ 1501599e7

DWORD __stdcall GetTempPathA(DWORD nBufferLength,LPSTR lpBuffer)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501599e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTempPathA(nBufferLength,lpBuffer);
  return DVar1;
}

// GetTempFileNameA @ 1501599f3

UINT __stdcall
GetTempFileNameA(LPCSTR lpPathName,LPCSTR lpPrefixString,UINT uUnique,LPSTR lpTempFileName)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501599f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetTempFileNameA(lpPathName,lpPrefixString,uUnique,lpTempFileName);
  return UVar1;
}

// GetModuleHandleExA @ 1501599ff

BOOL __stdcall GetModuleHandleExA(DWORD dwFlags,LPCSTR lpModuleName,HMODULE *phModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001501599ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetModuleHandleExA(dwFlags,lpModuleName,phModule);
  return BVar1;
}

// WriteConsoleA @ 150159a0b

BOOL __stdcall
WriteConsoleA(HANDLE hConsoleOutput,void *lpBuffer,DWORD nNumberOfCharsToWrite,
             LPDWORD lpNumberOfCharsWritten,LPVOID lpReserved)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159a0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteConsoleA(hConsoleOutput,lpBuffer,nNumberOfCharsToWrite,lpNumberOfCharsWritten,
                        lpReserved);
  return BVar1;
}

// SetConsoleTitleA @ 150159a17

BOOL __stdcall SetConsoleTitleA(LPCSTR lpConsoleTitle)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150159a17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetConsoleTitleA(lpConsoleTitle);
  return BVar1;
}

// WakeConditionVariable @ 150159a23

void __stdcall WakeConditionVariable(PCONDITION_VARIABLE ConditionVariable)

{
                    /* WARNING: Could not recover jumptable at 0x000150159a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeConditionVariable(ConditionVariable);
  return;
}

// SleepConditionVariableSRW @ 150244464

BOOL __stdcall
SleepConditionVariableSRW
          (PCONDITION_VARIABLE ConditionVariable,PSRWLOCK SRWLock,DWORD dwMilliseconds,ULONG Flags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150244464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SleepConditionVariableSRW(ConditionVariable,SRWLock,dwMilliseconds,Flags);
  return BVar1;
}

// RtlCaptureContext @ 150244470

void RtlCaptureContext(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150244470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  RtlCaptureContext();
  return;
}

// UnhandledExceptionFilter @ 15024447c

LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015024447c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = UnhandledExceptionFilter(ExceptionInfo);
  return LVar1;
}

// IsProcessorFeaturePresent @ 150244488

BOOL __stdcall IsProcessorFeaturePresent(DWORD ProcessorFeature)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150244488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsProcessorFeaturePresent(ProcessorFeature);
  return BVar1;
}

// InitializeSListHead @ 150244494

void __stdcall InitializeSListHead(PSLIST_HEADER ListHead)

{
                    /* WARNING: Could not recover jumptable at 0x000150244494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(ListHead);
  return;
}

// GetStartupInfoW @ 1502444a0

void __stdcall GetStartupInfoW(LPSTARTUPINFOW lpStartupInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0001502444a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetStartupInfoW(lpStartupInfo);
  return;
}

// FindFirstFileExW @ 1502444ac

HANDLE __stdcall
FindFirstFileExW(LPCWSTR lpFileName,FINDEX_INFO_LEVELS fInfoLevelId,LPVOID lpFindFileData,
                FINDEX_SEARCH_OPS fSearchOp,LPVOID lpSearchFilter,DWORD dwAdditionalFlags)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001502444ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FindFirstFileExW(lpFileName,fInfoLevelId,lpFindFileData,fSearchOp,lpSearchFilter,
                            dwAdditionalFlags);
  return pvVar1;
}

// AreFileApisANSI @ 1502444b8

BOOL __stdcall AreFileApisANSI(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001502444b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AreFileApisANSI();
  return BVar1;
}

// CreateDirectoryExW @ 1502444c4

BOOL __stdcall
CreateDirectoryExW(LPCWSTR lpTemplateDirectory,LPCWSTR lpNewDirectory,
                  LPSECURITY_ATTRIBUTES lpSecurityAttributes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001502444c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreateDirectoryExW(lpTemplateDirectory,lpNewDirectory,lpSecurityAttributes);
  return BVar1;
}

// CopyFileW @ 1502444d0

BOOL __stdcall CopyFileW(LPCWSTR lpExistingFileName,LPCWSTR lpNewFileName,BOOL bFailIfExists)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001502444d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CopyFileW(lpExistingFileName,lpNewFileName,bFailIfExists);
  return BVar1;
}

// MoveFileExW @ 1502444dc

BOOL __stdcall MoveFileExW(LPCWSTR lpExistingFileName,LPCWSTR lpNewFileName,DWORD dwFlags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001502444dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = MoveFileExW(lpExistingFileName,lpNewFileName,dwFlags);
  return BVar1;
}

// CreateHardLinkW @ 1502444e8

BOOL __stdcall
CreateHardLinkW(LPCWSTR lpFileName,LPCWSTR lpExistingFileName,
               LPSECURITY_ATTRIBUTES lpSecurityAttributes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001502444e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreateHardLinkW(lpFileName,lpExistingFileName,lpSecurityAttributes);
  return BVar1;
}

// GetFileInformationByHandleEx @ 1502444f4

BOOL __stdcall
GetFileInformationByHandleEx
          (HANDLE hFile,FILE_INFO_BY_HANDLE_CLASS FileInformationClass,LPVOID lpFileInformation,
          DWORD dwBufferSize)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001502444f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileInformationByHandleEx(hFile,FileInformationClass,lpFileInformation,dwBufferSize);
  return BVar1;
}

// CreateSymbolicLinkW @ 150244500

BOOLEAN __stdcall
CreateSymbolicLinkW(LPCWSTR lpSymlinkFileName,LPCWSTR lpTargetFileName,DWORD dwFlags)

{
  BOOLEAN BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150244500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreateSymbolicLinkW(lpSymlinkFileName,lpTargetFileName,dwFlags);
  return BVar1;
}

// CreateSemaphoreA @ 15024450c

HANDLE __stdcall
CreateSemaphoreA(LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,LONG lInitialCount,LONG lMaximumCount,
                LPCSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015024450c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateSemaphoreA(lpSemaphoreAttributes,lInitialCount,lMaximumCount,lpName);
  return pvVar1;
}

// GetLogicalProcessorInformation @ 150244518

BOOL __stdcall
GetLogicalProcessorInformation(PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer,PDWORD ReturnedLength)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150244518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetLogicalProcessorInformation(Buffer,ReturnedLength);
  return BVar1;
}

// GetFileTime @ 150244524

BOOL __stdcall
GetFileTime(HANDLE hFile,LPFILETIME lpCreationTime,LPFILETIME lpLastAccessTime,
           LPFILETIME lpLastWriteTime)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150244524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileTime(hFile,lpCreationTime,lpLastAccessTime,lpLastWriteTime);
  return BVar1;
}

