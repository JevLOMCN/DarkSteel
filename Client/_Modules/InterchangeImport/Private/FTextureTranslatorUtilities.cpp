// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 9

// Generic2DTextureTranslate @ 14e7159e0

bool __cdecl
UE::Interchange::FTextureTranslatorUtilities::Generic2DTextureTranslate
          (UInterchangeSourceData *param_1,UInterchangeBaseNodeContainer *param_2)

{
  bool bVar1;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  local_res18[0].DebugPtr = Z_Construct_UClass_UInterchangeTexture2DNode_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res18[0].DebugPtr != (UClass *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  bVar1 = Interchange::Private::GenericTextureTranslate
                    (param_1,param_2,
                     (TSubclassOf<UInterchangeTextureNode> *)&local_res18[0].ObjectPtr);
  return bVar1;
}

// GenericTexture2DArrayTranslate @ 14e715a40

bool __cdecl
UE::Interchange::FTextureTranslatorUtilities::GenericTexture2DArrayTranslate
          (UInterchangeSourceData *param_1,UInterchangeBaseNodeContainer *param_2)

{
  bool bVar1;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  local_res18[0].DebugPtr = Z_Construct_UClass_UInterchangeTexture2DArrayNode_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res18[0].DebugPtr != (UClass *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  bVar1 = Interchange::Private::GenericTextureTranslate
                    (param_1,param_2,
                     (TSubclassOf<UInterchangeTextureNode> *)&local_res18[0].ObjectPtr);
  return bVar1;
}

// GenericTextureCubeArrayTranslate @ 14e715aa0

bool __cdecl
UE::Interchange::FTextureTranslatorUtilities::GenericTextureCubeArrayTranslate
          (UInterchangeSourceData *param_1,UInterchangeBaseNodeContainer *param_2)

{
  bool bVar1;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  local_res18[0].DebugPtr = Z_Construct_UClass_UInterchangeTextureCubeArrayNode_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res18[0].DebugPtr != (UClass *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  bVar1 = Interchange::Private::GenericTextureTranslate
                    (param_1,param_2,
                     (TSubclassOf<UInterchangeTextureNode> *)&local_res18[0].ObjectPtr);
  return bVar1;
}

// GenericTextureCubeTranslate @ 14e715b00

bool __cdecl
UE::Interchange::FTextureTranslatorUtilities::GenericTextureCubeTranslate
          (UInterchangeSourceData *param_1,UInterchangeBaseNodeContainer *param_2)

{
  bool bVar1;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  local_res18[0].DebugPtr = Z_Construct_UClass_UInterchangeTextureCubeNode_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res18[0].DebugPtr != (UClass *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  bVar1 = Interchange::Private::GenericTextureTranslate
                    (param_1,param_2,
                     (TSubclassOf<UInterchangeTextureNode> *)&local_res18[0].ObjectPtr);
  return bVar1;
}

// GenericTextureLightProfileTranslate @ 14e715b60

bool __cdecl
UE::Interchange::FTextureTranslatorUtilities::GenericTextureLightProfileTranslate
          (UInterchangeSourceData *param_1,UInterchangeBaseNodeContainer *param_2)

{
  bool bVar1;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  local_res18[0].DebugPtr = Z_Construct_UClass_UInterchangeTextureLightProfileNode_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res18[0].DebugPtr != (UClass *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  bVar1 = Interchange::Private::GenericTextureTranslate
                    (param_1,param_2,
                     (TSubclassOf<UInterchangeTextureNode> *)&local_res18[0].ObjectPtr);
  return bVar1;
}

// GenericVolumeTextureTranslate @ 14e715ec0

bool __cdecl
UE::Interchange::FTextureTranslatorUtilities::GenericVolumeTextureTranslate
          (UInterchangeSourceData *param_1,UInterchangeBaseNodeContainer *param_2)

{
  bool bVar1;
  TObjectPtr<UClass>_u_0 local_res18 [2];
  
  local_res18[0].DebugPtr = Z_Construct_UClass_UInterchangeVolumeTextureNode_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res18[0].DebugPtr != (UClass *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)local_res18[0].DebugPtr);
  }
  bVar1 = Interchange::Private::GenericTextureTranslate
                    (param_1,param_2,
                     (TSubclassOf<UInterchangeTextureNode> *)&local_res18[0].ObjectPtr);
  return bVar1;
}

// IsTranslatorValid @ 14e723790

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
UE::Interchange::FTextureTranslatorUtilities::IsTranslatorValid
          (UInterchangeTranslatorBase *param_1,wchar_t *param_2)

{
  UInterchangeSourceData *pUVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  FText *pFVar6;
  longlong lVar7;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pUVar1 = (param_1->SourceData).field0_0x0.DebugPtr;
  if (pUVar1 == (UInterchangeSourceData *)0x0) {
    pFVar3 = FText::FromString(&local_38,param_2);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"InterchangeTextureTranslator",L"TextureImportFailure_BadData",
                        L"{0}: Failed to import, bad source data.");
    pFVar5 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar4,Default);
    pFVar3 = FText::Format<FText>(&local_58,pFVar5,pFVar3);
    LogError(param_1,pFVar3);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    bVar2 = false;
  }
  else {
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = (pUVar1->Filename).Data.ArrayNum;
    lVar7 = (longlong)local_68.Data.ArrayNum;
    _Src = (pUVar1->Filename).Data.AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == 0) {
      local_68.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
    }
    bVar2 = FPaths::FileExists(&local_68);
    if (bVar2) {
      bVar2 = true;
    }
    else {
      pFVar3 = FText::FromString(&local_28,&local_68);
      pFVar4 = FText::FromString(&local_38,param_2);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"InterchangeTextureTranslator",L"TextureImportFailure_OpenFile"
                          ,L"{0}: Failed to import texture asset, cannot open file [{1}].");
      pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar6,Default);
      pFVar3 = FText::Format<FText,FText>(&local_48,pFVar5,pFVar4,pFVar3);
      LogError(param_1,pFVar3);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      bVar2 = false;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  return bVar2;
}

