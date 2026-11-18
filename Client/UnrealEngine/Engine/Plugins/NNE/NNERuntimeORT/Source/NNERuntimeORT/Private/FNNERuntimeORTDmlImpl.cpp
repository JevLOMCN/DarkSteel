// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 16

// ~FNNERuntimeORTDmlImpl @ 14eb06e00

void __thiscall FNNERuntimeORTDmlImpl::~FNNERuntimeORTDmlImpl(FNNERuntimeORTDmlImpl *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Environment).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7INNERuntimeNPU__6B_;
  this->_padding_ = (longlong)&___7INNERuntimeRDG__6B_;
  this->_padding_ = (longlong)&___7INNERuntimeGPU__6B_;
  this->_padding_ = (longlong)&___7INNERuntime__6B_;
  return;
}

// CanCreateModelCommon @ 14eb0bed0

EResultStatus __thiscall
FNNERuntimeORTDmlImpl::CanCreateModelCommon
          (FNNERuntimeORTDmlImpl *this,TObjectPtr<UNNEModelData> param_1,bool param_2)

{
  UNNEModelData *this_00;
  code *pcVar1;
  bool bVar2;
  EResultStatus EVar3;
  FString *pFVar4;
  longlong lVar5;
  longlong lVar6;
  TArrayView<unsigned_char_const_,__int64> local_38;
  TSharedPtr<UE::NNE::FSharedModelData,1> local_28;
  void *local_18 [2];
  
  if ((*(longlong *)param_1.field0_0x0 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModelData != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORT.cpp"
                         ,0x178,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  this_00 = *(UNNEModelData **)param_1.field0_0x0;
  pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x10))(this,local_18);
  UNNEModelData::GetModelData(this_00,&local_28,pFVar4);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (local_28.Object != (FSharedModelData *)0x0) {
    if ((local_28.Object == (FSharedModelData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    UE::NNE::FSharedModelData::GetView(local_28.Object,&local_38);
    if (0x14 < local_38.ArrayNum) {
      lVar5 = *(longlong *)local_38.DataPtr - GUID._0_8_;
      if (lVar5 == 0) {
        lVar5 = *(longlong *)((longlong)local_38.DataPtr + 8) - GUID._8_8_;
      }
      if ((local_38.ArrayNum < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      lVar6 = *(longlong *)local_38.DataPtr -
              `private:_enum_UE::NNE::EResultStatus___cdecl_FNNERuntimeORTDmlImpl::CanCreateModelCommon(TObjectPtr<UNNEModelData>,bool)const___ptr64'
              ::__l2::DeprecatedGUID._0_8_;
      if (lVar6 == 0) {
        lVar6 = *(longlong *)((longlong)local_38.DataPtr + 8) -
                `private:_enum_UE::NNE::EResultStatus___cdecl_FNNERuntimeORTDmlImpl::CanCreateModelCommon(TObjectPtr<UNNEModelData>,bool)const___ptr64'
                ::__l2::DeprecatedGUID._8_8_;
      }
      if ((local_38.ArrayNum < 0x11) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      bVar2 = (int)*(longlong *)((longlong)local_38.DataPtr + 0x10) != Version ||
              lVar5 != 0 && lVar6 != 0;
      goto LAB_14eb0c073;
    }
  }
  bVar2 = true;
LAB_14eb0c073:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// CanCreateModelData @ 14eb0c0a0

ECanCreateModelDataStatus __thiscall
FNNERuntimeORTDmlImpl::CanCreateModelData
          (FNNERuntimeORTDmlImpl *this,FString *param_1,
          TArrayView<unsigned_char_const_,__int64> *param_2,
          TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>
          *param_3,FGuid *param_4,ITargetPlatform *param_5)

{
  int iVar1;
  wchar_t *pwVar2;
  ForAnyElementType FVar3;
  ECanCreateModelDataStatus EVar4;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  if (param_2->ArrayNum != 0) {
    ::FString::FString(&local_18,"onnx");
    pwVar2 = L"";
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    if ((param_1->Data).ArrayNum != 0) {
      pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar5 = true;
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,(wchar_t *)FVar3.Data);
    if (iVar1 == 0) {
      EVar4 = Ok;
      goto LAB_14eb0c0fa;
    }
  }
  EVar4 = FailFileIdNotSupported;
LAB_14eb0c0fa:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar4;
}

// CanCreateModelGPU @ 14eb0c200

EResultStatus __thiscall
FNNERuntimeORTDmlImpl::CanCreateModelGPU
          (FNNERuntimeORTDmlImpl *this,TObjectPtr<UNNEModelData> param_1)

{
  bool bVar1;
  EResultStatus EVar2;
  UObject *local_res8;
  
  if (*(char *)&(this->Environment).SharedReferenceCount.ReferenceController == '\0') {
    bVar1 = `FNNERuntimeORTDmlImpl::CanCreateModelGPU'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar1) {
      return Fail;
    }
  }
  local_res8 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  EVar2 = CanCreateModelCommon
                    ((FNNERuntimeORTDmlImpl *)&this[-1].bIsAvailableGPU,
                     (TObjectPtr<UNNEModelData>)&local_res8,false);
  return EVar2 != Ok;
}

// CanCreateModelNPU @ 14eb0c3c0

EResultStatus __thiscall
FNNERuntimeORTDmlImpl::CanCreateModelNPU
          (FNNERuntimeORTDmlImpl *this,TObjectPtr<UNNEModelData> param_1)

{
  bool bVar1;
  EResultStatus EVar2;
  UObject *local_res8;
  
  if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
    bVar1 = `FNNERuntimeORTDmlImpl::CanCreateModelNPU'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar1) {
      return Fail;
    }
  }
  local_res8 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  EVar2 = CanCreateModelCommon
                    ((FNNERuntimeORTDmlImpl *)&this[-1].Environment,
                     (TObjectPtr<UNNEModelData>)&local_res8,true);
  return EVar2 != Ok;
}

// CanCreateModelRDG @ 14eb0c580

EResultStatus __thiscall
FNNERuntimeORTDmlImpl::CanCreateModelRDG
          (FNNERuntimeORTDmlImpl *this,TObjectPtr<UNNEModelData> param_1)

{
  bool bVar1;
  EResultStatus EVar2;
  UObject *local_res8;
  
  if (*(char *)((longlong)&(this->Environment).Object + 1) == '\0') {
    bVar1 = `FNNERuntimeORTDmlImpl::CanCreateModelRDG'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar1) {
      return Fail;
    }
  }
  local_res8 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  EVar2 = CanCreateModelCommon
                    ((FNNERuntimeORTDmlImpl *)&this[-1].Environment.SharedReferenceCount,
                     (TObjectPtr<UNNEModelData>)&local_res8,true);
  return EVar2 != Ok;
}

// CreateModelData @ 14eb0fdc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::NNE::FSharedModelData,1> * __thiscall
FNNERuntimeORTDmlImpl::CreateModelData
          (FNNERuntimeORTDmlImpl *this,
          TSharedPtr<UE::NNE::FSharedModelData,1> *__return_storage_ptr__,FString *param_1,
          TArrayView<unsigned_char_const_,__int64> *param_2,
          TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>
          *param_3,FGuid *param_4,ITargetPlatform *param_5)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FBufferOwner *pFVar4;
  FBufferOwner *pFVar5;
  TSharedPtr<UE::NNE::FSharedModelData,1> *pTVar6;
  undefined7 uVar7;
  FBufferOwner *pFVar8;
  FSharedBuffer local_res8;
  FString local_1e8;
  void *local_1d8;
  void *pvStack_1d0;
  ulong64 local_1c8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_1c0;
  FArchiveState local_1b8;
  undefined8 local_128;
  void **local_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  TArrayView<unsigned_char_const_,__int64> local_e8;
  undefined1 local_d8 [176];
  
  local_108 = *(undefined4 *)&param_2->DataPtr;
  uStack_104 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  uStack_100 = (undefined4)param_2->ArrayNum;
  uStack_fc = *(undefined4 *)((longlong)&param_2->ArrayNum + 4);
  cVar2 = (**(code **)(this->_padding_ + 0x18))
                    (local_108,param_1,&local_108,param_3,param_4,param_5);
  pFVar8 = (FBufferOwner *)0x0;
  if (cVar2 == '\0') {
    local_1c8 = 0;
    local_1d8 = (void *)0x0;
    pvStack_1d0 = (void *)0x0;
    local_1b8._padding_ = 0;
    local_1b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_1b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_1b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_1b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_1b8._40_8_ = 0;
    local_1b8.ArSerializingDefaults = 0;
    local_1b8.ArPortFlags = 0;
    local_1b8.ArMaxSerializeSize = 0;
    local_1b8.ArUEVer.FileVersionUE4 = 0;
    local_1b8.ArUEVer.FileVersionUE5 = 0;
    local_1b8.ArLicenseeUEVer = 0;
    local_1b8.ArEngineVer.Major = 0;
    local_1b8.ArEngineVer.Minor = 0;
    local_1b8.ArEngineVer.Patch = 0;
    local_1b8.ArEngineVer._6_2_ = 0;
    local_1b8.ArEngineVer.Changelist = 0;
    local_1b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_1b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_1b8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_1b8.SerializedProperty = (FProperty *)0x0;
    local_1b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_1b8.bCustomVersionsAreReset = false;
    local_1b8._129_7_ = 0;
    local_1b8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_1b8);
    local_128 = 0;
    local_1b8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0EA_____6B_;
    local_120 = &local_1d8;
    local_118 = 0;
    uVar7 = (undefined7)((ulonglong)param_1 >> 8);
    FArchiveState::SetIsSaving(&local_1b8,true);
    (**(code **)(local_1b8._padding_ + 0x108))(&local_1b8,CONCAT71(uVar7,1));
    local_1b8._padding_ = (longlong)&___7FMemoryWriter64__6B_;
    ::operator<<((FArchive *)&local_1b8,&GUID);
    if ((local_1b8.ActiveFPLB)->EndFastPathLoadBuffer <
        (int *)((longlong)(local_1b8.ActiveFPLB)->StartFastPathLoadBuffer + 4)) {
      if (local_1b8.ArForceByteSwapping == 0) {
        (**(code **)(local_1b8._padding_ + 0x188))(&local_1b8,&Version,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_1b8,(uint *)&Version);
      }
    }
    else {
      Version = *(int *)(local_1b8.ActiveFPLB)->StartFastPathLoadBuffer;
      (local_1b8.ActiveFPLB)->StartFastPathLoadBuffer =
           (local_1b8.ActiveFPLB)->StartFastPathLoadBuffer + 4;
    }
    FArchiveState::FArchiveState((FArchiveState *)local_d8,&local_1b8);
    local_e8.DataPtr = param_2->DataPtr;
    local_e8.ArrayNum = param_2->ArrayNum;
    local_d8._144_8_ = local_128;
    local_d8._152_8_ = local_120;
    local_d8._160_8_ = local_118;
    local_d8._0_8_ = &___7FMemoryWriter64__6B_;
    UE::NNERuntimeORT::Private::Details::WriteOnnxModelData
              ((FMemoryWriter64 *)local_d8,&local_e8,param_3);
    pFVar4 = ::operator_new(0x38);
    pFVar5 = pFVar8;
    if (pFVar4 != (FBufferOwner *)0x0) {
      pFVar4->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
      pFVar4->_padding_ =
           (longlong)
           &___7__TBufferOwnerTArray_EV__TSizedDefaultAllocator__0EA____Private_SharedBuffer_UE__6B_
      ;
      pFVar4[1]._padding_ = (longlong)local_1d8;
      local_1d8 = (void *)0x0;
      pFVar4[1].Data = pvStack_1d0;
      pFVar4[1].Size = local_1c8;
      pvStack_1d0 = (void *)0x0;
      local_1c8 = 0;
      pFVar4->Data = (void *)pFVar4[1]._padding_;
      pFVar4->Size = (ulong64)pFVar4[1].Data;
      LOCK();
      pFVar4->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((ulonglong)pFVar4->ReferenceCountsAndFlags | 0x4000000000000000);
      UNLOCK();
      LOCK();
      pFVar4->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((ulonglong)pFVar4->ReferenceCountsAndFlags | 0x1000000000000000);
      UNLOCK();
      pFVar5 = pFVar4;
    }
    FSharedBuffer::FSharedBuffer(&local_res8,pFVar5);
    pFVar5 = ::operator_new(0x20);
    if (pFVar5 == (FBufferOwner *)0x0) {
      __return_storage_ptr__->Object = (FSharedModelData *)0x10;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      *(atomic<int> *)&pFVar5->Data = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar5->Data)[1] = (atomic<int>)0x1;
      pFVar5->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFSharedModelData_NNE_UE___00_SharedPointerInternals__6B_
      ;
      local_1c0 = local_res8.Owner.Owner;
      local_res8.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
      UE::NNE::FSharedModelData::FSharedModelData
                ((FSharedModelData *)&pFVar5->Size,(FSharedBuffer)&local_1c0,0);
      if ((&pFVar5->Size == (ulong64 *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedPtr<UE::NNE::FSharedModelData,1> *)(*pcVar1)();
        return pTVar6;
      }
      __return_storage_ptr__->Object = (FSharedModelData *)&pFVar5->Size;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)pFVar5;
      LOCK();
      *(atomic<int> *)&pFVar5->Data = (atomic<int>)((int)*(atomic<int> *)&pFVar5->Data + 1);
      UNLOCK();
      pFVar8 = pFVar5;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar8);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8.Owner);
    FArchive::~FArchive((FArchive *)&local_1b8);
    if (local_1d8 != (void *)0x0) {
      FMemory::Free(local_1d8);
    }
  }
  else {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.Data.ArrayNum = 0;
      local_1e8.Data.ArrayMax = 0;
      FGuid::AppendString(param_4,&local_1e8,Digits);
      ::FString::ToLower(&local_1e8,&local_f8);
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_class_TSharedPtr<UE::NNE::FSharedModelData,1>___cdecl_FNNERuntimeORTDmlImpl::CreateModelData(FString_const&___ptr64,TArrayView<unsigned_char_const_,__int64>,TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>_const&___ptr64,FGuid_const&___ptr64,ITargetPlatform_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Object = (FSharedModelData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// CreateModelGPU @ 14eb10560

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::NNE::IModelGPU,1> * __thiscall
FNNERuntimeORTDmlImpl::CreateModelGPU
          (FNNERuntimeORTDmlImpl *this,TSharedPtr<UE::NNE::IModelGPU,1> *__return_storage_ptr__,
          TObjectPtr<UNNEModelData> param_1)

{
  atomic<int> *paVar1;
  UNNEModelData *this_00;
  FSharedModelData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  FEnvironment *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  TSharedPtr<UE::NNE::IModelGPU,1> *pTVar9;
  FGuid *this_01;
  FString *pFVar10;
  TSharedPtr<UE::NNE::FSharedModelData,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  atomic<int> *paVar13;
  TReferenceControllerBase<1> *pTVar14;
  UObject *local_res8;
  FString local_68;
  TSharedPtr<UE::NNE::FSharedModelData,1> local_58;
  void *local_48 [2];
  FGuid local_38;
  
  if ((*(longlong *)param_1.field0_0x0 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModelData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORT.cpp"
                         ,0x12a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::NNE::IModelGPU,1> *)(*pcVar6)();
    return pTVar9;
  }
  local_res8 = *(UObject **)param_1.field0_0x0;
  pcVar6 = *(code **)(this->_padding_ + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  cVar8 = (*pcVar6)(this,&local_res8);
  if (cVar8 != '\0') {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      this_01 = UNNEModelData::GetFileId(*(UNNEModelData **)param_1.field0_0x0,&local_38);
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FGuid::AppendString(this_01,&local_68,Digits);
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_class_TSharedPtr<UE::NNE::IModelGPU,1>___cdecl_FNNERuntimeORTDmlImpl::CreateModelGPU(TObjectPtr<UNNEModelData>)___ptr64'
                  ::__l13::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Object = (IModelGPU *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  this_00 = *(UNNEModelData **)param_1.field0_0x0;
  pFVar10 = (FString *)
            (**(code **)(*(longlong *)&this[-1].bIsAvailableGPU + 0x10))
                      (&this[-1].bIsAvailableGPU,local_48);
  pTVar11 = UNNEModelData::GetModelData(this_00,&local_58,pFVar10);
  if ((pTVar11->Object == (FSharedModelData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::NNE::IModelGPU,1> *)(*pcVar6)();
    return pTVar9;
  }
  pFVar2 = pTVar11->Object;
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  (pTVar11->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar11->Object = (FSharedModelData *)0x0;
  if ((pFVar2 == (FSharedModelData *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::NNE::IModelGPU,1> *)(*pcVar6)();
    return pTVar9;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::NNE::IModelGPU,1> *)(*pcVar6)();
    return pTVar9;
  }
  lVar4 = this->_padding_;
  pFVar5 = (this->Environment).Object;
  if (pFVar5 != (FEnvironment *)0x0) {
    LOCK();
    paVar13 = (atomic<int> *)&(pFVar5->Config).InterOpNumThreads;
    *paVar13 = (atomic<int>)((int)*paVar13 + 1);
    UNLOCK();
  }
  if ((lVar4 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TSharedPtr<UE::NNE::IModelGPU,1> *)(*pcVar6)();
    return pTVar9;
  }
  pTVar12 = ::operator_new(0x38);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IModelGPU *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFModelORTDmlGPU_Private_NNERuntimeORT_UE___00_SharedPointerInternals__6B_
    ;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      paVar13 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar13 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    if (pFVar5 == (FEnvironment *)0x0) {
      pTVar12[1]._padding_ = (longlong)&___7FModelORTDmlGPU_Private_NNERuntimeORT_UE__6B_;
      pTVar12[1].SharedReferenceCount = (atomic<int>)(int)lVar4;
      pTVar12[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar4 >> 0x20);
      pTVar12[2]._padding_ = 0;
    }
    else {
      LOCK();
      paVar1 = (atomic<int> *)&(pFVar5->Config).InterOpNumThreads;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      pTVar12[1]._padding_ = (longlong)&___7FModelORTDmlGPU_Private_NNERuntimeORT_UE__6B_;
      pTVar12[1].SharedReferenceCount = (atomic<int>)(int)lVar4;
      pTVar12[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar4 >> 0x20);
      pTVar12[2]._padding_ = (longlong)pFVar5;
      LOCK();
      paVar1 = (atomic<int> *)&(pFVar5->Config).InterOpNumThreads;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    *(FSharedModelData **)&pTVar12[2].SharedReferenceCount = pFVar2;
    pTVar12[3]._padding_ = (longlong)pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if ((pTVar12 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TSharedPtr<UE::NNE::IModelGPU,1> *)(*pcVar6)();
      return pTVar9;
    }
    __return_storage_ptr__->Object = (IModelGPU *)(pTVar12 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    pTVar14 = pTVar12;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// CreateModelNPU @ 14eb11080

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::NNE::IModelNPU,1> * __thiscall
FNNERuntimeORTDmlImpl::CreateModelNPU
          (FNNERuntimeORTDmlImpl *this,TSharedPtr<UE::NNE::IModelNPU,1> *__return_storage_ptr__,
          TObjectPtr<UNNEModelData> param_1)

{
  UNNEModelData *this_00;
  FSharedModelData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  TSharedPtr<UE::NNE::IModelNPU,1> *pTVar8;
  FGuid *this_01;
  FString *pFVar9;
  TSharedPtr<UE::NNE::FSharedModelData,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  atomic<int> *paVar12;
  TReferenceControllerBase<1> *pTVar13;
  UObject *local_res8;
  FString local_68;
  TSharedPtr<UE::NNE::FSharedModelData,1> local_58;
  void *local_48 [2];
  FGuid local_38;
  
  if ((*(longlong *)param_1.field0_0x0 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModelData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORT.cpp"
                         ,0x164,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::NNE::IModelNPU,1> *)(*pcVar5)();
    return pTVar8;
  }
  local_res8 = *(UObject **)param_1.field0_0x0;
  pcVar5 = *(code **)(this->_padding_ + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  cVar7 = (*pcVar5)(this,&local_res8);
  if (cVar7 != '\0') {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      this_01 = UNNEModelData::GetFileId(*(UNNEModelData **)param_1.field0_0x0,&local_38);
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FGuid::AppendString(this_01,&local_68,Digits);
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_class_TSharedPtr<UE::NNE::IModelNPU,1>___cdecl_FNNERuntimeORTDmlImpl::CreateModelNPU(TObjectPtr<UNNEModelData>)___ptr64'
                  ::__l13::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Object = (IModelNPU *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  this_00 = *(UNNEModelData **)param_1.field0_0x0;
  pFVar9 = (FString *)
           (*(code *)(this[-1].Environment.Object)->OrtEnvironment)(&this[-1].Environment,local_48);
  pTVar10 = UNNEModelData::GetModelData(this_00,&local_58,pFVar9);
  if ((pTVar10->Object == (FSharedModelData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::NNE::IModelNPU,1> *)(*pcVar5)();
    return pTVar8;
  }
  pFVar1 = pTVar10->Object;
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
  (pTVar10->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar10->Object = (FSharedModelData *)0x0;
  if ((pFVar1 == (FSharedModelData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::NNE::IModelNPU,1> *)(*pcVar5)();
    return pTVar8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::NNE::IModelNPU,1> *)(*pcVar5)();
    return pTVar8;
  }
  lVar3 = this->_padding_;
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar3 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::NNE::IModelNPU,1> *)(*pcVar5)();
    return pTVar8;
  }
  pTVar11 = ::operator_new(0x38);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IModelNPU *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFModelORTNpu_Private_NNERuntimeORT_UE___00_SharedPointerInternals__6B_
    ;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar12 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar12 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar11[1]._padding_ = (longlong)&___7FModelORTNpu_Private_NNERuntimeORT_UE__6B_;
      pTVar11[1].SharedReferenceCount = (atomic<int>)(int)lVar3;
      pTVar11[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar3 >> 0x20);
      pTVar11[2]._padding_ = 0;
    }
    else {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11[1]._padding_ = (longlong)&___7FModelORTNpu_Private_NNERuntimeORT_UE__6B_;
      pTVar11[1].SharedReferenceCount = (atomic<int>)(int)lVar3;
      pTVar11[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar3 >> 0x20);
      pTVar11[2]._padding_ = (longlong)pTVar4;
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FSharedModelData **)&pTVar11[2].SharedReferenceCount = pFVar1;
    pTVar11[3]._padding_ = (longlong)pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if ((pTVar11 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::NNE::IModelNPU,1> *)(*pcVar5)();
      return pTVar8;
    }
    __return_storage_ptr__->Object = (IModelNPU *)(pTVar11 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    pTVar13 = pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// CreateModelRDG @ 14eb11520

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::NNE::IModelRDG,1> * __thiscall
FNNERuntimeORTDmlImpl::CreateModelRDG
          (FNNERuntimeORTDmlImpl *this,TSharedPtr<UE::NNE::IModelRDG,1> *__return_storage_ptr__,
          TObjectPtr<UNNEModelData> param_1)

{
  UNNEModelData *this_00;
  FSharedModelData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  TSharedPtr<UE::NNE::IModelRDG,1> *pTVar8;
  FGuid *this_01;
  FString *pFVar9;
  TSharedPtr<UE::NNE::FSharedModelData,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  atomic<int> *paVar12;
  TReferenceControllerBase<1> *pTVar13;
  UObject *local_res8;
  FString local_68;
  TSharedPtr<UE::NNE::FSharedModelData,1> local_58;
  void *local_48 [2];
  FGuid local_38;
  
  if ((*(longlong *)param_1.field0_0x0 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModelData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORT.cpp"
                         ,0x147,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::NNE::IModelRDG,1> *)(*pcVar5)();
    return pTVar8;
  }
  local_res8 = *(UObject **)param_1.field0_0x0;
  pcVar5 = *(code **)(this->_padding_ + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  cVar7 = (*pcVar5)(this,&local_res8);
  if (cVar7 != '\0') {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      this_01 = UNNEModelData::GetFileId(*(UNNEModelData **)param_1.field0_0x0,&local_38);
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FGuid::AppendString(this_01,&local_68,Digits);
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_class_TSharedPtr<UE::NNE::IModelRDG,1>___cdecl_FNNERuntimeORTDmlImpl::CreateModelRDG(TObjectPtr<UNNEModelData>)___ptr64'
                  ::__l13::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Object = (IModelRDG *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  this_00 = *(UNNEModelData **)param_1.field0_0x0;
  pFVar9 = (FString *)
           (*(code *)this[-1].Environment.SharedReferenceCount.ReferenceController[1]._padding_)
                     (&this[-1].Environment.SharedReferenceCount,local_48);
  pTVar10 = UNNEModelData::GetModelData(this_00,&local_58,pFVar9);
  if ((pTVar10->Object == (FSharedModelData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::NNE::IModelRDG,1> *)(*pcVar5)();
    return pTVar8;
  }
  pFVar1 = pTVar10->Object;
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
  (pTVar10->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar10->Object = (FSharedModelData *)0x0;
  if ((pFVar1 == (FSharedModelData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::NNE::IModelRDG,1> *)(*pcVar5)();
    return pTVar8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::NNE::IModelRDG,1> *)(*pcVar5)();
    return pTVar8;
  }
  lVar3 = this->_padding_;
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((lVar3 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::NNE::IModelRDG,1> *)(*pcVar5)();
    return pTVar8;
  }
  pTVar11 = ::operator_new(0x38);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IModelRDG *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFModelORTDmlRDG_Private_NNERuntimeORT_UE___00_SharedPointerInternals__6B_
    ;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar12 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar12 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar11[1]._padding_ = (longlong)&___7FModelORTDmlRDG_Private_NNERuntimeORT_UE__6B_;
      pTVar11[1].SharedReferenceCount = (atomic<int>)(int)lVar3;
      pTVar11[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar3 >> 0x20);
      pTVar11[2]._padding_ = 0;
    }
    else {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11[1]._padding_ = (longlong)&___7FModelORTDmlRDG_Private_NNERuntimeORT_UE__6B_;
      pTVar11[1].SharedReferenceCount = (atomic<int>)(int)lVar3;
      pTVar11[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar3 >> 0x20);
      pTVar11[2]._padding_ = (longlong)pTVar4;
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FSharedModelData **)&pTVar11[2].SharedReferenceCount = pFVar1;
    pTVar11[3]._padding_ = (longlong)pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar12 = (atomic<int>)((int)*paVar12 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if ((pTVar11 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::NNE::IModelRDG,1> *)(*pcVar5)();
      return pTVar8;
    }
    __return_storage_ptr__->Object = (IModelRDG *)(pTVar11 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar11;
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    pTVar13 = pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// GetModelDataIdentifier @ 14eb156f0

FString * __thiscall
FNNERuntimeORTDmlImpl::GetModelDataIdentifier
          (FNNERuntimeORTDmlImpl *this,FString *__return_storage_ptr__,FString *param_1,
          TArrayView<unsigned_char_const_,__int64> *param_2,
          TMap<FString,TArrayView<unsigned_char_const_,__int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<unsigned_char_const_,__int64>,0>_>
          *param_3,FGuid *param_4,ITargetPlatform *param_5)

{
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_68,Version);
  ::FString::FString(&local_18,"-");
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  FGuid::AppendString(&GUID,&local_78,Digits);
  ::FString::FString(&local_28,"-");
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  FGuid::AppendString(param_4,&local_88,Digits);
  ::FString::ConcatFF(&local_38,&local_88,&local_28);
  ::FString::ConcatFF(&local_48,&local_38,&local_78);
  ::FString::ConcatFF(&local_58,&local_48,&local_18);
  ::FString::ConcatFF(__return_storage_ptr__,&local_58,&local_68);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetRuntimeName @ 14eb16790

FString * __thiscall
FNNERuntimeORTDmlImpl::GetRuntimeName(FNNERuntimeORTDmlImpl *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"NNERuntimeORTDml");
  return __return_storage_ptr__;
}

// Init @ 14eb172c0

void __thiscall
FNNERuntimeORTDmlImpl::Init
          (FNNERuntimeORTDmlImpl *this,
          TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  FEnvironment *local_18;
  FSharedReferencer<1> local_10;
  
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  local_18 = param_1->Object;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->Environment != (TSharedPtr<UE::NNERuntimeORT::Private::FEnvironment,1> *)&local_18) {
    (this->Environment).Object = local_18;
    local_18 = (FEnvironment *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Environment).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  bVar1 = UE::NNERuntimeORT::Private::IsD3D12Available();
  if ((param_2) && (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  this->bIsAvailableGPU = bVar1;
  if (GDynamicRHI == (FDynamicRHI *)0x0) {
LAB_14eb17357:
    bVar1 = false;
  }
  else {
    iVar2 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
    if (iVar2 != 3) goto LAB_14eb17357;
    bVar1 = true;
  }
  if ((param_2) && (bVar1)) {
    this->bIsAvailableRDG = true;
    bVar1 = UE::NNERuntimeORT::Private::IsD3D12DeviceNPUAvailable();
LAB_14eb1737b:
    if (bVar1 != false) {
      bVar1 = true;
      goto LAB_14eb17385;
    }
  }
  else {
    this->bIsAvailableRDG = false;
    bVar1 = UE::NNERuntimeORT::Private::IsD3D12DeviceNPUAvailable();
    if (param_2) goto LAB_14eb1737b;
  }
  bVar1 = false;
LAB_14eb17385:
  this->bIsAvailableNPU = bVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 15059cc10

bool __thiscall `FNNERuntimeORTDmlImpl::CanCreateModelGPU'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2059706654047338783>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2059706654047338783>,
                       &`public:___cdecl_`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_FNNERuntimeORTDmlImpl::CanCreateModelGPU(TObjectPtr<UNNEModelData>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059cc50

bool __thiscall `FNNERuntimeORTDmlImpl::CanCreateModelNPU'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2059706654047338841>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2059706654047338841>,
                       &`public:___cdecl_`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_FNNERuntimeORTDmlImpl::CanCreateModelNPU(TObjectPtr<UNNEModelData>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059cc90

bool __thiscall `FNNERuntimeORTDmlImpl::CanCreateModelRDG'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2059706654047338812>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2059706654047338812>,
                       &`public:___cdecl_`public:_virtual_enum_UE::NNE::EResultStatus___cdecl_FNNERuntimeORTDmlImpl::CanCreateModelRDG(TObjectPtr<UNNEModelData>)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

