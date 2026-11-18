// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticStruct @ 147498590

UScriptStruct * __cdecl FAnimNode_LinkedAnimLayer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimLayer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimLayer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer,(UObject *)pUVar1,
                         L"AnimNode_LinkedAnimLayer");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_LinkedAnimLayer.OuterSingleton;
}

// OnInitializeAnimInstance @ 147498930

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnimNode_LinkedAnimLayer::OnInitializeAnimInstance
          (FAnimNode_LinkedAnimLayer *this,FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  int iVar1;
  UStruct *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FProperty *pFVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  uint uVar9;
  
  if (((int)this->_padding_ != (int)this->_padding_) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourcePropertyNames.Num() == DestPropertyNames.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_LinkedAnimLayer.cpp"
                         ,0x2d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar1 = (int)this->_padding_;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
            ((TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar1,Default);
  this_00 = *(UStruct **)&param_2->field_0x10;
  uVar9 = 0;
  if (0 < iVar1) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar9 < (int)this->_padding_) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = UStruct::FindPropertyByName
                         (this_00,*(FName *)(this->_padding_ + (longlong)(int)uVar9 * 8));
      uVar4 = 0;
      if ((int)uVar9 < (int)this->_padding_) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = uVar9 + 1;
      *(FProperty **)(this->_padding_ + lVar8 * 8) = pFVar5;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar1);
  }
  pUVar7 = (this->Interface).Class.field0_0x0.DebugPtr;
  if ((pUVar7 != (UClass *)0x0) &&
     (pUVar6 = Z_Construct_UClass_UAnimLayerInterface_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((((bVar3) && ((this->Interface).Class.field0_0x0.DebugPtr != (UClass *)0x0)) &&
        (lVar8 = this->_padding_, lVar8 != 0)) &&
       (pUVar7 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar7 != (UClass *)0x0)) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar8 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (this->_padding_ != 0)) {
        return;
      }
    }
  }
  InitializeSelfLayer(this,param_2);
  return;
}

// NeedsOnInitializeAnimInstance @ 147498b30

bool __thiscall
FAnimNode_LinkedAnimLayer::NeedsOnInitializeAnimInstance(FAnimNode_LinkedAnimLayer *this)

{
  return true;
}

// InitializeProperties @ 147498b40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnimNode_LinkedAnimLayer::InitializeProperties
          (FAnimNode_LinkedAnimLayer *this,UObject *param_1,UClass *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  IAnimClassInterface *pIVar6;
  FAnimBlueprintFunction *pFVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong local_res20;
  FName local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  
  if (((int)this->_padding_ != (int)this->_padding_) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourcePropertyNames.Num() == DestPropertyNames.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_LinkedAnimLayer.cpp"
                         ,0x96,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_48 = &this->_padding_;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
            ((TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)local_48,(int)this->_padding_,
             Default);
  pIVar6 = IAnimClassInterface::GetFromClass(param_2);
  if ((pIVar6 == (IAnimClassInterface *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetAnimClassInterface",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_LinkedAnimLayer.cpp"
                         ,0xa4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)(this->_padding_ + 0xb8))(this,&local_58);
  pFVar7 = IAnimClassInterface::FindAnimBlueprintFunction(pIVar6,&local_58);
  if ((pFVar7 != (FAnimBlueprintFunction *)0x0) && (uVar12 = 0, 0 < (int)this->_padding_)) {
    local_res20 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (int)this->_padding_) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_40 = local_res20 * 8;
      lVar11 = (longlong)(pFVar7->InputPropertyData).ArrayNum;
      local_50 = (longlong *)(this->_padding_ + local_40);
      uVar8 = 0;
      lVar10 = 0;
      if (0 < lVar11) {
        lVar9 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar8 < (pFVar7->InputPropertyData).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(longlong *)((pFVar7->InputPropertyData).AllocatorInstance.Data + lVar9) == *local_50
             ) {
            uVar5 = 0;
            if ((int)uVar8 < (pFVar7->InputPropertyData).ArrayNum) {
              uVar5 = ~uVar8 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            plVar3 = local_48;
            uVar1 = *(undefined8 *)
                     ((pFVar7->InputPropertyData).AllocatorInstance.Data + lVar10 * 0x18 + 0x10);
            uVar8 = 0;
            if ((int)uVar12 < (int)local_48[1]) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined8 *)(local_40 + *plVar3) = uVar1;
            break;
          }
          uVar8 = uVar8 + 1;
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0x18;
        } while (lVar10 < lVar11);
      }
      uVar12 = uVar12 + 1;
      local_res20 = local_res20 + 1;
    } while ((int)uVar12 < (int)this->_padding_);
  }
  return;
}

