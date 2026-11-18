// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 5

// FSampleTrackMemoryReader @ 14a3b8520

/* WARNING: Enum "Type": Some values do not have unique names */

FSampleTrackMemoryReader * __thiscall
FSampleTrackMemoryReader::FSampleTrackMemoryReader
          (FSampleTrackMemoryReader *this,FSampleTrackMemoryData *param_1,bool param_2)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FSampleTrackMemoryData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FSampleTrackMemoryReader *pFVar10;
  UObject *pUVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  FWeakObjectPtr *this_00;
  wchar_t *pwVar15;
  int *piVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res10 [8];
  UObject *local_68;
  UObject *local_60;
  FWeakObjectPtr local_58;
  UObject *local_50;
  FScriptContainerElement *local_48;
  FWeakObjectPtr *local_40;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)this);
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FMemoryReader__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)this,true);
  (**(code **)(this->_padding_ + 0x108))(this,param_2);
  uVar13 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7FSampleTrackMemoryReader__6B_;
  pvVar6 = ThreadLocalStoragePointer;
  this->Data = param_1;
  pTVar1 = &this->Objects;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Objects).ArrayNum = 0;
  (this->Objects).ArrayMax = 0;
  piVar16 = (int *)(*(longlong *)((longlong)pvVar6 + uVar13 * 8) + 0x9d4c);
  if ((*piVar16 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FSampleTrackMemoryReader::FSampleTrackMemoryReader'::__l2::
           _dynamic_atexit_destructor_for__PathToObject__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar16 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&PathToObjectMutex,4000);
    atexit(`FSampleTrackMemoryReader::FSampleTrackMemoryReader'::__l2::
           _dynamic_atexit_destructor_for__PathToObjectMutex__);
    _Init_thread_footer(&::_TSS1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&PathToObjectMutex);
  pFVar3 = this->Data;
  iVar2 = (pFVar3->ObjectPaths).ArrayNum;
  pFVar18 = (pFVar3->ObjectPaths).AllocatorInstance.Data;
  pFVar17 = pFVar18 + (longlong)iVar2 * 0x10;
  do {
    while( true ) {
      if ((pFVar3->ObjectPaths).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar18 == pFVar17) {
        LeaveCriticalSection((LPCRITICAL_SECTION)&PathToObjectMutex);
        return this;
      }
      iVar9 = *(int *)(pFVar18 + 8);
      if (iVar9 == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = *(wchar_t **)&pFVar18->field_0x0;
      }
      iVar12 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar12 = 0;
      }
      uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar15);
      iVar9 = TSet<TTuple<FString,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                          *)&PathToObject,uVar8,(FString *)pFVar18);
      if (iVar9 != -1) break;
LAB_14a3b8761:
      pUVar11 = RigVMTypeUtils::FindObjectFromCPPTypeObjectPath((FString *)pFVar18);
      local_60 = pUVar11;
      if (pUVar11 == (UObject *)0x0) {
        if (1 < (byte)LogControlRig._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
        }
      }
      else {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar11);
        }
        local_58.ObjectIndex = 0;
        local_58.ObjectSerialNumber = 0;
        local_50 = pUVar11;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar11);
        }
        FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
        local_40 = &local_58;
        local_48 = pFVar18;
        TSet<TTuple<FString,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,TWeakObjectPtr<UObject,FWeakObjectPtr>_&&>_>
                  ((TSet<TTuple<FString,TWeakObjectPtr<UObject,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    *)&PathToObject,
                   (TPairInitializer<FString_const_&,TWeakObjectPtr<UObject,FWeakObjectPtr>_&&> *)
                   &stack0x00000020,(bool *)&local_48);
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_60) &&
          ((FScriptContainerElement *)&local_60 < pFVar4 + (longlong)(this->Objects).ArrayMax * 8))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FSampleTrackMemoryReader *)(*pcVar5)();
        return pFVar10;
      }
      iVar9 = (this->Objects).ArrayNum;
      if (iVar9 == (this->Objects).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,&(this->Objects).ArrayMax);
      }
      pFVar18 = pFVar18 + 0x10;
      (this->Objects).ArrayNum = iVar9 + 1;
      *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_60;
    }
    lVar14 = (longlong)iVar9 * 0x20 + PathToObject._0_8_;
    this_00 = (FWeakObjectPtr *)(lVar14 + 0x10);
    if (lVar14 == 0) {
      this_00 = (FWeakObjectPtr *)0x0;
    }
    if (this_00 == (FWeakObjectPtr *)0x0) goto LAB_14a3b8761;
    local_68 = FWeakObjectPtr::Get(this_00);
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < pFVar4 + (longlong)(this->Objects).ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FSampleTrackMemoryReader *)(*pcVar5)();
      return pFVar10;
    }
    iVar9 = (this->Objects).ArrayNum;
    if (iVar9 == (this->Objects).ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,&(this->Objects).ArrayMax);
    }
    pFVar18 = pFVar18 + 0x10;
    (this->Objects).ArrayNum = iVar9 + 1;
    *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_68;
  } while( true );
}

// operator<< @ 14a3be110

FArchive * __thiscall
FSampleTrackMemoryReader::operator<<(FSampleTrackMemoryReader *this,UObject **param_1)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint uVar6;
  UObject *pUVar7;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  plVar1 = (longlong *)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if (local_res8[0] == 0xffffffff) {
    pUVar7 = (UObject *)0x0;
  }
  else {
    if ((((int)local_res8[0] < 0) || ((this->Objects).ArrayNum <= (int)local_res8[0])) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Objects.IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackArchive.cpp"
                           ,0x97,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar2)();
      return pFVar5;
    }
    uVar3 = local_res8[0];
    uVar6 = 0;
    if ((int)local_res8[0] < (this->Objects).ArrayNum) {
      uVar6 = ~local_res8[0] >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FArchive *)(*pcVar2)();
      return pFVar5;
    }
    pUVar7 = *(UObject **)((this->Objects).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
  }
  *param_1 = pUVar7;
  return (FArchive *)this;
}

// operator<< @ 14a3be230

FArchive * __thiscall
FSampleTrackMemoryReader::operator<<(FSampleTrackMemoryReader *this,FObjectPtr *param_1)

{
  FObjectPtr_u_0 FVar1;
  FObjectPtr_u_0 local_res8;
  
  local_res8.Handle = (UObject *)0x0;
  (**(code **)(this->_padding_ + 0x168))(this,&local_res8);
  FVar1 = local_res8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.Handle != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable(local_res8.Handle);
  }
  (param_1->field0_0x0).Handle = (UObject *)FVar1;
  return (FArchive *)this;
}

// operator<< @ 14a3be2a0

FArchive * __thiscall
FSampleTrackMemoryReader::operator<<(FSampleTrackMemoryReader *this,FName *param_1)

{
  longlong *plVar1;
  FSampleTrackMemoryData *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  plVar1 = (longlong *)this->_padding_;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((this->_padding_ & 0x10000) == 0) {
      (**(code **)(this->_padding_ + 0x188))(this,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((((int)local_res8[0] < 0) || ((this->Data->Names).ArrayNum <= (int)local_res8[0])) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.Names.IsValidIndex(NameIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackArchive.cpp"
                         ,0x7f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FArchive *)(*pcVar3)();
    return pFVar7;
  }
  uVar4 = local_res8[0];
  pFVar2 = this->Data;
  uVar6 = 0;
  if ((int)local_res8[0] < (pFVar2->Names).ArrayNum) {
    uVar6 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FArchive *)(*pcVar3)();
    return pFVar7;
  }
  *param_1 = *(FName *)((pFVar2->Names).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
  return (FArchive *)this;
}

// operator<< @ 14a3be3c0

FArchive * __thiscall
FSampleTrackMemoryReader::operator<<(FSampleTrackMemoryReader *this,FText *param_1)

{
  FText *pFVar1;
  FString local_28;
  FText local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  ::operator<<((FArchive *)this,&local_28);
  pFVar1 = FText::FromString(&local_18,&local_28);
  FText::operator=(param_1,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FArchive *)this;
}

