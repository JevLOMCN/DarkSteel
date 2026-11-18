// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// FindAnalyzerFactory @ 14ad725f0

/* WARNING: Enum "Type": Some values do not have unique names */

IVertexAnalyzerFactory * __thiscall
Metasound::Frontend::FVertexAnalyzerRegistry::FindAnalyzerFactory
          (FVertexAnalyzerRegistry *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>
  *pTVar3;
  IVertexAnalyzerFactory *pIVar4;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  pTVar3 = TMapBase<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>,0>_>
           ::Find((TMapBase<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>,0>_>
                   *)&this->AnalyzerFactoryRegistry,param_1);
  if (pTVar3 == (TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>
                 *)0x0) {
    if (2 < (byte)LogMetaSound._0_1_) {
      ::FName::ToString(local_res10,&local_18);
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual_class_Metasound::Frontend::IVertexAnalyzerFactory_const*___ptr64___cdecl_Metasound::Frontend::FVertexAnalyzerRegistry::FindAnalyzerFactory(FName)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return (IVertexAnalyzerFactory *)0x0;
  }
  if ((pTVar3->Ptr == (IVertexAnalyzerFactory *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Factory->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\Analysis\\MetasoundFrontendAnalyzerRegistry.cpp"
                         ,0x27,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar4 = (IVertexAnalyzerFactory *)(*pcVar1)();
    return pIVar4;
  }
  return pTVar3->Ptr;
}

// RegisterAnalyzerFactory @ 14ad72720

void __thiscall
Metasound::Frontend::FVertexAnalyzerRegistry::RegisterAnalyzerFactory
          (FVertexAnalyzerRegistry *this,FName param_1,
          TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>
          *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  TPairInitializer<FName_&,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>_&&>
  local_res8;
  TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>
  **local_18;
  TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>
  *local_10;
  
  local_res8.Value =
       (TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>
        *)param_1;
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->AnalyzerFactoryRegistry).field_0x8 !=
      *(int *)&(this->AnalyzerFactoryRegistry).field_0x34) {
    puVar6 = *(undefined1 **)&(this->AnalyzerFactoryRegistry).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->AnalyzerFactoryRegistry).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->AnalyzerFactoryRegistry).field_0x48 - 1U &
                              param_1.Number + uVar4) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->AnalyzerFactoryRegistry).field_0x0;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar5 * 0x18) == param_1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!AnalyzerFactoryRegistry.Contains(AnalyzerName)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\Analysis\\MetasoundFrontendAnalyzerRegistry.cpp"
                             ,0x2d,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  local_18 = &local_res8.Value;
  local_10 = param_2;
  TSet<TTuple<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_&,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>_&&>_>
            ((TSet<TTuple<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>,0>,FDefaultSetAllocator>
              *)&this->AnalyzerFactoryRegistry,&local_res8,(bool *)&local_18);
  return;
}

// ~FVertexAnalyzerRegistry @ 14ad9ea20

void __thiscall
Metasound::Frontend::FVertexAnalyzerRegistry::~FVertexAnalyzerRegistry
          (FVertexAnalyzerRegistry *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->AnalyzerFactoryRegistry).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnalyzerFactoryRegistry).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<Metasound::Frontend::IVertexAnalyzerFactory,TDefaultDelete<Metasound::Frontend::IVertexAnalyzerFactory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnalyzerFactoryRegistry);
  return;
}

