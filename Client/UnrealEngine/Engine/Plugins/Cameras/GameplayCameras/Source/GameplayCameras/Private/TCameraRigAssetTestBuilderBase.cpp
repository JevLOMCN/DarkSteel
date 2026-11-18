// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 8

// MakeRootNode<UArrayCameraNode> @ 14d652fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void> *
__thiscall
UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
MakeRootNode<UArrayCameraNode>
          (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *this,
          TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UArrayCameraNode,void>
          *__return_storage_ptr__)

{
  UCameraRigAsset *pUVar1;
  UClass *pUVar2;
  UArrayCameraNode *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98._8_8_ = this->CameraRig;
  __return_storage_ptr__->_padding_ = (longlong)this;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ =
       (longlong)
       &
       ___7__TCameraNodeTestBuilder_VFCameraRigAssetTestBuilder_Test_Cameras_UE__VUArrayCameraNode__X_Test_Cameras_UE__6B_
  ;
  if ((UCameraRigAsset *)local_98._8_8_ == (UCameraRigAsset *)0x0) {
    local_98._8_8_ = GetTransientPackage();
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)local_98._8_8_,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UArrayCameraNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  pUVar3 = (UArrayCameraNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  __return_storage_ptr__->CameraNode = pUVar3;
  __return_storage_ptr__->_padding_ = (longlong)pUVar3;
  pUVar1 = this->CameraRig;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UArrayCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar3);
  }
  (pUVar1->RootNode).field0_0x0.DebugPtr = (UCameraNode *)pUVar3;
  return __return_storage_ptr__;
}

// MakeRootNode<UCameraRigCameraNode> @ 14d6530e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UCameraRigCameraNode,void> *
__thiscall
UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
MakeRootNode<UCameraRigCameraNode>
          (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *this,
          TCameraNodeTestBuilder<UE::Cameras::Test::FCameraRigAssetTestBuilder,UCameraRigCameraNode,void>
          *__return_storage_ptr__)

{
  UCameraRigAsset *pUVar1;
  UClass *pUVar2;
  UCameraRigCameraNode *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98._8_8_ = this->CameraRig;
  __return_storage_ptr__->_padding_ = (longlong)this;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ =
       (longlong)
       &
       ___7__TCameraNodeTestBuilder_VFCameraRigAssetTestBuilder_Test_Cameras_UE__VUCameraRigCameraNode__X_Test_Cameras_UE__6B_
  ;
  if ((UCameraRigAsset *)local_98._8_8_ == (UCameraRigAsset *)0x0) {
    local_98._8_8_ = GetTransientPackage();
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)local_98._8_8_,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UCameraRigCameraNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  pUVar3 = (UCameraRigCameraNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  __return_storage_ptr__->CameraNode = pUVar3;
  __return_storage_ptr__->_padding_ = (longlong)pUVar3;
  pUVar1 = this->CameraRig;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UCameraRigCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar3);
  }
  (pUVar1->RootNode).field0_0x0.DebugPtr = (UCameraNode *)pUVar3;
  return __return_storage_ptr__;
}

// AddBlendableParameter @ 14d65b1a0

FCameraRigAssetTestBuilder * __thiscall
UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
AddBlendableParameter
          (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *this,
          FString *param_1,ECameraVariableType param_2,FString *param_3,FName param_4)

{
  int iVar1;
  UCameraNode *pUVar2;
  code *pcVar3;
  bool bVar4;
  FCameraRigAssetTestBuilder *pFVar5;
  UObject **ppUVar6;
  UClass *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pwVar9 = L"";
  if ((this->NamedObjectRegistry).Object == (FNamedObjectRegistry *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FCameraRigAssetTestBuilder *)(*pcVar3)();
      return pFVar5;
    }
  }
  ppUVar6 = TMapBase<FString,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>_>
            ::Find((TMapBase<FString,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>_>
                    *)&((this->NamedObjectRegistry).Object)->NamedObjects,param_3);
  if ((ppUVar6 != (UObject **)0x0) &&
     (pUVar2 = (UCameraNode *)*ppUVar6, pUVar2 != (UCameraNode *)0x0)) {
    pUVar7 = Z_Construct_UClass_UCameraNode_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      pFVar5 = AddBlendableParameter(this,param_1,param_2,pUVar2,param_4);
      return pFVar5;
    }
    pFVar8 = GetTypeName<UCameraNode>(&local_38);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    pFVar8 = GetFullNameForCastLogError<UObject>(&local_28,(UObject *)pUVar2);
    if ((pFVar8->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar9,pwVar10);
  }
  pFVar8 = GetTypeName<UCameraNode>(&local_18);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar9);
}

