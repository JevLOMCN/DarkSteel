// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// FBindingContext @ 1426a7b00

FBindingContext * __thiscall
FBindingContext::FBindingContext
          (FBindingContext *this,FName param_1,FText *param_2,FName param_3,FName param_4)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FBindingContext *pFVar4;
  undefined1 local_res8 [8];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->ContextName = param_1;
  this->ContextParent = param_3;
  (this->ContextDesc).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_2->TextData).Reference;
  (this->ContextDesc).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->ContextDesc).Flags = param_2->Flags;
  this->StyleSetName = param_4;
  *(undefined8 *)&this->Bundles = 0;
  *(undefined8 *)&(this->Bundles).field_0x8 = 0;
  *(undefined8 *)&(this->Bundles).field_0x20 = 0;
  *(undefined4 *)&(this->Bundles).field_0x28 = 0;
  *(undefined4 *)&(this->Bundles).field_0x2c = 0x80;
  *(undefined4 *)&(this->Bundles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Bundles).field_0x34 = 0;
  *(undefined8 *)&(this->Bundles).field_0x40 = 0;
  *(undefined4 *)&(this->Bundles).field_0x48 = 0;
  if (param_4 == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStyleSetName.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Commands\\UICommandInfo.h"
                       ,0x65,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBindingContext *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

// ~FBindingContext @ 1426aa970

void __thiscall FBindingContext::~FBindingContext(FBindingContext *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ITextData *pIVar4;
  longlong *plVar5;
  
  *(undefined4 *)&(this->Bundles).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Bundles).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Bundles);
  pIVar4 = (this->ContextDesc).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// AddBundle @ 14270a330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBindingContext::AddBundle(FBindingContext *this,FName param_1,FText *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_res8 [8];
  FName local_res10;
  undefined1 local_38 [16];
  FString local_28;
  
  local_res10 = param_1;
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Bundles).field_0x8 != *(int *)&(this->Bundles).field_0x34) {
    puVar3 = *(undefined1 **)&(this->Bundles).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->Bundles).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->Bundles).field_0x48 - 1U & param_1.Number + uVar1) *
                              4);
    if (iVar2 != -1) {
      do {
        if (*(FName *)((longlong)iVar2 * 0x20 + *(longlong *)&this->Bundles) == param_1) {
          if ((byte)LogSlate._0_1_ < 3) {
            return;
          }
          ::FName::ToString(&this->ContextName,&local_28);
          ::FName::ToString((FName *)(local_res8 + 8),(FString *)local_38);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
          if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_38._0_8_);
          }
          goto LAB_14270a466;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)&this->Bundles);
      } while (iVar2 != -1);
    }
  }
  if (local_res10 == (FName)0x0) {
    if (2 < (byte)LogSlate._0_1_) {
      ::FName::ToString(&this->ContextName,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
LAB_14270a466:
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    local_38._0_8_ = local_res8 + 8;
    local_38._8_8_ = param_2;
    TSet<TTuple<FName,FText>,TDefaultMapHashableKeyFuncs<FName,FText,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FText_const_&>_>
              ((TSet<TTuple<FName,FText>,TDefaultMapHashableKeyFuncs<FName,FText,0>,FDefaultSetAllocator>
                *)&this->Bundles,(TPairInitializer<FName_const_&,FText_const_&> *)local_res8,
               (bool *)local_38);
  }
  return;
}

// GetBundleLabel @ 14273ae60

FText * __thiscall FBindingContext::GetBundleLabel(FBindingContext *this,FName param_1)

{
  uint uVar1;
  FText *pFVar2;
  FName *pFVar3;
  undefined1 *puVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Bundles).field_0x8 != *(int *)&(this->Bundles).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Bundles).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Bundles).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->Bundles).field_0x48 - 1U & param_1.Number + uVar1) *
                               4);
    if (uVar1 != 0xffffffff) {
      while (pFVar3 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&this->Bundles),
            *pFVar3 != param_1) {
        uVar1 = pFVar3[3].ComparisonIndex.Value;
        if (uVar1 == 0xffffffff) {
          pFVar2 = FText::GetEmpty();
          return pFVar2;
        }
      }
      pFVar2 = (FText *)(pFVar3 + 1);
      if (pFVar3 == (FName *)0x0) {
        pFVar2 = (FText *)0x0;
      }
      if (pFVar2 != (FText *)0x0) {
        return pFVar2;
      }
    }
  }
  pFVar2 = FText::GetEmpty();
  return pFVar2;
}

// NewCommand @ 14275d050

FUICommandInfoDecl * __thiscall
FBindingContext::NewCommand
          (FBindingContext *this,FUICommandInfoDecl *__return_storage_ptr__,FName param_1,
          FText *param_2,FText *param_3)

{
  TSharedRef<FBindingContext,1> *pTVar1;
  FLLMScope local_res10 [2];
  FName local_28;
  FMemScope local_20;
  TSharedRef<FBindingContext,1> local_18;
  
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_20,&local_28,true);
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  pTVar1 = TSharedFromThis<FBindingContext,1>::AsShared
                     ((TSharedFromThis<FBindingContext,1> *)this,&local_18);
  FUICommandInfoDecl::FUICommandInfoDecl
            (__return_storage_ptr__,pTVar1,param_1,param_2,param_3,local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_res10);
  return __return_storage_ptr__;
}

