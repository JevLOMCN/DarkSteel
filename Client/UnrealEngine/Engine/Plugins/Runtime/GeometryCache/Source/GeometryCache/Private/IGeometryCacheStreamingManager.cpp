// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 4

// ~IGeometryCacheStreamingManager @ 14ca093f0

void __thiscall
IGeometryCacheStreamingManager::~IGeometryCacheStreamingManager
          (IGeometryCacheStreamingManager *this)

{
  this->_padding_ = (longlong)&___7IStreamingManager__6B_;
  return;
}

// Get @ 14ca1a610

IGeometryCacheStreamingManager * __cdecl IGeometryCacheStreamingManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Instance._padding_ = (longlong)&___7FGeometryCacheStreamingManager__6B_;
      ::Instance.StreamingGeometryCachesLock.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
      atexit(`IGeometryCacheStreamingManager::Get'::__l2::_dynamic_atexit_destructor_for__Instance__
            );
      _Init_thread_footer(&::_TSS0);
      return (IGeometryCacheStreamingManager *)&::Instance;
    }
  }
  return (IGeometryCacheStreamingManager *)&::Instance;
}

// Register @ 14ca28d20

void __cdecl IGeometryCacheStreamingManager::Register(void)

{
  FStreamingManagerCollection *this;
  IGeometryCacheStreamingManager *pIVar1;
  
  this = IStreamingManager::Get();
  pIVar1 = Get();
  FStreamingManagerCollection::AddStreamingManager(this,(IStreamingManager *)pIVar1);
  return;
}

// Unregister @ 14ca2cb60

void __cdecl IGeometryCacheStreamingManager::Unregister(void)

{
  FStreamingManagerCollection *this;
  IGeometryCacheStreamingManager *pIVar1;
  
  this = IStreamingManager::Get();
  pIVar1 = Get();
  FStreamingManagerCollection::RemoveStreamingManager(this,(IStreamingManager *)pIVar1);
  return;
}

