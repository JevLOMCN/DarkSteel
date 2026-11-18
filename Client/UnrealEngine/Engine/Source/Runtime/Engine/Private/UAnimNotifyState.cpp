// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// UAnimNotifyState @ 1474b3da0

UAnimNotifyState * __thiscall
UAnimNotifyState::UAnimNotifyState(UAnimNotifyState *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotifyState__6B_;
  return this;
}

// UAnimNotifyState @ 1474b3dd0

UAnimNotifyState * __thiscall
UAnimNotifyState::UAnimNotifyState(UAnimNotifyState *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsNativeBranchingPoint = false;
  this->_padding_ = (longlong)&___7UAnimNotifyState__6B_;
  return this;
}

// ~UAnimNotifyState @ 1474b55e0

void __thiscall UAnimNotifyState::~UAnimNotifyState(UAnimNotifyState *this)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BranchingPointNotifyBegin @ 1474c15b0

void __thiscall
UAnimNotifyState::BranchingPointNotifyBegin
          (UAnimNotifyState *this,FBranchingPointNotifyPayload *param_1)

{
  code *pcVar1;
  float fVar2;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  fVar2 = 0.0;
  local_18 = 0;
  local_10 = 0;
  local_38 = 0;
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_c = 0;
  local_28 = 0;
  uStack_20 = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x2c0);
  if (param_1->NotifyEvent != (FAnimNotifyEvent *)0x0) {
    fVar2 = FAnimNotifyEvent::GetDuration(param_1->NotifyEvent);
  }
  (*pcVar1)(this,param_1->SkelMeshComponent,param_1->SequenceAsset,fVar2,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// BranchingPointNotifyEnd @ 1474c1700

void __thiscall
UAnimNotifyState::BranchingPointNotifyEnd
          (UAnimNotifyState *this,FBranchingPointNotifyPayload *param_1)

{
  bool local_res8 [8];
  FAnimNotifyEventReference local_38;
  
  local_38.NotifySource.field0_0x0.DebugPtr = (TObjectPtr<UObject_const_>_u_0)0x0;
  local_38.ContextData.Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  local_38.ContextData.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_38.Notify = (FAnimNotifyEvent *)0x0;
  local_38.MirrorTable.field0_0x0.DebugPtr = (TObjectPtr<UMirrorDataTable_const_>_u_0)0x0;
  local_38.CurrentAnimTime = 0.0;
  local_38.bActiveContext = false;
  if (param_1->bReachedEnd != false) {
    local_res8[0] = true;
    FAnimNotifyEventReference::AddContextData<UE::Anim::FAnimNotifyEndDataContext,bool>
              (&local_38,local_res8);
  }
  (**(code **)(this->_padding_ + 0x2e0))
            (this,param_1->SkelMeshComponent,param_1->SequenceAsset,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.ContextData.SharedReferenceCount.ReferenceController);
  return;
}

// BranchingPointNotifyTick @ 1474c1830

void __thiscall
UAnimNotifyState::BranchingPointNotifyTick
          (UAnimNotifyState *this,FBranchingPointNotifyPayload *param_1,float param_2)

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
  (**(code **)(this->_padding_ + 0x2d0))
            (0,param_1->SkelMeshComponent,param_1->SequenceAsset,param_2,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// GetContainingAsset @ 1474d8850

UObject * __thiscall UAnimNotifyState::GetContainingAsset(UAnimNotifyState *this)

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

// GetDefaultTriggerWeightThreshold @ 1474d9230

float __thiscall UAnimNotifyState::GetDefaultTriggerWeightThreshold(UAnimNotifyState *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  float fVar2;
  float local_res10 [6];
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UAnimNotifyState_GetDefaultTriggerWeightThreshold);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = 0.0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0];
  }
                    /* WARNING: Could not recover jumptable at 0x0001474d9295. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(**(code **)(this->_padding_ + 0x2b0))(this);
  return fVar2;
}

// GetDefaultTriggerWeightThreshold_Implementation @ 1474d92c0

float __thiscall
UAnimNotifyState::GetDefaultTriggerWeightThreshold_Implementation(UAnimNotifyState *this)

{
  return __real_3727c5ac;
}

// GetNotifyName @ 1474dc070

FString * __thiscall
UAnimNotifyState::GetNotifyName(UAnimNotifyState *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  void *_Src;
  UFunction *this_00;
  UClass *pUVar2;
  longlong lVar3;
  void *local_18;
  undefined8 local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UAnimNotifyState_GetNotifyName);
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

// GetNotifyName_Implementation @ 1474dc220

FString * __thiscall
UAnimNotifyState::GetNotifyName_Implementation
          (UAnimNotifyState *this,FString *__return_storage_ptr__)

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
  ::FString::ReplaceInline(__return_storage_ptr__,L"AnimNotifyState_",L"",CaseSensitive);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1474dd0e0

UClass * __cdecl UAnimNotifyState::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyState",
               &Z_Registration_Info_UClass_UAnimNotifyState.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState>,
               InternalVTableHelperCtorCaller<UAnimNotifyState>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState.InnerSingleton;
}

// NotifyBegin @ 1474ede10

void __thiscall
UAnimNotifyState::NotifyBegin
          (UAnimNotifyState *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          float param_3)

{
  return;
}

// NotifyBegin @ 1474ede20

void __thiscall
UAnimNotifyState::NotifyBegin
          (UAnimNotifyState *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          float param_3,FAnimNotifyEventReference *param_4)

{
  (**(code **)(this->_padding_ + 0x2c8))();
  Received_NotifyBegin(this,param_1,param_2,param_3,param_4);
  return;
}

// NotifyEnd @ 1474ee5b0

void __thiscall
UAnimNotifyState::NotifyEnd
          (UAnimNotifyState *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2)

{
  return;
}

// NotifyEnd @ 1474ee5c0

void __thiscall
UAnimNotifyState::NotifyEnd
          (UAnimNotifyState *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          FAnimNotifyEventReference *param_3)

{
  (**(code **)(this->_padding_ + 0x2e8))();
  Received_NotifyEnd(this,param_1,param_2,param_3);
  return;
}

// NotifyTick @ 1474eeb10

void __thiscall
UAnimNotifyState::NotifyTick
          (UAnimNotifyState *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          float param_3)

{
  return;
}

// NotifyTick @ 1474eeb20

void __thiscall
UAnimNotifyState::NotifyTick
          (UAnimNotifyState *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          float param_3,FAnimNotifyEventReference *param_4)

{
  (**(code **)(this->_padding_ + 0x2d8))();
  Received_NotifyTick(this,param_1,param_2,param_3,param_4);
  return;
}

// PostLoad @ 1474f17c0

void __thiscall UAnimNotifyState::PostLoad(UAnimNotifyState *this)

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
    if (*(UAnimNotifyState **)FVar5 == this) {
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

// PreSave @ 1474f1ba0

void __thiscall UAnimNotifyState::PreSave(UAnimNotifyState *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// Received_NotifyBegin @ 1474f29d0

bool __thiscall
UAnimNotifyState::Received_NotifyBegin
          (UAnimNotifyState *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          float param_3,FAnimNotifyEventReference *param_4)

{
  UMirrorDataTable *pUVar1;
  UObject *pUVar2;
  char cVar3;
  UFunction *pUVar4;
  USkeletalMeshComponent *local_58;
  UAnimSequenceBase *local_50;
  float local_48;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *local_40;
  TReferenceControllerBase<1> *pTStack_38;
  FAnimNotifyEvent *local_30;
  TObjectPtr<UMirrorDataTable_const_>_u_0 local_28;
  TObjectPtr<UObject_const_>_u_0 local_20;
  float local_18;
  undefined1 local_14;
  char local_10;
  
  local_10 = '\0';
  pTStack_38 = (param_4->ContextData).SharedReferenceCount.ReferenceController;
  local_40 = (param_4->ContextData).Object;
  if (pTStack_38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_38->SharedReferenceCount = (atomic<int>)((int)pTStack_38->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_30 = param_4->Notify;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_4->MirrorTable).field0_0x0.DebugPtr, pUVar1 != (UMirrorDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_28 = (param_4->MirrorTable).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_4->NotifySource).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_20 = (param_4->NotifySource).field0_0x0;
  local_18 = param_4->CurrentAnimTime;
  local_14 = param_4->bActiveContext;
  pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_UAnimNotifyState_Received_NotifyBegin);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_58);
  cVar3 = local_10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  return cVar3 != '\0';
}

// Received_NotifyEnd @ 1474f2af0

bool __thiscall
UAnimNotifyState::Received_NotifyEnd
          (UAnimNotifyState *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
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
  pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_UAnimNotifyState_Received_NotifyEnd);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_58);
  cVar3 = local_18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return cVar3 != '\0';
}

// Received_NotifyTick @ 1474f2c00

bool __thiscall
UAnimNotifyState::Received_NotifyTick
          (UAnimNotifyState *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          float param_3,FAnimNotifyEventReference *param_4)

{
  UMirrorDataTable *pUVar1;
  UObject *pUVar2;
  char cVar3;
  UFunction *pUVar4;
  USkeletalMeshComponent *local_58;
  UAnimSequenceBase *local_50;
  float local_48;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *local_40;
  TReferenceControllerBase<1> *pTStack_38;
  FAnimNotifyEvent *local_30;
  TObjectPtr<UMirrorDataTable_const_>_u_0 local_28;
  TObjectPtr<UObject_const_>_u_0 local_20;
  float local_18;
  undefined1 local_14;
  char local_10;
  
  local_10 = '\0';
  pTStack_38 = (param_4->ContextData).SharedReferenceCount.ReferenceController;
  local_40 = (param_4->ContextData).Object;
  if (pTStack_38 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_38->SharedReferenceCount = (atomic<int>)((int)pTStack_38->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_30 = param_4->Notify;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_4->MirrorTable).field0_0x0.DebugPtr, pUVar1 != (UMirrorDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_28 = (param_4->MirrorTable).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_4->NotifySource).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_20 = (param_4->NotifySource).field0_0x0;
  local_18 = param_4->CurrentAnimTime;
  local_14 = param_4->bActiveContext;
  pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_UAnimNotifyState_Received_NotifyTick);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_58);
  cVar3 = local_10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  return cVar3 != '\0';
}

// StaticRegisterNativesUAnimNotifyState @ 1474fadb0

void __cdecl UAnimNotifyState::StaticRegisterNativesUAnimNotifyState(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAnimNotifyState_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDefaultTriggerWeightThreshold @ 147505630

void __cdecl
UAnimNotifyState::execGetDefaultTriggerWeightThreshold
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetNotifyName @ 147505970

void __cdecl UAnimNotifyState::execGetNotifyName(UObject *param_1,FFrame *param_2,void *param_3)

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

