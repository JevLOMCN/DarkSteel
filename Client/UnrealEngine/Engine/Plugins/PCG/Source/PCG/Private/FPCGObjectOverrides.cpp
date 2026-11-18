// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// Initialize @ 149c7a110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPCGObjectOverrides<FPCGSplineMeshParams>::Initialize
          (FPCGObjectOverrides<FPCGSplineMeshParams> *this,
          TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *param_1,
          FPCGSplineMeshParams *param_2,UPCGData *param_3,FPCGContext *param_4,bool param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  UScriptStruct *pUVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FText *pFVar10;
  UPackage *pUVar11;
  FText *pFVar12;
  FString *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStackY_268 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_228;
  FPCGObjectSingleOverride local_218;
  UPCGData *local_1a8;
  UScriptStruct *local_1a0;
  FPCGContext *local_198;
  TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *local_190;
  FName local_188;
  FTextFormat local_180;
  FText local_170;
  FText local_160;
  FText local_150;
  FString local_140;
  FText local_130;
  FPCGAttributePropertySelector local_118;
  FText local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  FText local_78;
  undefined4 local_68;
  FText local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_198 = param_4;
  this->bInitialized = false;
  local_1a8 = param_3;
  local_190 = param_1;
  if (param_2 == (FPCGSplineMeshParams *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_150,L"PCGObjectPropertyOverride",L"InitializeOverrideFailedNoObject"
                         ,
                         L"Failed to initialize property overrides. No template object was provided."
                        );
    PCGLog::LogErrorOnGraph(pFVar10,param_4);
    if (local_150.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
    }
  }
  else {
    *(undefined1 *)&(this->OutputKey)._padding_ = 0;
    (this->OutputKey).Ptr = param_2;
    this->bPropagateEditChangeEvent = param_5;
    this->CachedOutputObject = (UObject *)0x0;
    local_1a0 = Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar11 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGSplineMeshParams,(UObject *)pUVar11,
                           L"PCGSplineMeshParams");
    }
    uVar18 = param_1->ArrayNum;
    local_1a0 = Z_Registration_Info_UScriptStruct_FPCGSplineMeshParams.OuterSingleton;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    DestructItems<FPCGObjectSingleOverride,int>
              ((FPCGObjectSingleOverride *)(this->ObjectSingleOverrides).AllocatorInstance.Data,
               (this->ObjectSingleOverrides).ArrayNum);
    piVar1 = &(this->ObjectSingleOverrides).ArrayMax;
    (this->ObjectSingleOverrides).ArrayNum = 0;
    if (*piVar1 != uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar18,&(this->ObjectSingleOverrides).AllocatorInstance,0,piVar1);
    }
    iVar9 = param_1->ArrayNum;
    uVar18 = 0;
    if (0 < iVar9) {
      do {
        uVar8 = 0;
        if ((int)uVar18 < iVar9) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar17 = (longlong)(int)uVar18 * 0x50;
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  ((FPCGAttributePropertyInputSelector *)
                   ((param_1->AllocatorInstance).Data + lVar17),
                   (FPCGAttributePropertyInputSelector *)&local_118,local_1a8);
        uVar8 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar6 = local_1a0;
        pFVar2 = (param_1->AllocatorInstance).Data;
        local_218.ObjectOverrideInputSelector._36_4_ = 0;
        local_218.ObjectOverrideInputSelector.Selection = Attribute;
        local_218.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value = 0;
        local_218.ObjectOverrideInputSelector.DomainName.Number = 0;
        local_218.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value = 0;
        local_218.ObjectOverrideInputSelector.AttributeName.Number = 0;
        local_218.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value = 0;
        local_218.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_218.ObjectOverrideInputSelector._padding_ =
             (longlong)&___7FPCGAttributePropertySelector__6B_;
        local_218.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
        local_218.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_218.ObjectOverrideInputSelector.PropertyName.Number = 0;
        local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum = 0;
        local_218.ObjectOverrideInputSelector.ExtraNames.ArrayMax = 0;
        local_218.ObjectOverrideInputSelector.ExtraProperty = Index;
        local_218.ObjectOverrideInputSelector._57_7_ = 0;
        local_218.bWillNeedLoading = false;
        local_218._89_3_ = 0;
        local_218._padding_ = 0;
        local_218.ObjectOverrideFunction = (pmf_15f13c7d)0x0;
        FPCGObjectSingleOverride::Initialize
                  (&local_218,&local_118,(FString *)(pFVar2 + lVar17 + 0x40),(UStruct *)local_1a0,
                   local_1a8,local_198,this->bPropagateEditChangeEvent);
        bVar7 = FPCGObjectSingleOverride::IsValid(&local_218);
        if (bVar7) {
          iVar9 = (this->ObjectSingleOverrides).ArrayNum;
          if (iVar9 == (this->ObjectSingleOverrides).ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x868,&(this->ObjectSingleOverrides).AllocatorInstance,
                               &(this->ObjectSingleOverrides).ArrayMax);
          }
          FVar5.Data = local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data;
          pFVar16 = (this->ObjectSingleOverrides).AllocatorInstance.Data + (longlong)iVar9 * 0x68;
          (this->ObjectSingleOverrides).ArrayNum = iVar9 + 1;
          *(IPCGAttributeAccessorKeys **)pFVar16 = local_218.InputKeys.Ptr;
          local_218.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 8) = local_218.ObjectOverrideInputAccessor.Ptr;
          local_218.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 0x10) = local_218.ObjectOverrideOutputAccessor.Ptr;
          local_218.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          pFVar2 = pFVar16 + 0x40;
          *(undefined ***)(pFVar16 + 0x18) = &___7FPCGAttributePropertySelector__6B_;
          *(EPCGAttributePropertySelection *)(pFVar16 + 0x20) =
               local_218.ObjectOverrideInputSelector.Selection;
          *(ulonglong *)(pFVar16 + 0x24) =
               CONCAT44(local_218.ObjectOverrideInputSelector.DomainName.Number,
                        local_218.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x2c) =
               CONCAT44(local_218.ObjectOverrideInputSelector.AttributeName.Number,
                        local_218.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x34) =
               CONCAT44(local_218.ObjectOverrideInputSelector.PropertyName.Number,
                        local_218.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value);
          *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
          iVar9 = local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          *(int *)(pFVar16 + 0x48) = local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          if (local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum == 0) {
            *(int *)(pFVar16 + 0x4c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum,0,
                       (ForAnyElementType *)pFVar2,
                       local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum,
                       (int *)(pFVar16 + 0x4c));
            ConstructItems<FString,FString,int>
                      (*(FScriptContainerElement **)&pFVar2->field_0x0,(FString *)FVar5.Data,iVar9);
          }
          pFVar16[0x50] =
               (FScriptContainerElement)local_218.ObjectOverrideInputSelector.ExtraProperty;
          pFVar16[0x58] = (FScriptContainerElement)local_218.bWillNeedLoading;
          *(pmf_15f13c7d *)(pFVar16 + 0x60) = local_218.ObjectOverrideFunction;
          param_1 = local_190;
        }
        else {
          local_188 = (FName)pUVar6->_padding_;
          pFVar10 = FText::FromName(&local_d8,&local_188);
          pFVar12 = FText::FromString(&local_c8,(FString *)(pFVar2 + lVar17 + 0x40));
          pFVar13 = FPCGAttributePropertySelector::ToString(&local_118,&local_140,false);
          FText::FromString(&local_170,pFVar13);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_130,L"PCGObjectPropertyOverride",L"InitializeOverrideFailed",
                               L"Failed to initialize override \'{0}\' for property {1} on object \'{2}\'."
                              );
          pFVar15 = FTextFormat::FTextFormat(&local_b8,pFVar14,Default);
          local_a8.Type = Text;
          FText::FText((FText *)&local_a8.TextValue,&local_170);
          if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_88 = 4;
          FText::FText(&local_78,pFVar12);
          if ((local_78.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_68 = 4;
          FText::FText(&local_58,pFVar10);
          if ((local_58.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_228.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_228.AllocatorInstance,3,&local_228.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_228.AllocatorInstance.Data,&local_a8,3);
          local_180.TextFormatData.Object = (pFVar15->TextFormatData).Object;
          local_180.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_180.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_180.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_180.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_160,&local_180,&local_228);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_228.AllocatorInstance.Data,local_228.ArrayNum);
          if ((FFormatArgumentValue *)local_228.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_228.AllocatorInstance.Data);
          }
          if (local_58.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
          }
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                        0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
          if (local_170.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
          }
          pIVar3 = (pFVar12->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          pIVar3 = (pFVar10->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          PCGLog::LogErrorOnGraph(&local_160,local_198);
          if (local_160.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
          }
          if (local_130.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
          }
        }
        DestructItems<FString,int>
                  ((FString *)
                   local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data,
                   local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum);
        if (local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data);
        }
        if (local_218.ObjectOverrideOutputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_218.ObjectOverrideOutputAccessor.Ptr)->_padding_)
                    (local_218.ObjectOverrideOutputAccessor.Ptr,1);
        }
        if (local_218.ObjectOverrideInputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_218.ObjectOverrideInputAccessor.Ptr)->_padding_)
                    (local_218.ObjectOverrideInputAccessor.Ptr,1);
        }
        if (local_218.InputKeys.Ptr != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)(local_218.InputKeys.Ptr)->_padding_)(local_218.InputKeys.Ptr,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_118.ExtraNames.AllocatorInstance.Data,
                   local_118.ExtraNames.ArrayNum);
        if (local_118.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.ExtraNames.AllocatorInstance.Data);
        }
        iVar9 = param_1->ArrayNum;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < iVar9);
    }
    this->bInitialized = true;
  }
  return;
}

// Initialize @ 149c7a820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPCGObjectOverrides<FSplineMeshComponentDescriptor>::Initialize
          (FPCGObjectOverrides<FSplineMeshComponentDescriptor> *this,
          TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *param_1,
          FSplineMeshComponentDescriptor *param_2,UPCGData *param_3,FPCGContext *param_4,
          bool param_5)

