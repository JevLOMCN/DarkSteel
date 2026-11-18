// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 11

// StaticClass @ 14cedbe30

UClass * __cdecl UPCGGeometryBlueprintElement::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGeometryBlueprintElement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGGeometryBlueprintElement",
               &Z_Registration_Info_UClass_UPCGGeometryBlueprintElement.InnerSingleton,
               StaticRegisterNativesUPCGGeometryBlueprintElement,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGeometryBlueprintElement>,
               InternalVTableHelperCtorCaller<UPCGGeometryBlueprintElement>,local_res8,
               UPCGBlueprintBaseElement::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGeometryBlueprintElement.InnerSingleton;
}

// UPCGGeometryBlueprintElement @ 14cee3980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGGeometryBlueprintElement * __thiscall
UPCGGeometryBlueprintElement::UPCGGeometryBlueprintElement
          (UPCGGeometryBlueprintElement *this,FVTableHelper *param_1)

{
  UPCGBlueprintBaseElement::UPCGBlueprintBaseElement((UPCGBlueprintBaseElement *)this,param_1);
  *(undefined ***)this = &___7UPCGGeometryBlueprintElement__6B_;
  return this;
}

// UPCGGeometryBlueprintElement @ 14cee39b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

UPCGGeometryBlueprintElement * __thiscall
UPCGGeometryBlueprintElement::UPCGGeometryBlueprintElement(UPCGGeometryBlueprintElement *this)

{
  longlong lVar1;
  int iVar2;
  FObjectInitializer *pFVar3;
  FText *pFVar4;
  FPCGDataTypeIdentifier *pFVar5;
  FPCGPinProperties *pFVar6;
  FPCGDataTypeIdentifier local_28;
  
  pFVar3 = FObjectInitializer::Get();
  UPCGBlueprintBaseElement::UPCGBlueprintBaseElement((UPCGBlueprintBaseElement *)this,pFVar3);
  this->field_0x28 = 0;
  *(undefined ***)this = &___7UPCGGeometryBlueprintElement__6B_;
  *(undefined2 *)&this->field_0x50 = 0;
  iVar2 = *(int *)&this->field_0x38;
  if (iVar2 == *(int *)&this->field_0x3c) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)&this->field_0x30,(int *)&this->field_0x3c);
  }
  *(int *)&this->field_0x38 = iVar2 + 1;
  lVar1 = *(longlong *)&this->field_0x30;
  pFVar4 = FText::GetEmpty();
  pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,DynamicMesh);
  pFVar6 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)((longlong)iVar2 * 0x30 + lVar1),
                      &PCGPinConstants::DefaultInputLabel,pFVar5,true,true,pFVar4);
  pFVar6->PinStatus = Required;
  iVar2 = *(int *)&this->field_0x48;
  if (iVar2 == *(int *)&this->field_0x4c) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)&this->field_0x40,(int *)&this->field_0x4c);
  }
  *(int *)&this->field_0x48 = iVar2 + 1;
  lVar1 = *(longlong *)&this->field_0x40;
  pFVar4 = FText::GetEmpty();
  pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,DynamicMesh);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)((longlong)iVar2 * 0x30 + lVar1),
             &PCGPinConstants::DefaultOutputLabel,pFVar5,true,true,pFVar4);
  return this;
}

// ~UPCGGeometryBlueprintElement @ 14cee4b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGGeometryBlueprintElement::~UPCGGeometryBlueprintElement(UPCGGeometryBlueprintElement *this)

{
  *(undefined ***)this = &___7UPCGGeometryBlueprintElement__6B_;
  UPCGBlueprintBaseElement::~UPCGBlueprintBaseElement((UPCGBlueprintBaseElement *)this);
  return;
}

// CopyOrStealInputData @ 14ceea0b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGDynamicMeshData * __thiscall
UPCGGeometryBlueprintElement::CopyOrStealInputData
          (UPCGGeometryBlueprintElement *this,FPCGTaggedData *param_1)