// AddBlendableParameter @ 14d65b2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FCameraRigAssetTestBuilder * __thiscall
UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
AddBlendableParameter
          (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *this,
          FString *param_1,ECameraVariableType param_2,UCameraNode *param_3,FName param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  UCameraRigAsset *pUVar3;
  FScriptContainerElement *_Src;
  FNamedObjectRegistry *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FCameraRigAssetTestBuilder *pFVar10;
  longlong *plVar11;
  undefined1 auStackY_148 [32];
  UObject *local_f8;
  TPairInitializer<FString_const_&,UObject_*_const_&> local_f0;
  FString *local_e0;
  UObject ***local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pUVar3 = this->CameraRig;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = Z_Construct_UClass_UCameraObjectInterfaceBlendableParameter_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar8);
  local_c8._8_8_ = pUVar3;
  pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar11 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  puVar1 = &pUVar9[1].field_0x8;
  if ((FString *)puVar1 != param_1) {
    iVar7 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    *(int *)&pUVar9[1].field_0x10 = iVar7;
    if ((iVar7 == 0) && (*(int *)&pUVar9[1].field_0x14 == 0)) {
      *(undefined4 *)&pUVar9[1].field_0x14 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,*(int *)&pUVar9[1].field_0x14,(ForAnyElementType *)puVar1,iVar7,
                 (int *)&pUVar9[1].field_0x14);
      if (iVar7 != 0) {
        memcpy(*(void **)puVar1,_Src,(longlong)iVar7 * 2);
      }
    }
  }
  *(ECameraVariableType *)&pUVar9[2].field_0x10 = param_2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)param_3);
  }
  *(UCameraNode **)&pUVar9[1].field_0x18 = param_3;
  *(uint *)&pUVar9[1].field_0x20 = param_4.ComparisonIndex.Value;
  *(uint *)&pUVar9[1].field_0x24 = param_4.Number;
  if (((this->NamedObjectRegistry).Object == (FNamedObjectRegistry *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FCameraRigAssetTestBuilder *)(*pcVar5)();
    return pFVar10;
  }
  pFVar4 = (this->NamedObjectRegistry).Object;
  local_f0.Value = (UObject **)pUVar9;
  if (((param_1->Data).ArrayNum < 2) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<102804706564243550>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\GameplayCamerasTestBuilder.h"
                         ,0x5e,"InObject && !InName.IsEmpty()"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FCameraRigAssetTestBuilder *)(*pcVar5)();
    return pFVar10;
  }
  local_d8 = &local_f0.Value;
  local_e0 = param_1;
  TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,UObject_*_const_&>_>
            ((TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
              *)&pFVar4->NamedObjects,&local_f0,(bool *)&local_e0);
  pUVar3 = this->CameraRig;
  local_f8 = pUVar9;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(pUVar9);
  }
  if ((((UObject **)pUVar3->_padding_ <= &local_f8) &&
      (&local_f8 < (UObject **)pUVar3->_padding_ + *(int *)((longlong)&pUVar3->_padding_ + 4))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FCameraRigAssetTestBuilder *)(*pcVar5)();
    return pFVar10;
  }
  iVar7 = (int)pUVar3->_padding_;
  piVar2 = (int *)((longlong)&pUVar3->_padding_ + 4);
  if (iVar7 == *piVar2) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar3->_padding_,piVar2);
  }
  *(int *)&pUVar3->_padding_ = iVar7 + 1;
  *(UObject **)(pUVar3->_padding_ + (longlong)iVar7 * 8) = local_f8;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_f8);
  }
  return (FCameraRigAssetTestBuilder *)this;
}