{
  TArray<FPCGObjectSingleOverride,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  ITextData *pIVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  UScriptStruct *pUVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FText *pFVar11;
  FText *pFVar12;
  FString *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  FPCGObjectOverrides<FSplineMeshComponentDescriptor> *pFVar18;
  uint uVar19;
  undefined1 auStackY_268 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_228;
  FPCGObjectSingleOverride local_218;
  UPCGData *local_1a8;
  FPCGContext *local_1a0;
  UScriptStruct *local_198;
  FPCGObjectOverrides<FSplineMeshComponentDescriptor> *local_190;
  FName local_188;
  FTextFormat local_180;
  FText local_170;
  FText local_160;
  FText local_150;
  FString local_140;
  FText local_130;
  FPCGAttributePropertySelector local_118;
  FText local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  FText local_78;
  undefined4 local_68;
  FText local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1a0 = param_4;
  this->bInitialized = false;
  local_1a8 = param_3;
  local_190 = this;
  if (param_2 == (FSplineMeshComponentDescriptor *)0x0) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_150,L"PCGObjectPropertyOverride",L"InitializeOverrideFailedNoObject"
                         ,
                         L"Failed to initialize property overrides. No template object was provided."
                        );
    PCGLog::LogErrorOnGraph(pFVar11,param_4);
    if (local_150.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
    }
  }
  else {
    *(undefined1 *)&(this->OutputKey)._padding_ = 0;
    (this->OutputKey).Ptr = param_2;
    this->bPropagateEditChangeEvent = param_5;
    this->CachedOutputObject = (UObject *)0x0;
    local_198 = FSplineMeshComponentDescriptor::StaticStruct();
    uVar19 = param_1->ArrayNum;
    pTVar1 = &this->ObjectSingleOverrides;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    DestructItems<FPCGObjectSingleOverride,int>
              ((FPCGObjectSingleOverride *)(pTVar1->AllocatorInstance).Data,
               (this->ObjectSingleOverrides).ArrayNum);
    piVar2 = &(this->ObjectSingleOverrides).ArrayMax;
    (this->ObjectSingleOverrides).ArrayNum = 0;
    if (*piVar2 != uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar19,&pTVar1->AllocatorInstance,0,piVar2);
    }
    iVar10 = param_1->ArrayNum;
    uVar19 = 0;
    pFVar18 = this;
    if (0 < iVar10) {
      do {
        uVar9 = 0;
        if ((int)uVar19 < iVar10) {
          uVar9 = ~uVar19 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar17 = (longlong)(int)uVar19 * 0x50;
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  ((FPCGAttributePropertyInputSelector *)
                   ((param_1->AllocatorInstance).Data + lVar17),
                   (FPCGAttributePropertyInputSelector *)&local_118,local_1a8);
        uVar9 = 0;
        if ((int)uVar19 < param_1->ArrayNum) {
          uVar9 = ~uVar19 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar7 = local_198;
        pFVar3 = (param_1->AllocatorInstance).Data;
        local_218.ObjectOverrideInputSelector._36_4_ = 0;
        local_218.ObjectOverrideInputSelector.Selection = Attribute;
        local_218.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value = 0;
        local_218.ObjectOverrideInputSelector.DomainName.Number = 0;
        local_218.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value = 0;
        local_218.ObjectOverrideInputSelector.AttributeName.Number = 0;
        local_218.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value = 0;
        local_218.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_218.ObjectOverrideInputSelector._padding_ =
             (longlong)&___7FPCGAttributePropertySelector__6B_;
        local_218.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
        local_218.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_218.ObjectOverrideInputSelector.PropertyName.Number = 0;
        local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum = 0;
        local_218.ObjectOverrideInputSelector.ExtraNames.ArrayMax = 0;
        local_218.ObjectOverrideInputSelector.ExtraProperty = Index;
        local_218.ObjectOverrideInputSelector._57_7_ = 0;
        local_218.bWillNeedLoading = false;
        local_218._89_3_ = 0;
        local_218._padding_ = 0;
        local_218.ObjectOverrideFunction = (pmf_15f13c7d)0x0;
        FPCGObjectSingleOverride::Initialize
                  (&local_218,&local_118,(FString *)(pFVar3 + lVar17 + 0x40),(UStruct *)local_198,
                   local_1a8,local_1a0,pFVar18->bPropagateEditChangeEvent);
        bVar8 = FPCGObjectSingleOverride::IsValid(&local_218);
        if (bVar8) {
          iVar10 = (this->ObjectSingleOverrides).ArrayNum;
          if (iVar10 == (this->ObjectSingleOverrides).ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x868,&pTVar1->AllocatorInstance,
                                &(this->ObjectSingleOverrides).ArrayMax);
          }
          FVar6.Data = local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data;
          pFVar16 = (pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 0x68;
          (this->ObjectSingleOverrides).ArrayNum = iVar10 + 1;
          *(IPCGAttributeAccessorKeys **)pFVar16 = local_218.InputKeys.Ptr;
          local_218.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 8) = local_218.ObjectOverrideInputAccessor.Ptr;
          local_218.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 0x10) = local_218.ObjectOverrideOutputAccessor.Ptr;
          local_218.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          pFVar3 = pFVar16 + 0x40;
          *(undefined ***)(pFVar16 + 0x18) = &___7FPCGAttributePropertySelector__6B_;
          *(EPCGAttributePropertySelection *)(pFVar16 + 0x20) =
               local_218.ObjectOverrideInputSelector.Selection;
          *(ulonglong *)(pFVar16 + 0x24) =
               CONCAT44(local_218.ObjectOverrideInputSelector.DomainName.Number,
                        local_218.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x2c) =
               CONCAT44(local_218.ObjectOverrideInputSelector.AttributeName.Number,
                        local_218.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x34) =
               CONCAT44(local_218.ObjectOverrideInputSelector.PropertyName.Number,
                        local_218.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value);
          *(FScriptContainerElement **)pFVar3 = (FScriptContainerElement *)0x0;
          iVar10 = local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          *(int *)(pFVar16 + 0x48) = local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          if (local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum == 0) {
            *(int *)(pFVar16 + 0x4c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum,0,
                       (ForAnyElementType *)pFVar3,
                       local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum,
                       (int *)(pFVar16 + 0x4c));
                    /* WARNING: Load size is inaccurate */
            ConstructItems<FString,FString,int>(*pFVar3,(FString *)FVar6.Data,iVar10);
          }
          pFVar16[0x50] =
               (FScriptContainerElement)local_218.ObjectOverrideInputSelector.ExtraProperty;
          pFVar16[0x58] = (FScriptContainerElement)local_218.bWillNeedLoading;
          *(pmf_15f13c7d *)(pFVar16 + 0x60) = local_218.ObjectOverrideFunction;
          pFVar18 = local_190;
        }
        else {
          local_188 = (FName)pUVar7->_padding_;
          pFVar11 = FText::FromName(&local_d8,&local_188);
          pFVar12 = FText::FromString(&local_c8,(FString *)(pFVar3 + lVar17 + 0x40));
          pFVar13 = FPCGAttributePropertySelector::ToString(&local_118,&local_140,false);
          FText::FromString(&local_170,pFVar13);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_130,L"PCGObjectPropertyOverride",L"InitializeOverrideFailed",
                               L"Failed to initialize override \'{0}\' for property {1} on object \'{2}\'."
                              );
          pFVar15 = FTextFormat::FTextFormat(&local_b8,pFVar14,Default);
          local_a8.Type = Text;
          FText::FText((FText *)&local_a8.TextValue,&local_170);
          if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_88 = 4;
          FText::FText(&local_78,pFVar12);
          if ((local_78.TextData.Reference == (ITextData *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_68 = 4;
          FText::FText(&local_58,pFVar11);
          if ((local_58.TextData.Reference == (ITextData *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_228.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_228.AllocatorInstance,3,&local_228.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_228.AllocatorInstance.Data,&local_a8,3);
          local_180.TextFormatData.Object = (pFVar15->TextFormatData).Object;
          local_180.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_180.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_180.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_180.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_160,&local_180,&local_228);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_228.AllocatorInstance.Data,local_228.ArrayNum);
          if ((FFormatArgumentValue *)local_228.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_228.AllocatorInstance.Data);
          }
          if (local_58.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
          }
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                        0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
          if (local_170.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
          }
          pIVar4 = (pFVar12->TextData).Reference;
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 0x10))();
          }
          pIVar4 = (pFVar11->TextData).Reference;
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 0x10))();
          }
          PCGLog::LogErrorOnGraph(&local_160,local_1a0);
          if (local_160.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
          }
          if (local_130.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
          }
        }
        DestructItems<FString,int>
                  ((FString *)
                   local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data,
                   local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum);
        if (local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data);
        }
        if (local_218.ObjectOverrideOutputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_218.ObjectOverrideOutputAccessor.Ptr)->_padding_)
                    (local_218.ObjectOverrideOutputAccessor.Ptr,1);
        }
        if (local_218.ObjectOverrideInputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_218.ObjectOverrideInputAccessor.Ptr)->_padding_)
                    (local_218.ObjectOverrideInputAccessor.Ptr,1);
        }
        if (local_218.InputKeys.Ptr != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)(local_218.InputKeys.Ptr)->_padding_)(local_218.InputKeys.Ptr,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_118.ExtraNames.AllocatorInstance.Data,
                   local_118.ExtraNames.ArrayNum);
        if (local_118.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.ExtraNames.AllocatorInstance.Data);
        }
        iVar10 = param_1->ArrayNum;
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < iVar10);
    }
    pFVar18->bInitialized = true;
  }
  return;
}