// LoadSourceBuffer @ 14e723cd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl
UE::Interchange::FTextureTranslatorUtilities::LoadSourceBuffer
          (UInterchangeTranslatorBase *param_1,wchar_t *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_3)

{
  UInterchangeSourceData *pUVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  TRefCountPtr<ITextData> TVar6;
  longlong lVar7;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  bVar2 = IsTranslatorValid(param_1,param_2);
  if (bVar2) {
    pUVar1 = (param_1->SourceData).field0_0x0.DebugPtr;
    local_48.TextData.Reference = (ITextData *)0x0;
    local_48.Flags = (pUVar1->Filename).Data.ArrayNum;
    lVar7 = (longlong)(int)local_48.Flags;
    _Src = (pUVar1->Filename).Data.AllocatorInstance.Data;
    if (local_48.Flags == 0) {
      local_48._12_4_ = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Flags,0,(ForAnyElementType *)&local_48,local_48.Flags,
                 (int *)&local_48.field_0xc);
      memcpy(local_48.TextData.Reference,_Src,lVar7 * 2);
    }
    TVar6.Reference = (ITextData *)L"";
    if (local_48.Flags != 0) {
      TVar6.Reference = local_48.TextData.Reference;
    }
    bVar2 = FFileHelper::LoadFileToArray(param_3,(wchar_t *)TVar6.Reference,0);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_48.TextData.Reference);
    }
    if (bVar2) {
      return param_3->ArrayNum != 0;
    }
    pFVar3 = FText::FromString(&local_28,param_2);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"InterchangeTextureTranslator",L"TextureImportFailure_LoadBuffer"
                        ,L"Failed to import {0}, cannot load file content into an array.");
    pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
    pFVar3 = FText::Format<FText>(&local_48,pFVar5,pFVar3);
    LogError(param_1,pFVar3);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  return false;
}

// LogError @ 14e723e50