// GetDynamicLinkFunctionName @ 147498e20

FName __thiscall
FAnimNode_LinkedAnimLayer::GetDynamicLinkFunctionName(FAnimNode_LinkedAnimLayer *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->Layer;
  return in_RDX;
}

// GetDynamicLinkTarget @ 147498e40

UAnimInstance * __thiscall
FAnimNode_LinkedAnimLayer::GetDynamicLinkTarget
          (FAnimNode_LinkedAnimLayer *this,UAnimInstance *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  
  pUVar4 = (this->Interface).Class.field0_0x0.DebugPtr;
  if (pUVar4 != (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_UAnimLayerInterface_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && ((this->Interface).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        if (((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) == 0)) &&
           (this->_padding_ != 0)) {
          pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
          bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
          if (bVar2) {
            return (UAnimInstance *)this->_padding_;
          }
        }
        return (UAnimInstance *)0x0;
      }
    }
  }
  return param_1;
}

// GetTargetClass @ 147498f10

UClass * __thiscall FAnimNode_LinkedAnimLayer::GetTargetClass(FAnimNode_LinkedAnimLayer *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->Interface).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UAnimLayerInterface_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (this->Interface).Class.field0_0x0.DebugPtr;
      }
    }
  }
  return (UClass *)0x0;
}

// CanTeardownLinkedInstance @ 147498f80

bool __thiscall
FAnimNode_LinkedAnimLayer::CanTeardownLinkedInstance
          (FAnimNode_LinkedAnimLayer *this,UAnimInstance *param_1)

{
  USkeletalMeshComponent *pUVar1;
  FAnimSubsystem_SharedLinkedAnimLayers *this_00;
  FLinkedAnimLayerInstanceData *pFVar2;
  
  pUVar1 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  this_00 = FAnimSubsystem_SharedLinkedAnimLayers::GetFromMesh(pUVar1);
  if (this_00 != (FAnimSubsystem_SharedLinkedAnimLayers *)0x0) {
    pFVar2 = FAnimSubsystem_SharedLinkedAnimLayers::FindInstanceData(this_00,param_1);
    return pFVar2 == (FLinkedAnimLayerInstanceData *)0x0;
  }
  return true;
}

// CleanupSharedLinkedLayersData @ 1474c4410

void __thiscall
FAnimNode_LinkedAnimLayer::CleanupSharedLinkedLayersData
          (FAnimNode_LinkedAnimLayer *this,UAnimInstance *param_1,UAnimInstance *param_2)

{
  USkeletalMeshComponent *pUVar1;
  FAnimSubsystem_SharedLinkedAnimLayers *this_00;
  FLinkedAnimLayerInstanceData *pFVar2;
  FName *pFVar3;
  undefined1 local_res18 [16];
  
  if (param_2 != (UAnimInstance *)0x0) {
    pUVar1 = UAnimInstance::GetSkelMeshComponentChecked(param_2);
    this_00 = FAnimSubsystem_SharedLinkedAnimLayers::GetFromMesh(pUVar1);
    if ((this_00 != (FAnimSubsystem_SharedLinkedAnimLayers *)0x0) &&
       (pFVar2 = FAnimSubsystem_SharedLinkedAnimLayers::FindInstanceData(this_00,param_2),
       pFVar2 != (FLinkedAnimLayerInstanceData *)0x0)) {
      pFVar3 = (FName *)(**(code **)(this->_padding_ + 0xb8))(this,local_res18);
      FAnimSubsystem_SharedLinkedAnimLayers::RemoveLinkedFunction(this_00,param_2,*pFVar3);
    }
  }
  return;
}

// InitializeSelfLayer @ 1474e8fe0