// Initialize @ 149c7af00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPCGObjectOverrides<AActor>::Initialize
          (FPCGObjectOverrides<AActor> *this,
          TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *param_1,
          AActor *param_2,UPCGData *param_3,FPCGContext *param_4,bool param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  UStruct *pUVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FText *pFVar10;
  AActor *pAVar11;
  FText *pFVar12;
  FString *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStackY_278 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_238;
  FPCGObjectSingleOverride local_228;
  UPCGData *local_1b8;
  FPCGContext *local_1b0;
  UStruct *local_1a8;
  TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *local_1a0;
  FName local_198;
  FTextFormat local_190;
  FText local_180;
  FText local_170;
  FText local_160;
  FString local_150;
  FText local_140;
  FPCGAttributePropertySelector local_128;
  FText local_e8;
  FText local_d8;
  FTextFormat local_c8;
  FFormatArgumentValue local_b8;
  undefined4 local_98;
  FText local_88;
  undefined4 local_78;
  FText local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1b0 = param_4;
  this->bInitialized = false;
  local_1b8 = param_3;
  local_1a0 = param_1;
  if (param_2 == (AActor *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_160,L"PCGObjectPropertyOverride",L"InitializeOverrideFailedNoObject"
                         ,
                         L"Failed to initialize property overrides. No template object was provided."
                        );
    PCGLog::LogErrorOnGraph(pFVar10,param_4);
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
  }
  else {
    this->CachedOutputObject = (UObject *)0x0;
    *(undefined1 *)&(this->OutputKey)._padding_ = 0;
    (this->OutputKey).Ptr = param_2;
    this->bPropagateEditChangeEvent = param_5;
    local_1a8 = (UStruct *)param_2->_padding_;
    pAVar11 = (AActor *)0x0;
    if (param_5) {
      pAVar11 = param_2;
    }
    this->CachedOutputObject = (UObject *)pAVar11;
    uVar18 = param_1->ArrayNum;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    DestructItems<FPCGObjectSingleOverride,int>
              ((FPCGObjectSingleOverride *)(this->ObjectSingleOverrides).AllocatorInstance.Data,
               (this->ObjectSingleOverrides).ArrayNum);
    piVar1 = &(this->ObjectSingleOverrides).ArrayMax;
    (this->ObjectSingleOverrides).ArrayNum = 0;
    if (*piVar1 != uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar18,&(this->ObjectSingleOverrides).AllocatorInstance,0,piVar1);
    }
    iVar9 = param_1->ArrayNum;
    uVar18 = 0;
    if (0 < iVar9) {
      do {
        uVar8 = 0;
        if ((int)uVar18 < iVar9) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar17 = (longlong)(int)uVar18 * 0x50;
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  ((FPCGAttributePropertyInputSelector *)
                   ((param_1->AllocatorInstance).Data + lVar17),
                   (FPCGAttributePropertyInputSelector *)&local_128,local_1b8);
        uVar8 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar6 = local_1a8;
        pFVar2 = (param_1->AllocatorInstance).Data;
        local_228.ObjectOverrideInputSelector._36_4_ = 0;
        local_228.ObjectOverrideInputSelector.Selection = Attribute;
        local_228.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value = 0;
        local_228.ObjectOverrideInputSelector.DomainName.Number = 0;
        local_228.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value = 0;
        local_228.ObjectOverrideInputSelector.AttributeName.Number = 0;
        local_228.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value = 0;
        local_228.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_228.ObjectOverrideInputSelector._padding_ =
             (longlong)&___7FPCGAttributePropertySelector__6B_;
        local_228.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
        local_228.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_228.ObjectOverrideInputSelector.PropertyName.Number = 0;
        local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum = 0;
        local_228.ObjectOverrideInputSelector.ExtraNames.ArrayMax = 0;
        local_228.ObjectOverrideInputSelector.ExtraProperty = Index;
        local_228.ObjectOverrideInputSelector._57_7_ = 0;
        local_228.bWillNeedLoading = false;
        local_228._89_3_ = 0;
        local_228._padding_ = 0;
        local_228.ObjectOverrideFunction = (pmf_15f13c7d)0x0;
        FPCGObjectSingleOverride::Initialize
                  (&local_228,&local_128,(FString *)(pFVar2 + lVar17 + 0x40),local_1a8,local_1b8,
                   local_1b0,this->bPropagateEditChangeEvent);
        bVar7 = FPCGObjectSingleOverride::IsValid(&local_228);
        if (bVar7) {
          iVar9 = (this->ObjectSingleOverrides).ArrayNum;
          if (iVar9 == (this->ObjectSingleOverrides).ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x868,&(this->ObjectSingleOverrides).AllocatorInstance,
                               &(this->ObjectSingleOverrides).ArrayMax);
          }
          FVar5.Data = local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data;
          pFVar16 = (this->ObjectSingleOverrides).AllocatorInstance.Data + (longlong)iVar9 * 0x68;
          (this->ObjectSingleOverrides).ArrayNum = iVar9 + 1;
          *(IPCGAttributeAccessorKeys **)pFVar16 = local_228.InputKeys.Ptr;
          local_228.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 8) = local_228.ObjectOverrideInputAccessor.Ptr;
          local_228.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 0x10) = local_228.ObjectOverrideOutputAccessor.Ptr;
          local_228.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          pFVar2 = pFVar16 + 0x40;
          *(undefined ***)(pFVar16 + 0x18) = &___7FPCGAttributePropertySelector__6B_;
          *(EPCGAttributePropertySelection *)(pFVar16 + 0x20) =
               local_228.ObjectOverrideInputSelector.Selection;
          *(ulonglong *)(pFVar16 + 0x24) =
               CONCAT44(local_228.ObjectOverrideInputSelector.DomainName.Number,
                        local_228.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x2c) =
               CONCAT44(local_228.ObjectOverrideInputSelector.AttributeName.Number,
                        local_228.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x34) =
               CONCAT44(local_228.ObjectOverrideInputSelector.PropertyName.Number,
                        local_228.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value);
          *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
          iVar9 = local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          *(int *)(pFVar16 + 0x48) = local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          if (local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum == 0) {
            *(int *)(pFVar16 + 0x4c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum,0,
                       (ForAnyElementType *)pFVar2,
                       local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum,
                       (int *)(pFVar16 + 0x4c));
            ConstructItems<FString,FString,int>
                      (*(FScriptContainerElement **)&pFVar2->field_0x0,(FString *)FVar5.Data,iVar9);
          }
          pFVar16[0x50] =
               (FScriptContainerElement)local_228.ObjectOverrideInputSelector.ExtraProperty;
          pFVar16[0x58] = (FScriptContainerElement)local_228.bWillNeedLoading;
          *(pmf_15f13c7d *)(pFVar16 + 0x60) = local_228.ObjectOverrideFunction;
          param_1 = local_1a0;
        }
        else {
          local_198 = (FName)pUVar6->_padding_;
          pFVar10 = FText::FromName(&local_e8,&local_198);
          pFVar12 = FText::FromString(&local_d8,(FString *)(pFVar2 + lVar17 + 0x40));
          pFVar13 = FPCGAttributePropertySelector::ToString(&local_128,&local_150,false);
          FText::FromString(&local_180,pFVar13);
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_140,L"PCGObjectPropertyOverride",L"InitializeOverrideFailed",
                               L"Failed to initialize override \'{0}\' for property {1} on object \'{2}\'."
                              );
          pFVar15 = FTextFormat::FTextFormat(&local_c8,pFVar14,Default);
          local_b8.Type = Text;
          FText::FText((FText *)&local_b8.TextValue,&local_180);
          if ((local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_98 = 4;
          FText::FText(&local_88,pFVar12);
          if ((local_88.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_78 = 4;
          FText::FText(&local_68,pFVar10);
          if ((local_68.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_238.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_238.AllocatorInstance,3,&local_238.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_238.AllocatorInstance.Data,&local_b8,3);
          local_190.TextFormatData.Object = (pFVar15->TextFormatData).Object;
          local_190.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_190.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_190.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_190.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_170,&local_190,&local_238);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_238.AllocatorInstance.Data,local_238.ArrayNum);
          if ((FFormatArgumentValue *)local_238.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_238.AllocatorInstance.Data);
          }
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
          }
          if (local_88.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
          }
          if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                        0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
          if (local_180.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
          }
          pIVar3 = (pFVar12->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          pIVar3 = (pFVar10->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          PCGLog::LogErrorOnGraph(&local_170,local_1b0);
          if (local_170.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
          }
          if (local_140.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
          }
        }
        DestructItems<FString,int>
                  ((FString *)
                   local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data,
                   local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum);
        if (local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data);
        }
        if (local_228.ObjectOverrideOutputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_228.ObjectOverrideOutputAccessor.Ptr)->_padding_)
                    (local_228.ObjectOverrideOutputAccessor.Ptr,1);
        }
        if (local_228.ObjectOverrideInputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_228.ObjectOverrideInputAccessor.Ptr)->_padding_)
                    (local_228.ObjectOverrideInputAccessor.Ptr,1);
        }
        if (local_228.InputKeys.Ptr != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)(local_228.InputKeys.Ptr)->_padding_)(local_228.InputKeys.Ptr,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_128.ExtraNames.AllocatorInstance.Data,
                   local_128.ExtraNames.ArrayNum);
        if (local_128.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.ExtraNames.AllocatorInstance.Data);
        }
        iVar9 = param_1->ArrayNum;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < iVar9);
    }
    this->bInitialized = true;
  }
  return;
}

