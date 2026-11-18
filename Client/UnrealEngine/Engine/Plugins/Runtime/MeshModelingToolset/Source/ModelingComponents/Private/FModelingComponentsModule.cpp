// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// StartupModule @ 14caae050

void __thiscall FModelingComponentsModule::StartupModule(FModelingComponentsModule *this)

{
  FModuleManager *this_00;
  FName *pFVar1;
  FName local_res10 [3];
  
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FModelingComponentsModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,(FModelingComponentsModule *)local_res10,
             (pmf_f563d733)this);
  this_00 = FModuleManager::Get();
  pFVar1 = ::FName::FName(local_res10,L"GeometryFramework");
  FModuleManager::LoadModule(this_00,*pFVar1,None);
  return;
}

// ShutdownModule @ 14caae0b0

void __thiscall FModelingComponentsModule::ShutdownModule(FModelingComponentsModule *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPostEngineInit
             ,this);
  return;
}

// OnPostEngineInit @ 14cb279c0

void __thiscall FModelingComponentsModule::OnPostEngineInit(FModelingComponentsModule *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UMaterialInterface *pUVar4;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  bVar2 = AllowDebugViewmodes();
  if (bVar2) {
    pUVar3 = Z_Construct_UClass_UMaterial_NoRegister();
    local_18._12_4_ = uStack_2c;
    local_18.Size = 0x3d;
    local_28.DataPtr = (wchar_t *)0x0;
    local_28.Size = 0;
    local_28._12_4_ = 0;
    local_18.DataPtr = L"/MeshModelingToolset/Materials/M_DynamicMeshComponentVtxColor";
    pUVar4 = (UMaterialInterface *)
             StaticLoadObject(pUVar3,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                              (FLinkerInstancingContext *)0x0);
    if (pUVar4 == (UMaterialInterface *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6962949900229148645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\ModelingComponentsModule.cpp"
                         ,0x1b,"VertexColorMaterial");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial(pUVar4);
    }
  }
  return;
}

