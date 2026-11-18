// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 31

// MFStartup @ 15015ac8a

HRESULT __stdcall MFStartup(ULONG Version,DWORD dwFlags)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ac8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFStartup(Version,dwFlags);
  return HVar1;
}

// __tailMerge_mfplat_dll @ 15015ac90

void __tailMerge_mfplat_dll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _func___cdecl_long64 **in_RAX;
  _func___cdecl_long64 *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = __delayLoadHelper2((ImgDelayDescr *)&ImgDelayDescr_154b607bc,in_RAX);
                    /* WARNING: Could not recover jumptable at 0x00015015ad07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}

// DelayLoad_MFStartup @ 15015ad0f

void DelayLoad_MFStartup(void)

{
  __tailMerge_mfplat_dll();
  return;
}

// MFShutdown @ 15015ad21

HRESULT __stdcall MFShutdown(void)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ad21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFShutdown();
  return HVar1;
}

// DelayLoad_MFShutdown @ 15015ad2d

void DelayLoad_MFShutdown(void)

{
  __tailMerge_mfplat_dll();
  return;
}

// MFCreateMemoryBuffer @ 15015ad3f

HRESULT __stdcall MFCreateMemoryBuffer(DWORD cbMaxLength,IMFMediaBuffer **ppBuffer)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ad3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFCreateMemoryBuffer(cbMaxLength,ppBuffer);
  return HVar1;
}

// DelayLoad_MFCreateMemoryBuffer @ 15015ad4b

void DelayLoad_MFCreateMemoryBuffer(void)

{
  __tailMerge_mfplat_dll();
  return;
}

// MFCreateDXGISurfaceBuffer @ 15015ad5d

void MFCreateDXGISurfaceBuffer(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015ad5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MFCreateDXGISurfaceBuffer();
  return;
}

// DelayLoad_MFCreateDXGISurfaceBuffer @ 15015ad69

void DelayLoad_MFCreateDXGISurfaceBuffer(void)

{
  __tailMerge_mfplat_dll();
  return;
}

// MFCreateDXGIDeviceManager @ 15015ad7b

void MFCreateDXGIDeviceManager(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015ad7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MFCreateDXGIDeviceManager();
  return;
}

// DelayLoad_MFCreateDXGIDeviceManager @ 15015ad87

void DelayLoad_MFCreateDXGIDeviceManager(void)

{
  __tailMerge_mfplat_dll();
  return;
}

// MFCreateAlignedMemoryBuffer @ 15015ad99

HRESULT __stdcall
MFCreateAlignedMemoryBuffer(DWORD cbMaxLength,DWORD cbAligment,IMFMediaBuffer **ppBuffer)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ad99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFCreateAlignedMemoryBuffer(cbMaxLength,cbAligment,ppBuffer);
  return HVar1;
}

// DelayLoad_MFCreateAlignedMemoryBuffer @ 15015ada5

void DelayLoad_MFCreateAlignedMemoryBuffer(void)

{
  __tailMerge_mfplat_dll();
  return;
}

// MFCreateSample @ 15015adb7

HRESULT __stdcall MFCreateSample(IMFSample **ppIMFSample)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015adb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFCreateSample(ppIMFSample);
  return HVar1;
}

// DelayLoad_MFCreateSample @ 15015adc3

void DelayLoad_MFCreateSample(void)

{
  __tailMerge_mfplat_dll();
  return;
}

// MFCreateMediaType @ 15015add5

HRESULT __stdcall MFCreateMediaType(IMFMediaType **ppMFType)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015add5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFCreateMediaType(ppMFType);
  return HVar1;
}

// DelayLoad_MFCreateMediaType @ 15015ade1

void DelayLoad_MFCreateMediaType(void)

{
  __tailMerge_mfplat_dll();
  return;
}

// MFCreateAttributes @ 15015adf3

HRESULT __stdcall MFCreateAttributes(IMFAttributes **ppMFAttributes,UINT32 cInitialSize)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015adf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFCreateAttributes(ppMFAttributes,cInitialSize);
  return HVar1;
}

// DelayLoad_MFCreateAttributes @ 15015adff

void DelayLoad_MFCreateAttributes(void)

{
  __tailMerge_mfplat_dll();
  return;
}

// MFCopyImage @ 15015ae11

HRESULT __stdcall
MFCopyImage(BYTE *pDest,LONG lDestStride,BYTE *pSrc,LONG lSrcStride,DWORD dwWidthInBytes,
           DWORD dwLines)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ae11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFCopyImage(pDest,lDestStride,pSrc,lSrcStride,dwWidthInBytes,dwLines);
  return HVar1;
}

// DelayLoad_MFCopyImage @ 15015ae1d

void DelayLoad_MFCopyImage(void)

{
  __tailMerge_mfplat_dll();
  return;
}

// MFPutWorkItem @ 15015ae2f

HRESULT __stdcall MFPutWorkItem(DWORD dwQueue,IMFAsyncCallback *pCallback,IUnknown *pState)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ae2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFPutWorkItem(dwQueue,pCallback,pState);
  return HVar1;
}

// DelayLoad_MFPutWorkItem @ 15015ae3b

void DelayLoad_MFPutWorkItem(void)

{
  __tailMerge_mfplat_dll();
  return;
}

// MFCreateAsyncResult @ 15015ae4d

HRESULT __stdcall
MFCreateAsyncResult(IUnknown *punkObject,IMFAsyncCallback *pCallback,IUnknown *punkState,
                   IMFAsyncResult **ppAsyncResult)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ae4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFCreateAsyncResult(punkObject,pCallback,punkState,ppAsyncResult);
  return HVar1;
}

// DelayLoad_MFCreateAsyncResult @ 15015ae59

void DelayLoad_MFCreateAsyncResult(void)

{
  __tailMerge_mfplat_dll();
  return;
}

// MFInvokeCallback @ 15015ae6b

HRESULT __stdcall MFInvokeCallback(IMFAsyncResult *pAsyncResult)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ae6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFInvokeCallback(pAsyncResult);
  return HVar1;
}

// DelayLoad_MFInvokeCallback @ 15015ae77

void DelayLoad_MFInvokeCallback(void)

{
  __tailMerge_mfplat_dll();
  return;
}

// MFCreateEventQueue @ 15015ae89

HRESULT __stdcall MFCreateEventQueue(IMFMediaEventQueue **ppMediaEventQueue)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015ae89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = MFCreateEventQueue(ppMediaEventQueue);
  return HVar1;
}

// DelayLoad_MFCreateEventQueue @ 15015ae95

void DelayLoad_MFCreateEventQueue(void)

{
  __tailMerge_mfplat_dll();
  return;
}

// MFCreateSourceResolver @ 15015aea7

void MFCreateSourceResolver(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015015aea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MFCreateSourceResolver();
  return;
}

// DelayLoad_MFCreateSourceResolver @ 15015aeb3

void DelayLoad_MFCreateSourceResolver(void)

{
  __tailMerge_mfplat_dll();
  return;
}