// Initialize @ 149c7b5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPCGObjectOverrides<USplineComponent>::Initialize
          (FPCGObjectOverrides<USplineComponent> *this,
          TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *param_1,
          USplineComponent *param_2,UPCGData *param_3,FPCGContext *param_4,bool param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  UStruct *pUVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FText *pFVar10;
  USplineComponent *pUVar11;
  FText *pFVar12;
  FString *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStackY_278 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_238;
  FPCGObjectSingleOverride local_228;
  UPCGData *local_1b8;
  FPCGContext *local_1b0;
  UStruct *local_1a8;
  TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *local_1a0;
  FName local_198;
  FTextFormat local_190;
  FText local_180;
  FText local_170;
  FText local_160;
  FString local_150;
  FText local_140;
  FPCGAttributePropertySelector local_128;
  FText local_e8;
  FText local_d8;
  FTextFormat local_c8;
  FFormatArgumentValue local_b8;
  undefined4 local_98;
  FText local_88;
  undefined4 local_78;
  FText local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1b0 = param_4;
  this->bInitialized = false;
  local_1b8 = param_3;
  local_1a0 = param_1;
  if (param_2 == (USplineComponent *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_160,L"PCGObjectPropertyOverride",L"InitializeOverrideFailedNoObject"
                         ,
                         L"Failed to initialize property overrides. No template object was provided."
                        );
    PCGLog::LogErrorOnGraph(pFVar10,param_4);
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
  }
  else {
    this->CachedOutputObject = (UObject *)0x0;
    *(undefined1 *)&(this->OutputKey)._padding_ = 0;
    (this->OutputKey).Ptr = param_2;
    this->bPropagateEditChangeEvent = param_5;
    local_1a8 = (UStruct *)param_2->_padding_;
    pUVar11 = (USplineComponent *)0x0;
    if (param_5) {
      pUVar11 = param_2;
    }
    this->CachedOutputObject = (UObject *)pUVar11;
    uVar18 = param_1->ArrayNum;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    DestructItems<FPCGObjectSingleOverride,int>
              ((FPCGObjectSingleOverride *)(this->ObjectSingleOverrides).AllocatorInstance.Data,
               (this->ObjectSingleOverrides).ArrayNum);
    piVar1 = &(this->ObjectSingleOverrides).ArrayMax;
    (this->ObjectSingleOverrides).ArrayNum = 0;
    if (*piVar1 != uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar18,&(this->ObjectSingleOverrides).AllocatorInstance,0,piVar1);
    }
    iVar9 = param_1->ArrayNum;
    uVar18 = 0;
    if (0 < iVar9) {
      do {
        uVar8 = 0;
        if ((int)uVar18 < iVar9) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar17 = (longlong)(int)uVar18 * 0x50;
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  ((FPCGAttributePropertyInputSelector *)
                   ((param_1->AllocatorInstance).Data + lVar17),
                   (FPCGAttributePropertyInputSelector *)&local_128,local_1b8);
        uVar8 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar6 = local_1a8;
        pFVar2 = (param_1->AllocatorInstance).Data;
        local_228.ObjectOverrideInputSelector._36_4_ = 0;
        local_228.ObjectOverrideInputSelector.Selection = Attribute;
        local_228.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value = 0;
        local_228.ObjectOverrideInputSelector.DomainName.Number = 0;
        local_228.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value = 0;
        local_228.ObjectOverrideInputSelector.AttributeName.Number = 0;
        local_228.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value = 0;
        local_228.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_228.ObjectOverrideInputSelector._padding_ =
             (longlong)&___7FPCGAttributePropertySelector__6B_;
        local_228.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
        local_228.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_228.ObjectOverrideInputSelector.PropertyName.Number = 0;
        local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum = 0;
        local_228.ObjectOverrideInputSelector.ExtraNames.ArrayMax = 0;
        local_228.ObjectOverrideInputSelector.ExtraProperty = Index;
        local_228.ObjectOverrideInputSelector._57_7_ = 0;
        local_228.bWillNeedLoading = false;
        local_228._89_3_ = 0;
        local_228._padding_ = 0;
        local_228.ObjectOverrideFunction = (pmf_15f13c7d)0x0;
        FPCGObjectSingleOverride::Initialize
                  (&local_228,&local_128,(FString *)(pFVar2 + lVar17 + 0x40),local_1a8,local_1b8,
                   local_1b0,this->bPropagateEditChangeEvent);
        bVar7 = FPCGObjectSingleOverride::IsValid(&local_228);
        if (bVar7) {
          iVar9 = (this->ObjectSingleOverrides).ArrayNum;
          if (iVar9 == (this->ObjectSingleOverrides).ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x868,&(this->ObjectSingleOverrides).AllocatorInstance,
                               &(this->ObjectSingleOverrides).ArrayMax);
          }
          FVar5.Data = local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data;
          pFVar16 = (this->ObjectSingleOverrides).AllocatorInstance.Data + (longlong)iVar9 * 0x68;
          (this->ObjectSingleOverrides).ArrayNum = iVar9 + 1;
          *(IPCGAttributeAccessorKeys **)pFVar16 = local_228.InputKeys.Ptr;
          local_228.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 8) = local_228.ObjectOverrideInputAccessor.Ptr;
          local_228.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 0x10) = local_228.ObjectOverrideOutputAccessor.Ptr;
          local_228.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          pFVar2 = pFVar16 + 0x40;
          *(undefined ***)(pFVar16 + 0x18) = &___7FPCGAttributePropertySelector__6B_;
          *(EPCGAttributePropertySelection *)(pFVar16 + 0x20) =
               local_228.ObjectOverrideInputSelector.Selection;
          *(ulonglong *)(pFVar16 + 0x24) =
               CONCAT44(local_228.ObjectOverrideInputSelector.DomainName.Number,
                        local_228.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x2c) =
               CONCAT44(local_228.ObjectOverrideInputSelector.AttributeName.Number,
                        local_228.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x34) =
               CONCAT44(local_228.ObjectOverrideInputSelector.PropertyName.Number,
                        local_228.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value);
          *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
          iVar9 = local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          *(int *)(pFVar16 + 0x48) = local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          if (local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum == 0) {
            *(int *)(pFVar16 + 0x4c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum,0,
                       (ForAnyElementType *)pFVar2,
                       local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum,
                       (int *)(pFVar16 + 0x4c));
            ConstructItems<FString,FString,int>
                      (*(FScriptContainerElement **)&pFVar2->field_0x0,(FString *)FVar5.Data,iVar9);
          }
          pFVar16[0x50] =
               (FScriptContainerElement)local_228.ObjectOverrideInputSelector.ExtraProperty;
          pFVar16[0x58] = (FScriptContainerElement)local_228.bWillNeedLoading;
          *(pmf_15f13c7d *)(pFVar16 + 0x60) = local_228.ObjectOverrideFunction;
          param_1 = local_1a0;
        }
        else {
          local_198 = (FName)pUVar6->_padding_;
          pFVar10 = FText::FromName(&local_e8,&local_198);
          pFVar12 = FText::FromString(&local_d8,(FString *)(pFVar2 + lVar17 + 0x40));
          pFVar13 = FPCGAttributePropertySelector::ToString(&local_128,&local_150,false);
          FText::FromString(&local_180,pFVar13);
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_140,L"PCGObjectPropertyOverride",L"InitializeOverrideFailed",
                               L"Failed to initialize override \'{0}\' for property {1} on object \'{2}\'."
                              );
          pFVar15 = FTextFormat::FTextFormat(&local_c8,pFVar14,Default);
          local_b8.Type = Text;
          FText::FText((FText *)&local_b8.TextValue,&local_180);
          if ((local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_98 = 4;
          FText::FText(&local_88,pFVar12);
          if ((local_88.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_78 = 4;
          FText::FText(&local_68,pFVar10);
          if ((local_68.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_238.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_238.AllocatorInstance,3,&local_238.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_238.AllocatorInstance.Data,&local_b8,3);
          local_190.TextFormatData.Object = (pFVar15->TextFormatData).Object;
          local_190.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_190.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_190.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_190.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_170,&local_190,&local_238);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_238.AllocatorInstance.Data,local_238.ArrayNum);
          if ((FFormatArgumentValue *)local_238.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_238.AllocatorInstance.Data);
          }
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
          }
          if (local_88.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
          }
          if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                        0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
          if (local_180.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
          }
          pIVar3 = (pFVar12->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          pIVar3 = (pFVar10->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          PCGLog::LogErrorOnGraph(&local_170,local_1b0);
          if (local_170.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
          }
          if (local_140.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
          }
        }
        DestructItems<FString,int>
                  ((FString *)
                   local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data,
                   local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum);
        if (local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data);
        }
        if (local_228.ObjectOverrideOutputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_228.ObjectOverrideOutputAccessor.Ptr)->_padding_)
                    (local_228.ObjectOverrideOutputAccessor.Ptr,1);
        }
        if (local_228.ObjectOverrideInputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_228.ObjectOverrideInputAccessor.Ptr)->_padding_)
                    (local_228.ObjectOverrideInputAccessor.Ptr,1);
        }
        if (local_228.InputKeys.Ptr != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)(local_228.InputKeys.Ptr)->_padding_)(local_228.InputKeys.Ptr,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_128.ExtraNames.AllocatorInstance.Data,
                   local_128.ExtraNames.ArrayNum);
        if (local_128.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.ExtraNames.AllocatorInstance.Data);
        }
        iVar9 = param_1->ArrayNum;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < iVar9);
    }
    this->bInitialized = true;
  }
  return;
}

