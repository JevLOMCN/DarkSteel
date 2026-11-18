// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143247de0

TSharedRef<BuildPatchServices::FFileAttributesParser,1> * __cdecl
BuildPatchServices::FFileAttributesParserFactory::Create
          (TSharedRef<BuildPatchServices::FFileAttributesParser,1> *__return_storage_ptr__,
          IPlatformFile *param_1)

{
  FFileAttributesParserImpl *pFVar1;
  TRawPtrProxy<BuildPatchServices::FFileAttributesParserImpl> local_res8;
  code *local_res18 [2];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  pFVar1 = ::operator_new(0x60);
  if (pFVar1 == (FFileAttributesParserImpl *)0x0) {
    pFVar1 = (FFileAttributesParserImpl *)0x0;
  }
  else {
    *(undefined8 *)&pFVar1->AttributeSetters = 0;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->AllocatorInstance).Data =
         (FScriptContainerElement *)&___7FFileAttributesParserImpl_BuildPatchServices__6B_;
    *(undefined8 *)&(pFVar1->AttributeSetters).field_0x8 = 0;
    *(undefined8 *)&(pFVar1->AttributeSetters).field_0x20 = 0;
    pFVar1->PlatformFile = param_1;
    *(undefined4 *)&(pFVar1->AttributeSetters).field_0x28 = 0;
    *(undefined4 *)&(pFVar1->AttributeSetters).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar1->AttributeSetters).field_0x34 = 0;
    *(undefined4 *)&(pFVar1->AttributeSetters).field_0x30 = 0xffffffff;
    *(undefined8 *)&(pFVar1->AttributeSetters).field_0x40 = 0;
    *(undefined4 *)&(pFVar1->AttributeSetters).field_0x48 = 0;
    local_res18[0] =
         `BuildPatchServices::FFileAttributesParserImpl::FFileAttributesParserImpl'::__l2::
         <lambda_1>::<lambda_invoker_cdecl>;
    ::FString::FString((FString *)local_28,L"readonly");
    local_38._0_8_ = local_28;
    local_38._8_8_ = local_res18;
    TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_&&,void_(__cdecl*&&)(BuildPatchServices::FFileAttributes_&,FString)>_>
              ((TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
                *)&pFVar1->AttributeSetters,
               (TPairInitializer<FString_&&,void_(__cdecl*&&)(BuildPatchServices::FFileAttributes_&,FString)>
                *)&local_res8,(bool *)local_38);
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
    local_res18[0] =
         `BuildPatchServices::FFileAttributesParserImpl::FFileAttributesParserImpl'::__l2::
         <lambda_2>::<lambda_invoker_cdecl>;
    ::FString::FString((FString *)local_38,L"compressed");
    local_28._0_8_ = local_38;
    local_28._8_8_ = local_res18;
    TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_&&,void_(__cdecl*&&)(BuildPatchServices::FFileAttributes_&,FString)>_>
              ((TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
                *)&pFVar1->AttributeSetters,
               (TPairInitializer<FString_&&,void_(__cdecl*&&)(BuildPatchServices::FFileAttributes_&,FString)>
                *)&local_res8,(bool *)local_28);
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    local_res18[0] =
         `BuildPatchServices::FFileAttributesParserImpl::FFileAttributesParserImpl'::__l2::
         <lambda_3>::<lambda_invoker_cdecl>;
    ::FString::FString((FString *)local_38,L"executable");
    local_28._0_8_ = local_38;
    local_28._8_8_ = local_res18;
    TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_&&,void_(__cdecl*&&)(BuildPatchServices::FFileAttributes_&,FString)>_>
              ((TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
                *)&pFVar1->AttributeSetters,
               (TPairInitializer<FString_&&,void_(__cdecl*&&)(BuildPatchServices::FFileAttributes_&,FString)>
                *)&local_res8,(bool *)local_28);
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    local_res18[0] =
         `BuildPatchServices::FFileAttributesParserImpl::FFileAttributesParserImpl'::__l2::
         <lambda_4>::<lambda_invoker_cdecl>;
    ::FString::FString((FString *)local_38,L"tag");
    local_28._0_8_ = local_38;
    local_28._8_8_ = local_res18;
    TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_&&,void_(__cdecl*&&)(BuildPatchServices::FFileAttributes_&,FString)>_>
              ((TSet<TTuple<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString)>,TDefaultMapHashableKeyFuncs<FString,void_(__cdecl*)(BuildPatchServices::FFileAttributes_&,FString),0>,FDefaultSetAllocator>
                *)&pFVar1->AttributeSetters,
               (TPairInitializer<FString_&&,void_(__cdecl*&&)(BuildPatchServices::FFileAttributes_&,FString)>
                *)&local_res8,(bool *)local_28);
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
  }
  local_res8.Object = pFVar1;
  TSharedRef<BuildPatchServices::FFileAttributesParser,1>::
  TSharedRef<BuildPatchServices::FFileAttributesParser,1><BuildPatchServices::FFileAttributesParserImpl>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

