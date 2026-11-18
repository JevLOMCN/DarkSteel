// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 6

// RegisterUClass @ 14b2cecf0

void __thiscall
Metasound::FMetasoundUObjectRegistry::RegisterUClass
          (FMetasoundUObjectRegistry *this,
          TUniquePtr<Metasound::IMetasoundUObjectRegistryEntry,TDefaultDelete<Metasound::IMetasoundUObjectRegistryEntry>_>
          *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res18 [2];
  IMetasoundUObjectRegistryEntry *local_28 [2];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res10,true);
  local_28[0] = param_1->Ptr;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Entries).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Entries).ArrayNum;
  piVar1 = &(this->Entries).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Entries).AllocatorInstance,piVar1);
  }
  (this->Entries).ArrayNum = iVar5 + 1;
  *(IMetasoundUObjectRegistryEntry **)((this->Entries).AllocatorInstance.Data + (longlong)iVar5 * 8)
       = local_28[0];
  pFVar2 = (this->Storage).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->Storage).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Storage).ArrayNum;
  piVar1 = &(this->Storage).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Storage).AllocatorInstance,piVar1);
  }
  (this->Storage).ArrayNum = iVar5 + 1;
  *(IMetasoundUObjectRegistryEntry **)((this->Storage).AllocatorInstance.Data + (longlong)iVar5 * 8)
       = param_1->Ptr;
  param_1->Ptr = (IMetasoundUObjectRegistryEntry *)0x0;
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// IsRegisteredClass @ 14b2cef40

bool __thiscall
Metasound::FMetasoundUObjectRegistry::IsRegisteredClass
          (FMetasoundUObjectRegistry *this,UObject *param_1)

{
  IMetasoundUObjectRegistryEntry **ppIVar1;
  UObject *local_res8;
  UObject **local_res10 [3];
  code *local_18;
  undefined8 **local_10;
  
  local_res10[0] = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FMetasoundUObjectRegistry::GetEntryByUObject'::__l2::<lambda_1>,bool,Metasound::IMetasoundUObjectRegistryEntry_const_*>
             ::Call;
  local_10 = local_res10;
  local_res8 = param_1;
  ppIVar1 = TArray<Metasound::IMetasoundUObjectRegistryEntry_const_*,TSizedDefaultAllocator<32>_>::
            FindByPredicate<TFunctionRef<bool___cdecl(Metasound::IMetasoundUObjectRegistryEntry_const_*)>_>
                      (&this->Entries,
                       (TFunctionRef<bool___cdecl(Metasound::IMetasoundUObjectRegistryEntry_const_*)>
                        *)&local_18);
  if (ppIVar1 == (IMetasoundUObjectRegistryEntry **)0x0) {
    return false;
  }
  return *ppIVar1 != (IMetasoundUObjectRegistryEntry *)0x0;
}

// IsRegisteredClass @ 14b2cefb0

bool __thiscall
Metasound::FMetasoundUObjectRegistry::IsRegisteredClass
          (FMetasoundUObjectRegistry *this,UClass *param_1)

{
  IMetasoundUObjectRegistryEntry **ppIVar1;
  UClass *local_res8 [4];
  code *local_18;
  UClass **local_10;
  
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FMetasoundUObjectRegistry::IsRegisteredClass'::__l2::<lambda_1>,bool,Metasound::IMetasoundUObjectRegistryEntry_const_*>
             ::Call;
  local_10 = local_res8;
  local_res8[0] = param_1;
  ppIVar1 = TArray<Metasound::IMetasoundUObjectRegistryEntry_const_*,TSizedDefaultAllocator<32>_>::
            FindByPredicate<TFunctionRef<bool___cdecl(Metasound::IMetasoundUObjectRegistryEntry_const_*)>_>
                      (&this->Entries,
                       (TFunctionRef<bool___cdecl(Metasound::IMetasoundUObjectRegistryEntry_const_*)>
                        *)&local_18);
  if (ppIVar1 == (IMetasoundUObjectRegistryEntry **)0x0) {
    return false;
  }
  return *ppIVar1 != (IMetasoundUObjectRegistryEntry *)0x0;
}

// GetObjectAsAssetBase @ 14b2cf110