// Initialize @ 149c7bcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPCGObjectOverrides<USplineMeshComponent>::Initialize
          (FPCGObjectOverrides<USplineMeshComponent> *this,
          TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *param_1,
          USplineMeshComponent *param_2,UPCGData *param_3,FPCGContext *param_4,bool param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  UStruct *pUVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FText *pFVar10;
  USplineMeshComponent *pUVar11;
  FText *pFVar12;
  FString *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStackY_278 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_238;
  FPCGObjectSingleOverride local_228;
  UPCGData *local_1b8;
  FPCGContext *local_1b0;
  UStruct *local_1a8;
  TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *local_1a0;
  FName local_198;
  FTextFormat local_190;
  FText local_180;
  FText local_170;
  FText local_160;
  FString local_150;
  FText local_140;
  FPCGAttributePropertySelector local_128;
  FText local_e8;
  FText local_d8;
  FTextFormat local_c8;
  FFormatArgumentValue local_b8;
  undefined4 local_98;
  FText local_88;
  undefined4 local_78;
  FText local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1b0 = param_4;
  this->bInitialized = false;
  local_1b8 = param_3;
  local_1a0 = param_1;
  if (param_2 == (USplineMeshComponent *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_160,L"PCGObjectPropertyOverride",L"InitializeOverrideFailedNoObject"
                         ,
                         L"Failed to initialize property overrides. No template object was provided."
                        );
    PCGLog::LogErrorOnGraph(pFVar10,param_4);
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
  }
  else {
    this->CachedOutputObject = (UObject *)0x0;
    *(undefined1 *)&(this->OutputKey)._padding_ = 0;
    (this->OutputKey).Ptr = param_2;
    this->bPropagateEditChangeEvent = param_5;
    local_1a8 = (UStruct *)param_2->_padding_;
    pUVar11 = (USplineMeshComponent *)0x0;
    if (param_5) {
      pUVar11 = param_2;
    }
    this->CachedOutputObject = (UObject *)pUVar11;
    uVar18 = param_1->ArrayNum;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    DestructItems<FPCGObjectSingleOverride,int>
              ((FPCGObjectSingleOverride *)(this->ObjectSingleOverrides).AllocatorInstance.Data,
               (this->ObjectSingleOverrides).ArrayNum);
    piVar1 = &(this->ObjectSingleOverrides).ArrayMax;
    (this->ObjectSingleOverrides).ArrayNum = 0;
    if (*piVar1 != uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar18,&(this->ObjectSingleOverrides).AllocatorInstance,0,piVar1);
    }
    iVar9 = param_1->ArrayNum;
    uVar18 = 0;
    if (0 < iVar9) {
      do {
        uVar8 = 0;
        if ((int)uVar18 < iVar9) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar17 = (longlong)(int)uVar18 * 0x50;
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  ((FPCGAttributePropertyInputSelector *)
                   ((param_1->AllocatorInstance).Data + lVar17),
                   (FPCGAttributePropertyInputSelector *)&local_128,local_1b8);
        uVar8 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar6 = local_1a8;
        pFVar2 = (param_1->AllocatorInstance).Data;
        local_228.ObjectOverrideInputSelector._36_4_ = 0;
        local_228.ObjectOverrideInputSelector.Selection = Attribute;
        local_228.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value = 0;
        local_228.ObjectOverrideInputSelector.DomainName.Number = 0;
        local_228.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value = 0;
        local_228.ObjectOverrideInputSelector.AttributeName.Number = 0;
        local_228.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value = 0;
        local_228.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_228.ObjectOverrideInputSelector._padding_ =
             (longlong)&___7FPCGAttributePropertySelector__6B_;
        local_228.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
        local_228.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_228.ObjectOverrideInputSelector.PropertyName.Number = 0;
        local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum = 0;
        local_228.ObjectOverrideInputSelector.ExtraNames.ArrayMax = 0;
        local_228.ObjectOverrideInputSelector.ExtraProperty = Index;
        local_228.ObjectOverrideInputSelector._57_7_ = 0;
        local_228.bWillNeedLoading = false;
        local_228._89_3_ = 0;
        local_228._padding_ = 0;
        local_228.ObjectOverrideFunction = (pmf_15f13c7d)0x0;
        FPCGObjectSingleOverride::Initialize
                  (&local_228,&local_128,(FString *)(pFVar2 + lVar17 + 0x40),local_1a8,local_1b8,
                   local_1b0,this->bPropagateEditChangeEvent);
        bVar7 = FPCGObjectSingleOverride::IsValid(&local_228);
        if (bVar7) {
          iVar9 = (this->ObjectSingleOverrides).ArrayNum;
          if (iVar9 == (this->ObjectSingleOverrides).ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x868,&(this->ObjectSingleOverrides).AllocatorInstance,
                               &(this->ObjectSingleOverrides).ArrayMax);
          }
          FVar5.Data = local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data;
          pFVar16 = (this->ObjectSingleOverrides).AllocatorInstance.Data + (longlong)iVar9 * 0x68;
          (this->ObjectSingleOverrides).ArrayNum = iVar9 + 1;
          *(IPCGAttributeAccessorKeys **)pFVar16 = local_228.InputKeys.Ptr;
          local_228.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 8) = local_228.ObjectOverrideInputAccessor.Ptr;
          local_228.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 0x10) = local_228.ObjectOverrideOutputAccessor.Ptr;
          local_228.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          pFVar2 = pFVar16 + 0x40;
          *(undefined ***)(pFVar16 + 0x18) = &___7FPCGAttributePropertySelector__6B_;
          *(EPCGAttributePropertySelection *)(pFVar16 + 0x20) =
               local_228.ObjectOverrideInputSelector.Selection;
          *(ulonglong *)(pFVar16 + 0x24) =
               CONCAT44(local_228.ObjectOverrideInputSelector.DomainName.Number,
                        local_228.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x2c) =
               CONCAT44(local_228.ObjectOverrideInputSelector.AttributeName.Number,
                        local_228.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x34) =
               CONCAT44(local_228.ObjectOverrideInputSelector.PropertyName.Number,
                        local_228.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value);
          *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
          iVar9 = local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          *(int *)(pFVar16 + 0x48) = local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          if (local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum == 0) {
            *(int *)(pFVar16 + 0x4c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum,0,
                       (ForAnyElementType *)pFVar2,
                       local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum,
                       (int *)(pFVar16 + 0x4c));
            ConstructItems<FString,FString,int>
                      (*(FScriptContainerElement **)&pFVar2->field_0x0,(FString *)FVar5.Data,iVar9);
          }
          pFVar16[0x50] =
               (FScriptContainerElement)local_228.ObjectOverrideInputSelector.ExtraProperty;
          pFVar16[0x58] = (FScriptContainerElement)local_228.bWillNeedLoading;
          *(pmf_15f13c7d *)(pFVar16 + 0x60) = local_228.ObjectOverrideFunction;
          param_1 = local_1a0;
        }
        else {
          local_198 = (FName)pUVar6->_padding_;
          pFVar10 = FText::FromName(&local_e8,&local_198);
          pFVar12 = FText::FromString(&local_d8,(FString *)(pFVar2 + lVar17 + 0x40));
          pFVar13 = FPCGAttributePropertySelector::ToString(&local_128,&local_150,false);
          FText::FromString(&local_180,pFVar13);
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_140,L"PCGObjectPropertyOverride",L"InitializeOverrideFailed",
                               L"Failed to initialize override \'{0}\' for property {1} on object \'{2}\'."
                              );
          pFVar15 = FTextFormat::FTextFormat(&local_c8,pFVar14,Default);
          local_b8.Type = Text;
          FText::FText((FText *)&local_b8.TextValue,&local_180);
          if ((local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_98 = 4;
          FText::FText(&local_88,pFVar12);
          if ((local_88.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_78 = 4;
          FText::FText(&local_68,pFVar10);
          if ((local_68.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_238.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_238.AllocatorInstance,3,&local_238.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_238.AllocatorInstance.Data,&local_b8,3);
          local_190.TextFormatData.Object = (pFVar15->TextFormatData).Object;
          local_190.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_190.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_190.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_190.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_170,&local_190,&local_238);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_238.AllocatorInstance.Data,local_238.ArrayNum);
          if ((FFormatArgumentValue *)local_238.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_238.AllocatorInstance.Data);
          }
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
          }
          if (local_88.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
          }
          if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                        0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
          if (local_180.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
          }
          pIVar3 = (pFVar12->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          pIVar3 = (pFVar10->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          PCGLog::LogErrorOnGraph(&local_170,local_1b0);
          if (local_170.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
          }
          if (local_140.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
          }
        }
        DestructItems<FString,int>
                  ((FString *)
                   local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data,
                   local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum);
        if (local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data);
        }
        if (local_228.ObjectOverrideOutputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_228.ObjectOverrideOutputAccessor.Ptr)->_padding_)
                    (local_228.ObjectOverrideOutputAccessor.Ptr,1);
        }
        if (local_228.ObjectOverrideInputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_228.ObjectOverrideInputAccessor.Ptr)->_padding_)
                    (local_228.ObjectOverrideInputAccessor.Ptr,1);
        }
        if (local_228.InputKeys.Ptr != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)(local_228.InputKeys.Ptr)->_padding_)(local_228.InputKeys.Ptr,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_128.ExtraNames.AllocatorInstance.Data,
                   local_128.ExtraNames.ArrayNum);
        if (local_128.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.ExtraNames.AllocatorInstance.Data);
        }
        iVar9 = param_1->ArrayNum;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < iVar9);
    }
    this->bInitialized = true;
  }
  return;
}

// GetAllInputSelectors @ 149e578a0

TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> * __thiscall
FPCGObjectOverrides<FPCGSoftISMComponentDescriptor>::GetAllInputSelectors
          (FPCGObjectOverrides<FPCGSoftISMComponentDescriptor> *this,
          TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FPCGAttributePropertySelector *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FPCGAttributePropertySelector local_58;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (this->ObjectSingleOverrides).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = (this->ObjectSingleOverrides).ArrayNum;
  pFVar9 = (this->ObjectSingleOverrides).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar3 * 0x68;
  while( true ) {
    if ((this->ObjectSingleOverrides).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPCGObjectSingleOverride_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar9 == pFVar10) break;
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              (&local_58,(FPCGAttributePropertySelector *)(pFVar9 + 0x18));
    pFVar4 = (FPCGAttributePropertySelector *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar4 <= &local_58) && (&local_58 < pFVar4 + *piVar1)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              ((FPCGAttributePropertySelector *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x40),&local_58
              );
    DestructItems<FString,int>
              ((FString *)local_58.ExtraNames.AllocatorInstance.Data,local_58.ExtraNames.ArrayNum);
    if (local_58.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.ExtraNames.AllocatorInstance.Data);
    }
    pFVar9 = pFVar9 + 0x68;
  }
  return __return_storage_ptr__;
}

// GetAllInputSelectors @ 149e57a40

TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> * __thiscall
FPCGObjectOverrides<FPCGSoftSkinnedMeshComponentDescriptor>::GetAllInputSelectors
          (FPCGObjectOverrides<FPCGSoftSkinnedMeshComponentDescriptor> *this,
          TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FPCGAttributePropertySelector *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FPCGAttributePropertySelector local_58;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (this->ObjectSingleOverrides).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = (this->ObjectSingleOverrides).ArrayNum;
  pFVar9 = (this->ObjectSingleOverrides).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar3 * 0x68;
  while( true ) {
    if ((this->ObjectSingleOverrides).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPCGObjectSingleOverride_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar9 == pFVar10) break;
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              (&local_58,(FPCGAttributePropertySelector *)(pFVar9 + 0x18));
    pFVar4 = (FPCGAttributePropertySelector *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar4 <= &local_58) && (&local_58 < pFVar4 + *piVar1)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
    }
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              ((FPCGAttributePropertySelector *)
               ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x40),&local_58
              );
    DestructItems<FString,int>
              ((FString *)local_58.ExtraNames.AllocatorInstance.Data,local_58.ExtraNames.ArrayNum);
    if (local_58.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.ExtraNames.AllocatorInstance.Data);
    }
    pFVar9 = pFVar9 + 0x68;
  }
  return __return_storage_ptr__;
}

