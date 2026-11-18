// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 3

// StartupModule @ 1462c5960

void __thiscall FDataflowEngineModule::StartupModule(FDataflowEngineModule *this)

{
  FName FVar1;
  UPackage *pUVar2;
  FName local_res10 [3];
  FString local_18;
  
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res10,"FDataflowTextureTerminalNode");
  FVar1 = local_res10[0];
  if (Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTextureTerminalNode,(UObject *)pUVar2,
                         L"DataflowTextureTerminalNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowTextureTerminalNode.OuterSingleton,FVar1,
             "TextureTerminal","Terminal",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowTextureTerminalNode>'::__l2
             ::<lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Texture Image");
  ::FName::FName(local_res10,"FDataflowTextureToImageNode");
  FVar1 = local_res10[0];
  if (Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTextureToImageNode,(UObject *)pUVar2,
                         L"DataflowTextureToImageNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowTextureToImageNode.OuterSingleton,FVar1,
             "TextureToImage","Image",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowTextureToImageNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"Image Texture");
  ::FName::FName(local_res10,"FDataflowImageToTextureNode");
  FVar1 = local_res10[0];
  if (Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowImageToTextureNode,(UObject *)pUVar2,
                         L"DataflowImageToTextureNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FDataflowImageToTextureNode.OuterSingleton,FVar1,
             "ImageToTexture","Image",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FDataflowImageToTextureNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,"");
  ::FName::FName(local_res10,"FGetDataflowVariableNode");
  if (Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetDataflowVariableNode,(UObject *)pUVar2,
                         L"GetDataflowVariableNode");
  }
  UE::Dataflow::FNodeFactory::RegisterNodeStaticInternal
            (Z_Registration_Info_UScriptStruct_FGetDataflowVariableNode.OuterSingleton,
             local_res10[0],"GetVariable","Dataflow",&local_18,
             `UE::Dataflow::FNodeFactory::RegisterNodeFromType<FGetDataflowVariableNode>'::__l2::
             <lambda_1>::<lambda_invoker_cdecl>);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UE::Dataflow::RegisterSubGraphNodes();
  return;
}

// ShutdownModule @ 1462c5bd0

void __thiscall FDataflowEngineModule::ShutdownModule(FDataflowEngineModule *this)

{
  return;
}

// SupportsDynamicReloading @ 1462c5be0

bool __thiscall FDataflowEngineModule::SupportsDynamicReloading(FDataflowEngineModule *this)

{
  return false;
}