void __cdecl
UE::Interchange::FTextureTranslatorUtilities::LogError
          (UInterchangeTranslatorBase *param_1,FText *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  UInterchangeResultsContainer *this;
  UInterchangeSourceData *pUVar5;
  FScriptContainerElement *pFVar6;
  UObject *pUVar7;
  code *pcVar8;
  ForAnyElementType _Src;
  bool bVar9;
  UInterchangeResultError_Generic *pUVar10;
  FString *pFVar11;
  longlong lVar12;
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  
  this = (param_1->Results).field0_0x0.DebugPtr;
  if (this == (UInterchangeResultsContainer *)0x0) {
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3799874561680343173>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h"
                       ,0x85,"Results");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if ((param_1->SourceData).field0_0x0.DebugPtr == (UInterchangeSourceData *)0x0) {
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3799874561680343173>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h"
                       ,0x85,"SourceData");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    pUVar10 = UInterchangeResultsContainer::Add<UInterchangeResultError_Generic>(this);
    pUVar5 = (param_1->SourceData).field0_0x0.DebugPtr;
    local_58.Data = (FScriptContainerElement *)0x0;
    iVar3 = (pUVar5->Filename).Data.ArrayNum;
    pFVar6 = (pUVar5->Filename).Data.AllocatorInstance.Data;
    local_50 = CONCAT44(local_50._4_4_,iVar3);
    if (iVar3 == 0) {
      local_50 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,&local_58,iVar3,(int *)((longlong)&local_50 + 4));
      memcpy(local_58.Data,pFVar6,(longlong)iVar3 * 2);
    }
    plVar1 = &pUVar10->_padding_;
    if ((ForAnyElementType *)plVar1 != &local_58) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)local_58.Data;
      *(undefined4 *)&pUVar10->_padding_ = (undefined4)local_50;
      local_58.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)&pUVar10->_padding_ + 4) = local_50._4_4_;
      local_50 = 0;
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    if (pUVar10 != (UInterchangeResultError_Generic *)0x0) {
      pUVar7 = (UObject *)param_1->_padding_;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar7);
      }
      pUVar10->_padding_ = (longlong)pUVar7;
      pUVar5 = (param_1->SourceData).field0_0x0.DebugPtr;
      if (pUVar5 == (UInterchangeSourceData *)0x0) {
        ::FString::operator=((FString *)&pUVar10->_padding_,L"Undefined");
      }
      else {
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = (pUVar5->Filename).Data.ArrayNum;
        lVar12 = (longlong)local_48.Data.ArrayNum;
        pFVar6 = (pUVar5->Filename).Data.AllocatorInstance.Data;
        if (local_48.Data.ArrayNum == 0) {
          local_48.Data.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,
                     local_48.Data.ArrayNum,&local_48.Data.ArrayMax);
          memcpy(local_48.Data.AllocatorInstance.Data,pFVar6,lVar12 * 2);
        }
        iVar3 = local_48.Data.ArrayNum;
        _Src.Data = local_48.Data.AllocatorInstance.Data;
        if ((FString *)plVar1 != &local_48) {
          iVar4 = *(int *)((longlong)&pUVar10->_padding_ + 4);
          piVar2 = (int *)((longlong)&pUVar10->_padding_ + 4);
          *(int *)&pUVar10->_padding_ = local_48.Data.ArrayNum;
          if ((local_48.Data.ArrayNum == 0) && (iVar4 == 0)) {
            *piVar2 = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_48.Data.ArrayNum,iVar4,(ForAnyElementType *)plVar1,
                       local_48.Data.ArrayNum,piVar2);
            if (iVar3 != 0) {
              memcpy((void *)*plVar1,_Src.Data,(longlong)iVar3 * 2);
            }
          }
        }
        pFVar11 = FPaths::GetBaseFilename(&local_38,&local_48,true);
        plVar1 = &pUVar10->_padding_;
        if ((FString *)plVar1 != pFVar11) {
          if ((void *)*plVar1 != (void *)0x0) {
            FMemory::Free((void *)*plVar1);
          }
          *plVar1 = (longlong)(pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)&pUVar10->_padding_ = (pFVar11->Data).ArrayNum;
          *(int *)((longlong)&pUVar10->_padding_ + 4) = (pFVar11->Data).ArrayMax;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      FText::operator=(&pUVar10->Text,param_2);
      return;
    }
  }
  bVar9 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4853382562820652967>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\TextureTranslatorUtilities.cpp"
                     ,0x59,"ErrorMessage");
  if (!bVar9) {
    return;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