void __thiscall
FAnimNode_LinkedAnimLayer::InitializeSelfLayer
          (FAnimNode_LinkedAnimLayer *this,UAnimInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UClass *pUVar4;
  IAnimClassInterface *pIVar5;
  USkeletalMeshComponent *pUVar6;
  IAnimClassInterface *pIVar7;
  TObjectPtr<UAnimInstance>_u_0 this_00;
  TObjectPtr<UAnimInstance>_u_0 TVar8;
  TObjectPtr<UAnimInstance>_u_0 local_res8;
  
  if ((this->_padding_ == 0) || ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) != 0)) {
    this_00.DebugPtr = (UAnimInstance *)0x0;
  }
  else {
    this_00.DebugPtr = (UAnimInstance *)0x0;
    if (this->_padding_ != 0) {
      pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
      if (bVar2) {
        this_00 = (TObjectPtr<UAnimInstance>_u_0)this->_padding_;
      }
    }
    if (this_00.DebugPtr != (UAnimInstance *)0x0) {
      pIVar5 = IAnimClassInterface::GetFromClass(*(UClass **)&(this_00.DebugPtr)->field_0x10);
      goto LAB_1474e9060;
    }
  }
  pIVar5 = (IAnimClassInterface *)0x0;
LAB_1474e9060:
  TVar8.DebugPtr = (UAnimInstance *)0x0;
  pUVar6 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  if ((pUVar6 == (USkeletalMeshComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MeshComp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimNode_LinkedAnimLayer.cpp"
                         ,0x58,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->_padding_ != 0) {
    FAnimNode_LinkedAnimGraph::DynamicUnlink((FAnimNode_LinkedAnimGraph *)this,param_1);
  }
  if (((this_00.DebugPtr != (UAnimInstance *)0x0) && (this_00.DebugPtr != param_1)) &&
     (cVar3 = (**(code **)(this->_padding_ + 200))(this,this_00.DebugPtr), cVar3 != '\0')) {
    UAnimInstance::UninitializeAnimation(this_00.DebugPtr);
    local_res8 = this_00;
    TArray<TObjectPtr<UAnimInstance>,TSizedDefaultAllocator<32>_>::Remove
              (&pUVar6->LinkedInstances,(TObjectPtr<UAnimInstance> *)&local_res8.ObjectPtr);
    UObjectBaseUtility::MarkAsGarbage((UObjectBaseUtility *)this_00.DebugPtr);
    this_00.DebugPtr = TVar8.DebugPtr;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->_padding_ = (longlong)param_1;
  FAnimNode_LinkedAnimGraph::DynamicLink((FAnimNode_LinkedAnimGraph *)this,param_1);
  pUVar4 = *(UClass **)&param_1->field_0x10;
  (**(code **)(this->_padding_ + 0xa0))(this,param_1,pUVar4);
  pIVar7 = IAnimClassInterface::GetFromClass(pUVar4);
  if (((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) == 0)) &&
     (this->_padding_ != 0)) {
    pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar2) {
      TVar8 = (TObjectPtr<UAnimInstance>_u_0)this->_padding_;
    }
  }
  if (this_00.DebugPtr != TVar8.DebugPtr) {
    FAnimNode_LinkedAnimGraph::RequestBlend((FAnimNode_LinkedAnimGraph *)this,pIVar5,pIVar7);
  }
  return;
}

// InitializeSourceProperties @ 1474e91b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnimNode_LinkedAnimLayer::InitializeSourceProperties
          (FAnimNode_LinkedAnimLayer *this,UAnimInstance *param_1)

{
  int iVar1;
  UStruct *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FProperty *pFVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar1 = (int)this->_padding_;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_>::SetNumZeroed
            ((TArray<FProperty_*,TSizedDefaultAllocator<32>_> *)&this->_padding_,iVar1,Default);
  this_00 = *(UStruct **)&param_1->field_0x10;
  uVar6 = 0;
  if (0 < iVar1) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = UStruct::FindPropertyByName
                         (this_00,*(FName *)(this->_padding_ + (longlong)(int)uVar6 * 8));
      uVar4 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = uVar6 + 1;
      *(FProperty **)(this->_padding_ + lVar7 * 8) = pFVar5;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
  }
  return;
}

// OnUninitializeAnimInstance @ 1474ef480

void __thiscall
FAnimNode_LinkedAnimLayer::OnUninitializeAnimInstance
          (FAnimNode_LinkedAnimLayer *this,UAnimInstance *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  USkeletalMeshComponent *pUVar3;
  FAnimSubsystem_SharedLinkedAnimLayers *this_00;
  FLinkedAnimLayerInstanceData *pFVar4;
  UAnimInstance *pUVar5;
  
  if (this->_padding_ == 0) {
    return;
  }
  if ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) != 0) {
    return;
  }
  if (this->_padding_ != 0) {
    pUVar2 = Z_Construct_UClass_UAnimInstance_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      pUVar5 = (UAnimInstance *)this->_padding_;
      goto LAB_1474ef4d4;
    }
  }
  pUVar5 = (UAnimInstance *)0x0;