{
  FPCGContext *pFVar1;
  bool bVar2;
  UPCGDynamicMeshData *pUVar3;
  FText *pFVar4;
  UClass *pUVar5;
  UPCGSpatialData *pUVar6;
  FObjectPtr_u_0 local_res8;
  FText local_18;
  
  if ((this->field_0x28 == '\0') &&
     (bVar2 = UPCGBlueprintBaseElement::IsCacheableOverride((UPCGBlueprintBaseElement *)this),
     !bVar2)) {
    pUVar3 = IPCGDynamicMeshBaseElement::CopyOrSteal(param_1,*(FPCGContext **)&this->field_0x60);
    return pUVar3;
  }
  pFVar1 = *(FPCGContext **)&this->field_0x60;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"PCGGeometryBlueprintElement",L"SettingsDifferent",
                      L"In PCG Geometry Blueprint Element, the default settings were changed (not cacheable and not verifying outputs used multiple times).Use the normal BP element if you want this behavior. Will always copy and never steal."
                     );
  PCGLog::LogWarningOnGraph(pFVar4,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  local_res8 = (FObjectPtr_u_0)(param_1->Data).Data.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if ((UPCGData *)local_res8.Handle == (UPCGData *)0x0) {
      return (UPCGDynamicMeshData *)0x0;
    }
    UE::GC::MarkAsReachable(local_res8.Handle);
  }
  if ((UPCGData *)local_res8.Handle != (UPCGData *)0x0) {
    pUVar5 = Z_Construct_UClass_UPCGDynamicMeshData_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
    if ((bVar2) && ((UPCGData *)local_res8.Handle != (UPCGData *)0x0)) {
      pUVar6 = (UPCGSpatialData *)
               (**(code **)(*(longlong *)local_res8.Handle + 0x310))
                         (local_res8.Handle,*(undefined8 *)&this->field_0x60,1);
      pUVar3 = CastChecked<UPCGDynamicMeshData,UPCGSpatialData>(pUVar6);
      return pUVar3;
    }
  }
  return (UPCGDynamicMeshData *)0x0;
}

// ExecuteWithContext_Implementation @ 14cef1720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGGeometryBlueprintElement::ExecuteWithContext_Implementation
          (UPCGGeometryBlueprintElement *this,FPCGContext *param_1,FPCGDataCollection *param_2,
          FPCGDataCollection *param_3)

{
  return;
}