FMetasoundAssetBase * __thiscall
Metasound::FMetasoundUObjectRegistry::GetObjectAsAssetBase
          (FMetasoundUObjectRegistry *this,UObject *param_1)

{
  IMetasoundUObjectRegistryEntry *pIVar1;
  IMetasoundUObjectRegistryEntry **ppIVar2;
  FMetasoundAssetBase *pFVar3;
  UObject *local_res8;
  UObject **local_res10 [3];
  code *local_18;
  undefined8 **local_10;
  
  local_res10[0] = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FMetasoundUObjectRegistry::GetEntryByUObject'::__l2::<lambda_1>,bool,Metasound::IMetasoundUObjectRegistryEntry_const_*>
             ::Call;
  local_10 = local_res10;
  local_res8 = param_1;
  ppIVar2 = TArray<Metasound::IMetasoundUObjectRegistryEntry_const_*,TSizedDefaultAllocator<32>_>::
            FindByPredicate<TFunctionRef<bool___cdecl(Metasound::IMetasoundUObjectRegistryEntry_const_*)>_>
                      (&this->Entries,
                       (TFunctionRef<bool___cdecl(Metasound::IMetasoundUObjectRegistryEntry_const_*)>
                        *)&local_18);
  if ((ppIVar2 != (IMetasoundUObjectRegistryEntry **)0x0) &&
     (pIVar1 = *ppIVar2, pIVar1 != (IMetasoundUObjectRegistryEntry *)0x0)) {
    pFVar3 = (FMetasoundAssetBase *)(**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,param_1);
    return pFVar3;
  }
  return (FMetasoundAssetBase *)0x0;
}

// GetObjectAsAssetBase @ 14b2cf240

FMetasoundAssetBase * __thiscall
Metasound::FMetasoundUObjectRegistry::GetObjectAsAssetBase
          (FMetasoundUObjectRegistry *this,UObject *param_1)

{
  IMetasoundUObjectRegistryEntry *pIVar1;
  IMetasoundUObjectRegistryEntry **ppIVar2;
  FMetasoundAssetBase *pFVar3;
  UObject *local_res8;
  UObject **local_res10 [3];
  code *local_18;
  undefined8 **local_10;
  
  local_res10[0] = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FMetasoundUObjectRegistry::GetEntryByUObject'::__l2::<lambda_1>,bool,Metasound::IMetasoundUObjectRegistryEntry_const_*>
             ::Call;
  local_10 = local_res10;
  local_res8 = param_1;
  ppIVar2 = TArray<Metasound::IMetasoundUObjectRegistryEntry_const_*,TSizedDefaultAllocator<32>_>::
            FindByPredicate<TFunctionRef<bool___cdecl(Metasound::IMetasoundUObjectRegistryEntry_const_*)>_>
                      (&this->Entries,
                       (TFunctionRef<bool___cdecl(Metasound::IMetasoundUObjectRegistryEntry_const_*)>
                        *)&local_18);
  if ((ppIVar2 != (IMetasoundUObjectRegistryEntry **)0x0) &&
     (pIVar1 = *ppIVar2, pIVar1 != (IMetasoundUObjectRegistryEntry *)0x0)) {
    pFVar3 = (FMetasoundAssetBase *)(**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,param_1);
    return pFVar3;
  }
  return (FMetasoundAssetBase *)0x0;
}

// IterateRegisteredUClasses @ 14b2cf3d0

void __thiscall
Metasound::FMetasoundUObjectRegistry::IterateRegisteredUClasses
          (FMetasoundUObjectRegistry *this,TFunctionRef<void___cdecl(UClass_&)> *param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->Entries).AllocatorInstance.Data;
  iVar2 = (this->Entries).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  do {
    if ((this->Entries).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Metasound::IMetasoundUObjectRegistryEntry_const_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) {
      return;
    }
    plVar3 = *(longlong **)pFVar6;
    if (plVar3 != (longlong *)0x0) {
      if (param_2) {
        cVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
        if (cVar4 == '\0') goto LAB_14b2cf44a;
      }
      lVar5 = (**(code **)(*plVar3 + 0x10))(plVar3);
      if (lVar5 != 0) {
        (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar5);
      }
    }
LAB_14b2cf44a:
    pFVar6 = pFVar6 + 8;
  } while( true );
}

