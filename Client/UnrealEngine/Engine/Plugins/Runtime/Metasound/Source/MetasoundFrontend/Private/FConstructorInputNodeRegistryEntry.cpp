// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// ~FConstructorInputNodeRegistryEntry @ 14ad9db20

void __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FConstructorInputNodeRegistryEntry::
~FConstructorInputNodeRegistryEntry(FConstructorInputNodeRegistryEntry *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataTypeEntry).SharedReferenceCount.ReferenceController);
  return;
}

// CreateNode @ 14adaea90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FConstructorInputNodeRegistryEntry::
CreateNode(FConstructorInputNodeRegistryEntry *this,
          FDefaultNamedVertexWithLiteralNodeConstructorParams *param_1)

{
  IDataTypeRegistryEntry *pIVar1;
  code *pcVar2;
  bool bVar3;
  TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> TVar4;
  undefined8 *in_R8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  FLiteral local_48;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FLiteral::CreateInvalid(&local_48);
  local_30 = 0;
  FLiteral::operator=(&local_48,(FLiteral *)(in_R8 + 4));
  local_68 = *in_R8;
  local_60 = in_R8[1];
  uStack_58 = in_R8[2];
  pIVar1 = (this->DataTypeEntry).Object;
  local_50 = in_R8[3];
  (**(code **)((longlong)*pIVar1 + 0xc0))(pIVar1,param_1,&local_68);
  if (0xc < local_48.Value.TypeIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Ptr = (INode *)(*pcVar2)();
      return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)TVar4.Ptr;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_48.Value.TypeIndex])(&local_48);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// CreateNode @ 14adaeb80

TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_> __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FConstructorInputNodeRegistryEntry::
CreateNode(FConstructorInputNodeRegistryEntry *this,FNodeData *param_1)

{
  IDataTypeRegistryEntry *pIVar1;
  code *pcVar2;
  FNodeData *pFVar3;
  FNodeData *in_R8;
  FNodeData local_88;
  
  pIVar1 = (this->DataTypeEntry).Object;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0xb8);
  pFVar3 = FNodeData::FNodeData(&local_88,in_R8);
  (*pcVar2)(pIVar1,param_1,pFVar3);
  FNodeData::~FNodeData(in_R8);
  return (TUniquePtr<Metasound::INode,TDefaultDelete<Metasound::INode>_>)(INode *)param_1;
}

// GetDefaultVertexInterface @ 14adbdea0

FVertexInterface * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FConstructorInputNodeRegistryEntry::
GetDefaultVertexInterface
          (FConstructorInputNodeRegistryEntry *this,FVertexInterface *__return_storage_ptr__)

{
  IDataTypeRegistryEntry *pIVar1;
  code *pcVar2;
  bool bVar3;
  FVertexInterface *pFVar4;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  pIVar1 = (this->DataTypeEntry).Object;
  (**(code **)((longlong)*pIVar1 + 0x38))(pIVar1,&local_18);
  if (local_18 == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7192317994402316024>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendDataTypeRegistry.cpp"
                       ,0x108,"NodeClassMetadata");
    if (!bVar3) {
      FVertexInterface::FVertexInterface(__return_storage_ptr__);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      return __return_storage_ptr__;
    }
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVertexInterface *)(*pcVar2)();
    return pFVar4;
  }
  if ((local_18 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVertexInterface *)(*pcVar2)();
    return pFVar4;
  }
  FVertexInterface::FVertexInterface(__return_storage_ptr__,(FVertexInterface *)(local_18 + 0x60));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// GetFrontendClass @ 14adbea00

FMetasoundFrontendClass * __thiscall
Metasound::Frontend::MetasoundFrontendDataTypeRegistryPrivate::FConstructorInputNodeRegistryEntry::
GetFrontendClass(FConstructorInputNodeRegistryEntry *this)

{
  FMetasoundFrontendClass *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014adbea07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FMetasoundFrontendClass *)
           (**(code **)((longlong)*(this->DataTypeEntry).Object + 0x30))();
  return pFVar1;
}