// Execute_Implementation @ 14cef1730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGGeometryBlueprintElement::Execute_Implementation
          (UPCGGeometryBlueprintElement *this,FPCGDataCollection *param_1,
          FPCGDataCollection *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FName FVar5;
  FPCGContext *pFVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FName *pFVar13;
  UClass *pUVar14;
  UFunction *pUVar15;
  FPCGTaggedData *this_00;
  FText *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FObjectPtr_u_0 *pFVar20;
  ForAnyElementType FVar21;
  ForAnyElementType FVar22;
  longlong lVar23;
  undefined1 local_res20 [8];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TObjectPtr<UDynamicMesh>_u_0 local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  uint local_90;
  FObjectPtr_u_0 local_88;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_80;
  FObjectPtr_u_0 *local_70;
  undefined4 local_68;
  undefined1 local_64 [20];
  FName local_50;
  FText local_48;
  
  if (this->field_0x50 == '\0') {
    if (*(int *)&this->field_0x38 == 1) goto LAB_14cef17f3;
LAB_14cef176a:
    bVar10 = false;
  }
  else {
    if (*(int *)&this->field_0x38 != 0) goto LAB_14cef176a;
LAB_14cef17f3:
    bVar10 = true;
  }
  if (this->field_0x51 == '\0') {
    if (*(int *)&this->field_0x48 == 1) goto LAB_14cef1800;
  }
  else if (*(int *)&this->field_0x48 == 0) {
LAB_14cef1800:
    bVar8 = true;
    goto LAB_14cef1785;
  }
  bVar8 = false;
LAB_14cef1785:
  plVar3 = *(longlong **)&this->field_0x10;
  pcVar4 = *(code **)(*plVar3 + 0x3d8);
  pFVar13 = ::FName::FName(&local_50,0x12,L"ProcessDynamicMesh",FNAME_Add);
  cVar9 = (*pcVar4)(plVar3,*pFVar13);
  if (cVar9 != '\0') {
    if ((bVar10) && (bVar8)) {
      if (this->field_0x50 == '\0') {
        if ((*(int *)&this->field_0x38 < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = *(FName **)&this->field_0x30;
      }
      else {
        pFVar13 = &PCGPinConstants::DefaultInputLabel;
      }
      local_64._4_8_ = *pFVar13;
      if (this->field_0x51 == '\0') {
        if ((*(int *)&this->field_0x48 < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = *(FName **)&this->field_0x40;
      }
      else {
        pFVar13 = &PCGPinConstants::DefaultOutputLabel;
      }
      FVar5 = *pFVar13;
      FPCGDataCollection::GetInputsByPin(param_1,&local_80,(FName *)(local_64 + 4));
      uVar17 = (ulonglong)local_80.ArrayNum;
      local_90 = local_80.ArrayNum;
      pFVar20 = (FObjectPtr_u_0 *)(local_80.AllocatorInstance.Data + uVar17 * 0x78);
      FVar22.Data = local_80.AllocatorInstance.Data;
      local_70 = pFVar20;
      while( true ) {
        if (local_80.ArrayNum != (uint)uVar17) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if ((FObjectPtr_u_0 *)FVar22.Data == pFVar20) break;
        local_88 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar22.Data;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14cef1901:
          if (local_88.Handle != (UObject *)0x0) {
            pUVar14 = Z_Construct_UClass_UPCGDynamicMeshData_NoRegister();
            bVar10 = FObjectPtr::IsA((FObjectPtr *)&local_88,pUVar14);
            if ((bVar10) && (local_88.Handle != (UObject *)0x0)) {
              local_64._12_8_ = CopyOrStealInputData(this,(FPCGTaggedData *)FVar22.Data);
              local_b8.Data = (FScriptContainerElement *)0x0;
              local_b0 = 0;
              local_a8 = (((UPCGDynamicMeshData *)local_64._12_8_)->DynamicMesh).field0_0x0;
              ((UPCGDynamicMeshData *)local_64._12_8_)->bDynamicMeshBoundsAreDirty = true;
              ((UPCGDynamicMeshData *)local_64._12_8_)->bDynamicMeshOctreeIsDirty = true;
              local_a0.Data = (FScriptContainerElement *)0x0;
              local_98 = 0;
              DestructItems<FString,int>((FString *)0x0,0);
              FVar21.Data = local_b8.Data;
              iVar11 = (int)local_b0;
              local_98 = CONCAT44(local_98._4_4_,(int)local_b0);
              if (((int)local_b0 == 0) && (local_98._4_4_ == 0)) {
                local_98 = local_b0 & 0xffffffff;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,(int)local_b0,local_98._4_4_,&local_a0,(int)local_b0,
                           (int *)((longlong)&local_98 + 4));
                ConstructItems<FString,FString,int>(local_a0.Data,(FString *)FVar21.Data,iVar11);
              }
              pUVar15 = UObject::FindFunctionChecked
                                  ((UObject *)this,
                                   NAME_UPCGGeometryBlueprintElement_ProcessDynamicMesh);
              (**(code **)(*(longlong *)this + 0x260))(this,pUVar15,&local_a8);
              DestructItems<FString,int>((FString *)local_b8.Data,(int)local_b0);
              FVar21.Data = local_a0.Data;
              iVar11 = (int)local_98;
              local_b0 = CONCAT44(local_b0._4_4_,(int)local_98);
              if (((int)local_98 == 0) && (local_b0._4_4_ == 0)) {
                local_b0 = local_98 & 0xffffffff;
                iVar11 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,(int)local_98,local_b0._4_4_,&local_b8,(int)local_98,
                           (int *)((longlong)&local_b0 + 4));
                ConstructItems<FString,FString,int>(local_b8.Data,(FString *)FVar21.Data,iVar11);
                iVar11 = (int)local_98;
              }
              DestructItems<FString,int>((FString *)local_a0.Data,iVar11);
              if (local_a0.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a0.Data);
              }
              piVar1 = &(param_2->TaggedData).ArrayMax;
              iVar11 = (param_2->TaggedData).ArrayNum;
              if (iVar11 == *piVar1) {
                iVar11 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x878,(ForAnyElementType *)param_2,piVar1);
              }
              (param_2->TaggedData).ArrayNum = iVar11 + 1;
              this_00 = FPCGTaggedData::FPCGTaggedData
                                  ((FPCGTaggedData *)
                                   ((param_2->TaggedData).AllocatorInstance.Data +
                                   (longlong)iVar11 * 0x78),(FPCGTaggedData *)FVar22.Data);
              FVar21.Data = local_b8.Data;
              iVar11 = (int)local_b0;
              lVar23 = (longlong)(int)local_b0;
              if (((int)local_b0 < 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar12 = *(int *)&(this_00->Tags).Elements.field_0x8 -
                       *(int *)&(this_00->Tags).Elements.field_0x34;
              uVar18 = uVar12 + iVar11;
              if (uVar12 < uVar18) {
                if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
                }
                TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)&this_00->Tags,uVar18);
                if (uVar18 < 4) {
                  iVar11 = 1;
                }
                else {
                  uVar17 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
                  lVar7 = 0x3f;
                  if (uVar17 != 0) {
                    for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                    }
                  }
                  local_68 = (undefined4)lVar7;
                  iVar11 = 1 << ((byte)lVar7 & 0x1f);
                }
                iVar2 = (this_00->Tags).HashSize;
                if ((iVar2 == 0) || (iVar2 < iVar11)) {
                  (this_00->Tags).HashSize = iVar11;
                  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash
                            (&this_00->Tags);
                }
              }
              pFVar19 = FVar21.Data + lVar23 * 0x10;
              for (; FVar21.Data != pFVar19; FVar21.Data = FVar21.Data + 0x10) {
                TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                Emplace<FString_const_&>(&this_00->Tags,(FString *)local_64,(bool *)FVar21.Data);
              }
              FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)local_64._12_8_);
              this_00->Pin = FVar5;
              DestructItems<FString,int>((FString *)local_b8.Data,(int)local_b0);
              pFVar20 = local_70;
              if (local_b8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data);
                pFVar20 = local_70;
              }
            }
          }
        }
        else if (local_88.Handle != (UObject *)0x0) {
          UE::GC::MarkAsReachable(local_88.Handle);
          goto LAB_14cef1901;
        }
        uVar17 = (ulonglong)local_90;
        FVar22.Data = FVar22.Data + 0x78;
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_80.AllocatorInstance.Data,local_80.ArrayNum);
      if ((FPCGTaggedData *)local_80.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
    }
    else {
      pFVar6 = *(FPCGContext **)&this->field_0x60;
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_48,L"PCGGeometryBlueprintElement",L"DynMeshOverridenButNotCalled",
                           L"Process Dynamic Mesh was overridden, but we don\'t have the expected setup (single input and output pin). Process Dynamic Mesh won\'t be called."
                          );
      PCGLog::LogWarningOnGraph(pFVar16,pFVar6);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 14cef34a0