// Initialize @ 149e73940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPCGObjectOverrides<FPCGSoftISMComponentDescriptor>::Initialize
          (FPCGObjectOverrides<FPCGSoftISMComponentDescriptor> *this,
          TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *param_1,
          FPCGSoftISMComponentDescriptor *param_2,UPCGData *param_3,FPCGContext *param_4,
          bool param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  UScriptStruct *pUVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FText *pFVar10;
  UPackage *pUVar11;
  FText *pFVar12;
  FString *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStackY_268 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_228;
  FPCGObjectSingleOverride local_218;
  UPCGData *local_1a8;
  UScriptStruct *local_1a0;
  FPCGContext *local_198;
  TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *local_190;
  FName local_188;
  FTextFormat local_180;
  FText local_170;
  FText local_160;
  FText local_150;
  FString local_140;
  FText local_130;
  FPCGAttributePropertySelector local_118;
  FText local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  FText local_78;
  undefined4 local_68;
  FText local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_198 = param_4;
  this->bInitialized = false;
  local_1a8 = param_3;
  local_190 = param_1;
  if (param_2 == (FPCGSoftISMComponentDescriptor *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_150,L"PCGObjectPropertyOverride",L"InitializeOverrideFailedNoObject"
                         ,
                         L"Failed to initialize property overrides. No template object was provided."
                        );
    PCGLog::LogErrorOnGraph(pFVar10,param_4);
    if (local_150.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
    }
  }
  else {
    *(undefined1 *)&(this->OutputKey)._padding_ = 0;
    (this->OutputKey).Ptr = param_2;
    this->bPropagateEditChangeEvent = param_5;
    this->CachedOutputObject = (UObject *)0x0;
    local_1a0 = Z_Registration_Info_UScriptStruct_FPCGSoftISMComponentDescriptor.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGSoftISMComponentDescriptor.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar11 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGSoftISMComponentDescriptor.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGSoftISMComponentDescriptor,
                           (UObject *)pUVar11,L"PCGSoftISMComponentDescriptor");
    }
    uVar18 = param_1->ArrayNum;
    local_1a0 = Z_Registration_Info_UScriptStruct_FPCGSoftISMComponentDescriptor.OuterSingleton;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    DestructItems<FPCGObjectSingleOverride,int>
              ((FPCGObjectSingleOverride *)(this->ObjectSingleOverrides).AllocatorInstance.Data,
               (this->ObjectSingleOverrides).ArrayNum);
    piVar1 = &(this->ObjectSingleOverrides).ArrayMax;
    (this->ObjectSingleOverrides).ArrayNum = 0;
    if (*piVar1 != uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar18,&(this->ObjectSingleOverrides).AllocatorInstance,0,piVar1);
    }
    iVar9 = param_1->ArrayNum;
    uVar18 = 0;
    if (0 < iVar9) {
      do {
        uVar8 = 0;
        if ((int)uVar18 < iVar9) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar17 = (longlong)(int)uVar18 * 0x50;
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  ((FPCGAttributePropertyInputSelector *)
                   ((param_1->AllocatorInstance).Data + lVar17),
                   (FPCGAttributePropertyInputSelector *)&local_118,local_1a8);
        uVar8 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar6 = local_1a0;
        pFVar2 = (param_1->AllocatorInstance).Data;
        local_218.ObjectOverrideFunction = (pmf_15f13c7d)0x0;
        local_218.ObjectOverrideInputSelector._36_4_ = 0;
        local_218.ObjectOverrideInputSelector.Selection = Attribute;
        local_218.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value = 0;
        local_218.ObjectOverrideInputSelector.DomainName.Number = 0;
        local_218.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value = 0;
        local_218.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_218.ObjectOverrideInputSelector._padding_ =
             (longlong)&___7FPCGAttributePropertySelector__6B_;
        local_218.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
        local_218.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_218.ObjectOverrideInputSelector.AttributeName.Number = 0;
        local_218.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value = 0;
        local_218.ObjectOverrideInputSelector.PropertyName.Number = 0;
        local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum = 0;
        local_218.ObjectOverrideInputSelector.ExtraNames.ArrayMax = 0;
        local_218.ObjectOverrideInputSelector.ExtraProperty = Index;
        local_218.ObjectOverrideInputSelector._57_7_ = 0;
        local_218.bWillNeedLoading = false;
        local_218._89_3_ = 0;
        local_218._padding_ = 0;
        FPCGObjectSingleOverride::Initialize
                  (&local_218,&local_118,(FString *)(pFVar2 + lVar17 + 0x40),(UStruct *)local_1a0,
                   local_1a8,local_198,this->bPropagateEditChangeEvent);
        if ((((local_218.InputKeys.Ptr == (IPCGAttributeAccessorKeys *)0x0) ||
             (local_218.ObjectOverrideInputAccessor.Ptr == (IPCGAttributeAccessor *)0x0)) ||
            (local_218.ObjectOverrideOutputAccessor.Ptr == (IPCGAttributeAccessor *)0x0)) ||
           (local_218.ObjectOverrideFunction == (pmf_15f13c7d)0x0)) {
          local_188 = (FName)pUVar6->_padding_;
          pFVar10 = FText::FromName(&local_d8,&local_188);
          pFVar12 = FText::FromString(&local_c8,(FString *)(pFVar2 + lVar17 + 0x40));
          pFVar13 = FPCGAttributePropertySelector::ToString(&local_118,&local_140,false);
          FText::FromString(&local_170,pFVar13);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_130,L"PCGObjectPropertyOverride",L"InitializeOverrideFailed",
                               L"Failed to initialize override \'{0}\' for property {1} on object \'{2}\'."
                              );
          pFVar15 = FTextFormat::FTextFormat(&local_b8,pFVar14,Default);
          local_a8.Type = Text;
          FText::FText((FText *)&local_a8.TextValue,&local_170);
          if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_88 = 4;
          FText::FText(&local_78,pFVar12);
          if ((local_78.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_68 = 4;
          FText::FText(&local_58,pFVar10);
          if ((local_58.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_228.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_228.AllocatorInstance,3,&local_228.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_228.AllocatorInstance.Data,&local_a8,3);
          local_180.TextFormatData.Object = (pFVar15->TextFormatData).Object;
          local_180.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_180.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_180.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_180.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_160,&local_180,&local_228);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_228.AllocatorInstance.Data,local_228.ArrayNum);
          if ((FFormatArgumentValue *)local_228.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_228.AllocatorInstance.Data);
          }
          if (local_58.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
          }
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                        0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
          if (local_170.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
          }
          pIVar3 = (pFVar12->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          pIVar3 = (pFVar10->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          PCGLog::LogErrorOnGraph(&local_160,local_198);
          if (local_160.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
          }
          if (local_130.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
          }
        }
        else {
          iVar9 = (this->ObjectSingleOverrides).ArrayNum;
          piVar1 = &(this->ObjectSingleOverrides).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x868,&(this->ObjectSingleOverrides).AllocatorInstance,piVar1);
          }
          FVar5.Data = local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data;
          (this->ObjectSingleOverrides).ArrayNum = iVar9 + 1;
          pFVar16 = (this->ObjectSingleOverrides).AllocatorInstance.Data + (longlong)iVar9 * 0x68;
          *(IPCGAttributeAccessorKeys **)pFVar16 = local_218.InputKeys.Ptr;
          local_218.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 8) = local_218.ObjectOverrideInputAccessor.Ptr;
          local_218.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 0x10) = local_218.ObjectOverrideOutputAccessor.Ptr;
          local_218.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          pFVar2 = pFVar16 + 0x40;
          *(undefined ***)(pFVar16 + 0x18) = &___7FPCGAttributePropertySelector__6B_;
          *(EPCGAttributePropertySelection *)(pFVar16 + 0x20) =
               local_218.ObjectOverrideInputSelector.Selection;
          *(ulonglong *)(pFVar16 + 0x24) =
               CONCAT44(local_218.ObjectOverrideInputSelector.DomainName.Number,
                        local_218.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x2c) =
               CONCAT44(local_218.ObjectOverrideInputSelector.AttributeName.Number,
                        local_218.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x34) =
               CONCAT44(local_218.ObjectOverrideInputSelector.PropertyName.Number,
                        local_218.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value);
          *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
          iVar9 = local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          *(int *)(pFVar16 + 0x48) = local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          if (local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum == 0) {
            *(int *)(pFVar16 + 0x4c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum,0,
                       (ForAnyElementType *)pFVar2,
                       local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum,
                       (int *)(pFVar16 + 0x4c));
            ConstructItems<FString,FString,int>
                      (*(FScriptContainerElement **)&pFVar2->field_0x0,(FString *)FVar5.Data,iVar9);
          }
          pFVar16[0x50] =
               (FScriptContainerElement)local_218.ObjectOverrideInputSelector.ExtraProperty;
          pFVar16[0x58] = (FScriptContainerElement)local_218.bWillNeedLoading;
          *(pmf_15f13c7d *)(pFVar16 + 0x60) = local_218.ObjectOverrideFunction;
          param_1 = local_190;
        }
        DestructItems<FString,int>
                  ((FString *)
                   local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data,
                   local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum);
        if (local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data);
        }
        if (local_218.ObjectOverrideOutputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_218.ObjectOverrideOutputAccessor.Ptr)->_padding_)
                    (local_218.ObjectOverrideOutputAccessor.Ptr,1);
        }
        if (local_218.ObjectOverrideInputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_218.ObjectOverrideInputAccessor.Ptr)->_padding_)
                    (local_218.ObjectOverrideInputAccessor.Ptr,1);
        }
        if (local_218.InputKeys.Ptr != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)(local_218.InputKeys.Ptr)->_padding_)(local_218.InputKeys.Ptr,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_118.ExtraNames.AllocatorInstance.Data,
                   local_118.ExtraNames.ArrayNum);
        if (local_118.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.ExtraNames.AllocatorInstance.Data);
        }
        iVar9 = param_1->ArrayNum;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < iVar9);
    }
    this->bInitialized = true;
  }
  return;
}