// GetNamedObjectRegistry @ 14d660030

TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> * __thiscall
UE::Cameras::Test::
TCameraRigAssetTestBuilderBase<UE::Cameras::Test::TScopedCameraRigAssetTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder>_>
::GetNamedObjectRegistry
          (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::TScopedCameraRigAssetTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder>_>
           *this,TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->NamedObjectRegistry).Object;
  pTVar1 = (this->NamedObjectRegistry).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetNamedObjectRegistry @ 14d660060

TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> * __thiscall
UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
GetNamedObjectRegistry
          (TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *this,
          TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->NamedObjectRegistry).Object;
  pTVar1 = (this->NamedObjectRegistry).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// Initialize @ 14d661eb0

void __thiscall
UE::Cameras::Test::
TCameraRigAssetTestBuilderBase<UE::Cameras::Test::TScopedCameraRigAssetTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder>_>
::Initialize(TCameraRigAssetTestBuilderBase<UE::Cameras::Test::TScopedCameraRigAssetTestBuilder<UE::Cameras::Test::FCameraEvaluationContextTestBuilder>_>
             *this,TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *param_1,FName param_2,
            UObject *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UCameraRigAsset *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FNamedObjectRegistry *pFVar9;
  TPairInitializer<FString_const_&,UObject_*_const_&> local_res8;
  FName local_res18 [2];
  FNamedObjectRegistry *local_78;
  FSharedReferencer<1> local_70;
  FString *local_68;
  UObject ***local_60;
  FNamedObjectRegistry *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FString local_48;
  
  local_res18[0] = param_2;
  if (param_3 == (UObject *)0x0) {
    param_3 = (UObject *)GetTransientPackage();
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pUVar6 = NewObject<UCameraRigAsset>
                     (param_3,local_res18[0],RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  this->CameraRig = pUVar6;
  this->_padding_ = (longlong)pUVar6;
  pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar9 = param_1->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = (this->NamedObjectRegistry).Object;
  pTStack_50 = (this->NamedObjectRegistry).SharedReferenceCount.ReferenceController;
  (this->NamedObjectRegistry).Object = pFVar9;
  (this->NamedObjectRegistry).SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  if ((this->NamedObjectRegistry).Object != (FNamedObjectRegistry *)0x0) goto LAB_14d6620cf;
  pTVar7 = ::operator_new(0x70);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FNamedObjectRegistry *)&DAT_00000010;
LAB_14d66201b:
    if (((pFVar9->_padding_ == 0) || (pFVar9->_padding_ == 0)) ||
       (*(int *)(pFVar9->_padding_ + 8) < 1)) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9->_padding_ = (longlong)pFVar9;
      if (pTVar8 != (TReferenceControllerBase<1> *)pFVar9->_padding_) {
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)pFVar9->_padding_;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))();
          }
        }
        pFVar9->_padding_ = (longlong)pTVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FNamedObjectRegistry *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNamedObjectRegistry_Test_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3]._padding_ = 0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar7[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0;
    pTVar7[6]._padding_ = 0;
    pTVar8 = pTVar7;
    if (pFVar9 != (FNamedObjectRegistry *)0x0) goto LAB_14d66201b;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = pFVar9;
  local_70.ReferenceController = pTVar8;
  if (&this->NamedObjectRegistry !=
      (TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *)&local_78) {
    (this->NamedObjectRegistry).Object = pFVar9;
    local_78 = (FNamedObjectRegistry *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NamedObjectRegistry).SharedReferenceCount,&local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_14d6620cf:
  if ((this->NamedObjectRegistry).Object == (FNamedObjectRegistry *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar9 = (this->NamedObjectRegistry).Object;
  local_68 = ::FName::ToString(local_res18,&local_48);
  local_res8.Value = (UObject **)this->CameraRig;
  if (((UCameraRigAsset *)local_res8.Value == (UCameraRigAsset *)0x0) ||
     ((local_68->Data).ArrayNum < 2)) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<102804706564243550>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\GameplayCamerasTestBuilder.h"
                       ,0x5e,"InObject && !InName.IsEmpty()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_60 = &local_res8.Value;
  TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,UObject_*_const_&>_>
            ((TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
              *)&pFVar9->NamedObjects,&local_res8,(bool *)&local_68);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Initialize @ 14d6621d0

void __thiscall
UE::Cameras::Test::TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder>::
Initialize(TCameraRigAssetTestBuilderBase<UE::Cameras::Test::FCameraRigAssetTestBuilder> *this,
          TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *param_1,FName param_2,
          UObject *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UCameraRigAsset *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FNamedObjectRegistry *pFVar9;
  TPairInitializer<FString_const_&,UObject_*_const_&> local_res8;
  FName local_res18 [2];
  FNamedObjectRegistry *local_78;
  FSharedReferencer<1> local_70;
  FString *local_68;
  UObject ***local_60;
  FNamedObjectRegistry *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  FString local_48;
  
  local_res18[0] = param_2;
  if (param_3 == (UObject *)0x0) {
    param_3 = (UObject *)GetTransientPackage();
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pUVar6 = NewObject<UCameraRigAsset>
                     (param_3,local_res18[0],RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  this->CameraRig = pUVar6;
  this->_padding_ = (longlong)pUVar6;
  pTVar7 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar9 = param_1->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = (this->NamedObjectRegistry).Object;
  pTStack_50 = (this->NamedObjectRegistry).SharedReferenceCount.ReferenceController;
  (this->NamedObjectRegistry).Object = pFVar9;
  (this->NamedObjectRegistry).SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  if ((this->NamedObjectRegistry).Object != (FNamedObjectRegistry *)0x0) goto LAB_14d6623ef;
  pTVar7 = ::operator_new(0x70);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FNamedObjectRegistry *)&DAT_00000010;
LAB_14d66233b:
    if (((pFVar9->_padding_ == 0) || (pFVar9->_padding_ == 0)) ||
       (*(int *)(pFVar9->_padding_ + 8) < 1)) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9->_padding_ = (longlong)pFVar9;
      if (pTVar8 != (TReferenceControllerBase<1> *)pFVar9->_padding_) {
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)pFVar9->_padding_;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))();
          }
        }
        pFVar9->_padding_ = (longlong)pTVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FNamedObjectRegistry *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNamedObjectRegistry_Test_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    pTVar7[3]._padding_ = 0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar7[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0;
    pTVar7[6]._padding_ = 0;
    pTVar8 = pTVar7;
    if (pFVar9 != (FNamedObjectRegistry *)0x0) goto LAB_14d66233b;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = pFVar9;
  local_70.ReferenceController = pTVar8;
  if (&this->NamedObjectRegistry !=
      (TSharedPtr<UE::Cameras::Test::FNamedObjectRegistry,1> *)&local_78) {
    (this->NamedObjectRegistry).Object = pFVar9;
    local_78 = (FNamedObjectRegistry *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NamedObjectRegistry).SharedReferenceCount,&local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_14d6623ef:
  if ((this->NamedObjectRegistry).Object == (FNamedObjectRegistry *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar9 = (this->NamedObjectRegistry).Object;
  local_68 = ::FName::ToString(local_res18,&local_48);
  local_res8.Value = (UObject **)this->CameraRig;
  if (((UCameraRigAsset *)local_res8.Value == (UCameraRigAsset *)0x0) ||
     ((local_68->Data).ArrayNum < 2)) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<102804706564243550>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Tests\\GameplayCamerasTestBuilder.h"
                       ,0x5e,"InObject && !InName.IsEmpty()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_60 = &local_res8.Value;
  TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,UObject_*_const_&>_>
            ((TSet<TTuple<FString,UObject_*>,TDefaultMapHashableKeyFuncs<FString,UObject_*,0>,FDefaultSetAllocator>
              *)&pFVar9->NamedObjects,&local_res8,(bool *)&local_68);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

