// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// operator() @ 149b5d990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000149b5dd2f) */
/* WARNING: Removing unreachable block (ram,0x000149b5dd3c) */
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
`FPCGCopyAttributesElement::ExecuteInternal'::__l20::<lambda_1>::operator()(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  UPCGData *pUVar4;
  UPCGData *pUVar5;
  FPCGContext *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  FText *pFVar15;
  FString *pFVar16;
  undefined8 uVar17;
  wchar_t *pwVar18;
  undefined1 auStack_268 [32];
  FScriptContainerElement *local_248;
  longlong local_240;
  undefined4 local_238;
  FPCGMetadataDomainID *local_230;
  FPCGMetadataDomainID *local_228;
  undefined1 local_220 [8];
  initializer_list<TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&>_>
  local_218;
  undefined1 local_208 [56];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1d0;
  undefined1 local_1c0;
  undefined1 local_1b8 [40];
  TArray<FString,TSizedDefaultAllocator<32>_> local_190;
  undefined1 local_180;
  FPCGContext *local_178;
  undefined2 local_170;
  FString local_168;
  FString local_158;
  FText local_148;
  FString local_138;
  FString local_128;
  FText local_118;
  FString local_108;
  FString local_f8;
  FText local_e8;
  FString local_d8;
  FString local_c8;
  FText local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [72];
  undefined4 local_50;
  FPCGContext *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_268;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar12 = false;
  local_238 = 0;
  iVar2 = (int)plVar3[1];
  uVar13 = 0;
  if (param_1 < iVar2) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (local_248 = (FScriptContainerElement *)(longlong)param_1, local_240 = (longlong)iVar2,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar4 = *(UPCGData **)((longlong)this + 8);
  pUVar5 = *(UPCGData **)((longlong)param_1 * 0x78 + *plVar3);
  if ((pUVar4 == (UPCGData *)0x0) || (pUVar5 == (UPCGData *)0x0)) {
    if ((byte)LogPCG._0_1_ < 2) {
      return;
    }
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_b8,L"PCGMetadataElement",L"InvalidInputData",L"Invalid input data");
    pFVar16 = FText::ToString(pFVar15);
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    if (*(FPCGContext **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
      pFVar16 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x18),&local_c8);
      if ((pFVar16->Data).ArrayNum == 0) {
        bVar12 = true;
      }
      else {
        bVar12 = true;
      }
    }
    pFVar6 = *(FPCGContext **)((longlong)this + 0x18);
    if (pFVar6 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(pFVar6,&local_d8);
    }
    local_248 = (FScriptContainerElement *)pwVar18;
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((pFVar6 != (FPCGContext *)0x0) &&
       (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if ((bVar12) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  else {
    lVar14 = (**(code **)(pUVar5->_padding_ + 800))(pUVar5);
    if (lVar14 == 0) {
      if ((byte)LogPCG._0_1_ < 3) {
        return;
      }
      pFVar15 = FText::AsLocalizable_Advanced_LocText
                          (&local_148,L"PCGMetadataElement",L"MissingMetadata",
                           L"Source has no metadata");
      pFVar16 = FText::ToString(pFVar15);
      if ((pFVar16->Data).ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      if (*(FPCGContext **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
        pFVar16 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x18),&local_158);
        if ((pFVar16->Data).ArrayNum == 0) {
          bVar8 = true;
        }
        else {
          bVar8 = true;
        }
      }
      pFVar6 = *(FPCGContext **)((longlong)this + 0x18);
      if (pFVar6 != (FPCGContext *)0x0) {
        FPCGContext::GetExecutionSourceName(pFVar6,&local_168);
      }
      local_248 = (FScriptContainerElement *)pwVar18;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((pFVar6 != (FPCGContext *)0x0) &&
         (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      local_b8.TextData.Reference = local_148.TextData.Reference;
      if ((bVar8) && (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
        local_b8.TextData.Reference = local_148.TextData.Reference;
      }
    }
    else {
      if (pUVar4 != pUVar5) {
LAB_149b5dd61:
        if (**(longlong **)((longlong)this + 0x30) == 0) {
          uVar17 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x310))
                             (*(longlong **)((longlong)this + 8),
                              *(undefined8 *)((longlong)this + 0x18),1);
          **(undefined8 **)((longlong)this + 0x30) = uVar17;
        }
        if (*(char *)(*(longlong *)((longlong)this + 0x20) + 0xcc) != '\0') {
          local_a8._8_8_ = **(undefined8 **)((longlong)this + 0x30);
          local_230 = &PCGMetadataDomainID::Default;
          local_228 = &PCGMetadataDomainID::Default;
          local_218._First =
               (TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&> *)
               &local_230;
          local_218._Last =
               (TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&> *)
               local_220;
          local_a8._0_8_ = pUVar5;
          TMap<FPCGMetadataDomainID,FPCGMetadataDomainID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>_>
          ::
          TMap<FPCGMetadataDomainID,FPCGMetadataDomainID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>_>
                    ((TMap<FPCGMetadataDomainID,FPCGMetadataDomainID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>_>
                      *)local_98,
                     (initializer_list<TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&>_>
                      *)(local_220 + 8));
          local_48 = *(FPCGContext **)((longlong)this + 0x18);
          if (*(char *)(*(longlong *)((longlong)this + 0x20) + 0xcd) == '\0') {
            PCGMetadataHelpers::FPCGCopyAllAttributesParams::InitializeMappingFromDomainNames
                      ((FPCGCopyAllAttributesParams *)local_a8,
                       (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                        *)(*(longlong *)((longlong)this + 0x20) + 0xd0));
          }
          else {
            PCGMetadataHelpers::FPCGCopyAllAttributesParams::InitializeMappingForAllDomains
                      ((FPCGCopyAllAttributesParams *)local_a8);
          }
          if (local_98._8_4_ != local_98._52_4_) {
            bVar1 = **(byte **)((longlong)this + 0x28);
            bVar12 = PCGMetadataHelpers::CopyAllAttributes((FPCGCopyAllAttributesParams *)local_a8);
            **(byte **)((longlong)this + 0x28) = bVar12 | bVar1;
          }
          local_50 = 0;
          if ((void *)local_98._64_8_ != (void *)0x0) {
            FMemory::Free((void *)local_98._64_8_);
          }
          TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98);
          return;
        }
        local_208._0_8_ = (UPCGData *)0x0;
        local_208._8_8_ = (UPCGData *)0x0;
        FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
                  ((FPCGAttributePropertyInputSelector *)(local_208 + 0x10));
        FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
                  ((FPCGAttributePropertyOutputSelector *)local_1b8);
        lVar14 = *(longlong *)((longlong)this + 0x20);
        local_178 = (FPCGContext *)0x0;
        local_170._0_1_ = Unknown;
        local_170._1_1_ = false;
        local_208._8_8_ = **(undefined8 **)((longlong)this + 0x30);
        local_208._24_4_ = *(undefined4 *)(lVar14 + 0x128);
        local_208._28_8_ = *(undefined8 *)(lVar14 + 300);
        local_208._36_8_ = *(undefined8 *)(lVar14 + 0x134);
        local_208._44_8_ = *(undefined8 *)(lVar14 + 0x13c);
        local_208._0_8_ = pUVar5;
        TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                  (&local_1d0,(TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar14 + 0x148));
        local_1c0 = *(undefined1 *)(lVar14 + 0x158);
        lVar14 = *(longlong *)((longlong)this + 0x20);
        local_1b8._8_4_ = *(undefined4 *)(lVar14 + 0x168);
        local_1b8._12_8_ = *(undefined8 *)(lVar14 + 0x16c);
        local_1b8._20_8_ = *(undefined8 *)(lVar14 + 0x174);
        local_1b8._28_8_ = *(undefined8 *)(lVar14 + 0x17c);
        TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                  (&local_190,(TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar14 + 0x188));
        local_180 = *(undefined1 *)(lVar14 + 0x198);
        local_178 = *(FPCGContext **)((longlong)this + 0x18);
        local_170._1_1_ = pUVar4 == pUVar5;
        bVar1 = **(byte **)((longlong)this + 0x28);
        bVar12 = PCGMetadataHelpers::CopyAttribute((FPCGCopyAttributeParams *)local_208);
        **(byte **)((longlong)this + 0x28) = bVar12 | bVar1;
        DestructItems<FString,int>((FString *)local_190.AllocatorInstance.Data,local_190.ArrayNum);
        if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.AllocatorInstance.Data);
        }
        DestructItems<FString,int>((FString *)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum);
        if (local_1d0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_1d0.AllocatorInstance.Data);
        return;
      }
      lVar14 = *(longlong *)((longlong)this + 0x20);
      if (*(char *)(lVar14 + 0xcc) == '\0') {
        bVar12 = FPCGAttributePropertySelector::operator==
                           ((FPCGAttributePropertySelector *)(lVar14 + 0x120),
                            (FPCGAttributePropertySelector *)(lVar14 + 0x160));
        if (!bVar12) goto LAB_149b5dd61;
        if ((byte)LogPCG._0_1_ < 6) {
          return;
        }
        pFVar15 = FText::AsLocalizable_Advanced_LocText
                            (&local_e8,L"PCGMetadataElement",L"TrivialCopy",
                             L"Copying attribute to itself is a trivial operation.");
        pFVar16 = FText::ToString(pFVar15);
        if ((pFVar16->Data).ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
        }
        if (*(FPCGContext **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
          pFVar16 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x18),&local_f8);
          if ((pFVar16->Data).ArrayNum == 0) {
            bVar10 = true;
          }
          else {
            bVar10 = true;
          }
        }
        if (*(FPCGContext **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
          FPCGContext::GetExecutionSourceName(*(FPCGContext **)((longlong)this + 0x18),&local_108);
        }
        local_248 = (FScriptContainerElement *)pwVar18;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        local_b8.TextData.Reference = local_e8.TextData.Reference;
        if ((bVar10) && (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          local_b8.TextData.Reference = local_e8.TextData.Reference;
        }
      }
      else {
        if ((byte)LogPCG._0_1_ < 6) {
          return;
        }
        pFVar15 = FText::AsLocalizable_Advanced_LocText
                            (&local_118,L"PCGMetadataElement",L"TrivialAllCopy",
                             L"Copying all attributes on itself is a trivial operation.");
        pFVar16 = FText::ToString(pFVar15);
        if ((pFVar16->Data).ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
        }
        if (*(FPCGContext **)((longlong)this + 0x18) != (FPCGContext *)0x0) {
          pFVar16 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x18),&local_128);
          if ((pFVar16->Data).ArrayNum == 0) {
            bVar9 = true;
          }
          else {
            bVar9 = true;
          }
        }
        pFVar6 = *(FPCGContext **)((longlong)this + 0x18);
        if (pFVar6 != (FPCGContext *)0x0) {
          FPCGContext::GetExecutionSourceName(pFVar6,&local_138);
        }
        local_248 = (FScriptContainerElement *)pwVar18;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((pFVar6 != (FPCGContext *)0x0) &&
           (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        local_b8.TextData.Reference = local_118.TextData.Reference;
        if ((bVar9) && (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
          local_b8.TextData.Reference = local_118.TextData.Reference;
        }
      }
    }
  }
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  return;
}

// ExecuteInternal @ 149b6ef10

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

bool __thiscall
FPCGCopyAttributesElement::ExecuteInternal(FPCGCopyAttributesElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *this_00;
  int *piVar1;
  int iVar2;
  UPCGNode *this_01;
  code *pcVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UPCGSettings *pUVar9;
  TObjectPtr<UPCGSettings>_u_0 TVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  FPCGTaggedData *pFVar13;
  int iVar14;
  uint uVar15;
  char cVar16;
  FPCGTaggedData *pFVar17;
  int iVar18;
  bool bVar19;
  <lambda_1> local_res10;
  char local_res18 [8];
  char local_res20;
  TObjectPtr<UPCGSettings>_u_0 local_e0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_c8;
  UPCGData *local_b8;
  FPCGCopyAttributesElement *local_b0;
  TObjectPtr<UPCGData_const_>_u_0 local_a8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *local_a0;
  FPCGContext *local_98;
  TObjectPtr<UPCGSettings>_u_0 local_90;
  char *local_88;
  UPCGData **local_80;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  
  bVar19 = CpuChannel->Enabled < 0;
  if (bVar19) {
    local_res20 = '\0';
  }
  else {
    local_res20 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId151,"FPCGMetadataOperationElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyAttributes.cpp"
               ,0x97);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId151);
  }
  cVar16 = !bVar19;
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_01 = param_1->Node;
    if ((this_01 == (UPCGNode *)0x0) ||
       (pUVar9 = UPCGNode::GetSettings(this_01), pUVar9 == (UPCGSettings *)0x0)) {
      local_res10 = SUB81(param_1,0);
      pFVar13 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCopyAttributesSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_res10);
      if (pFVar13 != (FPCGTaggedData *)0x0) {
        local_e0.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar13->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_e0.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b6f014;
          UE::GC::MarkAsReachable((UObject *)local_e0.DebugPtr);
        }
        if (local_e0.DebugPtr != (UPCGSettings *)0x0) {
          pUVar8 = UPCGCopyAttributesSettings::StaticClass();
          bVar19 = FObjectPtr::IsA(&local_e0.ObjectPtr,pUVar8);
          TVar10 = local_e0;
          if (bVar19) goto LAB_149b6f017;
        }
      }
    }
    else {
      pUVar9 = UPCGNode::GetSettings(this_01);
      TVar10.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar9);
      if (TVar10.DebugPtr != (UPCGSettings *)0x0) {
        pUVar8 = UPCGCopyAttributesSettings::StaticClass();
        iVar2 = (int)pUVar8->_padding_;
        if ((iVar2 <= *(int *)((TVar10.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar10.DebugPtr)->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar8->_padding_)) goto LAB_149b6f017;
      }
    }
LAB_149b6f014:
    TVar10.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar8 = UPCGCopyAttributesSettings::StaticClass();
    bVar19 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar8);
    if (bVar19) {
      TVar10.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      TVar10.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_149b6f017:
  if ((TVar10.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCopyAttributes.cpp"
                          ,0x9a,L""), bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_c8,&PCGCopyPointsConstants::SourcePointsLabel);
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_d8,&PCGCopyPointsConstants::TargetPointsLabel);
  iVar4 = local_c8.ArrayNum;
  iVar2 = local_d8.ArrayNum;
  this_00 = &param_1->OutputData;
  if ((local_c8.ArrayNum != 0) && (local_d8.ArrayNum != 0)) {
    iVar18 = (int)TVar10.DebugPtr[1]._padding_;
    iVar14 = local_d8.ArrayNum;
    if (iVar18 == 0) {
      if (((local_c8.ArrayNum != local_d8.ArrayNum) && (local_c8.ArrayNum != 1)) &&
         (local_d8.ArrayNum != 1)) {
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_68,L"PCGMetadataElement",L"MismatchNum",
                             L"Num Sources ({0}) mismatches with Num Targets ({1}). Only supports N:N, 1:N and N:1 operation."
                            );
        pFVar12 = FTextFormat::FTextFormat(&local_58,pFVar11,Default);
        pFVar11 = FText::Format<int,int>(&local_78,pFVar12,iVar4,iVar2);
        PCGLog::LogErrorOnGraph(pFVar11,param_1);
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
        TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::operator=
                  (&this_00->TaggedData,&local_c8);
        goto LAB_149b6f388;
      }
    }
    else if ((iVar18 != 1) && (iVar14 = 0, iVar18 == 2)) {
      iVar14 = local_d8.ArrayNum * local_c8.ArrayNum;
    }
    iVar18 = 0;
    if (0 < iVar14) {
      do {
        uVar15 = iVar18 % iVar2;
        uVar6 = 0;
        if ((int)uVar15 < local_d8.ArrayNum) {
          uVar6 = ~uVar15 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar13 = (FPCGTaggedData *)(this_00->TaggedData).AllocatorInstance.Data;
        pFVar17 = (FPCGTaggedData *)(local_d8.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x78)
        ;
        if (((pFVar13 <= pFVar17) && (pFVar17 < pFVar13 + (param_1->OutputData).TaggedData.ArrayMax)
            ) && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar19)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar7 = (param_1->OutputData).TaggedData.ArrayNum;
        piVar1 = &(param_1->OutputData).TaggedData.ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)this_00,piVar1);
        }
        (param_1->OutputData).TaggedData.ArrayNum = iVar7 + 1;
        pFVar13 = FPCGTaggedData::FPCGTaggedData
                            ((FPCGTaggedData *)
                             ((this_00->TaggedData).AllocatorInstance.Data + (longlong)iVar7 * 0x78)
                             ,pFVar17);
        local_a8 = (pFVar17->Data).Data.field0_0x0;
        local_a0 = &local_c8;
        local_88 = local_res18;
        local_80 = &local_b8;
        iVar7 = (int)TVar10.DebugPtr[1]._padding_;
        local_res18[0] = '\0';
        local_b8 = (UPCGData *)0x0;
        local_b0 = this;
        local_98 = param_1;
        local_90 = TVar10;
        if (iVar7 == 0) {
LAB_149b6f343:
          iVar7 = iVar4 + -1;
          if (iVar18 < iVar4 + -1) {
            iVar7 = iVar18;
          }
LAB_149b6f34d:
          `FPCGCopyAttributesElement::ExecuteInternal'::__l20::<lambda_1>::operator()
                    (&local_b0,iVar7);
LAB_149b6f356:
          if ((local_res18[0] != '\0') && (local_b8 != (UPCGData *)0x0)) {
            FPCGDataPtrWrapper::operator=(&pFVar13->Data,local_b8);
          }
        }
        else {
          if (iVar7 != 1) {
            if (iVar7 != 2) goto LAB_149b6f343;
            iVar7 = iVar18 / iVar2;
            goto LAB_149b6f34d;
          }
          iVar7 = 0;
          if (0 < iVar4) {
            do {
              `FPCGCopyAttributesElement::ExecuteInternal'::__l20::<lambda_1>::operator()
                        (&local_b0,iVar7);
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar4);
            goto LAB_149b6f356;
          }
        }
        iVar18 = iVar18 + 1;
        cVar16 = local_res20;
      } while (iVar18 < iVar14);
    }
  }
LAB_149b6f388:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if ((FPCGTaggedData *)local_d8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
  if ((FPCGTaggedData *)local_c8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (cVar16 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149b98870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGCopyAttributesElement::SupportsBasePointDataInputs
          (FPCGCopyAttributesElement *this,FPCGContext *param_1)

{
  return true;
}