// Initialize @ 149e74070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPCGObjectOverrides<FPCGSoftSkinnedMeshComponentDescriptor>::Initialize
          (FPCGObjectOverrides<FPCGSoftSkinnedMeshComponentDescriptor> *this,
          TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *param_1,
          FPCGSoftSkinnedMeshComponentDescriptor *param_2,UPCGData *param_3,FPCGContext *param_4,
          bool param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  UScriptStruct *pUVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FText *pFVar10;
  UPackage *pUVar11;
  FText *pFVar12;
  FString *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStackY_268 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_228;
  FPCGObjectSingleOverride local_218;
  UPCGData *local_1a8;
  UScriptStruct *local_1a0;
  FPCGContext *local_198;
  TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *local_190;
  FName local_188;
  FTextFormat local_180;
  FText local_170;
  FText local_160;
  FText local_150;
  FString local_140;
  FText local_130;
  FPCGAttributePropertySelector local_118;
  FText local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FFormatArgumentValue local_a8;
  undefined4 local_88;
  FText local_78;
  undefined4 local_68;
  FText local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_198 = param_4;
  this->bInitialized = false;
  local_1a8 = param_3;
  local_190 = param_1;
  if (param_2 == (FPCGSoftSkinnedMeshComponentDescriptor *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_150,L"PCGObjectPropertyOverride",L"InitializeOverrideFailedNoObject"
                         ,
                         L"Failed to initialize property overrides. No template object was provided."
                        );
    PCGLog::LogErrorOnGraph(pFVar10,param_4);
    if (local_150.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
    }
  }
  else {
    *(undefined1 *)&(this->OutputKey)._padding_ = 0;
    (this->OutputKey).Ptr = param_2;
    this->bPropagateEditChangeEvent = param_5;
    this->CachedOutputObject = (UObject *)0x0;
    local_1a0 = Z_Registration_Info_UScriptStruct_FPCGSoftSkinnedMeshComponentDescriptor.
                OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FPCGSoftSkinnedMeshComponentDescriptor.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar11 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGSoftSkinnedMeshComponentDescriptor.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGSoftSkinnedMeshComponentDescriptor,
                           (UObject *)pUVar11,L"PCGSoftSkinnedMeshComponentDescriptor");
    }
    uVar18 = param_1->ArrayNum;
    local_1a0 = Z_Registration_Info_UScriptStruct_FPCGSoftSkinnedMeshComponentDescriptor.
                OuterSingleton;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    DestructItems<FPCGObjectSingleOverride,int>
              ((FPCGObjectSingleOverride *)(this->ObjectSingleOverrides).AllocatorInstance.Data,
               (this->ObjectSingleOverrides).ArrayNum);
    piVar1 = &(this->ObjectSingleOverrides).ArrayMax;
    (this->ObjectSingleOverrides).ArrayNum = 0;
    if (*piVar1 != uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar18,&(this->ObjectSingleOverrides).AllocatorInstance,0,piVar1);
    }
    iVar9 = param_1->ArrayNum;
    uVar18 = 0;
    if (0 < iVar9) {
      do {
        uVar8 = 0;
        if ((int)uVar18 < iVar9) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar17 = (longlong)(int)uVar18 * 0x50;
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  ((FPCGAttributePropertyInputSelector *)
                   ((param_1->AllocatorInstance).Data + lVar17),
                   (FPCGAttributePropertyInputSelector *)&local_118,local_1a8);
        uVar8 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar6 = local_1a0;
        pFVar2 = (param_1->AllocatorInstance).Data;
        local_218.ObjectOverrideFunction = (pmf_15f13c7d)0x0;
        local_218.ObjectOverrideInputSelector._36_4_ = 0;
        local_218.ObjectOverrideInputSelector.Selection = Attribute;
        local_218.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value = 0;
        local_218.ObjectOverrideInputSelector.DomainName.Number = 0;
        local_218.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value = 0;
        local_218.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_218.ObjectOverrideInputSelector._padding_ =
             (longlong)&___7FPCGAttributePropertySelector__6B_;
        local_218.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
        local_218.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_218.ObjectOverrideInputSelector.AttributeName.Number = 0;
        local_218.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value = 0;
        local_218.ObjectOverrideInputSelector.PropertyName.Number = 0;
        local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum = 0;
        local_218.ObjectOverrideInputSelector.ExtraNames.ArrayMax = 0;
        local_218.ObjectOverrideInputSelector.ExtraProperty = Index;
        local_218.ObjectOverrideInputSelector._57_7_ = 0;
        local_218.bWillNeedLoading = false;
        local_218._89_3_ = 0;
        local_218._padding_ = 0;
        FPCGObjectSingleOverride::Initialize
                  (&local_218,&local_118,(FString *)(pFVar2 + lVar17 + 0x40),(UStruct *)local_1a0,
                   local_1a8,local_198,this->bPropagateEditChangeEvent);
        if ((((local_218.InputKeys.Ptr == (IPCGAttributeAccessorKeys *)0x0) ||
             (local_218.ObjectOverrideInputAccessor.Ptr == (IPCGAttributeAccessor *)0x0)) ||
            (local_218.ObjectOverrideOutputAccessor.Ptr == (IPCGAttributeAccessor *)0x0)) ||
           (local_218.ObjectOverrideFunction == (pmf_15f13c7d)0x0)) {
          local_188 = (FName)pUVar6->_padding_;
          pFVar10 = FText::FromName(&local_d8,&local_188);
          pFVar12 = FText::FromString(&local_c8,(FString *)(pFVar2 + lVar17 + 0x40));
          pFVar13 = FPCGAttributePropertySelector::ToString(&local_118,&local_140,false);
          FText::FromString(&local_170,pFVar13);
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_130,L"PCGObjectPropertyOverride",L"InitializeOverrideFailed",
                               L"Failed to initialize override \'{0}\' for property {1} on object \'{2}\'."
                              );
          pFVar15 = FTextFormat::FTextFormat(&local_b8,pFVar14,Default);
          local_a8.Type = Text;
          FText::FText((FText *)&local_a8.TextValue,&local_170);
          if ((local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_88 = 4;
          FText::FText(&local_78,pFVar12);
          if ((local_78.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_68 = 4;
          FText::FText(&local_58,pFVar10);
          if ((local_58.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_228.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_228.AllocatorInstance,3,&local_228.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_228.AllocatorInstance.Data,&local_a8,3);
          local_180.TextFormatData.Object = (pFVar15->TextFormatData).Object;
          local_180.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_180.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_180.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_180.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_160,&local_180,&local_228);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_228.AllocatorInstance.Data,local_228.ArrayNum);
          if ((FFormatArgumentValue *)local_228.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_228.AllocatorInstance.Data);
          }
          if (local_58.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
          }
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          if (local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                        0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
          if (local_170.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
          }
          pIVar3 = (pFVar12->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          pIVar3 = (pFVar10->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          PCGLog::LogErrorOnGraph(&local_160,local_198);
          if (local_160.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
          }
          if (local_130.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
          }
        }
        else {
          iVar9 = (this->ObjectSingleOverrides).ArrayNum;
          piVar1 = &(this->ObjectSingleOverrides).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x868,&(this->ObjectSingleOverrides).AllocatorInstance,piVar1);
          }
          FVar5.Data = local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data;
          (this->ObjectSingleOverrides).ArrayNum = iVar9 + 1;
          pFVar16 = (this->ObjectSingleOverrides).AllocatorInstance.Data + (longlong)iVar9 * 0x68;
          *(IPCGAttributeAccessorKeys **)pFVar16 = local_218.InputKeys.Ptr;
          local_218.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 8) = local_218.ObjectOverrideInputAccessor.Ptr;
          local_218.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 0x10) = local_218.ObjectOverrideOutputAccessor.Ptr;
          local_218.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          pFVar2 = pFVar16 + 0x40;
          *(undefined ***)(pFVar16 + 0x18) = &___7FPCGAttributePropertySelector__6B_;
          *(EPCGAttributePropertySelection *)(pFVar16 + 0x20) =
               local_218.ObjectOverrideInputSelector.Selection;
          *(ulonglong *)(pFVar16 + 0x24) =
               CONCAT44(local_218.ObjectOverrideInputSelector.DomainName.Number,
                        local_218.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x2c) =
               CONCAT44(local_218.ObjectOverrideInputSelector.AttributeName.Number,
                        local_218.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x34) =
               CONCAT44(local_218.ObjectOverrideInputSelector.PropertyName.Number,
                        local_218.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value);
          *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
          iVar9 = local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          *(int *)(pFVar16 + 0x48) = local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          if (local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum == 0) {
            *(int *)(pFVar16 + 0x4c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum,0,
                       (ForAnyElementType *)pFVar2,
                       local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum,
                       (int *)(pFVar16 + 0x4c));
            ConstructItems<FString,FString,int>
                      (*(FScriptContainerElement **)&pFVar2->field_0x0,(FString *)FVar5.Data,iVar9);
          }
          pFVar16[0x50] =
               (FScriptContainerElement)local_218.ObjectOverrideInputSelector.ExtraProperty;
          pFVar16[0x58] = (FScriptContainerElement)local_218.bWillNeedLoading;
          *(pmf_15f13c7d *)(pFVar16 + 0x60) = local_218.ObjectOverrideFunction;
          param_1 = local_190;
        }
        DestructItems<FString,int>
                  ((FString *)
                   local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data,
                   local_218.ObjectOverrideInputSelector.ExtraNames.ArrayNum);
        if (local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data);
        }
        if (local_218.ObjectOverrideOutputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_218.ObjectOverrideOutputAccessor.Ptr)->_padding_)
                    (local_218.ObjectOverrideOutputAccessor.Ptr,1);
        }
        if (local_218.ObjectOverrideInputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_218.ObjectOverrideInputAccessor.Ptr)->_padding_)
                    (local_218.ObjectOverrideInputAccessor.Ptr,1);
        }
        if (local_218.InputKeys.Ptr != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)(local_218.InputKeys.Ptr)->_padding_)(local_218.InputKeys.Ptr,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_118.ExtraNames.AllocatorInstance.Data,
                   local_118.ExtraNames.ArrayNum);
        if (local_118.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.ExtraNames.AllocatorInstance.Data);
        }
        iVar9 = param_1->ArrayNum;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < iVar9);
    }
    this->bInitialized = true;
  }
  return;
}

