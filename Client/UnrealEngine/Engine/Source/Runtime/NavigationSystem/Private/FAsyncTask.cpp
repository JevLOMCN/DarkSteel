// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 4

// FAsyncTask<FRecastTileGeneratorWrapper><TSharedRef<FRecastTileGenerator,1>_> @ 146e308f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<FRecastTileGeneratorWrapper> * __thiscall
FAsyncTask<FRecastTileGeneratorWrapper>::
FAsyncTask<FRecastTileGeneratorWrapper><TSharedRef<FRecastTileGenerator,1>_>
          (FAsyncTask<FRecastTileGeneratorWrapper> *this,TSharedRef<FRecastTileGenerator,1> *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  FRecastTileGenerator *pFVar2;
  FName *pFVar3;
  TStatIdData *pTVar4;
  FName local_res8;
  
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = (longlong)&___7__FAsyncTask_UFRecastTileGeneratorWrapper____6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = -1;
  this->_padding_ = 0;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    (this->Task).TileGenerator.Object = pFVar2;
    (this->Task).TileGenerator.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    (this->Task).TileGenerator.Object = pFVar2;
    (this->Task).TileGenerator.SharedReferenceCount.ReferenceController = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_TStatId___cdecl_FRecastTileGeneratorWrapper::GetStatId(void)const___ptr64'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_FRecastTileGeneratorWrapper::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_FRecastTileGeneratorWrapper::GetStatId(void)const___ptr64'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FRecastTileGenerator = (TStatIdData *)0x0;
    pFVar3 = ::FName::FName(&local_res8,"FRecastTileGenerator");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_FRecastTileGeneratorWrapper::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FRecastTileGenerator,*pFVar3,L"FRecastTileGenerator",
               "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_FRecastTileGeneratorWrapper::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar4 = _StatPtr_FRecastTileGenerator;
  if (_StatPtr_FRecastTileGenerator == (TStatIdData *)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"FRecastTileGenerator");
    pTVar4 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_FRecastTileGeneratorWrapper::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FRecastTileGenerator,*pFVar3,L"FRecastTileGenerator",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar4;
  return this;
}

// DoTaskWork @ 146e47910

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FAsyncTask<FRecastTileGeneratorWrapper>::DoTaskWork(FAsyncTask<FRecastTileGeneratorWrapper> *this)

{
  FRecastTileGenerator::DoWork((this->Task).TileGenerator.Object);
  return;
}

// MarkAsCanceled @ 146e60640

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FAsyncTask<FRecastTileGeneratorWrapper>::MarkAsCanceled
          (FAsyncTask<FRecastTileGeneratorWrapper> *this)

{
  return;
}

// TryAbandonTask @ 146e74ec0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

bool __thiscall
FAsyncTask<FRecastTileGeneratorWrapper>::TryAbandonTask
          (FAsyncTask<FRecastTileGeneratorWrapper> *this)

{
  return false;
}

