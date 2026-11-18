// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 15

// StaticClass @ 14eb017d0

UClass * __cdecl UNNERuntimeORTCpu::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTCpu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTCpu",
               &Z_Registration_Info_UClass_UNNERuntimeORTCpu.InnerSingleton,
               StaticRegisterNativesUNNERuntimeORTCpu,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNNERuntimeORTCpu>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTCpu>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTCpu.InnerSingleton;
}

// UNNERuntimeORTCpu @ 14eb05cb0

UNNERuntimeORTCpu * __thiscall
UNNERuntimeORTCpu::UNNERuntimeORTCpu(UNNERuntimeORTCpu *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INNERuntime__;
  this->_padding_ = (longlong)&_vftable__for__INNERuntimeCPU__;
  (this->Environment).Object = (FEnvironment *)0x0;
  (this->Environment).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UNNERuntimeORTCpu @ 14eb05d00

UNNERuntimeORTCpu * __thiscall
UNNERuntimeORTCpu::UNNERuntimeORTCpu(UNNERuntimeORTCpu *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INNERuntime__;
  this->_padding_ = (longlong)&_vftable__for__INNERuntimeCPU__;
  (this->Environment).Object = (FEnvironment *)0x0;
  (this->Environment).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UNNERuntimeORTCpu @ 14eb071d0

void __thiscall UNNERuntimeORTCpu::~UNNERuntimeORTCpu(UNNERuntimeORTCpu *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Environment).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7INNERuntimeCPU__6B_;
  this->_padding_ = (longlong)&___7INNERuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanCreateModelCPU @ 14eb0bd70

EResultStatus __thiscall
UNNERuntimeORTCpu::CanCreateModelCPU(UNNERuntimeORTCpu *this,TObjectPtr<UNNEModelData> param_1)

{
  UNNEModelData *this_00;
  code *pcVar1;
  bool bVar2;
  EResultStatus EVar3;
  FString *pFVar4;
  longlong lVar5;
  TSharedPtr<UE::NNE::FSharedModelData,1> local_38;
  TArrayView<unsigned_char_const_,__int64> local_28;
  void *local_18 [2];
  
  if ((*(longlong *)param_1.field0_0x0 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModelData != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORT.cpp"
                         ,0x9e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  this_00 = *(UNNEModelData **)param_1.field0_0x0;
  pFVar4 = (FString *)
           (*(code *)this[-1].Environment.SharedReferenceCount.ReferenceController[1]._padding_)
                     (&this[-1].Environment.SharedReferenceCount,local_18);
  UNNEModelData::GetModelData(this_00,&local_38,pFVar4);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (local_38.Object != (FSharedModelData *)0x0) {
    if ((local_38.Object == (FSharedModelData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    UE::NNE::FSharedModelData::GetView(local_38.Object,&local_28);
    if (0x14 < local_28.ArrayNum) {
      lVar5 = *(longlong *)local_28.DataPtr - GUID._0_8_;
      if (lVar5 == 0) {
        lVar5 = *(longlong *)((longlong)local_28.DataPtr + 8) - GUID._8_8_;
      }
      if ((local_28.ArrayNum < 0x11) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      bVar2 = (int)*(longlong *)((longlong)local_28.DataPtr + 0x10) != Version || lVar5 != 0;
      goto LAB_14eb0beae;
    }
  }
  bVar2 = true;
LAB_14eb0beae:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// CanCreateModelData @ 14eb0c130

ECanCreateModelDataStatus __thiscall
UNNERuntimeORTCpu::CanCreateModelData
          (UNNERuntimeORTCpu *this,FString *param_1,
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
      goto LAB_14eb0c18a;
    }
  }
  EVar4 = FailFileIdNotSupported;
LAB_14eb0c18a:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return EVar4;
}

// CreateModelCPU @ 14eb0faa0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::NNE::IModelCPU,1> * __thiscall
UNNERuntimeORTCpu::CreateModelCPU
          (UNNERuntimeORTCpu *this,TSharedPtr<UE::NNE::IModelCPU,1> *__return_storage_ptr__,
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
  TSharedPtr<UE::NNE::IModelCPU,1> *pTVar8;
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
                        ("ModelData != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORT.cpp"
                         ,0xb8,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TSharedPtr<UE::NNE::IModelCPU,1> *)(*pcVar5)();
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
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Object = (IModelCPU *)0x0;
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
    pTVar8 = (TSharedPtr<UE::NNE::IModelCPU,1> *)(*pcVar5)();
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
    pTVar8 = (TSharedPtr<UE::NNE::IModelCPU,1> *)(*pcVar5)();
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
    pTVar8 = (TSharedPtr<UE::NNE::IModelCPU,1> *)(*pcVar5)();
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
    pTVar8 = (TSharedPtr<UE::NNE::IModelCPU,1> *)(*pcVar5)();
    return pTVar8;
  }
  pTVar11 = ::operator_new(0x38);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IModelCPU *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFModelORTCpu_Private_NNERuntimeORT_UE___00_SharedPointerInternals__6B_
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
      pTVar11[1]._padding_ = (longlong)&___7FModelORTCpu_Private_NNERuntimeORT_UE__6B_;
      pTVar11[1].SharedReferenceCount = (atomic<int>)(int)lVar3;
      pTVar11[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar3 >> 0x20);
      pTVar11[2]._padding_ = 0;
    }
    else {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11[1]._padding_ = (longlong)&___7FModelORTCpu_Private_NNERuntimeORT_UE__6B_;
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
      pTVar8 = (TSharedPtr<UE::NNE::IModelCPU,1> *)(*pcVar5)();
      return pTVar8;
    }
    __return_storage_ptr__->Object = (IModelCPU *)(pTVar11 + 1);
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

// CreateModelData @ 14eb10160

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::NNE::FSharedModelData,1> * __thiscall
UNNERuntimeORTCpu::CreateModelData
          (UNNERuntimeORTCpu *this,TSharedPtr<UE::NNE::FSharedModelData,1> *__return_storage_ptr__,
          FString *param_1,TArrayView<unsigned_char_const_,__int64> *param_2,
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
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
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

// GetModelDataIdentifier @ 14eb15850

FString * __thiscall
UNNERuntimeORTCpu::GetModelDataIdentifier
          (UNNERuntimeORTCpu *this,FString *__return_storage_ptr__,FString *param_1,
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

// GetPrivateStaticClass @ 14eb16030

UClass * __cdecl UNNERuntimeORTCpu::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTCpu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTCpu",
               &Z_Registration_Info_UClass_UNNERuntimeORTCpu.InnerSingleton,
               StaticRegisterNativesUNNERuntimeORTCpu,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNNERuntimeORTCpu>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTCpu>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTCpu.InnerSingleton;
}

// GetRuntimeName @ 14eb167c0

FString * __thiscall
UNNERuntimeORTCpu::GetRuntimeName(UNNERuntimeORTCpu *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"NNERuntimeORTCpu");
  return __return_storage_ptr__;
}

// Init @ 14eb173b0

void __thiscall
UNNERuntimeORTCpu::Init
          (UNNERuntimeORTCpu *this,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_1)

{
  FEnvironment *local_18;
  FSharedReferencer<1> local_10;
  
  local_18 = param_1->Object;
  local_10.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUNNERuntimeORTCpu @ 14eb1de70

void __cdecl UNNERuntimeORTCpu::StaticRegisterNativesUNNERuntimeORTCpu(void)

{
  return;
}

// _getUObject @ 14eb1ed10

UObject * __thiscall UNNERuntimeORTCpu::_getUObject(UNNERuntimeORTCpu *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 14eb1ed1c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UNNERuntimeORTCpu::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall UNNERuntimeORTCpu::_getUObject_adjustor_8__(UNNERuntimeORTCpu *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UNNERuntimeORTCpu *)&this[-1].Environment.SharedReferenceCount);
  return (UObject *)pUVar1;
}