// Initialize @ 149e747a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPCGObjectOverrides<UObject>::Initialize
          (FPCGObjectOverrides<UObject> *this,
          TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *param_1,
          UObject *param_2,UPCGData *param_3,FPCGContext *param_4,bool param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  UStruct *pUVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FText *pFVar10;
  UObject *pUVar11;
  FText *pFVar12;
  FString *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStackY_278 [32];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_238;
  FPCGObjectSingleOverride local_228;
  UPCGData *local_1b8;
  FPCGContext *local_1b0;
  UStruct *local_1a8;
  TArray<FPCGObjectPropertyOverrideDescription,TSizedDefaultAllocator<32>_> *local_1a0;
  FName local_198;
  FTextFormat local_190;
  FText local_180;
  FText local_170;
  FText local_160;
  FString local_150;
  FText local_140;
  FPCGAttributePropertySelector local_128;
  FText local_e8;
  FText local_d8;
  FTextFormat local_c8;
  FFormatArgumentValue local_b8;
  undefined4 local_98;
  FText local_88;
  undefined4 local_78;
  FText local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1b0 = param_4;
  this->bInitialized = false;
  local_1b8 = param_3;
  local_1a0 = param_1;
  if (param_2 == (UObject *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_160,L"PCGObjectPropertyOverride",L"InitializeOverrideFailedNoObject"
                         ,
                         L"Failed to initialize property overrides. No template object was provided."
                        );
    PCGLog::LogErrorOnGraph(pFVar10,param_4);
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
  }
  else {
    this->CachedOutputObject = (UObject *)0x0;
    *(undefined1 *)&(this->OutputKey)._padding_ = 0;
    (this->OutputKey).Ptr = param_2;
    this->bPropagateEditChangeEvent = param_5;
    local_1a8 = *(UStruct **)&param_2->field_0x10;
    pUVar11 = (UObject *)0x0;
    if (param_5) {
      pUVar11 = param_2;
    }
    this->CachedOutputObject = pUVar11;
    uVar18 = param_1->ArrayNum;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    DestructItems<FPCGObjectSingleOverride,int>
              ((FPCGObjectSingleOverride *)(this->ObjectSingleOverrides).AllocatorInstance.Data,
               (this->ObjectSingleOverrides).ArrayNum);
    piVar1 = &(this->ObjectSingleOverrides).ArrayMax;
    (this->ObjectSingleOverrides).ArrayNum = 0;
    if (*piVar1 != uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar18,&(this->ObjectSingleOverrides).AllocatorInstance,0,piVar1);
    }
    iVar9 = param_1->ArrayNum;
    uVar18 = 0;
    if (0 < iVar9) {
      do {
        uVar8 = 0;
        if ((int)uVar18 < iVar9) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar17 = (longlong)(int)uVar18 * 0x50;
        FPCGAttributePropertyInputSelector::CopyAndFixLast
                  ((FPCGAttributePropertyInputSelector *)
                   ((param_1->AllocatorInstance).Data + lVar17),
                   (FPCGAttributePropertyInputSelector *)&local_128,local_1b8);
        uVar8 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar6 = local_1a8;
        pFVar2 = (param_1->AllocatorInstance).Data;
        local_228.ObjectOverrideFunction = (pmf_15f13c7d)0x0;
        local_228.ObjectOverrideInputSelector._36_4_ = 0;
        local_228.ObjectOverrideInputSelector.Selection = Attribute;
        local_228.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value = 0;
        local_228.ObjectOverrideInputSelector.DomainName.Number = 0;
        local_228.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value = 0;
        local_228.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_228.ObjectOverrideInputSelector._padding_ =
             (longlong)&___7FPCGAttributePropertySelector__6B_;
        local_228.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
        local_228.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
        local_228.ObjectOverrideInputSelector.AttributeName.Number = 0;
        local_228.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value = 0;
        local_228.ObjectOverrideInputSelector.PropertyName.Number = 0;
        local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum = 0;
        local_228.ObjectOverrideInputSelector.ExtraNames.ArrayMax = 0;
        local_228.ObjectOverrideInputSelector.ExtraProperty = Index;
        local_228.ObjectOverrideInputSelector._57_7_ = 0;
        local_228.bWillNeedLoading = false;
        local_228._89_3_ = 0;
        local_228._padding_ = 0;
        FPCGObjectSingleOverride::Initialize
                  (&local_228,&local_128,(FString *)(pFVar2 + lVar17 + 0x40),local_1a8,local_1b8,
                   local_1b0,this->bPropagateEditChangeEvent);
        if ((((local_228.InputKeys.Ptr == (IPCGAttributeAccessorKeys *)0x0) ||
             (local_228.ObjectOverrideInputAccessor.Ptr == (IPCGAttributeAccessor *)0x0)) ||
            (local_228.ObjectOverrideOutputAccessor.Ptr == (IPCGAttributeAccessor *)0x0)) ||
           (local_228.ObjectOverrideFunction == (pmf_15f13c7d)0x0)) {
          local_198 = (FName)pUVar6->_padding_;
          pFVar10 = FText::FromName(&local_e8,&local_198);
          pFVar12 = FText::FromString(&local_d8,(FString *)(pFVar2 + lVar17 + 0x40));
          pFVar13 = FPCGAttributePropertySelector::ToString(&local_128,&local_150,false);
          FText::FromString(&local_180,pFVar13);
          if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.Data.AllocatorInstance.Data);
          }
          pFVar14 = FText::AsLocalizable_Advanced_LocText
                              (&local_140,L"PCGObjectPropertyOverride",L"InitializeOverrideFailed",
                               L"Failed to initialize override \'{0}\' for property {1} on object \'{2}\'."
                              );
          pFVar15 = FTextFormat::FTextFormat(&local_c8,pFVar14,Default);
          local_b8.Type = Text;
          FText::FText((FText *)&local_b8.TextValue,&local_180);
          if ((local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_98 = 4;
          FText::FText(&local_88,pFVar12);
          if ((local_88.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_78 = 4;
          FText::FText(&local_68,pFVar10);
          if ((local_68.TextData.Reference == (ITextData *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_238.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_238.AllocatorInstance,3,&local_238.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_238.AllocatorInstance.Data,&local_b8,3);
          local_190.TextFormatData.Object = (pFVar15->TextFormatData).Object;
          local_190.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar15->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_190.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_190.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_190.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_170,&local_190,&local_238);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_238.AllocatorInstance.Data,local_238.ArrayNum);
          if ((FFormatArgumentValue *)local_238.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_238.AllocatorInstance.Data);
          }
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
          }
          if (local_88.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
          }
          if (local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_b8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                        0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar15->TextFormatData).SharedReferenceCount.ReferenceController);
          if (local_180.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
          }
          pIVar3 = (pFVar12->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          pIVar3 = (pFVar10->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          PCGLog::LogErrorOnGraph(&local_170,local_1b0);
          if (local_170.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
          }
          if (local_140.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
          }
        }
        else {
          iVar9 = (this->ObjectSingleOverrides).ArrayNum;
          piVar1 = &(this->ObjectSingleOverrides).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x868,&(this->ObjectSingleOverrides).AllocatorInstance,piVar1);
          }
          FVar5.Data = local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data;
          (this->ObjectSingleOverrides).ArrayNum = iVar9 + 1;
          pFVar16 = (this->ObjectSingleOverrides).AllocatorInstance.Data + (longlong)iVar9 * 0x68;
          *(IPCGAttributeAccessorKeys **)pFVar16 = local_228.InputKeys.Ptr;
          local_228.InputKeys.Ptr = (IPCGAttributeAccessorKeys *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 8) = local_228.ObjectOverrideInputAccessor.Ptr;
          local_228.ObjectOverrideInputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          *(IPCGAttributeAccessor **)(pFVar16 + 0x10) = local_228.ObjectOverrideOutputAccessor.Ptr;
          local_228.ObjectOverrideOutputAccessor.Ptr = (IPCGAttributeAccessor *)0x0;
          pFVar2 = pFVar16 + 0x40;
          *(undefined ***)(pFVar16 + 0x18) = &___7FPCGAttributePropertySelector__6B_;
          *(EPCGAttributePropertySelection *)(pFVar16 + 0x20) =
               local_228.ObjectOverrideInputSelector.Selection;
          *(ulonglong *)(pFVar16 + 0x24) =
               CONCAT44(local_228.ObjectOverrideInputSelector.DomainName.Number,
                        local_228.ObjectOverrideInputSelector.DomainName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x2c) =
               CONCAT44(local_228.ObjectOverrideInputSelector.AttributeName.Number,
                        local_228.ObjectOverrideInputSelector.AttributeName.ComparisonIndex.Value);
          *(ulonglong *)(pFVar16 + 0x34) =
               CONCAT44(local_228.ObjectOverrideInputSelector.PropertyName.Number,
                        local_228.ObjectOverrideInputSelector.PropertyName.ComparisonIndex.Value);
          *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
          iVar9 = local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          *(int *)(pFVar16 + 0x48) = local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum;
          if (local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum == 0) {
            *(int *)(pFVar16 + 0x4c) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum,0,
                       (ForAnyElementType *)pFVar2,
                       local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum,
                       (int *)(pFVar16 + 0x4c));
            ConstructItems<FString,FString,int>
                      (*(FScriptContainerElement **)&pFVar2->field_0x0,(FString *)FVar5.Data,iVar9);
          }
          pFVar16[0x50] =
               (FScriptContainerElement)local_228.ObjectOverrideInputSelector.ExtraProperty;
          pFVar16[0x58] = (FScriptContainerElement)local_228.bWillNeedLoading;
          *(pmf_15f13c7d *)(pFVar16 + 0x60) = local_228.ObjectOverrideFunction;
          param_1 = local_1a0;
        }
        DestructItems<FString,int>
                  ((FString *)
                   local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data,
                   local_228.ObjectOverrideInputSelector.ExtraNames.ArrayNum);
        if (local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.ObjectOverrideInputSelector.ExtraNames.AllocatorInstance.Data);
        }
        if (local_228.ObjectOverrideOutputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_228.ObjectOverrideOutputAccessor.Ptr)->_padding_)
                    (local_228.ObjectOverrideOutputAccessor.Ptr,1);
        }
        if (local_228.ObjectOverrideInputAccessor.Ptr != (IPCGAttributeAccessor *)0x0) {
          (**(code **)(local_228.ObjectOverrideInputAccessor.Ptr)->_padding_)
                    (local_228.ObjectOverrideInputAccessor.Ptr,1);
        }
        if (local_228.InputKeys.Ptr != (IPCGAttributeAccessorKeys *)0x0) {
          (**(code **)(local_228.InputKeys.Ptr)->_padding_)(local_228.InputKeys.Ptr,1);
        }
        DestructItems<FString,int>
                  ((FString *)local_128.ExtraNames.AllocatorInstance.Data,
                   local_128.ExtraNames.ArrayNum);
        if (local_128.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.ExtraNames.AllocatorInstance.Data);
        }
        iVar9 = param_1->ArrayNum;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < iVar9);
    }
    this->bInitialized = true;
  }
  return;
}

