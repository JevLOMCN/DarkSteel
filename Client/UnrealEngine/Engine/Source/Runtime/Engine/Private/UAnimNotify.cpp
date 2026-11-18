// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// UAnimNotify @ 1474b3c70

UAnimNotify * __thiscall UAnimNotify::UAnimNotify(UAnimNotify *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotify__6B_;
  return this;
}

// UAnimNotify @ 1474b3ca0

UAnimNotify * __thiscall UAnimNotify::UAnimNotify(UAnimNotify *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->MeshContext = (USkeletalMeshComponent *)0x0;
  this->_padding_ = (longlong)&___7UAnimNotify__6B_;
  this->bIsNativeBranchingPoint = false;
  return this;
}

// ~UAnimNotify @ 1474b5580

void __thiscall UAnimNotify::~UAnimNotify(UAnimNotify *this)

{
  this->_padding_ = (longlong)&___7UAnimNotify__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BranchingPointNotify @ 1474c1550

void __thiscall
UAnimNotify::BranchingPointNotify(UAnimNotify *this,FBranchingPointNotifyPayload *param_1)

{
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_10 = 0;
  local_c = 0;
  (**(code **)(this->_padding_ + 0x2c0))
            (0,param_1->SkelMeshComponent,param_1->SequenceAsset,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// GetContainingAsset @ 1474d8810

UObject * __thiscall UAnimNotify::GetContainingAsset(UAnimNotify *this)

{
  UClass *pUVar1;
  UObject *pUVar2;
  UPackage *pUVar3;
  
  pUVar1 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
  pUVar2 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  if (pUVar2 == (UObject *)0x0) {
    pUVar3 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
    return (UObject *)pUVar3;
  }
  return pUVar2;
}

// GetDefaultTriggerWeightThreshold @ 1474d91b0

float __thiscall UAnimNotify::GetDefaultTriggerWeightThreshold(UAnimNotify *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  float fVar2;
  float local_res10 [6];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UAnimNotify_GetDefaultTriggerWeightThreshold);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = 0.0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0];
  }
                    /* WARNING: Could not recover jumptable at 0x0001474d9215. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(**(code **)(this->_padding_ + 0x2b0))(this);
  return fVar2;
}

// GetDefaultTriggerWeightThreshold_Implementation @ 1474d92b0

float __thiscall UAnimNotify::GetDefaultTriggerWeightThreshold_Implementation(UAnimNotify *this)

{
  return __real_3727c5ac;
}

// GetNotifyName @ 1474dbf70

FString * __thiscall UAnimNotify::GetNotifyName(UAnimNotify *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  void *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  longlong lVar3;
  void *local_18;
  undefined8 local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UAnimNotify_GetNotifyName);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = (void *)0x0;
    local_10 = 0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
    _Src = local_18;
    lVar3 = (longlong)(int)local_10;
    piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (int)local_10;
    if ((int)local_10 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_10,0,(ForAnyElementType *)__return_storage_ptr__,(int)local_10,
                 piVar1);
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,lVar3 * 2);
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
      return __return_storage_ptr__;
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x2b8))(this,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetNotifyName_Implementation @ 1474dc170

FString * __thiscall
UAnimNotify::GetNotifyName_Implementation(UAnimNotify *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FName local_res8;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_res8 = *(FName *)(this->_padding_ + 0x18);
  ::FName::ToString(&local_res8,&local_18);
  if (__return_storage_ptr__ != &local_18) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::ReplaceInline(__return_storage_ptr__,L"AnimNotify_",L"",CaseSensitive);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1474dceb0

UClass * __cdecl UAnimNotify::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify",
               &Z_Registration_Info_UClass_UAnimNotify.InnerSingleton,
               StaticRegisterNativesUAnimNotify,0x38,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None
               ,L"Engine",InternalConstructor<UAnimNotify>,
               InternalVTableHelperCtorCaller<UAnimNotify>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify.InnerSingleton;
}

// GetWorld @ 1474e05e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UAnimNotify::GetWorld(UAnimNotify *this)

{
  USkeletalMeshComponent *this_00;
  UWorld *pUVar1;
  
  this_00 = this->MeshContext;
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    pUVar1 = (UWorld *)0x0;
  }
  else {
    pUVar1 = (UWorld *)this_00->_padding_;
    if (pUVar1 == (UWorld *)0x0) {
      pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
      return pUVar1;
    }
  }
  return pUVar1;
}

// Notify @ 1474ed8b0

void __thiscall
UAnimNotify::Notify(UAnimNotify *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2)

{
  return;
}

// Notify @ 1474ed8c0

void __thiscall
UAnimNotify::Notify(UAnimNotify *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
                   FAnimNotifyEventReference *param_3)

{
  USkeletalMeshComponent *pUVar1;
  UMirrorDataTable *pUVar2;
  UObject *pUVar3;
  UFunction *pUVar4;
  USkeletalMeshComponent *local_58;
  UAnimSequenceBase *local_50;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FAnimNotifyEvent *local_38;
  TObjectPtr<UMirrorDataTable_const_>_u_0 local_30;
  TObjectPtr<UObject_const_>_u_0 local_28;
  float local_20;
  undefined1 local_1c;
  undefined1 local_18;
  
  pUVar1 = this->MeshContext;
  this->MeshContext = param_1;
  (**(code **)(this->_padding_ + 0x2c8))();
  pTStack_40 = (param_3->ContextData).SharedReferenceCount.ReferenceController;
  local_48 = (param_3->ContextData).Object;
  local_18 = 0;
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = param_1;
  local_50 = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_38 = param_3->Notify;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_3->MirrorTable).field0_0x0.DebugPtr, pUVar2 != (UMirrorDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_30 = (param_3->MirrorTable).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_3->NotifySource).field0_0x0.DebugPtr, pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_28 = (param_3->NotifySource).field0_0x0;
  local_20 = param_3->CurrentAnimTime;
  local_1c = param_3->bActiveContext;
  pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_UAnimNotify_Received_Notify);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  this->MeshContext = pUVar1;
  return;
}

// PostLoad @ 1474f17b0

void __thiscall UAnimNotify::PostLoad(UAnimNotify *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UAnimNotify **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// PreSave @ 1474f1b70

void __thiscall UAnimNotify::PreSave(UAnimNotify *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// Received_Notify @ 1474f28c0

bool __thiscall
UAnimNotify::Received_Notify
          (UAnimNotify *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          FAnimNotifyEventReference *param_3)

{
  UMirrorDataTable *pUVar1;
  UObject *pUVar2;
  char cVar3;
  UFunction *pUVar4;
  USkeletalMeshComponent *local_58;
  UAnimSequenceBase *local_50;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FAnimNotifyEvent *local_38;
  TObjectPtr<UMirrorDataTable_const_>_u_0 local_30;
  TObjectPtr<UObject_const_>_u_0 local_28;
  float local_20;
  undefined1 local_1c;
  char local_18;
  
  pTStack_40 = (param_3->ContextData).SharedReferenceCount.ReferenceController;
  local_48 = (param_3->ContextData).Object;
  local_18 = '\0';
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = param_1;
  local_50 = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_38 = param_3->Notify;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_3->MirrorTable).field0_0x0.DebugPtr, pUVar1 != (UMirrorDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_30 = (param_3->MirrorTable).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_3->NotifySource).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_28 = (param_3->NotifySource).field0_0x0;
  local_20 = param_3->CurrentAnimTime;
  local_1c = param_3->bActiveContext;
  pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_UAnimNotify_Received_Notify);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_58);
  cVar3 = local_18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return cVar3 != '\0';
}

// StaticRegisterNativesUAnimNotify @ 1474facf0

void __cdecl UAnimNotify::StaticRegisterNativesUAnimNotify(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAnimNotify_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDefaultTriggerWeightThreshold @ 1475055f0

void __cdecl
UAnimNotify::execGetDefaultTriggerWeightThreshold(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetNotifyName @ 1475058e0

void __cdecl UAnimNotify::execGetNotifyName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

