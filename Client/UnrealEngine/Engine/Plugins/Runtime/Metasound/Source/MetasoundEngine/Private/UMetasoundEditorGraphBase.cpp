// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 10

// StaticClass @ 14b2e6c70

UClass * __cdecl UMetasoundEditorGraphBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetasoundEditorGraphBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetasoundEditorGraphBase",
               &Z_Registration_Info_UClass_UMetasoundEditorGraphBase.InnerSingleton,
               StaticRegisterNativesUMetasoundEditorGraphBase,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetasoundEditorGraphBase>,
               InternalVTableHelperCtorCaller<UMetasoundEditorGraphBase>,local_res8,
               UEdGraph::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetasoundEditorGraphBase.InnerSingleton;
}

// UMetasoundEditorGraphBase @ 14b34d060

UMetasoundEditorGraphBase * __thiscall
UMetasoundEditorGraphBase::UMetasoundEditorGraphBase
          (UMetasoundEditorGraphBase *this,FVTableHelper *param_1)

{
  UEdGraph::UEdGraph((UEdGraph *)this,param_1);
  *(undefined ***)this = &___7UMetasoundEditorGraphBase__6B_;
  return this;
}

// UMetasoundEditorGraphBase @ 14b34d090

UMetasoundEditorGraphBase * __thiscall
UMetasoundEditorGraphBase::UMetasoundEditorGraphBase
          (UMetasoundEditorGraphBase *this,FObjectInitializer *param_1)

{
  UEdGraph::UEdGraph((UEdGraph *)this,param_1);
  *(undefined ***)this = &___7UMetasoundEditorGraphBase__6B_;
  return this;
}

// ~UMetasoundEditorGraphBase @ 14b352990

void __thiscall
UMetasoundEditorGraphBase::~UMetasoundEditorGraphBase(UMetasoundEditorGraphBase *this)

{
  *(undefined ***)this = &___7UMetasoundEditorGraphBase__6B_;
  UEdGraph::~UEdGraph((UEdGraph *)this);
  return;
}

// GetHighestMessageSeverity @ 14b3b4b40

int __thiscall UMetasoundEditorGraphBase::GetHighestMessageSeverity(UMetasoundEditorGraphBase *this)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  plVar5 = *(longlong **)&this->field_0x30;
  iVar2 = *(int *)&this->field_0x38;
  plVar1 = plVar5 + iVar2;
  iVar4 = 4;
  while( true ) {
    iVar6 = iVar4;
    if (*(int *)&this->field_0x38 != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UEdGraphNode>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (plVar5 == plVar1) break;
    lVar3 = *plVar5;
    plVar5 = plVar5 + 1;
    iVar4 = *(int *)(lVar3 + 0x70);
    if (iVar6 <= *(int *)(lVar3 + 0x70)) {
      iVar4 = iVar6;
    }
  }
  return iVar6;
}

// GetPrivateStaticClass @ 14b3bf880

UClass * __cdecl UMetasoundEditorGraphBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetasoundEditorGraphBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetasoundEditorGraphBase",
               &Z_Registration_Info_UClass_UMetasoundEditorGraphBase.InnerSingleton,
               StaticRegisterNativesUMetasoundEditorGraphBase,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMetasoundEditorGraphBase>,
               InternalVTableHelperCtorCaller<UMetasoundEditorGraphBase>,local_res8,
               UEdGraph::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetasoundEditorGraphBase.InnerSingleton;
}

// IsEditorOnly @ 14b3c82d0

bool __thiscall UMetasoundEditorGraphBase::IsEditorOnly(UMetasoundEditorGraphBase *this)

{
  return true;
}

// NeedsLoadForEditorGame @ 14b3c9780

bool __thiscall UMetasoundEditorGraphBase::NeedsLoadForEditorGame(UMetasoundEditorGraphBase *this)

{
  return false;
}

// RegisterGraphWithFrontend @ 14b3d1b80

void __thiscall
UMetasoundEditorGraphBase::RegisterGraphWithFrontend
          (UMetasoundEditorGraphBase *this,FMetaSoundAssetRegistrationOptions *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Public\\Metasound.h"
             ,0x2b,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUMetasoundEditorGraphBase @ 14b3e15e0

void __cdecl UMetasoundEditorGraphBase::StaticRegisterNativesUMetasoundEditorGraphBase(void)

{
  return;
}