LAB_1474ef4d4:
  if ((pUVar5 != (UAnimInstance *)0x0) && (pUVar5 != param_1)) {
    pUVar3 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
    this_00 = FAnimSubsystem_SharedLinkedAnimLayers::GetFromMesh(pUVar3);
    if ((this_00 != (FAnimSubsystem_SharedLinkedAnimLayers *)0x0) &&
       (pFVar4 = FAnimSubsystem_SharedLinkedAnimLayers::FindInstanceData(this_00,pUVar5),
       pFVar4 != (FLinkedAnimLayerInstanceData *)0x0)) {
      FAnimNode_LinkedAnimGraph::DynamicUnlink((FAnimNode_LinkedAnimGraph *)this,param_1);
      this->_padding_ = 0;
      CleanupSharedLinkedLayersData(this,param_1,pUVar5);
    }
  }
  return;
}

// SetLinkedLayerInstance @ 1474f8560

void __thiscall
FAnimNode_LinkedAnimLayer::SetLinkedLayerInstance
          (FAnimNode_LinkedAnimLayer *this,UAnimInstance *param_1,UAnimInstance *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  USkeletalMeshComponent *pUVar6;
  FAnimSubsystem_SharedLinkedAnimLayers *this_00;
  FLinkedAnimLayerInstanceData *pFVar7;
  FName *pFVar8;
  UAnimInstance *this_01;
  UAnimInstance *pUVar9;
  undefined1 local_res8 [8];
  
  if (((this->_padding_ == 0) || ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) != 0)) ||
     (this->_padding_ == 0)) {
LAB_1474f85b6:
    this_01 = (UAnimInstance *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (!bVar3) goto LAB_1474f85b6;
    this_01 = (UAnimInstance *)this->_padding_;
  }
  pUVar9 = (UAnimInstance *)0x0;
  pUVar4 = (this->Interface).Class.field0_0x0.DebugPtr;
  if ((pUVar4 == (UClass *)0x0) ||
     (pUVar5 = Z_Construct_UClass_UAnimLayerInterface_NoRegister(), pUVar5 == (UClass *)0x0)) {
LAB_1474f863b:
    if (param_2 == (UAnimInstance *)0x0) {
      InitializeSelfLayer(this,param_1);
      goto LAB_1474f865b;
    }
  }
  else {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((!bVar3) || ((this->Interface).Class.field0_0x0.DebugPtr == (UClass *)0x0)) ||
       ((lVar2 = this->_padding_, lVar2 == 0 ||
        (pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar4 == (UClass *)0x0))))
    goto LAB_1474f863b;
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) || (this->_padding_ == 0)) goto LAB_1474f863b;
  }
  FAnimNode_LinkedAnimGraph::ReinitializeLinkedAnimInstance
            ((FAnimNode_LinkedAnimGraph *)this,param_1,param_2);
LAB_1474f865b:
  if (((this->_padding_ != 0) && ((*(uint *)(this->_padding_ + 8) >> 0x1e & 1) == 0)) &&
     (this->_padding_ != 0)) {
    pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar3) {
      pUVar9 = (UAnimInstance *)this->_padding_;
    }
  }
  if ((this_01 != pUVar9) && (this_01 != (UAnimInstance *)0x0)) {
    pUVar6 = UAnimInstance::GetSkelMeshComponentChecked(this_01);
    this_00 = FAnimSubsystem_SharedLinkedAnimLayers::GetFromMesh(pUVar6);
    if ((this_00 != (FAnimSubsystem_SharedLinkedAnimLayers *)0x0) &&
       (pFVar7 = FAnimSubsystem_SharedLinkedAnimLayers::FindInstanceData(this_00,this_01),
       pFVar7 != (FLinkedAnimLayerInstanceData *)0x0)) {
      pFVar8 = (FName *)(**(code **)(this->_padding_ + 0xb8))(this,local_res8);
      FAnimSubsystem_SharedLinkedAnimLayers::RemoveLinkedFunction(this_00,this_01,*pFVar8);
    }
  }
  return;
}