UClass * __cdecl UPCGGeometryBlueprintElement::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGeometryBlueprintElement.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGGeometryBlueprintElement",
               &Z_Registration_Info_UClass_UPCGGeometryBlueprintElement.InnerSingleton,
               StaticRegisterNativesUPCGGeometryBlueprintElement,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGGeometryBlueprintElement>,
               InternalVTableHelperCtorCaller<UPCGGeometryBlueprintElement>,local_res8,
               UPCGBlueprintBaseElement::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGeometryBlueprintElement.InnerSingleton;
}

// ProcessDynamicMesh @ 14cef79d0

void __thiscall
UPCGGeometryBlueprintElement::ProcessDynamicMesh
          (UPCGGeometryBlueprintElement *this,UDynamicMesh *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  UFunction *pUVar4;
  int iVar5;
  UDynamicMesh *local_28;
  TArray<FString,TSizedDefaultAllocator<32>_> local_20;
  
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  local_28 = param_1;
  if (&local_20 != param_2) {
    DestructItems<FString,int>((FString *)0x0,0);
    iVar5 = param_2->ArrayNum;
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_20.ArrayNum = iVar5;
    if ((iVar5 == 0) && (local_20.ArrayMax == 0)) {
      local_20.ArrayNum = 0;
      local_20.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,local_20.ArrayMax,&local_20.AllocatorInstance,iVar5,&local_20.ArrayMax
                );
      ConstructItems<FString,FString,int>(local_20.AllocatorInstance.Data,(FString *)pFVar2,iVar5);
    }
  }
  pUVar4 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UPCGGeometryBlueprintElement_ProcessDynamicMesh);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar4,&local_28);
  if (param_2 != &local_20) {
    DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
    FVar3.Data = local_20.AllocatorInstance.Data;
    iVar5 = local_20.ArrayNum;
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = local_20.ArrayNum;
    if ((local_20.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      iVar5 = 0;
      goto LAB_14cef7aff;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_20.ArrayNum,*piVar1,&param_2->AllocatorInstance,local_20.ArrayNum,piVar1
              );
    ConstructItems<FString,FString,int>
              ((param_2->AllocatorInstance).Data,(FString *)FVar3.Data,iVar5);
  }
  iVar5 = local_20.ArrayNum;
LAB_14cef7aff:
  DestructItems<FString,int>((FString *)local_20.AllocatorInstance.Data,iVar5);
  if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUPCGGeometryBlueprintElement @ 14cef9be0

void __cdecl UPCGGeometryBlueprintElement::StaticRegisterNativesUPCGGeometryBlueprintElement(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPCGGeometryBlueprintElement_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCopyOrStealInputData @ 14cefac20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGGeometryBlueprintElement::execCopyOrStealInputData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UPCGDynamicMeshData *pUVar3;
  TObjectPtr<UPCGData_const_>_u_0 *pTVar4;
  undefined1 auStackY_e8 [32];
  TObjectPtr<UPCGData_const_>_u_0 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_7c = 0x80;
  local_b8.DebugPtr = (UPCGData *)0x0;
  local_b0 = 0;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0x100;
  local_4c = 0;
  local_44 = 0xffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pTVar4 = &local_b8;
  if ((TObjectPtr<UPCGData_const_>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGData_const_>_u_0 *)0x0) {
    pTVar4 = (TObjectPtr<UPCGData_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = CopyOrStealInputData
                     ((UPCGGeometryBlueprintElement *)param_1,(FPCGTaggedData *)&pTVar4->ObjectPtr);
  *(UPCGDynamicMeshData **)param_3 = pUVar3;
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_a8,0,local_a8._8_4_);
  iVar2 = SUB84(local_a8._8_8_,4);
  local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
  }
  local_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_b8.ObjectPtr);
  return;
}

