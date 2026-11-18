// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 151

// BonesElementName'' @ 140f87500

void __cdecl `dynamic_initializer_for_'FSkeletalMeshAttributesShared::BonesElementName__(void)

{
  ::FName::FName(&FSkeletalMeshAttributesShared::BonesElementName,"BonesElementName");
  return;
}

// DefaultSkinWeightProfileName'' @ 140f87520

void __cdecl
`dynamic_initializer_for_'FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName__(void)

{
  ::FName::FName(&FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName,"Default");
  return;
}

// SourceGeometryPartElementName'' @ 140f87540

void __cdecl
`dynamic_initializer_for_'FSkeletalMeshAttributesShared::SourceGeometryPartElementName__(void)

{
  ::FName::FName(&FSkeletalMeshAttributesShared::SourceGeometryPartElementName,
                 "SourceGeometryPartElementName");
  return;
}

// `dynamic_initializer_for_'Color'' @ 140f87560

void __cdecl MeshAttribute::Bone::_dynamic_initializer_for__Color__(void)

{
  ::FName::FName(&Color,"Color");
  return;
}

// `dynamic_initializer_for_'ImportPointIndex'' @ 140f87580

void __cdecl MeshAttribute::Vertex::_dynamic_initializer_for__ImportPointIndex__(void)

{
  ::FName::FName(&ImportPointIndex,"ImportPointIndex");
  return;
}

// `dynamic_initializer_for_'LogSkeletalMeshOperations'' @ 140f875a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSkeletalMeshOperations__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSkeletalMeshOperations,L"LogSkeletalMeshOperations",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSkeletalMeshOperations__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSkeletalMeshDescription'' @ 140f875e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantSkeletalMeshDescription__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SkeletalMeshDescription";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SkeletalMeshDescription",0x17);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FSkeletalMeshDescriptionModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'MorphTargetAttributeNamePrefix'' @ 140f87630

void __cdecl _dynamic_initializer_for__MorphTargetAttributeNamePrefix__(void)

{
  FString::FString(&MorphTargetAttributeNamePrefix,"Morph-");
  atexit(_dynamic_atexit_destructor_for__MorphTargetAttributeNamePrefix__);
  return;
}

// `dynamic_initializer_for_'Name'' @ 140f87660

void __cdecl MeshAttribute::Bone::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,"Name");
  return;
}

// `dynamic_initializer_for_'Name'' @ 140f87680

void __cdecl MeshAttribute::SourceGeometryPart::_dynamic_initializer_for__Name__(void)

{
  ::FName::FName(&Name,"Name");
  return;
}

// `dynamic_initializer_for_'ParentIndex'' @ 140f876a0

void __cdecl MeshAttribute::Bone::_dynamic_initializer_for__ParentIndex__(void)

{
  ::FName::FName(&ParentIndex,"ParentIndex");
  return;
}

// `dynamic_initializer_for_'Pose'' @ 140f876c0

void __cdecl MeshAttribute::Bone::_dynamic_initializer_for__Pose__(void)

{
  ::FName::FName(&Pose,"Pose");
  return;
}

// `dynamic_initializer_for_'SkinWeights'' @ 140f876e0

void __cdecl MeshAttribute::Vertex::_dynamic_initializer_for__SkinWeights__(void)

{
  ::FName::FName(&SkinWeights,"SkinWeights");
  return;
}

// `dynamic_initializer_for_'VertexOffsetAndCount'' @ 140f87700

void __cdecl
MeshAttribute::SourceGeometryPart::_dynamic_initializer_for__VertexOffsetAndCount__(void)

{
  ::FName::FName(&VertexOffsetAndCount,"VertexOffsetAndCount");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshDescription_h__Script_SkeletalMeshDescription_2710355602'' @ 140f87720

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshDescription_h__Script_SkeletalMeshDescription_2710355602__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SkeletalMeshDescription",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshDescription_h__Script_SkeletalMeshDescription_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshElementTypes_h__Script_SkeletalMeshDescription_868333706'' @ 140f87760

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshElementTypes_h__Script_SkeletalMeshDescription_868333706__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SkeletalMeshDescription",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SkeletalMeshDescription_Public_SkeletalMeshElementTypes_h__Script_SkeletalMeshDescription_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_SkeletalMeshDescription'' @ 140f877a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_SkeletalMeshDescription__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x8da95afb;
  local_res8[0].DeclarationsHash = 0xda433a5b;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_SkeletalMeshDescription,L"/Script/SkeletalMeshDescription"
             ,&Z_Registration_Info_UPackage__Script_SkeletalMeshDescription,local_res8);
  return;
}

// Z_Construct_UPackage__Script_SkeletalMeshDescription @ 14438b900

UPackage * __cdecl Z_Construct_UPackage__Script_SkeletalMeshDescription(void)

{
  if (Z_Registration_Info_UPackage__Script_SkeletalMeshDescription.OuterSingleton == (UPackage *)0x0
     ) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_SkeletalMeshDescription.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_SkeletalMeshDescription.OuterSingleton;
}

// NewStructOps @ 14438b9c0

void * __cdecl Z_Construct_UScriptStruct_FBoneID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBoneID,&UE::CoreUObject::Private::Construct<FBoneID>,&UE::CoreUObject::Private::ConstructForTests<FBoneID>,&UE::CoreUObject::Private::Destruct<FBoneID>,&UE::CoreUObject::Private::Copy<FBoneID>,&UE::CoreUObject::Private::GetStructTypeHash<FBoneID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14438ba60

void * __cdecl Z_Construct_UScriptStruct_FSourceGeometryPartID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSourceGeometryPartID,&UE::CoreUObject::Private::Construct<FSourceGeometryPartID>,&UE::CoreUObject::Private::ConstructForTests<FSourceGeometryPartID>,&UE::CoreUObject::Private::Destruct<FSourceGeometryPartID>,&UE::CoreUObject::Private::Copy<FSourceGeometryPartID>,&UE::CoreUObject::Private::GetStructTypeHash<FSourceGeometryPartID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_USkeletalMeshDescription @ 14438bb70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USkeletalMeshDescription(void)

{
  if (Z_Registration_Info_UClass_USkeletalMeshDescription.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USkeletalMeshDescription.OuterSingleton,
               &Z_Construct_UClass_USkeletalMeshDescription_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USkeletalMeshDescription.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14438bbd0

void * __thiscall
FSkeletalMeshDescriptionModule::_scalar_deleting_destructor_
          (FSkeletalMeshDescriptionModule *this,uint param_1)

{
  *this = (FSkeletalMeshDescriptionModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,`TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>'::__l1::<lambda_23_>_> @ 14438bcb0

TStaticArray<int,256,4294967295> * __thiscall
TStaticArray<int,256,4294967295>::
TStaticArray<int,256,4294967295><0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,_TStaticArray<int,256,4294967295>::TStaticArray<int,256,4294967295><int>_::__l1::<lambda_23_>_>
          (TStaticArray<int,256,4294967295> *this,EInPlace param_1,
          TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255>
          param_2,<lambda_23_> param_3)

{
  this->Elements[0] = *param_3.<Args_0>;
  this->Elements[1] = *param_3.<Args_0>;
  this->Elements[2] = *param_3.<Args_0>;
  this->Elements[3] = *param_3.<Args_0>;
  this->Elements[4] = *param_3.<Args_0>;
  this->Elements[5] = *param_3.<Args_0>;
  this->Elements[6] = *param_3.<Args_0>;
  this->Elements[7] = *param_3.<Args_0>;
  this->Elements[8] = *param_3.<Args_0>;
  this->Elements[9] = *param_3.<Args_0>;
  this->Elements[10] = *param_3.<Args_0>;
  this->Elements[0xb] = *param_3.<Args_0>;
  this->Elements[0xc] = *param_3.<Args_0>;
  this->Elements[0xd] = *param_3.<Args_0>;
  this->Elements[0xe] = *param_3.<Args_0>;
  this->Elements[0xf] = *param_3.<Args_0>;
  this->Elements[0x10] = *param_3.<Args_0>;
  this->Elements[0x11] = *param_3.<Args_0>;
  this->Elements[0x12] = *param_3.<Args_0>;
  this->Elements[0x13] = *param_3.<Args_0>;
  this->Elements[0x14] = *param_3.<Args_0>;
  this->Elements[0x15] = *param_3.<Args_0>;
  this->Elements[0x16] = *param_3.<Args_0>;
  this->Elements[0x17] = *param_3.<Args_0>;
  this->Elements[0x18] = *param_3.<Args_0>;
  this->Elements[0x19] = *param_3.<Args_0>;
  this->Elements[0x1a] = *param_3.<Args_0>;
  this->Elements[0x1b] = *param_3.<Args_0>;
  this->Elements[0x1c] = *param_3.<Args_0>;
  this->Elements[0x1d] = *param_3.<Args_0>;
  this->Elements[0x1e] = *param_3.<Args_0>;
  this->Elements[0x1f] = *param_3.<Args_0>;
  this->Elements[0x20] = *param_3.<Args_0>;
  this->Elements[0x21] = *param_3.<Args_0>;
  this->Elements[0x22] = *param_3.<Args_0>;
  this->Elements[0x23] = *param_3.<Args_0>;
  this->Elements[0x24] = *param_3.<Args_0>;
  this->Elements[0x25] = *param_3.<Args_0>;
  this->Elements[0x26] = *param_3.<Args_0>;
  this->Elements[0x27] = *param_3.<Args_0>;
  this->Elements[0x28] = *param_3.<Args_0>;
  this->Elements[0x29] = *param_3.<Args_0>;
  this->Elements[0x2a] = *param_3.<Args_0>;
  this->Elements[0x2b] = *param_3.<Args_0>;
  this->Elements[0x2c] = *param_3.<Args_0>;
  this->Elements[0x2d] = *param_3.<Args_0>;
  this->Elements[0x2e] = *param_3.<Args_0>;
  this->Elements[0x2f] = *param_3.<Args_0>;
  this->Elements[0x30] = *param_3.<Args_0>;
  this->Elements[0x31] = *param_3.<Args_0>;
  this->Elements[0x32] = *param_3.<Args_0>;
  this->Elements[0x33] = *param_3.<Args_0>;
  this->Elements[0x34] = *param_3.<Args_0>;
  this->Elements[0x35] = *param_3.<Args_0>;
  this->Elements[0x36] = *param_3.<Args_0>;
  this->Elements[0x37] = *param_3.<Args_0>;
  this->Elements[0x38] = *param_3.<Args_0>;
  this->Elements[0x39] = *param_3.<Args_0>;
  this->Elements[0x3a] = *param_3.<Args_0>;
  this->Elements[0x3b] = *param_3.<Args_0>;
  this->Elements[0x3c] = *param_3.<Args_0>;
  this->Elements[0x3d] = *param_3.<Args_0>;
  this->Elements[0x3e] = *param_3.<Args_0>;
  this->Elements[0x3f] = *param_3.<Args_0>;
  this->Elements[0x40] = *param_3.<Args_0>;
  this->Elements[0x41] = *param_3.<Args_0>;
  this->Elements[0x42] = *param_3.<Args_0>;
  this->Elements[0x43] = *param_3.<Args_0>;
  this->Elements[0x44] = *param_3.<Args_0>;
  this->Elements[0x45] = *param_3.<Args_0>;
  this->Elements[0x46] = *param_3.<Args_0>;
  this->Elements[0x47] = *param_3.<Args_0>;
  this->Elements[0x48] = *param_3.<Args_0>;
  this->Elements[0x49] = *param_3.<Args_0>;
  this->Elements[0x4a] = *param_3.<Args_0>;
  this->Elements[0x4b] = *param_3.<Args_0>;
  this->Elements[0x4c] = *param_3.<Args_0>;
  this->Elements[0x4d] = *param_3.<Args_0>;
  this->Elements[0x4e] = *param_3.<Args_0>;
  this->Elements[0x4f] = *param_3.<Args_0>;
  this->Elements[0x50] = *param_3.<Args_0>;
  this->Elements[0x51] = *param_3.<Args_0>;
  this->Elements[0x52] = *param_3.<Args_0>;
  this->Elements[0x53] = *param_3.<Args_0>;
  this->Elements[0x54] = *param_3.<Args_0>;
  this->Elements[0x55] = *param_3.<Args_0>;
  this->Elements[0x56] = *param_3.<Args_0>;
  this->Elements[0x57] = *param_3.<Args_0>;
  this->Elements[0x58] = *param_3.<Args_0>;
  this->Elements[0x59] = *param_3.<Args_0>;
  this->Elements[0x5a] = *param_3.<Args_0>;
  this->Elements[0x5b] = *param_3.<Args_0>;
  this->Elements[0x5c] = *param_3.<Args_0>;
  this->Elements[0x5d] = *param_3.<Args_0>;
  this->Elements[0x5e] = *param_3.<Args_0>;
  this->Elements[0x5f] = *param_3.<Args_0>;
  this->Elements[0x60] = *param_3.<Args_0>;
  this->Elements[0x61] = *param_3.<Args_0>;
  this->Elements[0x62] = *param_3.<Args_0>;
  this->Elements[99] = *param_3.<Args_0>;
  this->Elements[100] = *param_3.<Args_0>;
  this->Elements[0x65] = *param_3.<Args_0>;
  this->Elements[0x66] = *param_3.<Args_0>;
  this->Elements[0x67] = *param_3.<Args_0>;
  this->Elements[0x68] = *param_3.<Args_0>;
  this->Elements[0x69] = *param_3.<Args_0>;
  this->Elements[0x6a] = *param_3.<Args_0>;
  this->Elements[0x6b] = *param_3.<Args_0>;
  this->Elements[0x6c] = *param_3.<Args_0>;
  this->Elements[0x6d] = *param_3.<Args_0>;
  this->Elements[0x6e] = *param_3.<Args_0>;
  this->Elements[0x6f] = *param_3.<Args_0>;
  this->Elements[0x70] = *param_3.<Args_0>;
  this->Elements[0x71] = *param_3.<Args_0>;
  this->Elements[0x72] = *param_3.<Args_0>;
  this->Elements[0x73] = *param_3.<Args_0>;
  this->Elements[0x74] = *param_3.<Args_0>;
  this->Elements[0x75] = *param_3.<Args_0>;
  this->Elements[0x76] = *param_3.<Args_0>;
  this->Elements[0x77] = *param_3.<Args_0>;
  this->Elements[0x78] = *param_3.<Args_0>;
  this->Elements[0x79] = *param_3.<Args_0>;
  this->Elements[0x7a] = *param_3.<Args_0>;
  this->Elements[0x7b] = *param_3.<Args_0>;
  this->Elements[0x7c] = *param_3.<Args_0>;
  this->Elements[0x7d] = *param_3.<Args_0>;
  this->Elements[0x7e] = *param_3.<Args_0>;
  this->Elements[0x7f] = *param_3.<Args_0>;
  this->Elements[0x80] = *param_3.<Args_0>;
  this->Elements[0x81] = *param_3.<Args_0>;
  this->Elements[0x82] = *param_3.<Args_0>;
  this->Elements[0x83] = *param_3.<Args_0>;
  this->Elements[0x84] = *param_3.<Args_0>;
  this->Elements[0x85] = *param_3.<Args_0>;
  this->Elements[0x86] = *param_3.<Args_0>;
  this->Elements[0x87] = *param_3.<Args_0>;
  this->Elements[0x88] = *param_3.<Args_0>;
  this->Elements[0x89] = *param_3.<Args_0>;
  this->Elements[0x8a] = *param_3.<Args_0>;
  this->Elements[0x8b] = *param_3.<Args_0>;
  this->Elements[0x8c] = *param_3.<Args_0>;
  this->Elements[0x8d] = *param_3.<Args_0>;
  this->Elements[0x8e] = *param_3.<Args_0>;
  this->Elements[0x8f] = *param_3.<Args_0>;
  this->Elements[0x90] = *param_3.<Args_0>;
  this->Elements[0x91] = *param_3.<Args_0>;
  this->Elements[0x92] = *param_3.<Args_0>;
  this->Elements[0x93] = *param_3.<Args_0>;
  this->Elements[0x94] = *param_3.<Args_0>;
  this->Elements[0x95] = *param_3.<Args_0>;
  this->Elements[0x96] = *param_3.<Args_0>;
  this->Elements[0x97] = *param_3.<Args_0>;
  this->Elements[0x98] = *param_3.<Args_0>;
  this->Elements[0x99] = *param_3.<Args_0>;
  this->Elements[0x9a] = *param_3.<Args_0>;
  this->Elements[0x9b] = *param_3.<Args_0>;
  this->Elements[0x9c] = *param_3.<Args_0>;
  this->Elements[0x9d] = *param_3.<Args_0>;
  this->Elements[0x9e] = *param_3.<Args_0>;
  this->Elements[0x9f] = *param_3.<Args_0>;
  this->Elements[0xa0] = *param_3.<Args_0>;
  this->Elements[0xa1] = *param_3.<Args_0>;
  this->Elements[0xa2] = *param_3.<Args_0>;
  this->Elements[0xa3] = *param_3.<Args_0>;
  this->Elements[0xa4] = *param_3.<Args_0>;
  this->Elements[0xa5] = *param_3.<Args_0>;
  this->Elements[0xa6] = *param_3.<Args_0>;
  this->Elements[0xa7] = *param_3.<Args_0>;
  this->Elements[0xa8] = *param_3.<Args_0>;
  this->Elements[0xa9] = *param_3.<Args_0>;
  this->Elements[0xaa] = *param_3.<Args_0>;
  this->Elements[0xab] = *param_3.<Args_0>;
  this->Elements[0xac] = *param_3.<Args_0>;
  this->Elements[0xad] = *param_3.<Args_0>;
  this->Elements[0xae] = *param_3.<Args_0>;
  this->Elements[0xaf] = *param_3.<Args_0>;
  this->Elements[0xb0] = *param_3.<Args_0>;
  this->Elements[0xb1] = *param_3.<Args_0>;
  this->Elements[0xb2] = *param_3.<Args_0>;
  this->Elements[0xb3] = *param_3.<Args_0>;
  this->Elements[0xb4] = *param_3.<Args_0>;
  this->Elements[0xb5] = *param_3.<Args_0>;
  this->Elements[0xb6] = *param_3.<Args_0>;
  this->Elements[0xb7] = *param_3.<Args_0>;
  this->Elements[0xb8] = *param_3.<Args_0>;
  this->Elements[0xb9] = *param_3.<Args_0>;
  this->Elements[0xba] = *param_3.<Args_0>;
  this->Elements[0xbb] = *param_3.<Args_0>;
  this->Elements[0xbc] = *param_3.<Args_0>;
  this->Elements[0xbd] = *param_3.<Args_0>;
  this->Elements[0xbe] = *param_3.<Args_0>;
  this->Elements[0xbf] = *param_3.<Args_0>;
  this->Elements[0xc0] = *param_3.<Args_0>;
  this->Elements[0xc1] = *param_3.<Args_0>;
  this->Elements[0xc2] = *param_3.<Args_0>;
  this->Elements[0xc3] = *param_3.<Args_0>;
  this->Elements[0xc4] = *param_3.<Args_0>;
  this->Elements[0xc5] = *param_3.<Args_0>;
  this->Elements[0xc6] = *param_3.<Args_0>;
  this->Elements[199] = *param_3.<Args_0>;
  this->Elements[200] = *param_3.<Args_0>;
  this->Elements[0xc9] = *param_3.<Args_0>;
  this->Elements[0xca] = *param_3.<Args_0>;
  this->Elements[0xcb] = *param_3.<Args_0>;
  this->Elements[0xcc] = *param_3.<Args_0>;
  this->Elements[0xcd] = *param_3.<Args_0>;
  this->Elements[0xce] = *param_3.<Args_0>;
  this->Elements[0xcf] = *param_3.<Args_0>;
  this->Elements[0xd0] = *param_3.<Args_0>;
  this->Elements[0xd1] = *param_3.<Args_0>;
  this->Elements[0xd2] = *param_3.<Args_0>;
  this->Elements[0xd3] = *param_3.<Args_0>;
  this->Elements[0xd4] = *param_3.<Args_0>;
  this->Elements[0xd5] = *param_3.<Args_0>;
  this->Elements[0xd6] = *param_3.<Args_0>;
  this->Elements[0xd7] = *param_3.<Args_0>;
  this->Elements[0xd8] = *param_3.<Args_0>;
  this->Elements[0xd9] = *param_3.<Args_0>;
  this->Elements[0xda] = *param_3.<Args_0>;
  this->Elements[0xdb] = *param_3.<Args_0>;
  this->Elements[0xdc] = *param_3.<Args_0>;
  this->Elements[0xdd] = *param_3.<Args_0>;
  this->Elements[0xde] = *param_3.<Args_0>;
  this->Elements[0xdf] = *param_3.<Args_0>;
  this->Elements[0xe0] = *param_3.<Args_0>;
  this->Elements[0xe1] = *param_3.<Args_0>;
  this->Elements[0xe2] = *param_3.<Args_0>;
  this->Elements[0xe3] = *param_3.<Args_0>;
  this->Elements[0xe4] = *param_3.<Args_0>;
  this->Elements[0xe5] = *param_3.<Args_0>;
  this->Elements[0xe6] = *param_3.<Args_0>;
  this->Elements[0xe7] = *param_3.<Args_0>;
  this->Elements[0xe8] = *param_3.<Args_0>;
  this->Elements[0xe9] = *param_3.<Args_0>;
  this->Elements[0xea] = *param_3.<Args_0>;
  this->Elements[0xeb] = *param_3.<Args_0>;
  this->Elements[0xec] = *param_3.<Args_0>;
  this->Elements[0xed] = *param_3.<Args_0>;
  this->Elements[0xee] = *param_3.<Args_0>;
  this->Elements[0xef] = *param_3.<Args_0>;
  this->Elements[0xf0] = *param_3.<Args_0>;
  this->Elements[0xf1] = *param_3.<Args_0>;
  this->Elements[0xf2] = *param_3.<Args_0>;
  this->Elements[0xf3] = *param_3.<Args_0>;
  this->Elements[0xf4] = *param_3.<Args_0>;
  this->Elements[0xf5] = *param_3.<Args_0>;
  this->Elements[0xf6] = *param_3.<Args_0>;
  this->Elements[0xf7] = *param_3.<Args_0>;
  this->Elements[0xf8] = *param_3.<Args_0>;
  this->Elements[0xf9] = *param_3.<Args_0>;
  this->Elements[0xfa] = *param_3.<Args_0>;
  this->Elements[0xfb] = *param_3.<Args_0>;
  this->Elements[0xfc] = *param_3.<Args_0>;
  this->Elements[0xfd] = *param_3.<Args_0>;
  this->Elements[0xfe] = *param_3.<Args_0>;
  this->Elements[0xff] = *param_3.<Args_0>;
  return this;
}

// DefaultConstructItems<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,int> @ 14438c9f0

void __cdecl
DefaultConstructItems<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      lVar1 = lVar1 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,int> @ 14438ca40

void __cdecl
DefaultConstructItems<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 0x80;
      *(undefined4 *)(lVar1 + 0x24) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x34) = 0;
      *(undefined4 *)(lVar1 + 0x3c) = 0;
      *(undefined8 *)(lVar1 + 0x44) = 0;
      *(undefined8 *)(lVar1 + 0x4c) = 0;
      lVar1 = lVar1 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>::FNode,int> @ 14438ca90

void __cdecl
DefaultConstructItems<TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>::FNode,int>
          (void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)param_1 = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 4) = 0;
    param_1 = (void *)((longlong)param_1 + 8);
  }
  return;
}

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<`UE::Impl::PoseMesh'::__l20::<lambda_1>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l20::<lambda_1>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'::__l2::FTracedTask,int> @ 14438cac0

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_UE::Impl::PoseMesh_::__l20::<lambda_1>,_ParallelForWithTaskContext<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::PoseMesh_::__l20::<lambda_1>_>_::__l5::<lambda_1>,_UE::Impl::PoseMesh_::__l20::FMorphProcessContext>_::__l2::FTracedTask,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x28);
    do {
      *puVar1 = &
                ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      puVar1[1] = 0;
      puVar1[2] = 0xe800000000000020;
      puVar1[3] = 0xffffffffffffffff;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<`UE::Impl::PoseMesh'::__l23::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l23::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'::__l2::FTracedTask,int> @ 14438cb10

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_UE::Impl::PoseMesh_::__l23::<lambda_2>,_ParallelForWithTaskContext<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::PoseMesh_::__l23::<lambda_2>_>_::__l5::<lambda_1>,_UE::Impl::PoseMesh_::__l20::FMorphProcessContext>_::__l2::FTracedTask,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x28);
    do {
      *puVar1 = &
                ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      puVar1[1] = 0;
      puVar1[2] = 0xe800000000000020;
      puVar1[3] = 0xffffffffffffffff;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<`UE::Impl::UnposeMesh'::__l24::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l24::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'::__l2::FTracedTask,int> @ 14438cb60

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_UE::Impl::UnposeMesh_::__l24::<lambda_2>,_ParallelForWithTaskContext<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::UnposeMesh_::__l24::<lambda_2>_>_::__l5::<lambda_1>,_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext>_::__l2::FTracedTask,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x28);
    do {
      *puVar1 = &
                ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      puVar1[1] = 0;
      puVar1[2] = 0xe800000000000020;
      puVar1[3] = 0xffffffffffffffff;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`ParallelForImpl::ParallelForInternal<`UE::Impl::UnposeMesh'::__l27::<lambda_3>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l27::<lambda_3>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'::__l2::FTracedTask,int> @ 14438cbb0

void __cdecl
DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_UE::Impl::UnposeMesh_::__l27::<lambda_3>,_ParallelForWithTaskContext<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::UnposeMesh_::__l27::<lambda_3>_>_::__l5::<lambda_1>,_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext>_::__l2::FTracedTask,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x28);
    do {
      *puVar1 = &
                ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
      ;
      puVar1[1] = 0;
      puVar1[2] = 0xe800000000000020;
      puVar1[3] = 0xffffffffffffffff;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TArray<RigApplicationHelpers::FVertexInfo,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int> @ 14438cc00

void __cdecl
DefaultConstructItems<TArray<RigApplicationHelpers::FVertexInfo,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
          (void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 0x108);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1[1] = 0x10;
      puVar1 = puVar1 + 0x44;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,int> @ 14438cc30

void __cdecl
DestructItems<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,int>
          (FMorphProcessContext *param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    piVar1 = &(param_1->DirtyVertexInstances).HashSize;
    do {
      if (*(void **)(piVar1 + 2) != (void *)0x0) {
        FMemory::Free(*(void **)(piVar1 + 2));
      }
      *piVar1 = 0;
      if (*(ForElementType<FSetElementId> *)(piVar1 + -2) != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*(ForElementType<FSetElementId> *)(piVar1 + -2));
      }
      TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(piVar1 + -0x12));
      piVar1 = piVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,int> @ 14438cca0

void __cdecl
DestructItems<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,int>
          (FMorphProcessContext *param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    piVar1 = &(param_1->DirtyVertexInstances).HashSize;
    do {
      if (*(void **)(piVar1 + 2) != (void *)0x0) {
        FMemory::Free(*(void **)(piVar1 + 2));
      }
      *piVar1 = 0;
      if (*(ForElementType<FSetElementId> *)(piVar1 + -2) != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*(ForElementType<FSetElementId> *)(piVar1 + -2));
      }
      TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FVertexInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(piVar1 + -0x12));
      piVar1 = piVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<RigApplicationHelpers::FVertexInfo,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int> @ 14438cd10

void __cdecl
DestructItems<TArray<RigApplicationHelpers::FVertexInfo,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
          (TArray<RigApplicationHelpers::FVertexInfo,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *param_1,int param_2)

{
  ForElementType<RigApplicationHelpers::FVertexInfo> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->AllocatorInstance).SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<RigApplicationHelpers::FVertexInfo>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 0x22;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindElementsWithBoundsTestInternal<`RigApplicationHelpers::FindNearestVertexIndices'::__l4::<lambda_1>_> @ 14438cf00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>::
FindElementsWithBoundsTestInternal<_RigApplicationHelpers::FindNearestVertexIndices_::__l4::<lambda_1>_>
          (TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>
           *this,uint param_1,FOctreeNodeContext *param_2,FBoxCenterAndExtent *param_3,
          <lambda_1> *param_4)

{
  TArray<RigApplicationHelpers::FVertexInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  FBoxCenterAndExtent *pFVar20;
  bool bVar21;
  uint uVar22;
  undefined4 uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined4 uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  char *pcVar32;
  undefined1 *this_00;
  uint uVar33;
  byte bVar34;
  FScriptContainerElement *pFVar36;
  longlong lVar37;
  FScriptContainerElement *pFVar38;
  uint uVar39;
  FScriptContainerElement *pFVar40;
  longlong lVar41;
  double dVar42;
  uint uVar52;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  uint uVar51;
  double dVar53;
  uint uVar54;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  double dVar60;
  double dVar61;
  uint uVar62;
  uint uVar63;
  undefined4 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined1 auVar67 [16];
  undefined4 uVar68;
  uint uVar69;
  undefined1 local_res8 [8];
  uint local_res10;
  FOctreeNodeContext *local_res18;
  FBoxCenterAndExtent *local_res20;
  TVector4<double>_u_0 local_108;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  double local_c8;
  double local_c0;
  uint uVar35;
  
  uVar39 = ~param_1 >> 0x1f;
  uVar22 = 0;
  if ((int)param_1 < (this->TreeNodes).ArrayNum) {
    uVar22 = uVar39;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((uVar22 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)((this->TreeNodes).AllocatorInstance.Data + (longlong)(int)param_1 * 8 + 4) != 0) {
    iVar30 = (this->TreeElements).ArrayNum;
    pcVar32 = (char *)(longlong)iVar30;
    uVar22 = 0;
    if ((int)param_1 < iVar30) {
      uVar22 = uVar39;
    }
    pFVar27 = (FScriptContainerElement *)(ulonglong)uVar22;
    if (uVar22 == 0) {
      pcVar32 = "(Index >= 0) & (Index < ArrayNum)";
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      pFVar27 = (FScriptContainerElement *)CONCAT71(extraout_var,bVar21);
      if (bVar21) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar33 = _UNK_15061cc8c;
    uVar26 = _UNK_15061cc88;
    uVar25 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar64 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar68 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    pFVar38 = (this->TreeElements).AllocatorInstance.Data + (longlong)(int)param_1 * 0x110;
    iVar30 = *(int *)(pFVar38 + 0x108);
    pFVar36 = *(FScriptContainerElement **)(pFVar38 + 0x100);
    if (*(FScriptContainerElement **)(pFVar38 + 0x100) == (FScriptContainerElement *)0x0) {
      pFVar36 = pFVar38;
    }
    pFVar40 = pFVar36 + (longlong)iVar30 * 0x10;
    uVar65 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar66 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    while( true ) {
      uVar23 = SUB84(pFVar27,0);
      uVar28 = SUB84(pcVar32,0);
      if (*(int *)(pFVar38 + 0x108) != iVar30) {
        this_00 = local_res8;
        local_res8[0] = 0;
        bVar21 = `TCheckedPointerIterator<RigApplicationHelpers::FVertexInfo_const_,int,0>::
                 operator!='::__l2::<lambda_1>::operator()(this_00);
        uVar28 = SUB84(this_00,0);
        uVar23 = (undefined4)CONCAT71(extraout_var_00,bVar21);
        uVar64 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar68 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar65 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar66 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      uVar29 = local_res10;
      if (pFVar36 == pFVar40) break;
      dVar60 = (double)(float)*(undefined8 *)pFVar36 - (param_3->Center).field0_0x0._s_0.X;
      dVar61 = (double)(float)((ulonglong)*(undefined8 *)pFVar36 >> 0x20) -
               (param_3->Center).field0_0x0._s_0.Y;
      auVar43._8_8_ =
           -(ulonglong)
            ((double)uVar66 + (param_3->Extent).field0_0x0._s_0.Y <
            (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar33,SUB84(dVar61,0) & uVar26));
      auVar43._0_8_ =
           -(ulonglong)
            ((double)uVar65 + (param_3->Extent).field0_0x0._s_0.X <
            (double)CONCAT44((uint)((ulonglong)dVar60 >> 0x20) & uVar25,SUB84(dVar60,0) & uVar22));
      uVar29 = movmskpd(uVar28,auVar43);
      dVar60 = (double)*(float *)(pFVar36 + 8) - (param_3->Center).field0_0x0._s_0.Z;
      dVar61 = 0.0 - (param_3->Center).field0_0x0._s_0.W;
      auVar44._8_8_ =
           -(ulonglong)
            ((param_3->Extent).field0_0x0._s_0.W + 0.0 <
            (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) & uVar33,SUB84(dVar61,0) & uVar26));
      auVar44._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(uVar68,uVar64) + (param_3->Extent).field0_0x0._s_0.Z <
            (double)CONCAT44((uint)((ulonglong)dVar60 >> 0x20) & uVar25,SUB84(dVar60,0) & uVar22));
      iVar24 = movmskpd(uVar23,auVar44);
      pFVar27 = (FScriptContainerElement *)(ulonglong)(uint)(iVar24 << 2);
      uVar29 = uVar29 | iVar24 << 2;
      pcVar32 = (char *)(ulonglong)uVar29;
      if (uVar29 == 0) {
        pTVar1 = param_4->OutNearestVertices;
        pFVar27 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar27 <= pFVar36) && (pFVar36 < pFVar27 + (longlong)pTVar1->ArrayMax * 0x10)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar24 = pTVar1->ArrayNum;
        if (iVar24 == pTVar1->ArrayMax) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
        }
        pTVar1->ArrayNum = iVar24 + 1;
        uVar65 = *(undefined8 *)(pFVar36 + 8);
        pFVar27 = (pTVar1->AllocatorInstance).Data;
        pcVar32 = (char *)((longlong)iVar24 * 2);
        *(undefined8 *)(pFVar27 + (longlong)iVar24 * 0x10) = *(undefined8 *)pFVar36;
        *(undefined8 *)(pFVar27 + (longlong)iVar24 * 0x10 + 8) = uVar65;
        uVar64 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar68 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        param_3 = local_res20;
        uVar65 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar66 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      pFVar36 = pFVar36 + 0x10;
    }
    iVar30 = (this->TreeNodes).ArrayNum;
    lVar37 = (longlong)(int)local_res10;
    uVar22 = 0;
    if ((int)local_res10 < iVar30) {
      uVar22 = uVar39;
    }
    if (uVar22 == 0) {
      iVar30 = 0x506106c8;
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar21) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar27 = (this->TreeNodes).AllocatorInstance.Data;
    if (*(int *)(pFVar27 + lVar37 * 8) != -1) {
      dVar42 = (param_3->Extent).field0_0x0._s_0.Z;
      dVar53 = (param_3->Extent).field0_0x0._s_0.W;
      dVar6 = (param_3->Center).field0_0x0._s_0.Z;
      dVar7 = (param_3->Center).field0_0x0._s_0.W;
      dVar8 = (param_3->Extent).field0_0x0._s_0.X;
      dVar9 = (param_3->Extent).field0_0x0._s_0.Y;
      dVar10 = (local_res18->Bounds).Center.field0_0x0._s_0.Z;
      dVar11 = (local_res18->Bounds).Center.field0_0x0._s_0.W;
      dVar12 = (local_res18->Bounds).Center.field0_0x0._s_0.X;
      dVar13 = (local_res18->Bounds).Center.field0_0x0._s_0.Y;
      dVar60 = local_res18->ChildCenterOffset;
      dVar61 = local_res18->ChildExtent;
      dVar14 = (param_3->Center).field0_0x0._s_0.X;
      dVar15 = (param_3->Center).field0_0x0._s_0.Y;
      auVar45._8_4_ = SUB84(dVar60,0);
      auVar45._0_8_ = dVar60;
      uVar64 = (undefined4)((ulonglong)dVar60 >> 0x20);
      auVar45._12_4_ = uVar64;
      auVar46._8_8_ = -(ulonglong)((auVar45._8_8_ + dVar11) - dVar61 < dVar53 + dVar7);
      auVar46._0_8_ = -(ulonglong)((dVar60 + dVar10) - dVar61 < dVar42 + dVar6);
      uVar33 = movmskpd((int)param_3,auVar46);
      auVar47._8_4_ = SUB84(dVar60,0);
      auVar47._0_8_ = dVar60;
      auVar47._12_4_ = uVar64;
      auVar48._8_8_ = -(ulonglong)((auVar47._8_8_ + dVar13) - dVar61 < dVar9 + dVar15);
      auVar48._0_8_ = -(ulonglong)((dVar60 + dVar12) - dVar61 < dVar8 + dVar14);
      uVar25 = movmskpd((int)pFVar27,auVar48);
      lVar41 = -(ulonglong)(dVar7 - dVar53 <= (dVar11 - dVar60) + dVar61);
      auVar4._8_4_ = (int)lVar41;
      auVar4._0_8_ = -(ulonglong)(dVar6 - dVar42 <= (dVar10 - dVar60) + dVar61);
      auVar4._12_4_ = (int)((ulonglong)lVar41 >> 0x20);
      iVar30 = movmskpd(iVar30,auVar4);
      lVar41 = -(ulonglong)(dVar15 - dVar9 <= (dVar13 - dVar60) + dVar61);
      auVar5._8_4_ = (int)lVar41;
      auVar5._0_8_ = -(ulonglong)(dVar14 - dVar8 <= (dVar12 - dVar60) + dVar61);
      auVar5._12_4_ = (int)((ulonglong)lVar41 >> 0x20);
      uVar26 = movmskpd(uVar25,auVar5);
      uVar22 = 0;
      if ((int)uVar29 < (this->TreeNodes).ArrayNum) {
        uVar22 = uVar39;
      }
      if ((uVar22 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar20 = local_res20;
      uVar19 = _UNK_15074415c;
      uVar29 = _UNK_150744158;
      uVar39 = _UNK_150744154;
      uVar22 = ___xmm_00000008000000040000000200000001;
      dVar61 = __real_3ff1000000000000;
      fVar18 = _UNK_15068954c;
      fVar17 = _UNK_150689548;
      dVar60 = __real_3fe0000000000000;
      uVar35 = 0;
      uVar69 = (uint)__xmm_80000000000000008000000000000000;
      uVar16 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
      iVar24 = *(int *)((this->TreeNodes).AllocatorInstance.Data + lVar37 * 8);
      do {
        uVar31 = (~uVar35 & 7) << 3 | uVar35 & 7;
        if ((uVar31 & ((uVar33 & 1) << 2 | uVar25 & 7 | (iVar30 << 2 | uVar26) << 3)) == uVar31) {
          uVar62 = SUB84(local_res18->ChildCenterOffset,0) ^ uVar69;
          uVar63 = (uint)((ulonglong)local_res18->ChildCenterOffset >> 0x20) ^ (uint)uVar16;
          dVar42 = (double)(float)-(uint)((uVar35 & uVar22) == uVar22);
          dVar53 = (double)(float)-(uint)((uVar35 & uVar39) == uVar39);
          uVar31 = SUB84(dVar42,0);
          uVar51 = (uint)((ulonglong)dVar42 >> 0x20);
          uVar52 = SUB84(dVar53,0);
          uVar54 = (uint)((ulonglong)dVar53 >> 0x20);
          auVar49._0_4_ = ~uVar31 & uVar62;
          auVar49._4_4_ = ~uVar51 & uVar63;
          auVar49._8_4_ = ~uVar52 & uVar62;
          auVar49._12_4_ = ~uVar54 & uVar63;
          dVar42 = (double)(float)-(uint)((uVar35 & uVar29) == uVar29);
          uVar55 = SUB84(dVar42,0);
          uVar56 = (uint)((ulonglong)dVar42 >> 0x20);
          dVar42 = (double)(float)-(uint)((uVar35 & uVar19) == uVar19);
          uVar57 = SUB84(dVar42,0);
          uVar58 = (uint)((ulonglong)dVar42 >> 0x20);
          uVar59 = SUB84(local_res18->ChildCenterOffset,0);
          auVar67._0_4_ = uVar31 & uVar59;
          uVar31 = (uint)((ulonglong)local_res18->ChildCenterOffset >> 0x20);
          auVar67._4_4_ = uVar51 & uVar31;
          auVar67._8_4_ = uVar52 & uVar59;
          auVar67._12_4_ = uVar54 & uVar31;
          local_108._s_0.X =
               SUB168(auVar67 | auVar49,0) + (local_res18->Bounds).Center.field0_0x0._s_0.X;
          local_108._s_0.Y =
               SUB168(auVar67 | auVar49,8) + (local_res18->Bounds).Center.field0_0x0._s_0.Y;
          auVar50._0_4_ = uVar55 & uVar59;
          auVar50._4_4_ = uVar56 & uVar31;
          auVar50._8_4_ = uVar57 & uVar59;
          auVar50._12_4_ = uVar58 & uVar31;
          auVar3._4_4_ = ~uVar56 & uVar63;
          auVar3._0_4_ = ~uVar55 & uVar62;
          auVar3._8_4_ = ~uVar57 & uVar62;
          auVar3._12_4_ = ~uVar58 & uVar63;
          local_c0 = local_res18->ChildExtent;
          local_108._s_0.Z =
               (SUB168(auVar50 | auVar3,0) + (local_res18->Bounds).Center.field0_0x0._s_0.Z) *
               (double)fVar17;
          local_108._s_0.W =
               (SUB168(auVar50 | auVar3,8) + (local_res18->Bounds).Center.field0_0x0._s_0.W) *
               (double)fVar18;
          dVar42 = (double)fVar18 * local_c0;
          local_e8._8_4_ = SUB84(local_c0,0);
          local_e8._0_8_ = local_c0;
          local_e8._12_4_ = (int)((ulonglong)local_c0 >> 0x20);
          local_d8._8_4_ = SUB84(dVar42,0);
          local_d8._0_8_ = (double)fVar17 * local_c0;
          local_d8._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
          local_c8 = local_c0 * dVar60 * dVar61;
          local_c0 = local_c0 - local_c8;
          FindElementsWithBoundsTestInternal<_RigApplicationHelpers::FindNearestVertexIndices_::__l4::<lambda_1>_>
                    (this,uVar35 + iVar24,(FOctreeNodeContext *)&local_108._s_0,pFVar20,param_4);
        }
        bVar34 = (char)uVar35 + 1;
        uVar35 = (uint)bVar34;
      } while ((char)bVar34 < '\b');
    }
  }
  return;
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`Internal::FAttributesRefAdapter::Sort<bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>'::__l2::<lambda_1>_>_> @ 14438e690

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_Internal::FAttributesRefAdapter::Sort<bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_static_void___cdecl_Internal::FAttributesRefAdapter::Sort<bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>(TArrayAttribute<int>_&,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&))_::_2_::<lambda_1>_>
          param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  FBoneWeight local_res10 [2];
  FBoneWeight local_48;
  FBoneWeight local_44;
  FBoneWeight local_40;
  int local_3c;
  FBoneWeight local_38;
  FBoneWeight local_34;
  FBoneWeight local_30;
  FBoneWeight local_2c;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  local_3c = iVar4 * 2 + 1;
  iVar5 = local_3c;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14438e7e5:
      if (iVar7 == 0) {
        iVar7 = param_2 + -1;
        lVar6 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar4 = *param_1;
            *param_1 = param_1[lVar6];
            param_1[lVar6] = iVar4;
            iVar4 = 0;
            if (1 < iVar7) {
              do {
                iVar1 = iVar4 * 2;
                iVar5 = iVar1 + 1;
                if (iVar1 + 2 < iVar7) {
                  local_38.RawWeight = (ushort)param_1[iVar5];
                  local_38.BoneIndex = (ushort)((uint)param_1[iVar5] >> 0x10);
                  local_34.RawWeight = (ushort)param_1[(longlong)iVar1 + 2];
                  local_34.BoneIndex = (ushort)((uint)param_1[(longlong)iVar1 + 2] >> 0x10);
                  bVar3 = (*(param_4.Predicate)->InPredicate)(&local_34,&local_38);
                  if (bVar3) {
                    iVar5 = iVar1;
                  }
                  iVar5 = iVar5 + 1;
                }
                local_30.RawWeight = (ushort)param_1[iVar5];
                local_30.BoneIndex = (ushort)((uint)param_1[iVar5] >> 0x10);
                local_2c.RawWeight = (ushort)param_1[iVar4];
                local_2c.BoneIndex = (ushort)((uint)param_1[iVar4] >> 0x10);
                bVar3 = (*(param_4.Predicate)->InPredicate)(&local_2c,&local_30);
                if (!bVar3) break;
                iVar1 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar5];
                param_1[iVar5] = iVar1;
                iVar4 = iVar5;
              } while (iVar5 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar6 = lVar6 + -1;
          } while (0 < lVar6);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      local_3c = local_3c + -2;
      iVar7 = iVar4;
      iVar5 = local_3c;
    }
    iVar1 = iVar4 * 2;
    iVar5 = iVar1 + 1;
    if (iVar1 + 2 < param_2) {
      local_res10[0].RawWeight = (ushort)param_1[iVar5];
      local_res10[0].BoneIndex = (ushort)((uint)param_1[iVar5] >> 0x10);
      local_48.RawWeight = (ushort)param_1[(longlong)iVar1 + 2];
      local_48.BoneIndex = (ushort)((uint)param_1[(longlong)iVar1 + 2] >> 0x10);
      bVar3 = (*(param_4.Predicate)->InPredicate)(&local_48,local_res10);
      if (bVar3) {
        iVar5 = iVar1;
      }
      iVar5 = iVar5 + 1;
    }
    local_44.RawWeight = (ushort)param_1[iVar5];
    local_44.BoneIndex = (ushort)((uint)param_1[iVar5] >> 0x10);
    local_40.RawWeight = (ushort)param_1[iVar4];
    local_40.BoneIndex = (ushort)((uint)param_1[iVar4] >> 0x10);
    bVar3 = (*(param_4.Predicate)->InPredicate)(&local_40,&local_44);
    if (!bVar3) goto LAB_14438e7e5;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar5];
    param_1[iVar5] = iVar1;
    iVar4 = iVar5;
    iVar5 = iVar5 * 2 + 1;
  } while( true );
}

// HeapSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>'::__l2::<lambda_1>_>_> @ 14438e910

void __cdecl
AlgoImpl::
HeapSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
          (FHitIntersectionResult *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_private:_bool___cdecl_UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>(UE::Math::TRay<double>_const_&,TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_>_&,UE::Geometry::IMeshSpatial::FQueryOptions_const_&)const_::_2_::<lambda_1>_>
          param_4)

{
  FHitIntersectionResult *pFVar1;
  FHitIntersectionResult *pFVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  FHitIntersectionResult *pFVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar18 = iVar14;
  iVar19 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_14438ea3c:
      if (iVar19 == 0) {
        iVar14 = param_2 + -1;
        lVar15 = (longlong)iVar14;
        if (0 < iVar14) {
          pFVar16 = param_1 + lVar15;
          do {
            uVar9 = *(undefined4 *)&pFVar16->field_0x4;
            dVar5 = pFVar16->Distance;
            dVar3 = (param_1->BaryCoords).field0_0x0._s_0.Z;
            iVar18 = param_1->TriangleId;
            uVar11 = *(undefined4 *)&param_1->field_0x4;
            dVar6 = param_1->Distance;
            dVar7 = (param_1->BaryCoords).field0_0x0._s_0.X;
            dVar8 = (param_1->BaryCoords).field0_0x0._s_0.Y;
            param_1->TriangleId = pFVar16->TriangleId;
            *(undefined4 *)&param_1->field_0x4 = uVar9;
            param_1->Distance = dVar5;
            dVar5 = (pFVar16->BaryCoords).field0_0x0._s_0.Y;
            (param_1->BaryCoords).field0_0x0._s_0.X = (pFVar16->BaryCoords).field0_0x0._s_0.X;
            (param_1->BaryCoords).field0_0x0._s_0.Y = dVar5;
            (param_1->BaryCoords).field0_0x0._s_0.Z = (pFVar16->BaryCoords).field0_0x0._s_0.Z;
            pFVar16->TriangleId = iVar18;
            *(undefined4 *)&pFVar16->field_0x4 = uVar11;
            pFVar16->Distance = dVar6;
            (pFVar16->BaryCoords).field0_0x0._s_0.X = dVar7;
            (pFVar16->BaryCoords).field0_0x0._s_0.Y = dVar8;
            (pFVar16->BaryCoords).field0_0x0._s_0.Z = dVar3;
            iVar18 = 0;
            if (1 < iVar14) {
              do {
                iVar19 = iVar18 * 2;
                iVar13 = iVar19 + 1;
                if (iVar19 + 2 < iVar14) {
                  if (param_1[(longlong)iVar19 + 2].Distance <= param_1[iVar13].Distance &&
                      param_1[iVar13].Distance != param_1[(longlong)iVar19 + 2].Distance) {
                    iVar13 = iVar19;
                  }
                  iVar13 = iVar13 + 1;
                }
                if (param_1[iVar13].Distance < param_1[iVar18].Distance ||
                    param_1[iVar13].Distance == param_1[iVar18].Distance) break;
                pFVar1 = param_1 + iVar13;
                uVar9 = *(undefined4 *)&pFVar1->field_0x4;
                dVar5 = pFVar1->Distance;
                dVar3 = param_1[iVar18].BaryCoords.field0_0x0._s_0.Z;
                pFVar2 = param_1 + iVar18;
                iVar19 = pFVar2->TriangleId;
                uVar11 = *(undefined4 *)&pFVar2->field_0x4;
                dVar6 = pFVar2->Distance;
                dVar7 = param_1[iVar18].BaryCoords.field0_0x0._s_0.X;
                dVar8 = param_1[iVar18].BaryCoords.field0_0x0._s_0.Y;
                pFVar2 = param_1 + iVar18;
                pFVar2->TriangleId = pFVar1->TriangleId;
                *(undefined4 *)&pFVar2->field_0x4 = uVar9;
                pFVar2->Distance = dVar5;
                dVar5 = param_1[iVar13].BaryCoords.field0_0x0._s_0.Y;
                param_1[iVar18].BaryCoords.field0_0x0._s_0.X =
                     param_1[iVar13].BaryCoords.field0_0x0._s_0.X;
                param_1[iVar18].BaryCoords.field0_0x0._s_0.Y = dVar5;
                param_1[iVar18].BaryCoords.field0_0x0._s_0.Z =
                     param_1[iVar13].BaryCoords.field0_0x0._s_0.Z;
                pFVar1 = param_1 + iVar13;
                pFVar1->TriangleId = iVar19;
                *(undefined4 *)&pFVar1->field_0x4 = uVar11;
                pFVar1->Distance = dVar6;
                param_1[iVar13].BaryCoords.field0_0x0._s_0.X = dVar7;
                param_1[iVar13].BaryCoords.field0_0x0._s_0.Y = dVar8;
                param_1[iVar13].BaryCoords.field0_0x0._s_0.Z = dVar3;
                iVar18 = iVar13;
              } while (iVar13 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar15 = lVar15 + -1;
            pFVar16 = pFVar16 + -1;
          } while (0 < lVar15);
        }
        return;
      }
      iVar13 = iVar19 + -1;
      iVar14 = iVar18 + -2;
      iVar18 = iVar14;
      iVar19 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar17 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      if (param_1[(longlong)iVar14 + 2].Distance <= param_1[iVar17].Distance &&
          param_1[iVar17].Distance != param_1[(longlong)iVar14 + 2].Distance) {
        iVar17 = iVar14;
      }
      iVar17 = iVar17 + 1;
    }
    if (param_1[iVar17].Distance < param_1[iVar13].Distance ||
        param_1[iVar17].Distance == param_1[iVar13].Distance) goto LAB_14438ea3c;
    pFVar16 = param_1 + iVar17;
    uVar9 = *(undefined4 *)&pFVar16->field_0x4;
    dVar5 = pFVar16->Distance;
    iVar14 = iVar17 * 2 + 1;
    dVar3 = param_1[iVar13].BaryCoords.field0_0x0._s_0.Z;
    pFVar1 = param_1 + iVar13;
    iVar10 = pFVar1->TriangleId;
    uVar11 = *(undefined4 *)&pFVar1->field_0x4;
    dVar6 = pFVar1->Distance;
    dVar7 = param_1[iVar13].BaryCoords.field0_0x0._s_0.X;
    dVar8 = param_1[iVar13].BaryCoords.field0_0x0._s_0.Y;
    pFVar1 = param_1 + iVar13;
    pFVar1->TriangleId = pFVar16->TriangleId;
    *(undefined4 *)&pFVar1->field_0x4 = uVar9;
    pFVar1->Distance = dVar5;
    dVar5 = param_1[iVar17].BaryCoords.field0_0x0._s_0.Y;
    param_1[iVar13].BaryCoords.field0_0x0._s_0.X = param_1[iVar17].BaryCoords.field0_0x0._s_0.X;
    param_1[iVar13].BaryCoords.field0_0x0._s_0.Y = dVar5;
    param_1[iVar13].BaryCoords.field0_0x0._s_0.Z = param_1[iVar17].BaryCoords.field0_0x0._s_0.Z;
    pFVar16 = param_1 + iVar17;
    pFVar16->TriangleId = iVar10;
    *(undefined4 *)&pFVar16->field_0x4 = uVar11;
    pFVar16->Distance = dVar6;
    param_1[iVar17].BaryCoords.field0_0x0._s_0.X = dVar7;
    param_1[iVar17].BaryCoords.field0_0x0._s_0.Y = dVar8;
    param_1[iVar17].BaryCoords.field0_0x0._s_0.Z = dVar3;
    iVar13 = iVar17;
  } while( true );
}

// HeapSortInternal<RigApplicationHelpers::FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<RigApplicationHelpers::FIndexAndZ,RigApplicationHelpers::FCompareIndexAndZ>_> @ 14438eb80

void __cdecl
AlgoImpl::
HeapSortInternal<RigApplicationHelpers::FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<RigApplicationHelpers::FIndexAndZ,RigApplicationHelpers::FCompareIndexAndZ>_>
          (FIndexAndZ *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<RigApplicationHelpers::FIndexAndZ,RigApplicationHelpers::FCompareIndexAndZ>
          param_4)

{
  FIndexAndZ FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14438ec66:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = 0;
            FVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = FVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  if (param_1[(longlong)iVar8 + 2].Z <= param_1[iVar4].Z &&
                      param_1[iVar4].Z != param_1[(longlong)iVar8 + 2].Z) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                if (param_1[iVar4].Z < param_1[iVar7].Z || param_1[iVar4].Z == param_1[iVar7].Z)
                break;
                FVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = FVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2].Z <= param_1[iVar6].Z &&
          param_1[iVar6].Z != param_1[(longlong)iVar5 + 2].Z) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    if (param_1[iVar6].Z < param_1[iVar4].Z || param_1[iVar6].Z == param_1[iVar4].Z)
    goto LAB_14438ec66;
    FVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = FVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,`FSkeletalMeshOperations::ValidateAndFixInfluences'::__l9::<lambda_1>_>_> @ 14438ed30

void __cdecl
AlgoImpl::
HeapSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,_FSkeletalMeshOperations::ValidateAndFixInfluences_::__l9::<lambda_1>_>_>
          (FBoneWeight *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::AnimationCore::FBoneWeight,_public:_static_void___cdecl_FSkeletalMeshOperations::ValidateAndFixInfluences(FMeshDescription_&,bool_&)_::_9_::<lambda_1>_>
          param_4)

{
  FBoneWeight FVar1;
  code *pcVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  <lambda_1> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<UE::AnimationCore::FBoneWeight,_FSkeletalMeshOperations::ValidateAndFixInfluences_::__l9::<lambda_1>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<UE::AnimationCore::FBoneWeight,_public:_static_void___cdecl_FSkeletalMeshOperations::ValidateAndFixInfluences(FMeshDescription_&,bool_&)_::_9_::<lambda_1>_>
              *)&local_res20);
  fVar4 = __real_37800080;
  iVar7 = param_2 + -1;
  lVar8 = (longlong)iVar7;
  if (0 < iVar7) {
    do {
      FVar1 = *param_1;
      iVar9 = 0;
      *param_1 = param_1[lVar8];
      param_1[lVar8] = FVar1;
      if (1 < iVar7) {
        do {
          iVar3 = iVar9 * 2;
          iVar6 = iVar3 + 1;
          if (iVar3 + 2 < iVar7) {
            fVar10 = (float)param_1[(longlong)iVar3 + 1].RawWeight * fVar4;
            fVar11 = (float)param_1[(longlong)iVar3 + 2].RawWeight * fVar4;
            if (fVar10 <= fVar11) {
              if (fVar11 <= fVar10) {
                bVar5 = false;
                if (param_1[(longlong)iVar3 + 2].BoneIndex <= param_1[(longlong)iVar3 + 1].BoneIndex
                   ) {
                  bVar5 = param_1[(longlong)iVar3 + 2].BoneIndex <
                          param_1[(longlong)iVar3 + 1].BoneIndex;
                }
              }
              else {
                bVar5 = true;
              }
            }
            else {
              bVar5 = false;
            }
            if (bVar5) {
              iVar6 = iVar3;
            }
            iVar6 = iVar6 + 1;
          }
          fVar10 = (float)param_1[iVar6].RawWeight * fVar4;
          fVar11 = (float)param_1[iVar9].RawWeight * fVar4;
          if ((fVar11 < fVar10) ||
             ((fVar11 == fVar10 && (param_1[iVar6].BoneIndex <= param_1[iVar9].BoneIndex)))) break;
          FVar1 = param_1[iVar9];
          param_1[iVar9] = param_1[iVar6];
          param_1[iVar6] = FVar1;
          iVar9 = iVar6;
        } while (iVar6 * 2 + 1 < iVar7);
      }
      iVar7 = iVar7 + -1;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  return;
}

// HeapSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,`FSkeletalMeshAttributesShared::GetSkinWeightProfileNames'::__l2::<lambda_1>_>_> @ 14438eec0

void __cdecl
AlgoImpl::
HeapSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_FSkeletalMeshAttributesShared::GetSkinWeightProfileNames_::__l2::<lambda_1>_>_>
          (FName *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FName,_public:_class_TArray<FName,TSizedDefaultAllocator<32>_>___cdecl_FSkeletalMeshAttributesShared::GetSkinWeightProfileNames(bool)const_::_2_::<lambda_1>_>
          param_4)

{
  FName FVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar7 = iVar5 * 2 + 1;
  iVar11 = iVar7;
  iVar10 = iVar5;
  do {
    while (param_2 <= iVar7) {
LAB_14438efea:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar8 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar11 = 0;
            FVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = FVar1;
            if (1 < iVar7) {
              do {
                iVar10 = iVar11 * 2;
                iVar5 = iVar10 + 1;
                if (iVar10 + 2 < iVar7) {
                  iVar9 = param_1[(longlong)iVar10 + 2].ComparisonIndex.Value -
                          param_1[iVar5].ComparisonIndex;
                  if (iVar9 == 0) {
                    iVar9 = param_1[(longlong)iVar10 + 2].Number - param_1[iVar5].Number;
                  }
                  if (iVar9 < 0) {
                    iVar5 = iVar10;
                  }
                  iVar5 = iVar5 + 1;
                }
                FVar1 = param_1[iVar5];
                FVar2 = param_1[iVar11];
                iVar10 = FVar2.ComparisonIndex.Value.Value - FVar1.ComparisonIndex.Value;
                if (iVar10 == 0) {
                  iVar10 = FVar2.Number - FVar1.Number;
                }
                if (-1 < iVar10) break;
                param_1[iVar11] = FVar1;
                param_1[iVar5] = FVar2;
                iVar11 = iVar5;
              } while (iVar5 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar5 = iVar10 + -1;
      iVar7 = iVar11 + -2;
      iVar11 = iVar7;
      iVar10 = iVar5;
    }
    iVar7 = iVar5 * 2;
    iVar9 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      iVar6 = param_1[(longlong)iVar7 + 2].ComparisonIndex.Value - param_1[iVar9].ComparisonIndex;
      if (iVar6 == 0) {
        iVar6 = param_1[(longlong)iVar7 + 2].Number - param_1[iVar9].Number;
      }
      if (iVar6 < 0) {
        iVar9 = iVar7;
      }
      iVar9 = iVar9 + 1;
    }
    FVar1 = param_1[iVar9];
    FVar2 = param_1[iVar5];
    iVar7 = FVar2.ComparisonIndex.Value.Value - FVar1.ComparisonIndex.Value;
    if (iVar7 == 0) {
      iVar7 = FVar2.Number - FVar1.Number;
    }
    if (-1 < iVar7) goto LAB_14438efea;
    iVar7 = iVar9 * 2 + 1;
    param_1[iVar5] = FVar1;
    param_1[iVar9] = FVar2;
    iVar5 = iVar9;
  } while( true );
}

// HeapifyInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<UE::AnimationCore::FBoneWeight,`FSkeletalMeshOperations::ValidateAndFixInfluences'::__l9::<lambda_1>_>_>_> @ 14438f0f0

void __cdecl
AlgoImpl::
HeapifyInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<UE::AnimationCore::FBoneWeight,_FSkeletalMeshOperations::ValidateAndFixInfluences_::__l9::<lambda_1>_>_>_>
          (FBoneWeight *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<UE::AnimationCore::FBoneWeight,_public:_static_void___cdecl_FSkeletalMeshOperations::ValidateAndFixInfluences(FMeshDescription_&,bool_&)_::_9_::<lambda_1>_>_>
          param_4)

{
  FBoneWeight FVar1;
  code *pcVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  fVar4 = __real_37800080;
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar3 = iVar7;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_14438f230:
      if (iVar9 == 0) {
        return;
      }
      iVar6 = iVar9 + -1;
      iVar7 = iVar3 + -2;
      iVar3 = iVar7;
      iVar9 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      fVar10 = (float)param_1[(longlong)iVar7 + 1].RawWeight * fVar4;
      fVar11 = (float)param_1[(longlong)iVar7 + 2].RawWeight * fVar4;
      if (fVar10 <= fVar11) {
        if (fVar11 <= fVar10) {
          bVar5 = false;
          if (param_1[(longlong)iVar7 + 2].BoneIndex <= param_1[(longlong)iVar7 + 1].BoneIndex) {
            bVar5 = param_1[(longlong)iVar7 + 2].BoneIndex < param_1[(longlong)iVar7 + 1].BoneIndex;
          }
        }
        else {
          bVar5 = true;
        }
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    fVar10 = (float)param_1[iVar8].RawWeight * fVar4;
    fVar11 = (float)param_1[iVar6].RawWeight * fVar4;
    if ((fVar11 < fVar10) ||
       ((fVar11 == fVar10 && (param_1[iVar8].BoneIndex <= param_1[iVar6].BoneIndex))))
    goto LAB_14438f230;
    FVar1 = param_1[iVar6];
    param_1[iVar6] = param_1[iVar8];
    iVar7 = iVar8 * 2 + 1;
    param_1[iVar8] = FVar1;
    iVar6 = iVar8;
  } while( true );
}

// InternalConstructor<USkeletalMeshDescription> @ 14438f260

void __cdecl InternalConstructor<USkeletalMeshDescription>(FObjectInitializer *param_1)

{
  UMeshDescriptionBase *this;
  
  this = (UMeshDescriptionBase *)param_1->Obj;
  if (this != (UMeshDescriptionBase *)0x0) {
    UMeshDescriptionBase::UMeshDescriptionBase(this,param_1);
    this->_padding_ = (longlong)&___7USkeletalMeshDescription__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<USkeletalMeshDescription> @ 14438f290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USkeletalMeshDescription>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMeshDescriptionBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USkeletalMeshDescription::GetPrivateStaticClass();
  this = (UMeshDescriptionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMeshDescriptionBase *)0x0) {
    UMeshDescriptionBase::UMeshDescriptionBase(this,param_1);
    this->_padding_ = (longlong)&___7USkeletalMeshDescription__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`Internal::FAttributesRefAdapter::Sort<bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>'::__l2::<lambda_1>_>_> @ 14438f340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_Internal::FAttributesRefAdapter::Sort<bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_public:_static_void___cdecl_Internal::FAttributesRefAdapter::Sort<bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>(TArrayAttribute<int>_&,bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&))_::_2_::<lambda_1>_>
          param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  undefined1 auStack_3a8 [32];
  FIdentityFunctor local_388;
  FBoneWeight local_386;
  FBoneWeight local_382;
  FBoneWeight local_37e;
  FBoneWeight local_37a;
  int local_374;
  FBoneWeight local_370;
  FBoneWeight local_36c [5];
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3a8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_388 = param_3;
    local_348 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar10;
    memset(local_330,0,0x2e8);
    ppiVar5 = &local_348;
    do {
      piVar6 = ppiVar5[1];
      piVar4 = *ppiVar5;
      local_358 = ppiVar5[2];
      iVar3 = (int)((longlong)piVar6 - (longlong)piVar4 >> 2) + 1;
      local_374 = (int)local_358;
      piVar9 = piVar4;
      if ((int)local_358 != 0) {
LAB_14438f405:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar7 = piVar6 + 1;
          iVar1 = piVar9[iVar3 >> 1];
          piVar9[iVar3 >> 1] = *piVar9;
          *piVar9 = iVar1;
          piVar4 = piVar9;
LAB_14438f430:
          piVar4 = piVar4 + 1;
          if (piVar4 <= piVar6) goto code_r0x00014438f439;
          goto LAB_14438f470;
        }
        for (; piVar7 = piVar9, piVar4 = piVar9, piVar9 < piVar6; piVar6 = piVar6 + -1) {
          while (piVar8 = piVar7, piVar4 = piVar4 + 1, piVar4 <= piVar6) {
            local_370.RawWeight = (ushort)*piVar4;
            local_36c[0].RawWeight = (ushort)*piVar8;
            local_370.BoneIndex = (ushort)((uint)*piVar4 >> 0x10);
            local_36c[0].BoneIndex = (ushort)((uint)*piVar8 >> 0x10);
            bVar2 = (*(param_4.Predicate)->InPredicate)(local_36c,&local_370);
            piVar7 = piVar4;
            if (!bVar2) {
              piVar7 = piVar8;
            }
          }
          iVar3 = *piVar8;
          *piVar8 = *piVar6;
          *piVar6 = iVar3;
          param_3 = local_388;
        }
        goto LAB_14438f562;
      }
LAB_14438f551:
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_Internal::FAttributesRefAdapter::Sort<bool_(__cdecl*)(UE::AnimationCore::FBoneWeight_const_&,UE::AnimationCore::FBoneWeight_const_&)>_::__l2::<lambda_1>_>_>
                (piVar4,iVar3,param_3,param_4);
LAB_14438f562:
      ppiVar5 = ppiVar5 + -3;
    } while (&local_348 <= ppiVar5);
  }
  return;
code_r0x00014438f439:
  local_386.RawWeight = (ushort)*piVar4;
  local_382.RawWeight = (ushort)*piVar9;
  local_386.BoneIndex = (ushort)((uint)*piVar4 >> 0x10);
  local_382.BoneIndex = (ushort)((uint)*piVar9 >> 0x10);
  bVar2 = (*(param_4.Predicate)->InPredicate)(&local_382,&local_386);
  if (!bVar2) goto LAB_14438f430;
LAB_14438f470:
  do {
    piVar8 = piVar7;
    piVar7 = piVar8 + -1;
    if (piVar7 <= piVar9) break;
    local_37e.RawWeight = (ushort)*piVar9;
    local_37a.RawWeight = (ushort)*piVar7;
    local_37e.BoneIndex = (ushort)((uint)*piVar9 >> 0x10);
    local_37a.BoneIndex = (ushort)((uint)*piVar7 >> 0x10);
    bVar2 = (*(param_4.Predicate)->InPredicate)(&local_37a,&local_37e);
  } while (!bVar2);
  if (piVar4 <= piVar7) {
    iVar3 = *piVar4;
    *piVar4 = *piVar7;
    *piVar7 = iVar3;
    goto LAB_14438f430;
  }
  iVar3 = *piVar9;
  *piVar9 = *piVar7;
  local_374 = local_374 + -1;
  *piVar7 = iVar3;
  if ((longlong)((longlong)piVar7 + (-4 - (longlong)piVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar6 - (longlong)piVar4 & 0xfffffffffffffffcU)) {
    if (piVar4 < piVar6) {
      *ppiVar5 = piVar4;
      ppiVar5[1] = piVar6;
      *(int *)(ppiVar5 + 2) = local_374;
      ppiVar5 = ppiVar5 + 3;
    }
    if (piVar7 <= piVar9 + 1) goto LAB_14438f562;
    piVar6 = piVar8 + -2;
    piVar4 = piVar9;
  }
  else {
    if (piVar9 + 1 < piVar7) {
      *ppiVar5 = piVar9;
      ppiVar5[1] = piVar8 + -2;
      *(int *)(ppiVar5 + 2) = local_374;
      ppiVar5 = ppiVar5 + 3;
    }
    if (piVar6 <= piVar4) goto LAB_14438f562;
  }
  iVar3 = (int)((longlong)piVar6 - (longlong)piVar4 >> 2) + 1;
  piVar9 = piVar4;
  if (local_374 == 0) goto LAB_14438f551;
  goto LAB_14438f405;
}

// IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>'::__l2::<lambda_1>_>_> @ 14438f640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
          (FHitIntersectionResult *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_private:_bool___cdecl_UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>(UE::Math::TRay<double>_const_&,TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_>_&,UE::Geometry::IMeshSpatial::FQueryOptions_const_&)const_::_2_::<lambda_1>_>
          param_4)

{
  FHitIntersectionResult *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  FHitIntersectionResult *pFVar10;
  int iVar11;
  FHitIntersectionResult *pFVar12;
  FHitIntersectionResult *pFVar13;
  FHitIntersectionResult *pFVar14;
  FHitIntersectionResult *pFVar15;
  FHitIntersectionResult *pFVar16;
  FHitIntersectionResult **ppFVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  FHitIntersectionResult *local_348;
  FHitIntersectionResult *local_338;
  FHitIntersectionResult *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar18;
    memset(local_320,0,0x2e8);
    ppFVar17 = &local_338;
    do {
      pFVar13 = ppFVar17[1];
      pFVar12 = *ppFVar17;
      pFVar1 = ppFVar17[2];
      local_348._0_4_ = (int)pFVar1;
      iVar11 = (int)(((longlong)pFVar13 - (longlong)pFVar12) / 0x28) + 1;
      pFVar16 = pFVar12;
      if ((int)local_348 != 0) {
LAB_14438f710:
        if (8 < iVar11) {
          uVar7 = *(undefined4 *)&pFVar16->field_0x4;
          dVar3 = pFVar16->Distance;
          pFVar10 = pFVar13 + 1;
          iVar11 = iVar11 / 2;
          pFVar12 = pFVar16 + iVar11;
          iVar8 = pFVar12->TriangleId;
          uVar9 = *(undefined4 *)&pFVar12->field_0x4;
          dVar4 = pFVar12->Distance;
          dVar5 = pFVar16[iVar11].BaryCoords.field0_0x0._s_0.X;
          dVar6 = pFVar16[iVar11].BaryCoords.field0_0x0._s_0.Y;
          dVar2 = pFVar16[iVar11].BaryCoords.field0_0x0._s_0.Z;
          pFVar12 = pFVar16 + iVar11;
          pFVar12->TriangleId = pFVar16->TriangleId;
          *(undefined4 *)&pFVar12->field_0x4 = uVar7;
          pFVar12->Distance = dVar3;
          dVar3 = (pFVar16->BaryCoords).field0_0x0._s_0.Y;
          pFVar16[iVar11].BaryCoords.field0_0x0._s_0.X = (pFVar16->BaryCoords).field0_0x0._s_0.X;
          pFVar16[iVar11].BaryCoords.field0_0x0._s_0.Y = dVar3;
          pFVar16[iVar11].BaryCoords.field0_0x0._s_0.Z = (pFVar16->BaryCoords).field0_0x0._s_0.Z;
          pFVar16->TriangleId = iVar8;
          *(undefined4 *)&pFVar16->field_0x4 = uVar9;
          pFVar16->Distance = dVar4;
          (pFVar16->BaryCoords).field0_0x0._s_0.X = dVar5;
          (pFVar16->BaryCoords).field0_0x0._s_0.Y = dVar6;
          (pFVar16->BaryCoords).field0_0x0._s_0.Z = dVar2;
          pFVar12 = pFVar16;
LAB_14438f770:
          pFVar14 = pFVar12;
          pFVar12 = pFVar14 + 1;
          if (pFVar12 <= pFVar13) goto code_r0x00014438f779;
          goto LAB_14438f787;
        }
        if (pFVar16 < pFVar13) {
          pFVar1 = pFVar16 + 1;
          do {
            pFVar12 = pFVar16;
            if (pFVar1 <= pFVar13) {
              pFVar10 = pFVar1;
              if (0x9f < (ulonglong)((longlong)pFVar13 + (0x28 - (longlong)pFVar1))) {
                do {
                  if (pFVar12->Distance < pFVar10->Distance) {
                    pFVar12 = pFVar10;
                  }
                  if (pFVar12->Distance <= pFVar10[1].Distance &&
                      pFVar10[1].Distance != pFVar12->Distance) {
                    pFVar12 = pFVar10 + 1;
                  }
                  if (pFVar12->Distance <= pFVar10[2].Distance &&
                      pFVar10[2].Distance != pFVar12->Distance) {
                    pFVar12 = pFVar10 + 2;
                  }
                  if (pFVar12->Distance <= pFVar10[3].Distance &&
                      pFVar10[3].Distance != pFVar12->Distance) {
                    pFVar12 = pFVar10 + 3;
                  }
                  pFVar10 = pFVar10 + 4;
                } while (pFVar10 <= pFVar13 + -3);
              }
              for (; pFVar10 <= pFVar13; pFVar10 = pFVar10 + 1) {
                if (pFVar12->Distance < pFVar10->Distance) {
                  pFVar12 = pFVar10;
                }
              }
            }
            iVar11 = pFVar12->TriangleId;
            uVar9 = *(undefined4 *)&pFVar12->field_0x4;
            dVar3 = pFVar12->Distance;
            pFVar10 = pFVar13 + -1;
            dVar2 = (pFVar12->BaryCoords).field0_0x0._s_0.Z;
            dVar4 = (pFVar12->BaryCoords).field0_0x0._s_0.X;
            dVar5 = (pFVar12->BaryCoords).field0_0x0._s_0.Y;
            uVar7 = *(undefined4 *)&pFVar13->field_0x4;
            dVar6 = pFVar13->Distance;
            pFVar12->TriangleId = pFVar13->TriangleId;
            *(undefined4 *)&pFVar12->field_0x4 = uVar7;
            pFVar12->Distance = dVar6;
            dVar6 = (pFVar13->BaryCoords).field0_0x0._s_0.Y;
            (pFVar12->BaryCoords).field0_0x0._s_0.X = (pFVar13->BaryCoords).field0_0x0._s_0.X;
            (pFVar12->BaryCoords).field0_0x0._s_0.Y = dVar6;
            (pFVar12->BaryCoords).field0_0x0._s_0.Z = (pFVar13->BaryCoords).field0_0x0._s_0.Z;
            pFVar13->TriangleId = iVar11;
            *(undefined4 *)&pFVar13->field_0x4 = uVar9;
            pFVar13->Distance = dVar3;
            (pFVar13->BaryCoords).field0_0x0._s_0.X = dVar4;
            (pFVar13->BaryCoords).field0_0x0._s_0.Y = dVar5;
            (pFVar13->BaryCoords).field0_0x0._s_0.Z = dVar2;
            pFVar13 = pFVar10;
          } while (pFVar16 < pFVar10);
        }
        goto LAB_14438f8d5;
      }
LAB_14438f8c6:
      local_348 = pFVar1;
      HeapSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
                (pFVar12,iVar11,param_3,param_4);
LAB_14438f8d5:
      ppFVar17 = ppFVar17 + -3;
    } while (&local_338 <= ppFVar17);
  }
  return;
code_r0x00014438f779:
  if (pFVar14[1].Distance < pFVar16->Distance || pFVar14[1].Distance == pFVar16->Distance)
  goto LAB_14438f770;
LAB_14438f787:
  do {
    pFVar15 = pFVar10;
    pFVar10 = pFVar15 + -1;
    if (pFVar10 <= pFVar16) break;
  } while (pFVar16->Distance < pFVar15[-1].Distance || pFVar16->Distance == pFVar15[-1].Distance);
  dVar2 = pFVar15[-1].Distance;
  if (pFVar12 <= pFVar10) {
    iVar11 = pFVar12->TriangleId;
    uVar7 = *(undefined4 *)&pFVar12->field_0x4;
    dVar4 = pFVar14[1].Distance;
    dVar5 = pFVar14[1].BaryCoords.field0_0x0._s_0.X;
    dVar6 = pFVar14[1].BaryCoords.field0_0x0._s_0.Y;
    dVar3 = pFVar14[1].BaryCoords.field0_0x0._s_0.Z;
    *(undefined8 *)pFVar12 = *(undefined8 *)pFVar10;
    pFVar14[1].Distance = dVar2;
    dVar2 = pFVar15[-1].BaryCoords.field0_0x0._s_0.Y;
    pFVar14[1].BaryCoords.field0_0x0._s_0.X = pFVar15[-1].BaryCoords.field0_0x0._s_0.X;
    pFVar14[1].BaryCoords.field0_0x0._s_0.Y = dVar2;
    pFVar14[1].BaryCoords.field0_0x0._s_0.Z = pFVar15[-1].BaryCoords.field0_0x0._s_0.Z;
    pFVar10->TriangleId = iVar11;
    *(undefined4 *)&pFVar10->field_0x4 = uVar7;
    pFVar15[-1].Distance = dVar4;
    pFVar15[-1].BaryCoords.field0_0x0._s_0.X = dVar5;
    pFVar15[-1].BaryCoords.field0_0x0._s_0.Y = dVar6;
    pFVar15[-1].BaryCoords.field0_0x0._s_0.Z = dVar3;
    goto LAB_14438f770;
  }
  iVar11 = pFVar16->TriangleId;
  uVar7 = *(undefined4 *)&pFVar16->field_0x4;
  dVar4 = pFVar16->Distance;
  dVar5 = (pFVar16->BaryCoords).field0_0x0._s_0.X;
  dVar6 = (pFVar16->BaryCoords).field0_0x0._s_0.Y;
  local_348._0_4_ = (int)local_348 + -1;
  dVar3 = (pFVar16->BaryCoords).field0_0x0._s_0.Z;
  *(undefined8 *)pFVar16 = *(undefined8 *)pFVar10;
  pFVar16->Distance = dVar2;
  dVar2 = pFVar15[-1].BaryCoords.field0_0x0._s_0.Y;
  (pFVar16->BaryCoords).field0_0x0._s_0.X = pFVar15[-1].BaryCoords.field0_0x0._s_0.X;
  (pFVar16->BaryCoords).field0_0x0._s_0.Y = dVar2;
  (pFVar16->BaryCoords).field0_0x0._s_0.Z = pFVar15[-1].BaryCoords.field0_0x0._s_0.Z;
  pFVar10->TriangleId = iVar11;
  *(undefined4 *)&pFVar10->field_0x4 = uVar7;
  pFVar15[-1].Distance = dVar4;
  pFVar15[-1].BaryCoords.field0_0x0._s_0.X = dVar5;
  pFVar15[-1].BaryCoords.field0_0x0._s_0.Y = dVar6;
  pFVar15[-1].BaryCoords.field0_0x0._s_0.Z = dVar3;
  if (((longlong)pFVar10 + (-0x28 - (longlong)pFVar16)) / 0x28 <
      ((longlong)pFVar13 - (longlong)pFVar12) / 0x28) {
    if (pFVar12 < pFVar13) {
      *ppFVar17 = pFVar12;
      ppFVar17[1] = pFVar13;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar10 <= pFVar16 + 1) goto LAB_14438f8d5;
    pFVar13 = pFVar15 + -2;
    pFVar12 = pFVar16;
  }
  else {
    if (pFVar16 + 1 < pFVar10) {
      *ppFVar17 = pFVar16;
      ppFVar17[1] = pFVar15 + -2;
      *(int *)(ppFVar17 + 2) = (int)local_348;
      ppFVar17 = ppFVar17 + 3;
    }
    if (pFVar13 <= pFVar12) goto LAB_14438f8d5;
  }
  iVar11 = (int)(((longlong)pFVar13 - (longlong)pFVar12) / 0x28) + 1;
  pFVar16 = pFVar12;
  if ((int)local_348 == 0) goto LAB_14438f8c6;
  goto LAB_14438f710;
}

// IntroSortInternal<RigApplicationHelpers::FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<RigApplicationHelpers::FIndexAndZ,RigApplicationHelpers::FCompareIndexAndZ>_> @ 14438fa10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<RigApplicationHelpers::FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<RigApplicationHelpers::FIndexAndZ,RigApplicationHelpers::FCompareIndexAndZ>_>
          (FIndexAndZ *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<RigApplicationHelpers::FIndexAndZ,RigApplicationHelpers::FCompareIndexAndZ>
          param_4)

{
  FIndexAndZ *pFVar1;
  FIndexAndZ FVar2;
  int iVar3;
  FIndexAndZ *pFVar4;
  FIndexAndZ *pFVar5;
  FIndexAndZ **ppFVar6;
  FIndexAndZ *pFVar7;
  FIndexAndZ *pFVar8;
  FIndexAndZ *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FIndexAndZ *local_338;
  FIndexAndZ *local_328;
  FIndexAndZ *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar6 = &local_328;
    do {
      pFVar8 = ppFVar6[1];
      pFVar5 = *ppFVar6;
      pFVar1 = ppFVar6[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar5 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar5;
      if ((int)local_338 != 0) {
LAB_14438fac0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar4 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar5 = pFVar9;
LAB_14438faf0:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar8) goto code_r0x00014438faf9;
          goto LAB_14438fb03;
        }
        if (pFVar9 < pFVar8) {
          pFVar1 = pFVar9 + 1;
          do {
            pFVar5 = pFVar9;
            if (pFVar1 <= pFVar8) {
              pFVar4 = pFVar1;
              if (0x1f < ((longlong)pFVar8 + (8 - (longlong)pFVar1) & 0xfffffffffffffff8U)) {
                do {
                  fVar10 = pFVar5->Z;
                  if (pFVar5->Z < pFVar4->Z) {
                    pFVar5 = pFVar4;
                    fVar10 = pFVar4->Z;
                  }
                  if (fVar10 < pFVar4[1].Z) {
                    pFVar5 = pFVar4 + 1;
                  }
                  fVar10 = pFVar5->Z;
                  if (pFVar5->Z < pFVar4[2].Z) {
                    pFVar5 = pFVar4 + 2;
                    fVar10 = pFVar4[2].Z;
                  }
                  if (fVar10 < pFVar4[3].Z) {
                    pFVar5 = pFVar4 + 3;
                  }
                  pFVar4 = pFVar4 + 4;
                } while (pFVar4 <= pFVar8 + -3);
              }
              for (; pFVar4 <= pFVar8; pFVar4 = pFVar4 + 1) {
                if (pFVar5->Z < pFVar4->Z) {
                  pFVar5 = pFVar4;
                }
              }
            }
            FVar2 = *pFVar5;
            pFVar4 = pFVar8 + -1;
            *pFVar5 = *pFVar8;
            *pFVar8 = FVar2;
            pFVar8 = pFVar4;
          } while (pFVar9 < pFVar4);
        }
        goto LAB_14438fbc0;
      }
LAB_14438fbaf:
      local_338 = pFVar1;
      HeapSortInternal<RigApplicationHelpers::FIndexAndZ,int,FIdentityFunctor,TDereferenceWrapper<RigApplicationHelpers::FIndexAndZ,RigApplicationHelpers::FCompareIndexAndZ>_>
                (pFVar5,iVar3,param_3,param_4);
LAB_14438fbc0:
      ppFVar6 = ppFVar6 + -3;
    } while (&local_328 <= ppFVar6);
  }
  return;
code_r0x00014438faf9:
  if (pFVar5->Z < pFVar9->Z || pFVar5->Z == pFVar9->Z) goto LAB_14438faf0;
LAB_14438fb03:
  do {
    pFVar7 = pFVar4;
    pFVar4 = pFVar7 + -1;
    if (pFVar4 <= pFVar9) break;
  } while (pFVar9->Z < pFVar4->Z || pFVar9->Z == pFVar4->Z);
  if (pFVar5 <= pFVar4) {
    FVar2 = *pFVar5;
    *pFVar5 = *pFVar4;
    *pFVar4 = FVar2;
    goto LAB_14438faf0;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar4;
  *pFVar4 = FVar2;
  if ((longlong)((longlong)pFVar4 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar5 & 0xfffffffffffffff8U)) {
    if (pFVar5 < pFVar8) {
      *ppFVar6 = pFVar5;
      ppFVar6[1] = pFVar8;
      *(int *)(ppFVar6 + 2) = (int)local_338;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar4 <= pFVar9 + 1) goto LAB_14438fbc0;
    pFVar8 = pFVar7 + -2;
    pFVar5 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar4) {
      *ppFVar6 = pFVar9;
      ppFVar6[1] = pFVar7 + -2;
      *(int *)(ppFVar6 + 2) = (int)local_338;
      ppFVar6 = ppFVar6 + 3;
    }
    if (pFVar8 <= pFVar5) goto LAB_14438fbc0;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar5 >> 3) + 1;
  pFVar9 = pFVar5;
  if ((int)local_338 == 0) goto LAB_14438fbaf;
  goto LAB_14438fac0;
}

// IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,`FSkeletalMeshOperations::ValidateAndFixInfluences'::__l9::<lambda_1>_>_> @ 14438fcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,_FSkeletalMeshOperations::ValidateAndFixInfluences_::__l9::<lambda_1>_>_>
          (FBoneWeight *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::AnimationCore::FBoneWeight,_public:_static_void___cdecl_FSkeletalMeshOperations::ValidateAndFixInfluences(FMeshDescription_&,bool_&)_::_9_::<lambda_1>_>
          param_4)

{
  FBoneWeight *pFVar1;
  FBoneWeight FVar2;
  int iVar3;
  FBoneWeight *pFVar4;
  FBoneWeight **ppFVar5;
  FBoneWeight *pFVar6;
  FBoneWeight *pFVar7;
  FBoneWeight *pFVar8;
  FBoneWeight *pFVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_378 [48];
  FBoneWeight *local_348;
  FBoneWeight *local_338;
  FBoneWeight *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar10;
    memset(local_320,0,0x2e8);
    fVar10 = __real_37800080;
    ppFVar5 = &local_338;
    do {
      pFVar8 = ppFVar5[1];
      pFVar7 = *ppFVar5;
      pFVar1 = ppFVar5[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar7 >> 2) + 1;
      local_348._0_4_ = (int)pFVar1;
      pFVar9 = pFVar7;
      if ((int)local_348 != 0) {
LAB_14438fd70:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          pFVar4 = pFVar8 + 1;
          *pFVar9 = FVar2;
          pFVar6 = pFVar9;
LAB_14438fda0:
          pFVar7 = pFVar6 + 1;
          if (pFVar7 <= pFVar8) goto code_r0x00014438fda9;
          goto LAB_14438fde0;
        }
        if (pFVar9 < pFVar8) {
          pFVar1 = pFVar9 + 1;
          do {
            pFVar7 = pFVar9;
            if (pFVar1 <= pFVar8) {
              pFVar4 = pFVar1;
              if (0xf < ((longlong)pFVar8 + (4 - (longlong)pFVar1) & 0xfffffffffffffffcU)) {
                do {
                  fVar11 = (float)pFVar4->RawWeight * fVar10;
                  fVar12 = (float)pFVar7->RawWeight * fVar10;
                  if ((fVar11 <= fVar12) &&
                     ((fVar12 != fVar11 || (pFVar7->BoneIndex < pFVar4->BoneIndex)))) {
                    pFVar7 = pFVar4;
                  }
                  fVar11 = (float)pFVar4[1].RawWeight * fVar10;
                  fVar12 = (float)pFVar7->RawWeight * fVar10;
                  if ((fVar11 <= fVar12) &&
                     ((fVar12 != fVar11 || (pFVar7->BoneIndex < pFVar4[1].BoneIndex)))) {
                    pFVar7 = pFVar4 + 1;
                  }
                  fVar11 = (float)pFVar4[2].RawWeight * fVar10;
                  fVar12 = (float)pFVar7->RawWeight * fVar10;
                  if ((fVar11 <= fVar12) &&
                     ((fVar12 != fVar11 || (pFVar7->BoneIndex < pFVar4[2].BoneIndex)))) {
                    pFVar7 = pFVar4 + 2;
                  }
                  fVar11 = (float)pFVar4[3].RawWeight * fVar10;
                  fVar12 = (float)pFVar7->RawWeight * fVar10;
                  if ((fVar11 <= fVar12) &&
                     ((fVar12 != fVar11 || (pFVar7->BoneIndex < pFVar4[3].BoneIndex)))) {
                    pFVar7 = pFVar4 + 3;
                  }
                  pFVar4 = pFVar4 + 4;
                } while (pFVar4 <= pFVar8 + -3);
              }
              for (; pFVar4 <= pFVar8; pFVar4 = pFVar4 + 1) {
                fVar11 = (float)pFVar4->RawWeight * fVar10;
                fVar12 = (float)pFVar7->RawWeight * fVar10;
                if ((fVar11 <= fVar12) &&
                   ((fVar12 != fVar11 || (pFVar7->BoneIndex < pFVar4->BoneIndex)))) {
                  pFVar7 = pFVar4;
                }
              }
            }
            FVar2 = *pFVar7;
            pFVar4 = pFVar8 + -1;
            *pFVar7 = *pFVar8;
            *pFVar8 = FVar2;
            pFVar8 = pFVar4;
          } while (pFVar9 < pFVar4);
        }
        goto LAB_14438fec1;
      }
LAB_14438feb0:
      local_348 = pFVar1;
      HeapSortInternal<UE::AnimationCore::FBoneWeight,int,FIdentityFunctor,TDereferenceWrapper<UE::AnimationCore::FBoneWeight,_FSkeletalMeshOperations::ValidateAndFixInfluences_::__l9::<lambda_1>_>_>
                (pFVar7,iVar3,param_3,param_4);
LAB_14438fec1:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_338 <= ppFVar5);
  }
  return;
code_r0x00014438fda9:
  fVar11 = (float)pFVar6[1].RawWeight * fVar10;
  fVar12 = (float)pFVar9->RawWeight * fVar10;
  pFVar6 = pFVar7;
  if ((fVar12 < fVar11) || ((fVar12 == fVar11 && (pFVar7->BoneIndex <= pFVar9->BoneIndex))))
  goto LAB_14438fda0;
LAB_14438fde0:
  while (pFVar6 = pFVar4, pFVar4 = pFVar6 + -1, pFVar9 < pFVar4) {
    fVar11 = (float)pFVar9->RawWeight * fVar10;
    fVar12 = (float)pFVar6[-1].RawWeight * fVar10;
    if ((fVar11 <= fVar12) && ((fVar12 != fVar11 || (pFVar4->BoneIndex < pFVar9->BoneIndex))))
    break;
  }
  if (pFVar7 <= pFVar4) {
    FVar2 = *pFVar7;
    *pFVar7 = *pFVar4;
    *pFVar4 = FVar2;
    pFVar6 = pFVar7;
    goto LAB_14438fda0;
  }
  FVar2 = *pFVar9;
  local_348._0_4_ = (int)local_348 + -1;
  *pFVar9 = *pFVar4;
  *pFVar4 = FVar2;
  if ((longlong)((longlong)pFVar4 + (-4 - (longlong)pFVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar7 & 0xfffffffffffffffcU)) {
    if (pFVar7 < pFVar8) {
      *ppFVar5 = pFVar7;
      ppFVar5[1] = pFVar8;
      *(int *)(ppFVar5 + 2) = (int)local_348;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar4 <= pFVar9 + 1) goto LAB_14438fec1;
    pFVar8 = pFVar6 + -2;
    pFVar7 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar4) {
      *ppFVar5 = pFVar9;
      ppFVar5[1] = pFVar6 + -2;
      *(int *)(ppFVar5 + 2) = (int)local_348;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar8 <= pFVar7) goto LAB_14438fec1;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar7 >> 2) + 1;
  pFVar9 = pFVar7;
  if ((int)local_348 == 0) goto LAB_14438feb0;
  goto LAB_14438fd70;
}

// IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,`FSkeletalMeshAttributesShared::GetSkinWeightProfileNames'::__l2::<lambda_1>_>_> @ 144390090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_FSkeletalMeshAttributesShared::GetSkinWeightProfileNames_::__l2::<lambda_1>_>_>
          (FName *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FName,_public:_class_TArray<FName,TSizedDefaultAllocator<32>_>___cdecl_FSkeletalMeshAttributesShared::GetSkinWeightProfileNames(bool)const_::_2_::<lambda_1>_>
          param_4)

{
  FName *pFVar1;
  FName FVar2;
  int iVar3;
  FName **ppFVar4;
  FName *pFVar5;
  FName *pFVar6;
  FName *pFVar7;
  FName *pFVar8;
  FName *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FName *local_338;
  FName *local_328;
  FName *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar4 = &local_328;
    do {
      pFVar9 = ppFVar4[1];
      pFVar5 = *ppFVar4;
      pFVar1 = ppFVar4[2];
      iVar3 = (int)((longlong)pFVar9 - (longlong)pFVar5 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar8 = pFVar5;
      if ((int)local_338 != 0) {
LAB_144390140:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar9 + 1;
          FVar2 = pFVar8[iVar3 >> 1];
          pFVar8[iVar3 >> 1] = *pFVar8;
          *pFVar8 = FVar2;
          pFVar5 = pFVar8;
LAB_144390170:
          pFVar5 = pFVar5 + 1;
          if (pFVar5 <= pFVar9) goto code_r0x000144390179;
          goto LAB_1443901a0;
        }
        for (; pFVar5 = pFVar8, pFVar1 = pFVar8, pFVar8 < pFVar9; pFVar9 = pFVar9 + -1) {
          while (pFVar6 = pFVar5, pFVar1 = pFVar1 + 1, pFVar1 <= pFVar9) {
            iVar3 = (*pFVar6).ComparisonIndex.Value - (*pFVar1).ComparisonIndex;
            if (iVar3 == 0) {
              iVar3 = (*pFVar6).Number - (*pFVar1).Number;
            }
            pFVar5 = pFVar1;
            if (-1 < iVar3) {
              pFVar5 = pFVar6;
            }
          }
          FVar2 = *pFVar6;
          *pFVar6 = *pFVar9;
          *pFVar9 = FVar2;
        }
        goto LAB_14439026e;
      }
LAB_14439025d:
      local_338 = pFVar1;
      HeapSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_FSkeletalMeshAttributesShared::GetSkinWeightProfileNames_::__l2::<lambda_1>_>_>
                (pFVar5,iVar3,param_3,param_4);
LAB_14439026e:
      ppFVar4 = ppFVar4 + -3;
    } while (&local_328 <= ppFVar4);
  }
  return;
code_r0x000144390179:
  iVar3 = (*pFVar8).ComparisonIndex.Value - (*pFVar5).ComparisonIndex;
  if (iVar3 == 0) {
    iVar3 = (*pFVar8).Number - (*pFVar5).Number;
  }
  if (-1 < iVar3) goto LAB_144390170;
LAB_1443901a0:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar8) break;
    iVar3 = (*pFVar6).ComparisonIndex.Value - (*pFVar8).ComparisonIndex;
    if (iVar3 == 0) {
      iVar3 = (*pFVar6).Number - (*pFVar8).Number;
    }
  } while (-1 < iVar3);
  if (pFVar5 <= pFVar6) {
    FVar2 = *pFVar5;
    *pFVar5 = *pFVar6;
    *pFVar6 = FVar2;
    goto LAB_144390170;
  }
  FVar2 = *pFVar8;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar8 = *pFVar6;
  *pFVar6 = FVar2;
  if ((longlong)((longlong)pFVar6 + (-8 - (longlong)pFVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar9 - (longlong)pFVar5 & 0xfffffffffffffff8U)) {
    if (pFVar5 < pFVar9) {
      *ppFVar4 = pFVar5;
      ppFVar4[1] = pFVar9;
      *(int *)(ppFVar4 + 2) = (int)local_338;
      ppFVar4 = ppFVar4 + 3;
    }
    if (pFVar6 <= pFVar8 + 1) goto LAB_14439026e;
    pFVar9 = pFVar7 + -2;
    pFVar5 = pFVar8;
  }
  else {
    if (pFVar8 + 1 < pFVar6) {
      *ppFVar4 = pFVar8;
      ppFVar4[1] = pFVar7 + -2;
      *(int *)(ppFVar4 + 2) = (int)local_338;
      ppFVar4 = ppFVar4 + 3;
    }
    if (pFVar9 <= pFVar5) goto LAB_14439026e;
  }
  iVar3 = (int)((longlong)pFVar9 - (longlong)pFVar5 >> 3) + 1;
  pFVar8 = pFVar5;
  if ((int)local_338 == 0) goto LAB_14439025d;
  goto LAB_144390140;
}

// ParallelForInternal<`UE::Impl::PoseMesh'::__l20::<lambda_1>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l20::<lambda_1>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext> @ 144390320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<_UE::Impl::PoseMesh_::__l20::<lambda_1>,_ParallelForWithTaskContext<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::PoseMesh_::__l20::<lambda_1>_>_::__l5::<lambda_1>,_UE::Impl::PoseMesh_::__l20::FMorphProcessContext>
          (wchar_t *param_1,int param_2,int param_3,<lambda_1> *param_4,<lambda_1> param_5,
          EParallelForFlags param_6,
          TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>
          *param_7)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  ulonglong uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  ETaskTag EVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_ParallelFor> FVar17;
  FMorphProcessContext *pFVar18;
  FParallelForData *pFVar19;
  FTaskGraphInterface *pFVar20;
  bool *pbVar21;
  atomic<int> aVar22;
  FName FVar23;
  int iVar24;
  FParallelForData *pFVar25;
  ulonglong uVar26;
  uint uVar27;
  int iVar28;
  bool bVar29;
  ETaskPriority local_88;
  FColor_u_0 local_84;
  FEventRef local_80;
  FName local_78;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  local_70;
  int local_68;
  char local_64;
  FName local_60;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  local_58;
  FName local_50;
  FName local_40;
  
  if (param_2 == 0) {
    return;
  }
  pFVar25 = (FParallelForData *)0x0;
  FVar17 = StatPtr_STAT_ParallelFor;
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar16 = ::FName::FName(&local_40,"STAT_ParallelFor");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar16,
                        L"ParallelFor","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar17;
  bVar8 = false;
  bVar9 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  bVar10 = false;
  bVar29 = false;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_144390487:
    bVar9 = bVar29;
    bVar8 = bVar10;
    bVar10 = false;
    local_78 = local_50;
    FVar23 = local_50;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_84.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_84._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar10 = false;
      bVar29 = true;
      if (-1 < CpuChannel->Enabled) {
        local_60.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_60.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_60,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x7e);
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
        bVar29 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144390487;
    local_78 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar10 = true;
  }
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,"ParallelFor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  if ((param_2 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                          ,0x80,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar13 = GetNumberOfThreadTasks(param_2,param_3,param_6);
  iVar15 = param_7->ArrayNum;
  iVar28 = iVar13;
  if ((iVar15 != 0) && (iVar28 = iVar15, iVar13 < iVar15)) {
    iVar28 = iVar13;
  }
  if (iVar28 < 2) {
    if (0 < param_2) {
      do {
        pFVar18 = TArrayView<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,int>::operator[]
                            (param_7,0);
        `UE::Impl::PoseMesh'::__l20::<lambda_1>::operator()(param_4,pFVar18,(int)pFVar25);
        uVar27 = (int)pFVar25 + 1;
        pFVar25 = (FParallelForData *)(ulonglong)uVar27;
        FVar23 = local_78;
      } while ((int)uVar27 < param_2);
    }
    goto LAB_144390882;
  }
  uVar26 = 1;
  iVar15 = 1;
  local_84 = (FColor_u_0)param_2;
  if ((param_6 & Unbalanced) == None) {
    iVar24 = 6;
    iVar13 = iVar28 * 6;
    do {
      if (iVar13 <= param_2) {
        uVar6 = (longlong)(param_2 + -1 + iVar13) / (longlong)iVar13;
        uVar26 = uVar6 & 0xffffffff;
        iVar15 = (int)uVar6;
        local_84.Bits = (param_2 + -1 + iVar15) / iVar15;
        if (iVar28 <= (int)local_84.Bits) break;
      }
      iVar15 = (int)uVar26;
      iVar13 = iVar13 - iVar28;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
  }
  iVar28 = iVar28 + -1;
  EVar14 = FTaskTagScope::GetCurrentTag();
  local_88 = Inherit;
  if ((EVar14 & (ERhiThread|ERenderingThread|ESlateThread|EGameThread|EStaticInit)) == ENone) {
    if ((param_6 & BackgroundPriority) != None) goto LAB_1443905d1;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    local_88 = High;
  }
  else {
LAB_1443905d1:
    local_88 = BackgroundNormal;
  }
  FEventRef::FEventRef(&local_80,ManualReset);
  pFVar19 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xc0,0x40);
  if (pFVar19 != (FParallelForData *)0x0) {
    piVar3 = &(pFVar19->Tasks).ArrayNum;
    *(undefined4 *)&pFVar19->field_0x8 = 0;
    pFVar19->NumBatches = (int)local_84;
    *(undefined ***)pFVar19 =
         &`ParallelForImpl::
          ParallelForInternal<`UE::Impl::PoseMesh'::`20'::<lambda_1>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::`20'::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::`20'::<lambda_1>_>'::`5'::<lambda_1>,`UE::Impl::PoseMesh'::`20'::FMorphProcessContext>'
          ::`2'::FParallelForData::_vftable_;
    pFVar19->DebugName = param_1;
    pFVar19->Contexts = (TArrayView<std::nullptr_t,int> *)param_7;
    pFVar19->Body = (<lambda_2> *)param_4;
    pFVar19->FinishedSignal = &local_80;
    pFVar19->Priority = local_88;
    piVar4 = &(pFVar19->Tasks).ArrayMax;
    *piVar3 = 0;
    *piVar4 = 0;
    pFVar19->BatchItem = (atomic<int>)0x0;
    pFVar19->IncompleteBatches = (atomic<int>)0x0;
    pFVar19->LaunchedWorkers = (atomic<int>)0x0;
    pFVar19->Num = param_2;
    pFVar19->BatchSize = iVar15;
    (pFVar19->Tasks).AllocatorInstance.Data = (FTracedTask *)0x0;
    pFVar19->IncompleteBatches = (atomic<int>)local_84;
    iVar15 = ___6f57239c58f7b9efa8e997b70be02403_
                       (0x48,8,iVar28,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FTracedTask>
                         *)&pFVar19->Tasks,piVar3,piVar4);
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_UE::Impl::PoseMesh_::__l20::<lambda_1>,_ParallelForWithTaskContext<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::PoseMesh_::__l20::<lambda_1>_>_::__l5::<lambda_1>,_UE::Impl::PoseMesh_::__l20::FMorphProcessContext>_::__l2::FTracedTask,int>
              ((pFVar19->Tasks).AllocatorInstance.Data + iVar15,iVar28);
    UE::FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)&pFVar19->field_0x10);
    LOCK();
    *(int *)&pFVar19->field_0x8 = *(int *)&pFVar19->field_0x8 + 1;
    UNLOCK();
    pFVar25 = pFVar19;
  }
  LOCK();
  paVar2 = &pFVar25->LaunchedWorkers;
  aVar22 = *paVar2;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  if ((pFVar25->Tasks).ArrayNum <= (int)aVar22) {
    aVar22 = (atomic<int>)0xffffffff;
  }
  if (aVar22 != (atomic<int>)0xffffffff) {
    LOCK();
    *(int *)&pFVar25->field_0x8 = *(int *)&pFVar25->field_0x8 + 1;
    UNLOCK();
    local_58.Reference = pFVar25;
    ___02c0945b3e82fc612ce7d8f712de7352_(&local_58,(int)aVar22,true);
    if (local_58.Reference != (FParallelForData *)0x0) {
      puVar1 = &(local_58.Reference)->field_0x8;
      LOCK();
      iVar15 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (((iVar15 == 1) && (puVar1 != (undefined1 *)0x0)) &&
         (local_58.Reference != (FParallelForData *)0x0)) {
        (*(code *)**(undefined8 **)local_58.Reference)(local_58.Reference,1);
      }
    }
  }
  local_64 = '\0';
  local_70.Reference = pFVar25;
  local_68 = iVar28;
  bVar11 = `ParallelForImpl::
           ParallelForInternal<`UE::Impl::PoseMesh'::__l20::<lambda_1>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l20::<lambda_1>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
           ::__l2::FParallelExecutor::operator()(&local_70,true);
  if (!bVar11) {
    if (((param_6 & PumpRenderingThread) == None) || (bVar11 = IsInActualRenderingThread(), !bVar11)
       ) {
      bVar11 = -1 < CpuChannel->Enabled;
      if (bVar11) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId456,"ParallelFor.Wait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x1c8);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId456);
      }
      if (GParallelForDisableOversubscription == false) {
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
      }
      else {
        pbVar21 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar5 = *pbVar21;
        *pbVar21 = false;
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
        *pbVar21 = bVar5;
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      cVar12 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      while (cVar12 == '\0') {
        pFVar20 = FTaskGraphInterface::Get();
        (**(code **)((longlong)*pFVar20 + 0x48))
                  (pFVar20,ENamedThreads::FRenderThreadStatics::RenderThread_Local);
        cVar12 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      }
    }
  }
  if (local_70.Reference != (FParallelForData *)0x0) {
    if (local_64 != '\0') {
      ___02c0945b3e82fc612ce7d8f712de7352_(&local_70,local_68,true);
    }
    if (local_70.Reference != (FParallelForData *)0x0) {
      puVar1 = &(local_70.Reference)->field_0x8;
      LOCK();
      iVar15 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar15 == 1) && (puVar1 != (undefined1 *)0x0)) {
        (*(code *)**(undefined8 **)local_70.Reference)(local_70.Reference,1);
      }
    }
  }
  FEventRef::~FEventRef(&local_80);
LAB_144390882:
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

// ParallelForInternal<`UE::Impl::PoseMesh'::__l23::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l23::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext> @ 1443908f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<_UE::Impl::PoseMesh_::__l23::<lambda_2>,_ParallelForWithTaskContext<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::PoseMesh_::__l23::<lambda_2>_>_::__l5::<lambda_1>,_UE::Impl::PoseMesh_::__l20::FMorphProcessContext>
          (wchar_t *param_1,int param_2,int param_3,<lambda_2> *param_4,<lambda_1> param_5,
          EParallelForFlags param_6,
          TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>
          *param_7)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  ulonglong uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  ETaskTag EVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_ParallelFor> FVar17;
  FMorphProcessContext *pFVar18;
  FParallelForData *pFVar19;
  FTaskGraphInterface *pFVar20;
  bool *pbVar21;
  atomic<int> aVar22;
  FName FVar23;
  int iVar24;
  FParallelForData *pFVar25;
  ulonglong uVar26;
  uint uVar27;
  int iVar28;
  bool bVar29;
  ETaskPriority local_88;
  FColor_u_0 local_84;
  FEventRef local_80;
  FName local_78;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  local_70;
  int local_68;
  char local_64;
  FName local_60;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  local_58;
  FName local_50;
  FName local_40;
  
  if (param_2 == 0) {
    return;
  }
  pFVar25 = (FParallelForData *)0x0;
  FVar17 = StatPtr_STAT_ParallelFor;
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar16 = ::FName::FName(&local_40,"STAT_ParallelFor");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar16,
                        L"ParallelFor","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar17;
  bVar8 = false;
  bVar9 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  bVar10 = false;
  bVar29 = false;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_144390a57:
    bVar9 = bVar29;
    bVar8 = bVar10;
    bVar10 = false;
    local_78 = local_50;
    FVar23 = local_50;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_84.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_84._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar10 = false;
      bVar29 = true;
      if (-1 < CpuChannel->Enabled) {
        local_60.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_60.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_60,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x7e);
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
        bVar29 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144390a57;
    local_78 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar10 = true;
  }
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,"ParallelFor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  if ((param_2 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                          ,0x80,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar13 = GetNumberOfThreadTasks(param_2,param_3,param_6);
  iVar15 = param_7->ArrayNum;
  iVar28 = iVar13;
  if ((iVar15 != 0) && (iVar28 = iVar15, iVar13 < iVar15)) {
    iVar28 = iVar13;
  }
  if (iVar28 < 2) {
    if (0 < param_2) {
      do {
        pFVar18 = TArrayView<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,int>::operator[]
                            (param_7,0);
        `UE::Impl::PoseMesh'::__l23::<lambda_2>::operator()(param_4,pFVar18,(int)pFVar25);
        uVar27 = (int)pFVar25 + 1;
        pFVar25 = (FParallelForData *)(ulonglong)uVar27;
        FVar23 = local_78;
      } while ((int)uVar27 < param_2);
    }
    goto LAB_144390e52;
  }
  uVar26 = 1;
  iVar15 = 1;
  local_84 = (FColor_u_0)param_2;
  if ((param_6 & Unbalanced) == None) {
    iVar24 = 6;
    iVar13 = iVar28 * 6;
    do {
      if (iVar13 <= param_2) {
        uVar6 = (longlong)(param_2 + -1 + iVar13) / (longlong)iVar13;
        uVar26 = uVar6 & 0xffffffff;
        iVar15 = (int)uVar6;
        local_84.Bits = (param_2 + -1 + iVar15) / iVar15;
        if (iVar28 <= (int)local_84.Bits) break;
      }
      iVar15 = (int)uVar26;
      iVar13 = iVar13 - iVar28;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
  }
  iVar28 = iVar28 + -1;
  EVar14 = FTaskTagScope::GetCurrentTag();
  local_88 = Inherit;
  if ((EVar14 & (ERhiThread|ERenderingThread|ESlateThread|EGameThread|EStaticInit)) == ENone) {
    if ((param_6 & BackgroundPriority) != None) goto LAB_144390ba1;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    local_88 = High;
  }
  else {
LAB_144390ba1:
    local_88 = BackgroundNormal;
  }
  FEventRef::FEventRef(&local_80,ManualReset);
  pFVar19 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xc0,0x40);
  if (pFVar19 != (FParallelForData *)0x0) {
    piVar3 = &(pFVar19->Tasks).ArrayNum;
    *(undefined4 *)&pFVar19->field_0x8 = 0;
    pFVar19->NumBatches = (int)local_84;
    *(undefined ***)pFVar19 =
         &`ParallelForImpl::
          ParallelForInternal<`UE::Impl::PoseMesh'::`23'::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::`20'::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::`23'::<lambda_2>_>'::`5'::<lambda_1>,`UE::Impl::PoseMesh'::`20'::FMorphProcessContext>'
          ::`2'::FParallelForData::_vftable_;
    pFVar19->DebugName = param_1;
    pFVar19->Contexts =
         (TArrayView<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext,int>
          *)param_7;
    pFVar19->Body = (<lambda_1> *)param_4;
    pFVar19->FinishedSignal = &local_80;
    pFVar19->Priority = local_88;
    piVar4 = &(pFVar19->Tasks).ArrayMax;
    *piVar3 = 0;
    *piVar4 = 0;
    pFVar19->BatchItem = (atomic<int>)0x0;
    pFVar19->IncompleteBatches = (atomic<int>)0x0;
    pFVar19->LaunchedWorkers = (atomic<int>)0x0;
    pFVar19->Num = param_2;
    pFVar19->BatchSize = iVar15;
    (pFVar19->Tasks).AllocatorInstance.Data = (FTracedTask *)0x0;
    pFVar19->IncompleteBatches = (atomic<int>)local_84;
    iVar15 = ___4168f93702ab2f5a2da64efa1c731772_
                       (0x48,8,iVar28,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FTracedTask>
                         *)&pFVar19->Tasks,piVar3,piVar4);
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_UE::Impl::PoseMesh_::__l23::<lambda_2>,_ParallelForWithTaskContext<_UE::Impl::PoseMesh_::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::PoseMesh_::__l23::<lambda_2>_>_::__l5::<lambda_1>,_UE::Impl::PoseMesh_::__l20::FMorphProcessContext>_::__l2::FTracedTask,int>
              ((pFVar19->Tasks).AllocatorInstance.Data + iVar15,iVar28);
    UE::FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)&pFVar19->field_0x10);
    LOCK();
    *(int *)&pFVar19->field_0x8 = *(int *)&pFVar19->field_0x8 + 1;
    UNLOCK();
    pFVar25 = pFVar19;
  }
  LOCK();
  paVar2 = &pFVar25->LaunchedWorkers;
  aVar22 = *paVar2;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  if ((pFVar25->Tasks).ArrayNum <= (int)aVar22) {
    aVar22 = (atomic<int>)0xffffffff;
  }
  if (aVar22 != (atomic<int>)0xffffffff) {
    LOCK();
    *(int *)&pFVar25->field_0x8 = *(int *)&pFVar25->field_0x8 + 1;
    UNLOCK();
    local_58.Reference = pFVar25;
    ___1473f98ef73f8a2314cc5ba4292012ca_(&local_58,(int)aVar22,true);
    if (local_58.Reference != (FParallelForData *)0x0) {
      puVar1 = &(local_58.Reference)->field_0x8;
      LOCK();
      iVar15 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (((iVar15 == 1) && (puVar1 != (undefined1 *)0x0)) &&
         (local_58.Reference != (FParallelForData *)0x0)) {
        (*(code *)**(undefined8 **)local_58.Reference)(local_58.Reference,1);
      }
    }
  }
  local_64 = '\0';
  local_70.Reference = pFVar25;
  local_68 = iVar28;
  bVar11 = `ParallelForImpl::
           ParallelForInternal<`UE::Impl::PoseMesh'::__l23::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l23::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
           ::__l2::FParallelExecutor::operator()(&local_70,true);
  if (!bVar11) {
    if (((param_6 & PumpRenderingThread) == None) || (bVar11 = IsInActualRenderingThread(), !bVar11)
       ) {
      bVar11 = -1 < CpuChannel->Enabled;
      if (bVar11) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId456,"ParallelFor.Wait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x1c8);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId456);
      }
      if (GParallelForDisableOversubscription == false) {
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
      }
      else {
        pbVar21 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar5 = *pbVar21;
        *pbVar21 = false;
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
        *pbVar21 = bVar5;
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      cVar12 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      while (cVar12 == '\0') {
        pFVar20 = FTaskGraphInterface::Get();
        (**(code **)((longlong)*pFVar20 + 0x48))
                  (pFVar20,ENamedThreads::FRenderThreadStatics::RenderThread_Local);
        cVar12 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      }
    }
  }
  if (local_70.Reference != (FParallelForData *)0x0) {
    if (local_64 != '\0') {
      ___1473f98ef73f8a2314cc5ba4292012ca_(&local_70,local_68,true);
    }
    if (local_70.Reference != (FParallelForData *)0x0) {
      puVar1 = &(local_70.Reference)->field_0x8;
      LOCK();
      iVar15 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar15 == 1) && (puVar1 != (undefined1 *)0x0)) {
        (*(code *)**(undefined8 **)local_70.Reference)(local_70.Reference,1);
      }
    }
  }
  FEventRef::~FEventRef(&local_80);
LAB_144390e52:
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

// ParallelForInternal<`UE::Impl::UnposeMesh'::__l24::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l24::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext> @ 144390ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<_UE::Impl::UnposeMesh_::__l24::<lambda_2>,_ParallelForWithTaskContext<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::UnposeMesh_::__l24::<lambda_2>_>_::__l5::<lambda_1>,_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext>
          (wchar_t *param_1,int param_2,int param_3,<lambda_2> *param_4,<lambda_1> param_5,
          EParallelForFlags param_6,
          TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>
          *param_7)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  ulonglong uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  ETaskTag EVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_ParallelFor> FVar17;
  FMorphProcessContext *pFVar18;
  FParallelForData *pFVar19;
  FTaskGraphInterface *pFVar20;
  bool *pbVar21;
  atomic<int> aVar22;
  FName FVar23;
  int iVar24;
  FParallelForData *pFVar25;
  ulonglong uVar26;
  uint uVar27;
  int iVar28;
  bool bVar29;
  ETaskPriority local_88;
  FColor_u_0 local_84;
  FEventRef local_80;
  FName local_78;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  local_70;
  int local_68;
  char local_64;
  FName local_60;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  local_58;
  FName local_50;
  FName local_40;
  
  if (param_2 == 0) {
    return;
  }
  pFVar25 = (FParallelForData *)0x0;
  FVar17 = StatPtr_STAT_ParallelFor;
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar16 = ::FName::FName(&local_40,"STAT_ParallelFor");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar16,
                        L"ParallelFor","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar17;
  bVar8 = false;
  bVar9 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  bVar10 = false;
  bVar29 = false;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_144391027:
    bVar9 = bVar29;
    bVar8 = bVar10;
    bVar10 = false;
    local_78 = local_50;
    FVar23 = local_50;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_84.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_84._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar10 = false;
      bVar29 = true;
      if (-1 < CpuChannel->Enabled) {
        local_60.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_60.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_60,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x7e);
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
        bVar29 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144391027;
    local_78 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar10 = true;
  }
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,"ParallelFor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  if ((param_2 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                          ,0x80,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar13 = GetNumberOfThreadTasks(param_2,param_3,param_6);
  iVar15 = param_7->ArrayNum;
  iVar28 = iVar13;
  if ((iVar15 != 0) && (iVar28 = iVar15, iVar13 < iVar15)) {
    iVar28 = iVar13;
  }
  if (iVar28 < 2) {
    if (0 < param_2) {
      do {
        pFVar18 = TArrayView<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,int>::operator[]
                            (param_7,0);
        `UE::Impl::UnposeMesh'::__l24::<lambda_2>::operator()(param_4,pFVar18,(int)pFVar25);
        uVar27 = (int)pFVar25 + 1;
        pFVar25 = (FParallelForData *)(ulonglong)uVar27;
        FVar23 = local_78;
      } while ((int)uVar27 < param_2);
    }
    goto LAB_144391422;
  }
  uVar26 = 1;
  iVar15 = 1;
  local_84 = (FColor_u_0)param_2;
  if ((param_6 & Unbalanced) == None) {
    iVar24 = 6;
    iVar13 = iVar28 * 6;
    do {
      if (iVar13 <= param_2) {
        uVar6 = (longlong)(param_2 + -1 + iVar13) / (longlong)iVar13;
        uVar26 = uVar6 & 0xffffffff;
        iVar15 = (int)uVar6;
        local_84.Bits = (param_2 + -1 + iVar15) / iVar15;
        if (iVar28 <= (int)local_84.Bits) break;
      }
      iVar15 = (int)uVar26;
      iVar13 = iVar13 - iVar28;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
  }
  iVar28 = iVar28 + -1;
  EVar14 = FTaskTagScope::GetCurrentTag();
  local_88 = Inherit;
  if ((EVar14 & (ERhiThread|ERenderingThread|ESlateThread|EGameThread|EStaticInit)) == ENone) {
    if ((param_6 & BackgroundPriority) != None) goto LAB_144391171;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    local_88 = High;
  }
  else {
LAB_144391171:
    local_88 = BackgroundNormal;
  }
  FEventRef::FEventRef(&local_80,ManualReset);
  pFVar19 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xc0,0x40);
  if (pFVar19 != (FParallelForData *)0x0) {
    piVar3 = &(pFVar19->Tasks).ArrayNum;
    *(undefined4 *)&pFVar19->field_0x8 = 0;
    pFVar19->NumBatches = (int)local_84;
    *(undefined ***)pFVar19 =
         &`ParallelForImpl::
          ParallelForInternal<`UE::Impl::UnposeMesh'::`24'::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::`24'::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::`24'::<lambda_2>_>'::`5'::<lambda_1>,`UE::Impl::UnposeMesh'::`24'::FMorphProcessContext>'
          ::`2'::FParallelForData::_vftable_;
    pFVar19->DebugName = param_1;
    pFVar19->Contexts = (TArrayView<FRHIBatchedShaderParametersAllocator_*,int> *)param_7;
    pFVar19->Body = (<lambda_2> *)param_4;
    pFVar19->FinishedSignal = &local_80;
    pFVar19->Priority = local_88;
    piVar4 = &(pFVar19->Tasks).ArrayMax;
    *piVar3 = 0;
    *piVar4 = 0;
    pFVar19->BatchItem = (atomic<int>)0x0;
    pFVar19->IncompleteBatches = (atomic<int>)0x0;
    pFVar19->LaunchedWorkers = (atomic<int>)0x0;
    pFVar19->Num = param_2;
    pFVar19->BatchSize = iVar15;
    (pFVar19->Tasks).AllocatorInstance.Data = (FTracedTask *)0x0;
    pFVar19->IncompleteBatches = (atomic<int>)local_84;
    iVar15 = ___2777ba16e52c79ccecc7173330c84273_
                       (0x48,8,iVar28,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FTracedTask>
                         *)&pFVar19->Tasks,piVar3,piVar4);
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_UE::Impl::UnposeMesh_::__l24::<lambda_2>,_ParallelForWithTaskContext<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::UnposeMesh_::__l24::<lambda_2>_>_::__l5::<lambda_1>,_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext>_::__l2::FTracedTask,int>
              ((pFVar19->Tasks).AllocatorInstance.Data + iVar15,iVar28);
    UE::FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)&pFVar19->field_0x10);
    LOCK();
    *(int *)&pFVar19->field_0x8 = *(int *)&pFVar19->field_0x8 + 1;
    UNLOCK();
    pFVar25 = pFVar19;
  }
  LOCK();
  paVar2 = &pFVar25->LaunchedWorkers;
  aVar22 = *paVar2;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  if ((pFVar25->Tasks).ArrayNum <= (int)aVar22) {
    aVar22 = (atomic<int>)0xffffffff;
  }
  if (aVar22 != (atomic<int>)0xffffffff) {
    LOCK();
    *(int *)&pFVar25->field_0x8 = *(int *)&pFVar25->field_0x8 + 1;
    UNLOCK();
    local_58.Reference = pFVar25;
    ___09e39cb29449e999f0e4f3a566e675de_(&local_58,(int)aVar22,true);
    if (local_58.Reference != (FParallelForData *)0x0) {
      puVar1 = &(local_58.Reference)->field_0x8;
      LOCK();
      iVar15 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (((iVar15 == 1) && (puVar1 != (undefined1 *)0x0)) &&
         (local_58.Reference != (FParallelForData *)0x0)) {
        (*(code *)**(undefined8 **)local_58.Reference)(local_58.Reference,1);
      }
    }
  }
  local_64 = '\0';
  local_70.Reference = pFVar25;
  local_68 = iVar28;
  bVar11 = `ParallelForImpl::
           ParallelForInternal<`UE::Impl::UnposeMesh'::__l24::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l24::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
           ::__l2::FParallelExecutor::operator()(&local_70,true);
  if (!bVar11) {
    if (((param_6 & PumpRenderingThread) == None) || (bVar11 = IsInActualRenderingThread(), !bVar11)
       ) {
      bVar11 = -1 < CpuChannel->Enabled;
      if (bVar11) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId456,"ParallelFor.Wait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x1c8);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId456);
      }
      if (GParallelForDisableOversubscription == false) {
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
      }
      else {
        pbVar21 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar5 = *pbVar21;
        *pbVar21 = false;
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
        *pbVar21 = bVar5;
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      cVar12 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      while (cVar12 == '\0') {
        pFVar20 = FTaskGraphInterface::Get();
        (**(code **)((longlong)*pFVar20 + 0x48))
                  (pFVar20,ENamedThreads::FRenderThreadStatics::RenderThread_Local);
        cVar12 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      }
    }
  }
  if (local_70.Reference != (FParallelForData *)0x0) {
    if (local_64 != '\0') {
      ___09e39cb29449e999f0e4f3a566e675de_(&local_70,local_68,true);
    }
    if (local_70.Reference != (FParallelForData *)0x0) {
      puVar1 = &(local_70.Reference)->field_0x8;
      LOCK();
      iVar15 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar15 == 1) && (puVar1 != (undefined1 *)0x0)) {
        (*(code *)**(undefined8 **)local_70.Reference)(local_70.Reference,1);
      }
    }
  }
  FEventRef::~FEventRef(&local_80);
LAB_144391422:
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

// ParallelForInternal<`UE::Impl::UnposeMesh'::__l27::<lambda_3>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l27::<lambda_3>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext> @ 144391490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
ParallelForImpl::
ParallelForInternal<_UE::Impl::UnposeMesh_::__l27::<lambda_3>,_ParallelForWithTaskContext<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::UnposeMesh_::__l27::<lambda_3>_>_::__l5::<lambda_1>,_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext>
          (wchar_t *param_1,int param_2,int param_3,<lambda_3> *param_4,<lambda_1> param_5,
          EParallelForFlags param_6,
          TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>
          *param_7)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  ulonglong uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  ETaskTag EVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_ParallelFor> FVar17;
  FMorphProcessContext *pFVar18;
  FParallelForData *pFVar19;
  FTaskGraphInterface *pFVar20;
  bool *pbVar21;
  atomic<int> aVar22;
  FName FVar23;
  int iVar24;
  FParallelForData *pFVar25;
  ulonglong uVar26;
  uint uVar27;
  int iVar28;
  bool bVar29;
  ETaskPriority local_88;
  FColor_u_0 local_84;
  FEventRef local_80;
  FName local_78;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  local_70;
  int local_68;
  char local_64;
  FName local_60;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  local_58;
  FName local_50;
  FName local_40;
  
  if (param_2 == 0) {
    return;
  }
  pFVar25 = (FParallelForData *)0x0;
  FVar17 = StatPtr_STAT_ParallelFor;
  if (StatPtr_STAT_ParallelFor == (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)0x0) {
    pFVar16 = ::FName::FName(&local_40,"STAT_ParallelFor");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_ParallelFor>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParallelFor,*pFVar16,
                        L"ParallelFor","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                        L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar17;
  bVar8 = false;
  bVar9 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  bVar10 = false;
  bVar29 = false;
  if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_1443915f7:
    bVar9 = bVar29;
    bVar8 = bVar10;
    bVar10 = false;
    local_78 = local_50;
    FVar23 = local_50;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_84.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_84._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar10 = false;
      bVar29 = true;
      if (-1 < CpuChannel->Enabled) {
        local_60.ComparisonIndex.Value = FVar23.ComparisonIndex.Value.Value;
        local_60.Number = FVar23.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_60,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x7e);
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
        bVar29 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1443915f7;
    local_78 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar10 = true;
  }
  bVar29 = -1 < CpuChannel->Enabled;
  if (bVar29) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,"ParallelFor",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  if ((param_2 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Num >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                          ,0x80,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar13 = GetNumberOfThreadTasks(param_2,param_3,param_6);
  iVar15 = param_7->ArrayNum;
  iVar28 = iVar13;
  if ((iVar15 != 0) && (iVar28 = iVar15, iVar13 < iVar15)) {
    iVar28 = iVar13;
  }
  if (iVar28 < 2) {
    if (0 < param_2) {
      do {
        pFVar18 = TArrayView<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,int>::operator[]
                            (param_7,0);
        `UE::Impl::UnposeMesh'::__l27::<lambda_3>::operator()(param_4,pFVar18,(int)pFVar25);
        uVar27 = (int)pFVar25 + 1;
        pFVar25 = (FParallelForData *)(ulonglong)uVar27;
        FVar23 = local_78;
      } while ((int)uVar27 < param_2);
    }
    goto LAB_1443919f2;
  }
  uVar26 = 1;
  iVar15 = 1;
  local_84 = (FColor_u_0)param_2;
  if ((param_6 & Unbalanced) == None) {
    iVar24 = 6;
    iVar13 = iVar28 * 6;
    do {
      if (iVar13 <= param_2) {
        uVar6 = (longlong)(param_2 + -1 + iVar13) / (longlong)iVar13;
        uVar26 = uVar6 & 0xffffffff;
        iVar15 = (int)uVar6;
        local_84.Bits = (param_2 + -1 + iVar15) / iVar15;
        if (iVar28 <= (int)local_84.Bits) break;
      }
      iVar15 = (int)uVar26;
      iVar13 = iVar13 - iVar28;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
  }
  iVar28 = iVar28 + -1;
  EVar14 = FTaskTagScope::GetCurrentTag();
  local_88 = Inherit;
  if ((EVar14 & (ERhiThread|ERenderingThread|ESlateThread|EGameThread|EStaticInit)) == ENone) {
    if ((param_6 & BackgroundPriority) != None) goto LAB_144391741;
  }
  else if ((param_6 & BackgroundPriority) == None) {
    local_88 = High;
  }
  else {
LAB_144391741:
    local_88 = BackgroundNormal;
  }
  FEventRef::FEventRef(&local_80,ManualReset);
  pFVar19 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xc0,0x40);
  if (pFVar19 != (FParallelForData *)0x0) {
    piVar3 = &(pFVar19->Tasks).ArrayNum;
    *(undefined4 *)&pFVar19->field_0x8 = 0;
    pFVar19->NumBatches = (int)local_84;
    *(undefined ***)pFVar19 =
         &`ParallelForImpl::
          ParallelForInternal<`UE::Impl::UnposeMesh'::`27'::<lambda_3>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::`24'::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::`27'::<lambda_3>_>'::`5'::<lambda_1>,`UE::Impl::UnposeMesh'::`24'::FMorphProcessContext>'
          ::`2'::FParallelForData::_vftable_;
    pFVar19->DebugName = param_1;
    pFVar19->Contexts = (TArrayView<std::nullptr_t,int> *)param_7;
    pFVar19->Body = (<lambda_1> *)param_4;
    pFVar19->FinishedSignal = &local_80;
    pFVar19->Priority = local_88;
    piVar4 = &(pFVar19->Tasks).ArrayMax;
    *piVar3 = 0;
    *piVar4 = 0;
    pFVar19->BatchItem = (atomic<int>)0x0;
    pFVar19->IncompleteBatches = (atomic<int>)0x0;
    pFVar19->LaunchedWorkers = (atomic<int>)0x0;
    pFVar19->Num = param_2;
    pFVar19->BatchSize = iVar15;
    (pFVar19->Tasks).AllocatorInstance.Data = (FTracedTask *)0x0;
    pFVar19->IncompleteBatches = (atomic<int>)local_84;
    iVar15 = ___75396670fc24680ffd2f83f4c4e8f82d_
                       (0x48,8,iVar28,
                        (ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FTracedTask>
                         *)&pFVar19->Tasks,piVar3,piVar4);
    DefaultConstructItems<_ParallelForImpl::ParallelForInternal<_UE::Impl::UnposeMesh_::__l27::<lambda_3>,_ParallelForWithTaskContext<_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,_UE::Impl::UnposeMesh_::__l27::<lambda_3>_>_::__l5::<lambda_1>,_UE::Impl::UnposeMesh_::__l24::FMorphProcessContext>_::__l2::FTracedTask,int>
              ((pFVar19->Tasks).AllocatorInstance.Data + iVar15,iVar28);
    UE::FInheritedContextBase::CaptureInheritedContext
              ((FInheritedContextBase *)&pFVar19->field_0x10);
    LOCK();
    *(int *)&pFVar19->field_0x8 = *(int *)&pFVar19->field_0x8 + 1;
    UNLOCK();
    pFVar25 = pFVar19;
  }
  LOCK();
  paVar2 = &pFVar25->LaunchedWorkers;
  aVar22 = *paVar2;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  if ((pFVar25->Tasks).ArrayNum <= (int)aVar22) {
    aVar22 = (atomic<int>)0xffffffff;
  }
  if (aVar22 != (atomic<int>)0xffffffff) {
    LOCK();
    *(int *)&pFVar25->field_0x8 = *(int *)&pFVar25->field_0x8 + 1;
    UNLOCK();
    local_58.Reference = pFVar25;
    ___f3d19495511a35e83dc3d145e6103de0_(&local_58,(int)aVar22,true);
    if (local_58.Reference != (FParallelForData *)0x0) {
      puVar1 = &(local_58.Reference)->field_0x8;
      LOCK();
      iVar15 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (((iVar15 == 1) && (puVar1 != (undefined1 *)0x0)) &&
         (local_58.Reference != (FParallelForData *)0x0)) {
        (*(code *)**(undefined8 **)local_58.Reference)(local_58.Reference,1);
      }
    }
  }
  local_64 = '\0';
  local_70.Reference = pFVar25;
  local_68 = iVar28;
  bVar11 = `ParallelForImpl::
           ParallelForInternal<`UE::Impl::UnposeMesh'::__l27::<lambda_3>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l27::<lambda_3>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
           ::__l2::FParallelExecutor::operator()(&local_70,true);
  if (!bVar11) {
    if (((param_6 & PumpRenderingThread) == None) || (bVar11 = IsInActualRenderingThread(), !bVar11)
       ) {
      bVar11 = -1 < CpuChannel->Enabled;
      if (bVar11) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&::__CpuProfilerEventSpecId456,"ParallelFor.Wait",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                   ,0x1c8);
        FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId456);
      }
      if (GParallelForDisableOversubscription == false) {
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
      }
      else {
        pbVar21 = LowLevelTasks::Private::FOversubscriptionTls::GetIsOversubscriptionAllowedRef();
        bVar5 = *pbVar21;
        *pbVar21 = false;
        (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,0xffffffff,0);
        *pbVar21 = bVar5;
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      cVar12 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      while (cVar12 == '\0') {
        pFVar20 = FTaskGraphInterface::Get();
        (**(code **)((longlong)*pFVar20 + 0x48))
                  (pFVar20,ENamedThreads::FRenderThreadStatics::RenderThread_Local);
        cVar12 = (**(code **)((local_80.Event)->_padding_ + 0x20))(local_80.Event,1,0);
      }
    }
  }
  if (local_70.Reference != (FParallelForData *)0x0) {
    if (local_64 != '\0') {
      ___f3d19495511a35e83dc3d145e6103de0_(&local_70,local_68,true);
    }
    if (local_70.Reference != (FParallelForData *)0x0) {
      puVar1 = &(local_70.Reference)->field_0x8;
      LOCK();
      iVar15 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar15 == 1) && (puVar1 != (undefined1 *)0x0)) {
        (*(code *)**(undefined8 **)local_70.Reference)(local_70.Reference,1);
      }
    }
  }
  FEventRef::~FEventRef(&local_80);
LAB_1443919f2:
  if (bVar29) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::GetBox'::__l5::<lambda_1>,0,0> @ 144393910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::GetBox'::__l5::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::GetBox_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_UFMeshDescriptionTriangleMeshAdapter___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestIntersection'::__l11::<lambda_1>,0,0> @ 144393930

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestIntersection'::__l11::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestIntersection_::__l11::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_UFMeshDescriptionTriangleMeshAdapter___Geometry_UE__UEBA_NPEBUFMeshDescriptionTriangleMeshAdapter__U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ??@02c0945b3e82fc612ce7d8f712de7352@ @ 144393c40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
___02c0945b3e82fc612ce7d8f712de7352_
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  undefined1 *puVar1;
  FTracedTask *pFVar2;
  FParallelForData *pFVar3;
  FTracedTask *pFVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  bool bVar7;
  ETaskPriority EVar8;
  uint uVar9;
  atomic<unsigned___int64> aVar10;
  FTask *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  FParallelForData *local_38;
  int local_30;
  undefined1 local_2c;
  FParallelForData *local_28;
  int local_20;
  undefined1 local_1c;
  
  pFVar3 = param_1->Reference;
  uVar14 = 0;
  uVar9 = 0;
  if (param_2 < (pFVar3->Tasks).ArrayNum) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (pFVar3->Tasks).AllocatorInstance.Data;
  pFVar2 = pFVar4 + param_2;
  if (pFVar4[param_2].TraceId != (atomic<unsigned___int64>)0xffffffffffffffff) {
    TaskTrace::Destroyed((ulong64)pFVar2->TraceId);
  }
  pwVar5 = param_1->Reference->DebugName;
  EVar8 = param_1->Reference->Priority;
  aVar10 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
  LOCK();
  pFVar2->TraceId = aVar10;
  UNLOCK();
  TaskTrace::Launched((ulong64)pFVar2->TraceId,pwVar5,false,AnyNormalThreadNormalTask,0);
  local_28 = param_1->Reference;
  param_1->Reference = (FParallelForData *)0x0;
  local_1c = 0;
  local_20 = param_2;
  if (((*(ulonglong *)&(pFVar2->Task).field_0x38 & 0x20) == 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_38 = local_28;
  local_30 = local_20;
  local_2c = local_1c;
  local_28 = (FParallelForData *)0x0;
  (**(code **)(*(longlong *)&(pFVar2->Task).field_0x28 + 0x18))(&(pFVar2->Task).field_0x28,pFVar2);
  *(_func___cdecl_void ***)&(pFVar2->Task).field_0x28 = _f1f79cb52e651b7ad17b61e143cb3838_;
  *(FParallelForData **)&pFVar2->Task = local_38;
  *(int *)&(pFVar2->Task).field_0x8 = local_30;
  (pFVar2->Task).field_0xc = local_2c;
  local_38 = (FParallelForData *)0x0;
  `ParallelForImpl::
  ParallelForInternal<`UE::Impl::PoseMesh'::__l20::<lambda_1>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l20::<lambda_1>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
  ::__l2::FParallelExecutor::~FParallelExecutor(&local_38);
  pFVar11 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar11 == (FTask *)0x0) {
    if (EVar8 == Inherit) {
      EVar8 = Default;
    }
  }
  else {
    if (EVar8 == Inherit) {
      EVar8 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar11->field_0x38 >> 0x3b);
    }
    uVar14 = *(undefined8 *)&pFVar11->field_0x30;
  }
  *(undefined8 *)&(pFVar2->Task).field_0x30 = uVar14;
  *(ulonglong *)&(pFVar2->Task).field_0x38 =
       ((longlong)(char)EVar8 << 0x35 | (ulonglong)pwVar5 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  `ParallelForImpl::
  ParallelForInternal<`UE::Impl::PoseMesh'::__l20::<lambda_1>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l20::<lambda_1>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
  ::__l2::FParallelExecutor::~FParallelExecutor(&local_28);
  uVar12 = *(ulonglong *)&(pFVar2->Task).field_0x38;
  do {
    puVar1 = &(pFVar2->Task).field_0x38;
    LOCK();
    uVar13 = *(ulonglong *)puVar1;
    bVar7 = uVar12 == uVar13;
    if (bVar7) {
      *(ulonglong *)puVar1 = uVar12 | 2;
      uVar13 = uVar12;
    }
    UNLOCK();
    uVar12 = uVar13;
  } while (!bVar7);
  if ((uVar13 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,&pFVar2->Task,GlobalQueuePreference,param_3);
  }
  else {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("LowLevelTasks::TryLaunch(TracedTask.Task, LowLevelTasks::EQueuePreference::GlobalQueuePreference, bWakeUpWorker)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                       ,0x19d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// ??@083e5725bb6918f52d4d2d84dfecc5c2@ @ 144393eb0

FTask * __thiscall ___083e5725bb6918f52d4d2d84dfecc5c2_(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::UnposeMesh'::__l24::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l24::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// ??@09a7c4729b13bfd42b52746f51a2785b@ @ 144393ee0

void __cdecl ___09a7c4729b13bfd42b52746f51a2785b_(FTracedTask *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (ulonglong *)&(param_1->Task).field_0x38;
    do {
      if (((*puVar3 & 0x20) == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x204,L"State: %d"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(puVar3[-2] + 0x18))(puVar3 + -2,puVar3 + -7);
      puVar3 = puVar3 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ??@09e39cb29449e999f0e4f3a566e675de@ @ 144393f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
___09e39cb29449e999f0e4f3a566e675de_
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  undefined1 *puVar1;
  FTracedTask *pFVar2;
  FParallelForData *pFVar3;
  FTracedTask *pFVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  bool bVar7;
  ETaskPriority EVar8;
  uint uVar9;
  atomic<unsigned___int64> aVar10;
  FTask *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  FParallelForData *local_38;
  int local_30;
  undefined1 local_2c;
  FParallelForData *local_28;
  int local_20;
  undefined1 local_1c;
  
  pFVar3 = param_1->Reference;
  uVar14 = 0;
  uVar9 = 0;
  if (param_2 < (pFVar3->Tasks).ArrayNum) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (pFVar3->Tasks).AllocatorInstance.Data;
  pFVar2 = pFVar4 + param_2;
  if (pFVar4[param_2].TraceId != (atomic<unsigned___int64>)0xffffffffffffffff) {
    TaskTrace::Destroyed((ulong64)pFVar2->TraceId);
  }
  pwVar5 = param_1->Reference->DebugName;
  EVar8 = param_1->Reference->Priority;
  aVar10 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
  LOCK();
  pFVar2->TraceId = aVar10;
  UNLOCK();
  TaskTrace::Launched((ulong64)pFVar2->TraceId,pwVar5,false,AnyNormalThreadNormalTask,0);
  local_28 = param_1->Reference;
  param_1->Reference = (FParallelForData *)0x0;
  local_1c = 0;
  local_20 = param_2;
  if (((*(ulonglong *)&(pFVar2->Task).field_0x38 & 0x20) == 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_38 = local_28;
  local_30 = local_20;
  local_2c = local_1c;
  local_28 = (FParallelForData *)0x0;
  (**(code **)(*(longlong *)&(pFVar2->Task).field_0x28 + 0x18))(&(pFVar2->Task).field_0x28,pFVar2);
  *(_func___cdecl_void ***)&(pFVar2->Task).field_0x28 = _761328d14789a3a6a6b673262171c450_;
  *(FParallelForData **)&pFVar2->Task = local_38;
  *(int *)&(pFVar2->Task).field_0x8 = local_30;
  (pFVar2->Task).field_0xc = local_2c;
  local_38 = (FParallelForData *)0x0;
  `ParallelForImpl::
  ParallelForInternal<`UE::Impl::UnposeMesh'::__l24::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l24::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
  ::__l2::FParallelExecutor::~FParallelExecutor(&local_38);
  pFVar11 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar11 == (FTask *)0x0) {
    if (EVar8 == Inherit) {
      EVar8 = Default;
    }
  }
  else {
    if (EVar8 == Inherit) {
      EVar8 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar11->field_0x38 >> 0x3b);
    }
    uVar14 = *(undefined8 *)&pFVar11->field_0x30;
  }
  *(undefined8 *)&(pFVar2->Task).field_0x30 = uVar14;
  *(ulonglong *)&(pFVar2->Task).field_0x38 =
       ((longlong)(char)EVar8 << 0x35 | (ulonglong)pwVar5 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  `ParallelForImpl::
  ParallelForInternal<`UE::Impl::UnposeMesh'::__l24::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l24::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
  ::__l2::FParallelExecutor::~FParallelExecutor(&local_28);
  uVar12 = *(ulonglong *)&(pFVar2->Task).field_0x38;
  do {
    puVar1 = &(pFVar2->Task).field_0x38;
    LOCK();
    uVar13 = *(ulonglong *)puVar1;
    bVar7 = uVar12 == uVar13;
    if (bVar7) {
      *(ulonglong *)puVar1 = uVar12 | 2;
      uVar13 = uVar12;
    }
    UNLOCK();
    uVar12 = uVar13;
  } while (!bVar7);
  if ((uVar13 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,&pFVar2->Task,GlobalQueuePreference,param_3);
  }
  else {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("LowLevelTasks::TryLaunch(TracedTask.Task, LowLevelTasks::EQueuePreference::GlobalQueuePreference, bWakeUpWorker)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                       ,0x19d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// ??@0a06cb971b4ce7c83ad881e2b682e5a3@ @ 1443941d0

void __thiscall ___0a06cb971b4ce7c83ad881e2b682e5a3_(void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(undefined8 **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x10) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = _6c9325f8ffca6d17c25c782801fe307f_;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *puVar2 = puVar4;
    *puVar4 = 0;
    *puVar4 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar4 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  else {
    puVar2[5] = _204831988bccc166d2478eb8436a26d6_;
    *puVar2 = 0;
    *puVar2 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@11eb4aeb5ae62a98b526358b59c6db33@ @ 144394280

FTask * __thiscall
___11eb4aeb5ae62a98b526358b59c6db33_
          (void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,void *param_2,
          uint param_3,bool param_4)

{
  void *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  void **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::UnposeMesh'::__l27::<lambda_3>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l27::<lambda_3>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ___f267ebe4726a59bee75bd9b8f20423ae_(&local_28);
  return (FTask *)0x0;
}

// ??@1473f98ef73f8a2314cc5ba4292012ca@ @ 1443942d0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
___1473f98ef73f8a2314cc5ba4292012ca_
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  undefined1 *puVar1;
  FTracedTask *pFVar2;
  FParallelForData *pFVar3;
  FTracedTask *pFVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  bool bVar7;
  ETaskPriority EVar8;
  uint uVar9;
  atomic<unsigned___int64> aVar10;
  FTask *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  FParallelForData *local_38;
  int local_30;
  undefined1 local_2c;
  FParallelForData *local_28;
  int local_20;
  undefined1 local_1c;
  
  pFVar3 = param_1->Reference;
  uVar14 = 0;
  uVar9 = 0;
  if (param_2 < (pFVar3->Tasks).ArrayNum) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (pFVar3->Tasks).AllocatorInstance.Data;
  pFVar2 = pFVar4 + param_2;
  if (pFVar4[param_2].TraceId != (atomic<unsigned___int64>)0xffffffffffffffff) {
    TaskTrace::Destroyed((ulong64)pFVar2->TraceId);
  }
  pwVar5 = param_1->Reference->DebugName;
  EVar8 = param_1->Reference->Priority;
  aVar10 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
  LOCK();
  pFVar2->TraceId = aVar10;
  UNLOCK();
  TaskTrace::Launched((ulong64)pFVar2->TraceId,pwVar5,false,AnyNormalThreadNormalTask,0);
  local_28 = param_1->Reference;
  param_1->Reference = (FParallelForData *)0x0;
  local_1c = 0;
  local_20 = param_2;
  if (((*(ulonglong *)&(pFVar2->Task).field_0x38 & 0x20) == 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_38 = local_28;
  local_30 = local_20;
  local_2c = local_1c;
  local_28 = (FParallelForData *)0x0;
  (**(code **)(*(longlong *)&(pFVar2->Task).field_0x28 + 0x18))(&(pFVar2->Task).field_0x28,pFVar2);
  *(_func___cdecl_void ***)&(pFVar2->Task).field_0x28 = _204831988bccc166d2478eb8436a26d6_;
  *(FParallelForData **)&pFVar2->Task = local_38;
  *(int *)&(pFVar2->Task).field_0x8 = local_30;
  (pFVar2->Task).field_0xc = local_2c;
  local_38 = (FParallelForData *)0x0;
  `ParallelForImpl::
  ParallelForInternal<`UE::Impl::PoseMesh'::__l23::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l23::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
  ::__l2::FParallelExecutor::~FParallelExecutor(&local_38);
  pFVar11 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar11 == (FTask *)0x0) {
    if (EVar8 == Inherit) {
      EVar8 = Default;
    }
  }
  else {
    if (EVar8 == Inherit) {
      EVar8 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar11->field_0x38 >> 0x3b);
    }
    uVar14 = *(undefined8 *)&pFVar11->field_0x30;
  }
  *(undefined8 *)&(pFVar2->Task).field_0x30 = uVar14;
  *(ulonglong *)&(pFVar2->Task).field_0x38 =
       ((longlong)(char)EVar8 << 0x35 | (ulonglong)pwVar5 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  `ParallelForImpl::
  ParallelForInternal<`UE::Impl::PoseMesh'::__l23::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l23::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
  ::__l2::FParallelExecutor::~FParallelExecutor(&local_28);
  uVar12 = *(ulonglong *)&(pFVar2->Task).field_0x38;
  do {
    puVar1 = &(pFVar2->Task).field_0x38;
    LOCK();
    uVar13 = *(ulonglong *)puVar1;
    bVar7 = uVar12 == uVar13;
    if (bVar7) {
      *(ulonglong *)puVar1 = uVar12 | 2;
      uVar13 = uVar12;
    }
    UNLOCK();
    uVar12 = uVar13;
  } while (!bVar7);
  if ((uVar13 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,&pFVar2->Task,GlobalQueuePreference,param_3);
  }
  else {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("LowLevelTasks::TryLaunch(TracedTask.Task, LowLevelTasks::EQueuePreference::GlobalQueuePreference, bWakeUpWorker)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                       ,0x19d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// ??@16562b3bb495de4a96dfb79f5709bc41@ @ 144394540

bool __thiscall ___16562b3bb495de4a96dfb79f5709bc41_(void *this)

{
  return true;
}

// ??@17af41342ad1108b400541f264acb2c7@ @ 144394550

FTask * __thiscall
___17af41342ad1108b400541f264acb2c7_
          (void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,void *param_2,
          uint param_3,bool param_4)

{
  void *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  void **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::PoseMesh'::__l23::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l23::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ___0a06cb971b4ce7c83ad881e2b682e5a3_(&local_28);
  return (FTask *)0x0;
}

// ??@196fa67cad7c31079aa70fb129e0d33b@ @ 1443945a0

bool __thiscall ___196fa67cad7c31079aa70fb129e0d33b_(void *this)

{
  return true;
}

// ??@20ccf37c07dac23c7eea75b6bf67bb12@ @ 1443945b0

void __cdecl ___20ccf37c07dac23c7eea75b6bf67bb12_(FTracedTask *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (ulonglong *)&(param_1->Task).field_0x38;
    do {
      if (((*puVar3 & 0x20) == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x204,L"State: %d"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(puVar3[-2] + 0x18))(puVar3 + -2,puVar3 + -7);
      puVar3 = puVar3 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ??@2777ba16e52c79ccecc7173330c84273@ @ 144394630

int __cdecl
___2777ba16e52c79ccecc7173330c84273_
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FTracedTask>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FTracedTask *_Src;
  FTracedTask *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_144394746;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_144394746:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FTracedTask *)0x0;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    _Src = param_4->Data;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FTracedTask *)0x0) &&
         (uVar3 = ((ulonglong)&_Src[0x38e].Task.field_0xf & 0xffffffffffff0000) - (longlong)_Src,
         uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ??@27cdbd080ae91fbd6f20f30291523e78@ @ 144394760

FTask * __thiscall
___27cdbd080ae91fbd6f20f30291523e78_
          (void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,void *param_2,
          uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::PoseMesh'::__l23::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l23::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper = (TTaskDelegateBase)_6c9325f8ffca6d17c25c782801fe307f_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// ??@2bac993d090edbae25fbc689e8d47d07@ @ 1443947c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall ___2bac993d090edbae25fbc689e8d47d07_(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    ___09e39cb29449e999f0e4f3a566e675de_(pTVar3,*(int *)&pTVar3[1].Reference,true);
  }
  pFVar4 = pTVar3->Reference;
  if (pFVar4 != (FParallelForData *)0x0) {
    puVar1 = &pFVar4->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pTVar3);
  return;
}

// ??@2cdee8d38d3d4aea9fb8a8202fae35ab@ @ 144394820

FTask * __thiscall
___2cdee8d38d3d4aea9fb8a8202fae35ab_
          (void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,void *param_2,
          uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::UnposeMesh'::__l27::<lambda_3>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l27::<lambda_3>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper = (TTaskDelegateBase)_a3cbfa81f92e7c0acf9f857a86fe5a07_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// ??@3003a185089c64a51859c49f7cd2bc51@ @ 144394880

bool __thiscall ___3003a185089c64a51859c49f7cd2bc51_(void *this)

{
  return true;
}

// ??@318cd4648139d6f59f0a7f0dea978650@ @ 144394890

FTask * __thiscall ___318cd4648139d6f59f0a7f0dea978650_(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::UnposeMesh'::__l27::<lambda_3>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l27::<lambda_3>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// ??@37506d6816866351dc09f9fc0aa6dcac@ @ 1443948c0

bool __thiscall ___37506d6816866351dc09f9fc0aa6dcac_(void *this)

{
  return true;
}

// ??@3ecfcde11abab653101f6a1dd3ec48db@ @ 1443948d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall ___3ecfcde11abab653101f6a1dd3ec48db_(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    ___f3d19495511a35e83dc3d145e6103de0_(param_1,*(int *)((longlong)param_1 + 8),true);
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014439491f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ??@4168f93702ab2f5a2da64efa1c731772@ @ 144394930

int __cdecl
___4168f93702ab2f5a2da64efa1c731772_
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FTracedTask>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FTracedTask *_Src;
  FTracedTask *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_144394a46;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_144394a46:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FTracedTask *)0x0;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    _Src = param_4->Data;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FTracedTask *)0x0) &&
         (uVar3 = ((ulonglong)&_Src[0x38e].Task.field_0xf & 0xffffffffffff0000) - (longlong)_Src,
         uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ??@4696e0bf267abe05460bb48a4b1a1c12@ @ 144394a60

uint __thiscall ___4696e0bf267abe05460bb48a4b1a1c12_(void *this)

{
  return 0x10;
}

// ??@495383f03dea70ef90427df14f1e6061@ @ 144394a70

void __thiscall
___495383f03dea70ef90427df14f1e6061_
          (void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)_08efaf720f551b9e0adc39125cbf4646_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@4aa06f52750e143f78944285de99ad7a@ @ 144394aa0

bool __thiscall ___4aa06f52750e143f78944285de99ad7a_(void *this)

{
  return true;
}

// ??@4dbf7a969e765ea5eb84490b61fe73c9@ @ 144394ab0

bool __thiscall ___4dbf7a969e765ea5eb84490b61fe73c9_(void *this)

{
  return true;
}

// ??@514cfd18c7b721aff3fd9b101cde3558@ @ 144394ac0

FTask * __thiscall ___514cfd18c7b721aff3fd9b101cde3558_(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::UnposeMesh'::__l24::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l24::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// ??@568f13bc8f1ae9b6a27156102ddbde99@ @ 144394af0

FTask * __thiscall
___568f13bc8f1ae9b6a27156102ddbde99_
          (void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,void *param_2,
          uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::PoseMesh'::__l20::<lambda_1>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l20::<lambda_1>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper = (TTaskDelegateBase)_c6e8a615586d2e142ee04c35d8b31799_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// ??@59402d2e9aa8b826575908348828769e@ @ 144394b50

void __thiscall
___59402d2e9aa8b826575908348828769e_
          (void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)_761328d14789a3a6a6b673262171c450_;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = 0;
    *(undefined4 *)((longlong)param_2 + 8) = *(undefined4 *)((longlong)param_3 + 8);
    *(undefined1 *)((longlong)param_2 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)_08efaf720f551b9e0adc39125cbf4646_;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = 0;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)param_3 + 8);
  *(undefined1 *)((longlong)puVar1 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@66bbf6086ff70b9200acb8f1377046f1@ @ 144394c10

FTask * __thiscall ___66bbf6086ff70b9200acb8f1377046f1_(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::PoseMesh'::__l20::<lambda_1>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l20::<lambda_1>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// ??@67a0ee09a56b5669f056e4f8457eb271@ @ 144394c40

FTask * __thiscall ___67a0ee09a56b5669f056e4f8457eb271_(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::PoseMesh'::__l23::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l23::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// ??@67c1276a1e1cdcd0592d2219868cb7a1@ @ 144394c70

uint __thiscall ___67c1276a1e1cdcd0592d2219868cb7a1_(void *this)

{
  return 0x10;
}

// ??@69fbbb8eeb9e85c22a8f60e536e0ce39@ @ 144394c80

bool __thiscall ___69fbbb8eeb9e85c22a8f60e536e0ce39_(void *this)

{
  return true;
}

// ??@6f57239c58f7b9efa8e997b70be02403@ @ 144394c90

int __cdecl
___6f57239c58f7b9efa8e997b70be02403_
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FTracedTask>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FTracedTask *_Src;
  FTracedTask *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_144394da6;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_144394da6:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FTracedTask *)0x0;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    _Src = param_4->Data;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FTracedTask *)0x0) &&
         (uVar3 = ((ulonglong)&_Src[0x38e].Task.field_0xf & 0xffffffffffff0000) - (longlong)_Src,
         uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ??@738ad8a71d42ae43fac4ca3e08dab406@ @ 144394dc0

void __thiscall
___738ad8a71d42ae43fac4ca3e08dab406_
          (void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)_c6e8a615586d2e142ee04c35d8b31799_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@75396670fc24680ffd2f83f4c4e8f82d@ @ 144394df0

int __cdecl
___75396670fc24680ffd2f83f4c4e8f82d_
          (uint param_1,uint param_2,int param_3,
          ForElementType<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FTracedTask>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FTracedTask *_Src;
  FTracedTask *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_144394f06;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_144394f06:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FTracedTask *)0x0;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    _Src = param_4->Data;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FTracedTask *)0x0) &&
         (uVar3 = ((ulonglong)&_Src[0x38e].Task.field_0xf & 0xffffffffffff0000) - (longlong)_Src,
         uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ??@76a1d5cea531bcb35565bd15c5c07e63@ @ 144394f20

uint __thiscall ___76a1d5cea531bcb35565bd15c5c07e63_(void *this)

{
  return 0x10;
}

// ??@7cf268a6dc41dc6a1663f2ded2ecae0b@ @ 144394f30

void __thiscall
___7cf268a6dc41dc6a1663f2ded2ecae0b_
          (void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)_6c9325f8ffca6d17c25c782801fe307f_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@7e796f787c29177868315cb594ed8750@ @ 144394f60

void __thiscall ___7e796f787c29177868315cb594ed8750_(void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(undefined8 **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x10) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = _c6e8a615586d2e142ee04c35d8b31799_;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *puVar2 = puVar4;
    *puVar4 = 0;
    *puVar4 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar4 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  else {
    puVar2[5] = _f1f79cb52e651b7ad17b61e143cb3838_;
    *puVar2 = 0;
    *puVar2 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@80370f17f65ac022297796a0096c2fa8@ @ 144395010

bool __thiscall ___80370f17f65ac022297796a0096c2fa8_(void *this)

{
  return true;
}

// ??@88e4392c1c82c7b291d487a9f7a0103e@ @ 144395020

FTask * __thiscall ___88e4392c1c82c7b291d487a9f7a0103e_(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::PoseMesh'::__l23::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l23::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_1,false);
  }
  return (FTask *)0x0;
}

// ??@8bd097a2982c3ad5434e3956ba659b7a@ @ 144395050

void __thiscall
___8bd097a2982c3ad5434e3956ba659b7a_
          (void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  *param_1 = (TTaskDelegateBase)_a3cbfa81f92e7c0acf9f857a86fe5a07_;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@8e9a484b24006482ef4ed632f7a98e80@ @ 144395080

void __cdecl ___8e9a484b24006482ef4ed632f7a98e80_(FTracedTask *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (ulonglong *)&(param_1->Task).field_0x38;
    do {
      if (((*puVar3 & 0x20) == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x204,L"State: %d"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(puVar3[-2] + 0x18))(puVar3 + -2,puVar3 + -7);
      puVar3 = puVar3 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ??@8ee8c8cee7c4765ddfa0969a92b3a62e@ @ 144395100

uint __thiscall ___8ee8c8cee7c4765ddfa0969a92b3a62e_(void *this)

{
  return 0x10;
}

// ??@9fba9618b76a00b7f0a5fd4bcfc432dd@ @ 144395110

uint __thiscall ___9fba9618b76a00b7f0a5fd4bcfc432dd_(void *this)

{
  return 0x10;
}

// ??@9fd763012b74176d227bb30b36d6f864@ @ 144395120

void __thiscall
___9fd763012b74176d227bb30b36d6f864_
          (void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)_1025b9a309c65213023e3260e086bbb6_;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = 0;
    *(undefined4 *)((longlong)param_2 + 8) = *(undefined4 *)((longlong)param_3 + 8);
    *(undefined1 *)((longlong)param_2 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)_a3cbfa81f92e7c0acf9f857a86fe5a07_;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = 0;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)param_3 + 8);
  *(undefined1 *)((longlong)puVar1 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@a190bb540138d3ec96dc2e65e690291e@ @ 1443951e0

FTask * __thiscall
___a190bb540138d3ec96dc2e65e690291e_
          (void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,void *param_2,
          uint param_3,bool param_4)

{
  void *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  void **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::PoseMesh'::__l20::<lambda_1>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l20::<lambda_1>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ___7e796f787c29177868315cb594ed8750_(&local_28);
  return (FTask *)0x0;
}

// ??@a5a81d0a6c6f2cae23bb87717de90ca0@ @ 144395230

bool __thiscall ___a5a81d0a6c6f2cae23bb87717de90ca0_(void *this)

{
  return true;
}

// ??@ac7dded8829b1034b864999e561f38f8@ @ 144395240

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall ___ac7dded8829b1034b864999e561f38f8_(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    ___1473f98ef73f8a2314cc5ba4292012ca_(pTVar3,*(int *)&pTVar3[1].Reference,true);
  }
  pFVar4 = pTVar3->Reference;
  if (pFVar4 != (FParallelForData *)0x0) {
    puVar1 = &pFVar4->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pTVar3);
  return;
}

// ??@b2596f6f901a0ad0800d4569d1c41f19@ @ 1443952a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall ___b2596f6f901a0ad0800d4569d1c41f19_(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    ___09e39cb29449e999f0e4f3a566e675de_(param_1,*(int *)((longlong)param_1 + 8),true);
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001443952ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ??@b26eefeeb7b63fb5e3fa7f047da3e15a@ @ 144395300

bool __thiscall ___b26eefeeb7b63fb5e3fa7f047da3e15a_(void *this)

{
  return true;
}

// ??@b34a44e58d85a9c4bac9bf978ebd6a97@ @ 144395310

void __cdecl ___b34a44e58d85a9c4bac9bf978ebd6a97_(FTracedTask *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ulonglong *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (ulonglong *)&(param_1->Task).field_0x38;
    do {
      if (((*puVar3 & 0x20) == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                             ,0x204,L"State: %d"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)(puVar3[-2] + 0x18))(puVar3 + -2,puVar3 + -7);
      puVar3 = puVar3 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ??@b5cc1e79a7f0a631a643e40aec3776e6@ @ 144395390

FTask * __thiscall
___b5cc1e79a7f0a631a643e40aec3776e6_
          (void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,void *param_2,
          uint param_3,bool param_4)

{
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::UnposeMesh'::__l24::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l24::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(*(void **)param_2,false);
  }
  param_1->CallableWrapper = (TTaskDelegateBase)_08efaf720f551b9e0adc39125cbf4646_;
  *(undefined8 *)param_1->InlineStorage = *(undefined8 *)param_2;
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return (FTask *)0x0;
}

// ??@b7f065a86b9518949f4f9640419f1aa6@ @ 1443953f0

uint __thiscall ___b7f065a86b9518949f4f9640419f1aa6_(void *this)

{
  return 0x10;
}

// ??@bb1124a6e06f06ea41258289c562c402@ @ 144395400

void __thiscall
___bb1124a6e06f06ea41258289c562c402_
          (void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)_204831988bccc166d2478eb8436a26d6_;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = 0;
    *(undefined4 *)((longlong)param_2 + 8) = *(undefined4 *)((longlong)param_3 + 8);
    *(undefined1 *)((longlong)param_2 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)_6c9325f8ffca6d17c25c782801fe307f_;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = 0;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)param_3 + 8);
  *(undefined1 *)((longlong)puVar1 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@bd2736bce3440400e65f2607db21ff24@ @ 1443954c0

FTask * __thiscall ___bd2736bce3440400e65f2607db21ff24_(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::UnposeMesh'::__l27::<lambda_3>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l27::<lambda_3>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// ??@c5fcd526a63c9da37051d96b36662e42@ @ 1443954f0

FTask * __thiscall ___c5fcd526a63c9da37051d96b36662e42_(void *this,void *param_1,bool param_2)

{
  if (param_2) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::PoseMesh'::__l20::<lambda_1>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l20::<lambda_1>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(param_1,false);
  }
  return (FTask *)0x0;
}

// ??@d332ac0b160a0f8c774bc8052cd3609a@ @ 144395520

FTask * __thiscall
___d332ac0b160a0f8c774bc8052cd3609a_
          (void *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,void *param_2,
          uint param_3,bool param_4)

{
  void *local_res18;
  uint local_res20 [2];
  void *local_28;
  TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *local_20;
  void **local_18;
  uint *local_10;
  
  local_18 = &local_res18;
  local_10 = local_res20;
  local_res18 = param_2;
  local_res20[0] = param_3;
  local_28 = this;
  local_20 = param_1;
  if (param_4) {
    `ParallelForImpl::
    ParallelForInternal<`UE::Impl::UnposeMesh'::__l24::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l24::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
    ::__l2::FParallelExecutor::operator()(param_2,false);
  }
  ___fa2bd614d3d7b58979858a87ee9679af_(&local_28);
  return (FTask *)0x0;
}

// ??@d88fdceb009e448df789b147dfac7112@ @ 144395570

bool __thiscall ___d88fdceb009e448df789b147dfac7112_(void *this)

{
  return true;
}

// ??@d9e66e0f1bd9d5dcc710c26e362c7938@ @ 144395580

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall ___d9e66e0f1bd9d5dcc710c26e362c7938_(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    ___02c0945b3e82fc612ce7d8f712de7352_(param_1,*(int *)((longlong)param_1 + 8),true);
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001443955cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ??@da1c49506ee8eb07481990bb0daa5244@ @ 1443955e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall ___da1c49506ee8eb07481990bb0daa5244_(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)param_1 != 0) && (*(char *)((longlong)param_1 + 0xc) != '\0')) {
    ___1473f98ef73f8a2314cc5ba4292012ca_(param_1,*(int *)((longlong)param_1 + 8),true);
  }
  puVar3 = *(undefined8 **)param_1;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014439562f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ??@ddcabc5d76c91dd7632317cbeff8854e@ @ 144395640

void __thiscall
___ddcabc5d76c91dd7632317cbeff8854e_
          (void *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined8 *puVar1;
  
  if ((0xf < param_4) && (((ulonglong)param_2 & 7) == 0)) {
    *param_1 = (TTaskDelegateBase)_f1f79cb52e651b7ad17b61e143cb3838_;
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = 0;
    *(undefined4 *)((longlong)param_2 + 8) = *(undefined4 *)((longlong)param_3 + 8);
    *(undefined1 *)((longlong)param_2 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
    *(undefined ***)this =
         &
         ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    return;
  }
  *param_1 = (TTaskDelegateBase)_c6e8a615586d2e142ee04c35d8b31799_;
  puVar1 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8);
  *(undefined8 **)param_2 = puVar1;
  *puVar1 = 0;
  *puVar1 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = 0;
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)((longlong)param_3 + 8);
  *(undefined1 *)((longlong)puVar1 + 0xc) = *(undefined1 *)((longlong)param_3 + 0xc);
  *(undefined ***)this =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@e11755f116f9e36e12f5c8ef85c56436@ @ 144395700

bool __thiscall ___e11755f116f9e36e12f5c8ef85c56436_(void *this)

{
  return true;
}

// ??@e295efdf613ba269a5d7925f7638ef67@ @ 144395710

bool __thiscall ___e295efdf613ba269a5d7925f7638ef67_(void *this)

{
  return false;
}

// ??@e3a550e49a3a05653069e565686188be@ @ 144395720

bool __thiscall ___e3a550e49a3a05653069e565686188be_(void *this)

{
  return false;
}

// ??@ea60f510696e0e3b87f494aaa3315aab@ @ 144395730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall ___ea60f510696e0e3b87f494aaa3315aab_(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    ___f3d19495511a35e83dc3d145e6103de0_(pTVar3,*(int *)&pTVar3[1].Reference,true);
  }
  pFVar4 = pTVar3->Reference;
  if (pFVar4 != (FParallelForData *)0x0) {
    puVar1 = &pFVar4->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pTVar3);
  return;
}

// ??@ed8994d22836c96d5635eda66b288a74@ @ 144395790

uint __thiscall ___ed8994d22836c96d5635eda66b288a74_(void *this)

{
  return 0x10;
}

// ??@f267ebe4726a59bee75bd9b8f20423ae@ @ 1443957a0

void __thiscall ___f267ebe4726a59bee75bd9b8f20423ae_(void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(undefined8 **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x10) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = _a3cbfa81f92e7c0acf9f857a86fe5a07_;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *puVar2 = puVar4;
    *puVar4 = 0;
    *puVar4 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar4 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  else {
    puVar2[5] = _1025b9a309c65213023e3260e086bbb6_;
    *puVar2 = 0;
    *puVar2 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@f3d19495511a35e83dc3d145e6103de0@ @ 144395850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
___f3d19495511a35e83dc3d145e6103de0_
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  undefined1 *puVar1;
  FTracedTask *pFVar2;
  FParallelForData *pFVar3;
  FTracedTask *pFVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  bool bVar7;
  ETaskPriority EVar8;
  uint uVar9;
  atomic<unsigned___int64> aVar10;
  FTask *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  FParallelForData *local_38;
  int local_30;
  undefined1 local_2c;
  FParallelForData *local_28;
  int local_20;
  undefined1 local_1c;
  
  pFVar3 = param_1->Reference;
  uVar14 = 0;
  uVar9 = 0;
  if (param_2 < (pFVar3->Tasks).ArrayNum) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (pFVar3->Tasks).AllocatorInstance.Data;
  pFVar2 = pFVar4 + param_2;
  if (pFVar4[param_2].TraceId != (atomic<unsigned___int64>)0xffffffffffffffff) {
    TaskTrace::Destroyed((ulong64)pFVar2->TraceId);
  }
  pwVar5 = param_1->Reference->DebugName;
  EVar8 = param_1->Reference->Priority;
  aVar10 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
  LOCK();
  pFVar2->TraceId = aVar10;
  UNLOCK();
  TaskTrace::Launched((ulong64)pFVar2->TraceId,pwVar5,false,AnyNormalThreadNormalTask,0);
  local_28 = param_1->Reference;
  param_1->Reference = (FParallelForData *)0x0;
  local_1c = 0;
  local_20 = param_2;
  if (((*(ulonglong *)&(pFVar2->Task).field_0x38 & 0x20) == 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_38 = local_28;
  local_30 = local_20;
  local_2c = local_1c;
  local_28 = (FParallelForData *)0x0;
  (**(code **)(*(longlong *)&(pFVar2->Task).field_0x28 + 0x18))(&(pFVar2->Task).field_0x28,pFVar2);
  *(_func___cdecl_void ***)&(pFVar2->Task).field_0x28 = _1025b9a309c65213023e3260e086bbb6_;
  *(FParallelForData **)&pFVar2->Task = local_38;
  *(int *)&(pFVar2->Task).field_0x8 = local_30;
  (pFVar2->Task).field_0xc = local_2c;
  local_38 = (FParallelForData *)0x0;
  `ParallelForImpl::
  ParallelForInternal<`UE::Impl::UnposeMesh'::__l27::<lambda_3>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l27::<lambda_3>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
  ::__l2::FParallelExecutor::~FParallelExecutor(&local_38);
  pFVar11 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar11 == (FTask *)0x0) {
    if (EVar8 == Inherit) {
      EVar8 = Default;
    }
  }
  else {
    if (EVar8 == Inherit) {
      EVar8 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar11->field_0x38 >> 0x3b);
    }
    uVar14 = *(undefined8 *)&pFVar11->field_0x30;
  }
  *(undefined8 *)&(pFVar2->Task).field_0x30 = uVar14;
  *(ulonglong *)&(pFVar2->Task).field_0x38 =
       ((longlong)(char)EVar8 << 0x35 | (ulonglong)pwVar5 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  `ParallelForImpl::
  ParallelForInternal<`UE::Impl::UnposeMesh'::__l27::<lambda_3>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l27::<lambda_3>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
  ::__l2::FParallelExecutor::~FParallelExecutor(&local_28);
  uVar12 = *(ulonglong *)&(pFVar2->Task).field_0x38;
  do {
    puVar1 = &(pFVar2->Task).field_0x38;
    LOCK();
    uVar13 = *(ulonglong *)puVar1;
    bVar7 = uVar12 == uVar13;
    if (bVar7) {
      *(ulonglong *)puVar1 = uVar12 | 2;
      uVar13 = uVar12;
    }
    UNLOCK();
    uVar12 = uVar13;
  } while (!bVar7);
  if ((uVar13 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,&pFVar2->Task,GlobalQueuePreference,param_3);
  }
  else {
    bVar7 = FDebug::CheckVerifyFailedImpl2
                      ("LowLevelTasks::TryLaunch(TracedTask.Task, LowLevelTasks::EQueuePreference::GlobalQueuePreference, bWakeUpWorker)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                       ,0x19d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// ??@f504dda5953cc19142a2679f788c09b2@ @ 144395ac0

uint __thiscall ___f504dda5953cc19142a2679f788c09b2_(void *this)

{
  return 0x10;
}

// ??@f90376d4d298c540ad2429aff49ddf07@ @ 144395ad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall ___f90376d4d298c540ad2429aff49ddf07_(void *this,void *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  *pTVar3;
  FParallelForData *pFVar4;
  
  pTVar3 = *(TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
             **)param_1;
  if ((pTVar3->Reference != (FParallelForData *)0x0) &&
     (*(char *)((longlong)&pTVar3[1].Reference + 4) != '\0')) {
    ___02c0945b3e82fc612ce7d8f712de7352_(pTVar3,*(int *)&pTVar3[1].Reference,true);
  }
  pFVar4 = pTVar3->Reference;
  if (pFVar4 != (FParallelForData *)0x0) {
    puVar1 = &pFVar4->field_0x8;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Free(pTVar3);
  return;
}

// ??@f9ebed6430bb171960091092d45afa06@ @ 144395b30

bool __thiscall ___f9ebed6430bb171960091092d45afa06_(void *this)

{
  return false;
}

// ??@fa2bd614d3d7b58979858a87ee9679af@ @ 144395b40

void __thiscall ___fa2bd614d3d7b58979858a87ee9679af_(void *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)((longlong)this + 8);
  puVar3 = (undefined8 *)**(undefined8 **)((longlong)this + 0x10);
  if ((**(uint **)((longlong)this + 0x18) < 0x10) || (((ulonglong)puVar2 & 7) != 0)) {
    puVar2[5] = _08efaf720f551b9e0adc39125cbf4646_;
    puVar4 = TLinearAllocatorBase<LowLevelTasks::FLowLevelTasksBlockAllocationTag,0>::Malloc(0x10,8)
    ;
    *puVar2 = puVar4;
    *puVar4 = 0;
    *puVar4 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar4 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  else {
    puVar2[5] = _761328d14789a3a6a6b673262171c450_;
    *puVar2 = 0;
    *puVar2 = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar3 + 0xc);
  }
  *puVar1 = &
            ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  return;
}

// ??@fb13b4e5b8aa5ceb7aa828c0e6ec5851@ @ 144395bf0

bool __thiscall ___fb13b4e5b8aa5ceb7aa828c0e6ec5851_(void *this)

{
  return false;
}

// `scalar_deleting_destructor' @ 14439b0f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::GetBox'::__l5::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_UFMeshDescriptionTriangleMeshAdapter___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14439b130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::TestIntersection'::__l11::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_UFMeshDescriptionTriangleMeshAdapter___Geometry_UE__UEBA_NPEBUFMeshDescriptionTriangleMeshAdapter__U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14439b170

void * __thiscall
UE::Geometry::TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>::_scalar_deleting_destructor_
          (TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter> *this,uint param_1)

{
  ~TMeshAABBTree3<FMeshDescriptionTriangleMeshAdapter>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14439b1b0

void * __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::Impl::PoseMesh'::__l20::<lambda_1>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l20::<lambda_1>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
::__l2::FParallelForData::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  *(undefined ***)this =
       &ParallelForInternal<`UE::Impl::PoseMesh'::`20'::<lambda_1>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::`20'::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::`20'::<lambda_1>_>'::`5'::<lambda_1>,`UE::Impl::PoseMesh'::`20'::FMorphProcessContext>'
        ::`2'::FParallelForData::_vftable_;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<`UE::Impl::PoseMesh'::__l20::<lambda_1>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l20::<lambda_1>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  ___8e9a484b24006482ef4ed632f7a98e80_
            (*(FTracedTask **)((longlong)this + 0x78),*(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(*(void **)((longlong)this + 0x78));
  }
  *(undefined ***)this = &___7FThreadSafeRefCountedObject__6B_;
  if (*(int *)((longlong)this + 8) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
    }
    else {
      __empty_global_delete(this,0xc0,0x40);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14439b2c0

void * __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::Impl::PoseMesh'::__l23::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l23::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
::__l2::FParallelForData::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  *(undefined ***)this =
       &ParallelForInternal<`UE::Impl::PoseMesh'::`23'::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::`20'::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::`23'::<lambda_2>_>'::`5'::<lambda_1>,`UE::Impl::PoseMesh'::`20'::FMorphProcessContext>'
        ::`2'::FParallelForData::_vftable_;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<`UE::Impl::PoseMesh'::__l23::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l23::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  ___09a7c4729b13bfd42b52746f51a2785b_
            (*(FTracedTask **)((longlong)this + 0x78),*(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(*(void **)((longlong)this + 0x78));
  }
  *(undefined ***)this = &___7FThreadSafeRefCountedObject__6B_;
  if (*(int *)((longlong)this + 8) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
    }
    else {
      __empty_global_delete(this,0xc0,0x40);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14439b3d0

void * __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::Impl::UnposeMesh'::__l24::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l24::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
::__l2::FParallelForData::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  *(undefined ***)this =
       &ParallelForInternal<`UE::Impl::UnposeMesh'::`24'::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::`24'::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::`24'::<lambda_2>_>'::`5'::<lambda_1>,`UE::Impl::UnposeMesh'::`24'::FMorphProcessContext>'
        ::`2'::FParallelForData::_vftable_;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<`UE::Impl::UnposeMesh'::__l24::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l24::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  ___20ccf37c07dac23c7eea75b6bf67bb12_
            (*(FTracedTask **)((longlong)this + 0x78),*(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(*(void **)((longlong)this + 0x78));
  }
  *(undefined ***)this = &___7FThreadSafeRefCountedObject__6B_;
  if (*(int *)((longlong)this + 8) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
    }
    else {
      __empty_global_delete(this,0xc0,0x40);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14439b4e0

void * __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::Impl::UnposeMesh'::__l27::<lambda_3>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l27::<lambda_3>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
::__l2::FParallelForData::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  
  *(undefined ***)this =
       &ParallelForInternal<`UE::Impl::UnposeMesh'::`27'::<lambda_3>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::`24'::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::`27'::<lambda_3>_>'::`5'::<lambda_1>,`UE::Impl::UnposeMesh'::`24'::FMorphProcessContext>'
        ::`2'::FParallelForData::_vftable_;
  iVar2 = *(int *)((longlong)this + 0x80);
  lVar6 = *(longlong *)((longlong)this + 0x78);
  lVar1 = lVar6 + (longlong)iVar2 * 0x48;
  while( true ) {
    if (*(int *)((longlong)this + 0x80) != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<`ParallelForImpl::ParallelForInternal<`UE::Impl::UnposeMesh'::__l27::<lambda_3>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l27::<lambda_3>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'::__l2::FTracedTask,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (lVar6 == lVar1) break;
    if (*(longlong *)(lVar6 + 0x40) != -1) {
      TaskTrace::Destroyed(*(ulong64 *)(lVar6 + 0x40));
    }
    lVar6 = lVar6 + 0x48;
  }
  ___b34a44e58d85a9c4bac9bf978ebd6a97_
            (*(FTracedTask **)((longlong)this + 0x78),*(int *)((longlong)this + 0x80));
  if (*(void **)((longlong)this + 0x78) != (void *)0x0) {
    TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(*(void **)((longlong)this + 0x78));
  }
  *(undefined ***)this = &___7FThreadSafeRefCountedObject__6B_;
  if (*(int *)((longlong)this + 8) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar3)();
      return pvVar5;
    }
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
    }
    else {
      __empty_global_delete(this,0xc0,0x40);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14439b5f0

void * __thiscall
FSkeletalMeshAttributes::_scalar_deleting_destructor_(FSkeletalMeshAttributes *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14439b620

void * __thiscall
USkeletalMeshDescription::_scalar_deleting_destructor_(USkeletalMeshDescription *this,uint param_1)

{
  *(undefined ***)this = &___7USkeletalMeshDescription__6B_;
  UMeshDescriptionBase::~UMeshDescriptionBase((UMeshDescriptionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeSkeletalMeshDescription @ 1443a0950

void __cdecl EmptyLinkFunctionForGeneratedCodeSkeletalMeshDescription(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSkeletalMeshDescription_init @ 1443a0960

void __cdecl EmptyLinkFunctionForGeneratedCodeSkeletalMeshDescription_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSkeletalMeshElementTypes @ 1443a0970

void __cdecl EmptyLinkFunctionForGeneratedCodeSkeletalMeshElementTypes(void)

{
  return;
}

// FindMatchingPositionVertexIndexes @ 1443a0ef0

void __cdecl
RigApplicationHelpers::FindMatchingPositionVertexIndexes
          (TVector<float> *param_1,
          TArray<RigApplicationHelpers::FIndexAndZ,TSizedDefaultAllocator<32>_> *param_2,
          TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_> param_3,float param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this;
  TVector<float> *pTVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  double dVar19;
  float fVar20;
  
  uVar13 = 0;
  iVar3 = param_2->ArrayNum;
  param_5->ArrayNum = 0;
  if (param_5->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
  }
  if (iVar3 != 0) {
    uVar17 = (ulonglong)param_2->ArrayNum;
    uVar14 = iVar3 - 1;
    uVar10 = 0;
    if ((int)uVar14 < param_2->ArrayNum) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    fVar20 = (param_1->field0_0x0)._s_0.Y * __real_3ea8f5c3 +
             (param_1->field0_0x0)._s_0.X * __real_3e99999a +
             (param_1->field0_0x0)._s_0.Z * __real_3ebd70a4;
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (param_2->AllocatorInstance).Data;
    if ((param_2->ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar1 = *(float *)(pFVar4 + (longlong)(int)uVar14 * 8);
    fVar2 = *(float *)(param_2->AllocatorInstance).Data;
    if ((param_2->ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    dVar19 = ((double)fVar20 - (double)*(float *)(param_2->AllocatorInstance).Data) * (double)iVar3;
    uVar16 = (longlong)
             ROUND((dVar19 + dVar19) / ((double)fVar1 - (double)fVar2) + __real_3fe0000000000000) >>
             1;
    do {
      while( true ) {
        uVar14 = (uint)uVar16;
        iVar8 = (int)uVar13;
        if ((((int)uVar14 < 0) || (param_2->ArrayNum <= (int)uVar14)) || ((int)uVar17 - iVar8 < 5))
        goto LAB_1443a1169;
        if (((int)uVar14 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((float)((uint)(fVar20 - *(float *)((param_2->AllocatorInstance).Data +
                                              (longlong)(int)uVar14 * 8)) & uVar10) < param_4)
        break;
        uVar11 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (fVar20 <= param_4 + *(float *)((param_2->AllocatorInstance).Data +
                                          (longlong)(int)uVar14 * 8)) {
          uVar17 = uVar16 & 0xffffffff;
          iVar15 = (int)(uVar14 - iVar8) / 2;
          iVar8 = 1;
          if (1 < iVar15) {
            iVar8 = iVar15;
          }
          uVar16 = (ulonglong)(uVar14 - iVar8);
        }
        else {
          uVar13 = uVar16 & 0xffffffff;
          iVar15 = (int)((int)uVar17 - uVar14) / 2;
          iVar8 = 1;
          if (1 < iVar15) {
            iVar8 = iVar15;
          }
          uVar16 = (ulonglong)(uVar14 + iVar8);
        }
      }
      uVar17 = uVar16 & 0xffffffff;
      iVar15 = uVar14 - iVar8;
      if (iVar15 < 0) {
        iVar15 = iVar15 + 1;
      }
      uVar14 = (iVar15 >> 1) + iVar8;
      uVar16 = (ulonglong)uVar14;
    } while (iVar8 < (int)uVar14);
LAB_1443a1169:
    for (lVar18 = (longlong)iVar8; lVar18 < iVar3; lVar18 = lVar18 + 1) {
      uVar12 = (uint)uVar13;
      uVar11 = ~uVar12 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar12 < param_2->ArrayNum) {
        uVar14 = uVar11;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (fVar20 <= param_4 + *(float *)((param_2->AllocatorInstance).Data + lVar18 * 8)) {
        uVar14 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar14 = uVar11;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (fVar20 + param_4 < *(float *)((param_2->AllocatorInstance).Data + lVar18 * 8)) {
          return;
        }
        uVar14 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar14 = uVar11;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = *(int *)((param_2->AllocatorInstance).Data + lVar18 * 8 + 4);
        this = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                         ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_3.ArrayPtr,0);
        pTVar9 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this,iVar8);
        if ((((float)((uint)((pTVar9->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X) & uVar10)
              <= param_4) &&
            ((float)((uint)((pTVar9->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y) & uVar10) <=
             param_4)) &&
           ((float)((uint)((pTVar9->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z) & uVar10) <=
            param_4)) {
          uVar14 = 0;
          if ((int)uVar12 < param_2->ArrayNum) {
            uVar14 = uVar11;
          }
          if ((uVar14 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (param_5->AllocatorInstance).Data;
          pFVar4 = (param_2->AllocatorInstance).Data + lVar18 * 8 + 4;
          if (((pFVar5 <= pFVar4) && (pFVar4 < pFVar5 + (longlong)param_5->ArrayMax * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar8 = param_5->ArrayNum;
          if (iVar8 == param_5->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_5->AllocatorInstance,&param_5->ArrayMax);
          }
          param_5->ArrayNum = iVar8 + 1;
          *(undefined4 *)((param_5->AllocatorInstance).Data + (longlong)iVar8 * 4) =
               *(undefined4 *)pFVar4;
        }
      }
      uVar13 = (ulonglong)(uVar12 + 1);
    }
  }
  return;
}

// FindNearestVertexIndices @ 1443a1860

void __cdecl
RigApplicationHelpers::FindNearestVertexIndices
          (TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>
           *param_1,TVector<float> *param_2,
          TArray<RigApplicationHelpers::FVertexInfo,TSizedDefaultAllocator<32>_> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  <lambda_1> local_res8;
  TVector4<double>_u_0 local_98;
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  
  iVar7 = 0;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  fVar6 = __real_3f800000;
  fVar5 = __real_3d4ccccd;
  fVar4 = __real_38d1b717;
  dVar1 = (param_1->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Z;
  dVar2 = (param_1->RootNodeContext).Bounds.Extent.field0_0x0._s_0.X;
  dVar3 = (param_1->RootNodeContext).Bounds.Extent.field0_0x0._s_0.Y;
  fVar10 = (float)SQRT(dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1);
  fVar9 = fVar10 * __real_3ba3d70a;
  if (fVar9 <= __real_38d1b717) {
    fVar9 = __real_38d1b717;
  }
  do {
    local_78 = (double)fVar9;
    local_98._s_0.X = (double)(float)*(undefined8 *)&param_2->field0_0x0;
    local_98._s_0.Y = (double)(float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
    local_98._s_0.Z = (double)(param_2->field0_0x0)._s_0.Z;
    local_98._s_0.W = 0.0;
    local_60 = 0;
    local_res8.OutNearestVertices = param_3;
    local_70 = local_78;
    local_68 = local_78;
    TOctree2<RigApplicationHelpers::FVertexInfo,RigApplicationHelpers::FVertexInfoOctreeSemantics>::
    FindElementsWithBoundsTestInternal<_RigApplicationHelpers::FindNearestVertexIndices_::__l4::<lambda_1>_>
              (param_1,0,&param_1->RootNodeContext,(FBoxCenterAndExtent *)&local_98._s_0,&local_res8
              );
    if (param_3->ArrayNum != 0) {
      return;
    }
    iVar8 = iVar7 + 1;
    fVar9 = ((float)iVar7 + fVar6) * fVar5 * fVar10;
    if (fVar9 <= fVar4) {
      fVar9 = fVar4;
    }
    iVar7 = iVar8;
  } while (iVar8 < 5);
  return;
}

// GetSmallestDeltaBetweenTriangleLists @ 1443a7140

float __cdecl
RigApplicationHelpers::GetSmallestDeltaBetweenTriangleLists
          (TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_> *param_2,
          TMeshAttributesRef<FTriangleID,TArrayView<FVertexID_const_,int>_> *param_3,
          TMeshAttributesRef<FTriangleID,TArrayView<FVertexID_const_,int>_> *param_4,
          TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_> param_5,
          TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_> param_6)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  FMeshAttributeArraySetBase *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar15;
  TVector<float> *pTVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong *plVar21;
  FScriptContainerElement *pFVar22;
  int *piVar23;
  FMeshAttributeArraySetBase *pFVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 local_178;
  undefined1 local_177 [7];
  FScriptContainerElement *local_170;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  uint local_150;
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  FScriptContainerElement *local_108;
  undefined8 local_100;
  undefined8 local_f0;
  
  local_150 = param_1->ArrayNum;
  uVar18 = (ulonglong)(int)local_150;
  pFVar22 = (param_1->AllocatorInstance).Data;
  local_108 = pFVar22 + uVar18 * 4;
  local_160 = __real_7f7fffff;
  fVar27 = __real_7f7fffff;
  do {
    pFVar13 = local_108;
    local_118 = pFVar22;
    if (param_1->ArrayNum != (int)uVar18) {
      local_178 = 0;
      `TCheckedPointerIterator<FTriangleID_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_178);
    }
    if (pFVar22 == pFVar13) {
      return fVar27;
    }
    pFVar5 = param_3->ArrayPtr;
    uVar19 = *(uint *)pFVar22;
    if (param_3->Extent == 0) {
      if (((int)pFVar5[2].Type < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
      pFVar24 = pFVar5 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar24 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
      }
      uVar26 = (int)uVar19 >> 8;
      uVar20 = 0;
      if ((int)uVar26 < (int)pFVar24->Type) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
      plVar21 = (longlong *)((longlong)(int)uVar26 * 0xc18 + pFVar24->_padding_);
      uVar20 = *(uint *)((longlong)plVar21 + (ulonglong)(uVar19 & 0xff) * 4 + 0x410);
      piVar23 = (int *)(*plVar21 +
                       (longlong)*(int *)((longlong)plVar21 + (ulonglong)(uVar19 & 0xff) * 4 + 0x10)
                       * 4);
      if (((int)uVar20 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
LAB_1443a73e3:
      bVar14 = (int)uVar20 < 0;
    }
    else {
      if (((int)pFVar5[2].Type < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
      pFVar24 = pFVar5 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar24 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
      }
      uVar19 = uVar19 * pFVar24->NumElements;
      uVar20 = 0;
      if ((int)uVar19 < (int)pFVar24->Type) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
      uVar20 = param_3->Extent;
      piVar23 = (int *)(pFVar24->_padding_ + (longlong)(int)uVar19 * 4);
      bVar14 = false;
      if ((int)uVar20 < 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L"");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
        goto LAB_1443a73e3;
      }
    }
    if ((uVar20 == 0 || bVar14) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      fVar27 = (float)(*pcVar6)();
      return fVar27;
    }
    iVar2 = *piVar23;
    pTVar15 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_5.ArrayPtr,0);
    pTVar16 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar15,iVar2);
    pFVar5 = param_3->ArrayPtr;
    uVar19 = *(uint *)pFVar22;
    local_148 = *(undefined8 *)&pTVar16->field0_0x0;
    local_140 = (pTVar16->field0_0x0)._s_0.Z;
    if (param_3->Extent == 0) {
      if (((int)pFVar5[2].Type < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
      pFVar24 = pFVar5 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar24 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
      }
      uVar26 = (int)uVar19 >> 8;
      uVar20 = 0;
      if ((int)uVar26 < (int)pFVar24->Type) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
      plVar21 = (longlong *)((longlong)(int)uVar26 * 0xc18 + pFVar24->_padding_);
      uVar20 = *(uint *)((longlong)plVar21 + (ulonglong)(uVar19 & 0xff) * 4 + 0x410);
      lVar17 = *plVar21 +
               (longlong)*(int *)((longlong)plVar21 + (ulonglong)(uVar19 & 0xff) * 4 + 0x10) * 4;
      if (((int)uVar20 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
    }
    else {
      if (((int)pFVar5[2].Type < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
      pFVar24 = pFVar5 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar24 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
      }
      uVar19 = uVar19 * pFVar24->NumElements;
      uVar20 = 0;
      if ((int)uVar19 < (int)pFVar24->Type) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
      uVar20 = param_3->Extent;
      lVar17 = pFVar24->_padding_ + (longlong)(int)uVar19 * 4;
      if (((int)uVar20 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
    }
    if (((int)uVar20 < 2) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      fVar27 = (float)(*pcVar6)();
      return fVar27;
    }
    iVar2 = *(int *)(lVar17 + 4);
    pTVar15 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_5.ArrayPtr,0);
    pTVar16 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar15,iVar2);
    pFVar5 = param_3->ArrayPtr;
    uVar19 = *(uint *)pFVar22;
    local_138 = *(undefined8 *)&pTVar16->field0_0x0;
    local_130 = (pTVar16->field0_0x0)._s_0.Z;
    if (param_3->Extent == 0) {
      if (((int)pFVar5[2].Type < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
      pFVar24 = pFVar5 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar24 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
      }
      uVar26 = (int)uVar19 >> 8;
      uVar20 = 0;
      if ((int)uVar26 < (int)pFVar24->Type) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
      plVar21 = (longlong *)((longlong)(int)uVar26 * 0xc18 + pFVar24->_padding_);
      uVar20 = *(uint *)((longlong)plVar21 + (ulonglong)(uVar19 & 0xff) * 4 + 0x10);
      uVar19 = *(uint *)((longlong)plVar21 + (ulonglong)(uVar19 & 0xff) * 4 + 0x410);
      lVar17 = *plVar21;
    }
    else {
      if (((int)pFVar5[2].Type < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
      pFVar24 = pFVar5 + 1;
      if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0) {
        pFVar24 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
      }
      uVar20 = uVar19 * pFVar24->NumElements;
      uVar19 = 0;
      if ((int)uVar20 < (int)pFVar24->Type) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
      lVar17 = pFVar24->_padding_;
      uVar19 = param_3->Extent;
    }
    if (((int)uVar19 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      fVar27 = (float)(*pcVar6)();
      return fVar27;
    }
    if (((int)uVar19 < 3) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      fVar27 = (float)(*pcVar6)();
      return fVar27;
    }
    iVar2 = *(int *)(lVar17 + (longlong)(int)uVar20 * 4 + 8);
    pTVar15 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_5.ArrayPtr,0);
    pTVar16 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar15,iVar2);
    fVar12 = local_130;
    fVar9 = local_140;
    fVar8 = local_148._4_4_;
    uVar1 = *(undefined8 *)&pTVar16->field0_0x0;
    pFVar22 = (param_2->AllocatorInstance).Data;
    iVar2 = param_2->ArrayNum;
    fVar3 = (pTVar16->field0_0x0)._s_0.Z;
    fVar7 = (float)local_148;
    fVar11 = local_138._4_4_;
    local_110 = pFVar22 + (longlong)iVar2 * 4;
    fVar10 = (float)local_138;
    local_128._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_154 = local_128._4_4_;
    local_128._0_4_ = (float)uVar1;
    local_158 = (float)local_128;
    fVar28 = local_160;
    local_128 = uVar1;
    local_120 = fVar3;
    while( true ) {
      local_160 = fVar28;
      pFVar13 = local_110;
      local_170 = pFVar22;
      if (param_2->ArrayNum != iVar2) {
        local_177[0] = 0;
        `TCheckedPointerIterator<FTriangleID_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_177);
      }
      if (pFVar22 == pFVar13) break;
      pFVar5 = param_4->ArrayPtr;
      uVar19 = *(uint *)pFVar22;
      uVar20 = 0;
      if (param_4->Extent == 0) {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
        pFVar24 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar24 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        uVar25 = (int)uVar19 >> 8;
        uVar26 = uVar20;
        if ((int)uVar25 < (int)pFVar24->Type) {
          uVar26 = ~uVar25 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
        plVar21 = (longlong *)((longlong)(int)uVar25 * 0xc18 + pFVar24->_padding_);
        uVar26 = *(uint *)((longlong)plVar21 + (ulonglong)(uVar19 & 0xff) * 4 + 0x410);
        piVar23 = (int *)(*plVar21 +
                         (longlong)
                         *(int *)((longlong)plVar21 + (ulonglong)(uVar19 & 0xff) * 4 + 0x10) * 4);
        pFVar22 = local_170;
        if (((int)uVar26 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), pFVar22 = local_170, bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
LAB_1443a7ad3:
        bVar14 = (int)uVar26 < 0;
      }
      else {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
        pFVar24 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar24 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        uVar19 = uVar19 * pFVar24->NumElements;
        uVar26 = uVar20;
        if ((int)uVar19 < (int)pFVar24->Type) {
          uVar26 = ~uVar19 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
        uVar26 = param_4->Extent;
        piVar23 = (int *)(pFVar24->_padding_ + (longlong)(int)uVar19 * 4);
        bVar14 = false;
        if ((int)uVar26 < 0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L"");
          if (bVar14) {
            pcVar6 = (code *)swi(3);
            fVar27 = (float)(*pcVar6)();
            return fVar27;
          }
          goto LAB_1443a7ad3;
        }
      }
      if ((uVar26 == 0 || bVar14) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
      iVar4 = *piVar23;
      pTVar15 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_6.ArrayPtr,0);
      pTVar16 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar15,iVar4);
      pFVar5 = param_4->ArrayPtr;
      uVar19 = *(uint *)pFVar22;
      local_100 = *(undefined8 *)&pTVar16->field0_0x0;
      local_15c = (pTVar16->field0_0x0)._s_0.Z;
      if (param_4->Extent == 0) {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
        pFVar24 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar24 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        uVar26 = (int)uVar19 >> 8;
        if ((int)uVar26 < (int)pFVar24->Type) {
          uVar20 = ~uVar26 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
        plVar21 = (longlong *)((longlong)(int)uVar26 * 0xc18 + pFVar24->_padding_);
        uVar20 = *(uint *)((longlong)plVar21 + (ulonglong)(uVar19 & 0xff) * 4 + 0x410);
        lVar17 = *plVar21 +
                 (longlong)*(int *)((longlong)plVar21 + (ulonglong)(uVar19 & 0xff) * 4 + 0x10) * 4;
        pFVar22 = local_170;
        if (((int)uVar20 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), pFVar22 = local_170, bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
      }
      else {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
        pFVar24 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar24 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        uVar19 = uVar19 * pFVar24->NumElements;
        if ((int)uVar19 < (int)pFVar24->Type) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
        uVar20 = param_4->Extent;
        lVar17 = pFVar24->_padding_ + (longlong)(int)uVar19 * 4;
        if (((int)uVar20 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
      }
      if (((int)uVar20 < 2) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
      iVar4 = *(int *)(lVar17 + 4);
      pTVar15 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_6.ArrayPtr,0);
      pTVar16 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar15,iVar4);
      pFVar5 = param_4->ArrayPtr;
      uVar19 = *(uint *)pFVar22;
      local_f0 = *(undefined8 *)&pTVar16->field0_0x0;
      fVar27 = (pTVar16->field0_0x0)._s_0.Z;
      if (param_4->Extent == 0) {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
        pFVar24 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar24 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        uVar26 = (int)uVar19 >> 8;
        uVar20 = 0;
        if ((int)uVar26 < (int)pFVar24->Type) {
          uVar20 = ~uVar26 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
        plVar21 = (longlong *)((longlong)(int)uVar26 * 0xc18 + pFVar24->_padding_);
        uVar20 = *(uint *)((longlong)plVar21 + (ulonglong)(uVar19 & 0xff) * 4 + 0x410);
        lVar17 = *plVar21 +
                 (longlong)*(int *)((longlong)plVar21 + (ulonglong)(uVar19 & 0xff) * 4 + 0x10) * 4;
        pFVar22 = local_170;
        if (((int)uVar20 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), pFVar22 = local_170, bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
      }
      else {
        if (((int)pFVar5[2].Type < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
        pFVar24 = pFVar5 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar5[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          pFVar24 = (FMeshAttributeArraySetBase *)pFVar5[2]._padding_;
        }
        uVar19 = uVar19 * pFVar24->NumElements;
        uVar20 = 0;
        if ((int)uVar19 < (int)pFVar24->Type) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
        uVar20 = param_4->Extent;
        lVar17 = pFVar24->_padding_ + (longlong)(int)uVar19 * 4;
        if (((int)uVar20 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar14)) {
          pcVar6 = (code *)swi(3);
          fVar27 = (float)(*pcVar6)();
          return fVar27;
        }
      }
      if (((int)uVar20 < 3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        fVar27 = (float)(*pcVar6)();
        return fVar27;
      }
      iVar4 = *(int *)(lVar17 + 8);
      pTVar15 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_6.ArrayPtr,0);
      pTVar16 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar15,iVar4);
      pFVar22 = pFVar22 + 4;
      fVar29 = (float)*(undefined8 *)&pTVar16->field0_0x0 - local_158;
      fVar27 = fVar27 - fVar12;
      fVar30 = (float)((ulonglong)*(undefined8 *)&pTVar16->field0_0x0 >> 0x20) - local_154;
      fVar28 = (pTVar16->field0_0x0)._s_0.Z - fVar3;
      fVar27 = SQRT((local_f0._4_4_ - fVar11) * (local_f0._4_4_ - fVar11) +
                    ((float)local_f0 - fVar10) * ((float)local_f0 - fVar10) + fVar27 * fVar27) +
               SQRT((local_100._4_4_ - fVar8) * (local_100._4_4_ - fVar8) +
                    ((float)local_100 - fVar7) * ((float)local_100 - fVar7) +
                    (local_15c - fVar9) * (local_15c - fVar9)) +
               SQRT(fVar30 * fVar30 + fVar29 * fVar29 + fVar28 * fVar28);
      fVar28 = fVar27;
      if (local_160 <= fVar27) {
        fVar27 = local_160;
        fVar28 = local_160;
      }
    }
    pFVar22 = local_118 + 4;
    uVar18 = (ulonglong)local_150;
  } while( true );
}

// Z_Construct_UClass_USkeletalMeshDescription_NoRegister @ 1443b1730

UClass * __cdecl Z_Construct_UClass_USkeletalMeshDescription_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshDescription.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SkeletalMeshDescription",L"SkeletalMeshDescription",
               &Z_Registration_Info_UClass_USkeletalMeshDescription.InnerSingleton,
               USkeletalMeshDescription::StaticRegisterNativesUSkeletalMeshDescription,0x2f0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeletalMeshDescription>,
               InternalVTableHelperCtorCaller<USkeletalMeshDescription>,local_res8,
               UMeshDescriptionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshDescription.InnerSingleton;
}

// Z_Construct_UScriptStruct_FBoneID @ 1443b17f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBoneID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBoneID.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBoneID.InnerSingleton,
               &Z_Construct_UScriptStruct_FBoneID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBoneID.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBoneID.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FSourceGeometryPartID @ 1443b1870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSourceGeometryPartID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSourceGeometryPartID.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSourceGeometryPartID.InnerSingleton,
               &Z_Construct_UScriptStruct_FSourceGeometryPartID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSourceGeometryPartID.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FSourceGeometryPartID.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_SkeletalMeshDescription @ 1443b5030

void __cdecl IMPLEMENT_MODULE_SkeletalMeshDescription(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 15036b6d0

void __cdecl
`FSkeletalMeshAttributes::SourceGeometryPartAttributes'::__l5::
_dynamic_atexit_destructor_for__Empty__(void)

{
  ::Empty._72_4_ = 0;
  if (::Empty._64_8_ != 0) {
    FMemory::Free((void *)::Empty._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Empty);
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 15036b710

void __cdecl
`FSkeletalMeshAttributesShared::SourceGeometryPartAttributes'::__l5::
_dynamic_atexit_destructor_for__Empty__(void)

{
  ::Empty._72_4_ = 0;
  if (::Empty._64_8_ != 0) {
    FMemory::Free((void *)::Empty._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Empty);
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 15036b750

void __cdecl
`FSkeletalMeshAttributes::SourceGeometryParts'::__l5::_dynamic_atexit_destructor_for__Empty__(void)

{
  ::Empty._104_4_ = 0;
  if (::Empty._96_8_ != 0) {
    FMemory::Free((void *)::Empty._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Empty.field_0x20);
  if (::Empty._16_8_ != 0) {
    FMemory::Free((void *)::Empty._16_8_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Empty'' @ 15036b7a0

void __cdecl
`FSkeletalMeshAttributesShared::SourceGeometryParts'::__l5::_dynamic_atexit_destructor_for__Empty__
          (void)

{
  ::Empty._104_4_ = 0;
  if (::Empty._96_8_ != 0) {
    FMemory::Free((void *)::Empty._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAttributesSetEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&::Empty.field_0x20);
  if (::Empty._16_8_ != 0) {
    FMemory::Free((void *)::Empty._16_8_);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogSkeletalMeshOperations'' @ 15036b7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSkeletalMeshOperations__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSkeletalMeshOperations);
  return;
}

// `dynamic_atexit_destructor_for_'MorphTargetAttributeNamePrefix'' @ 15036b810

void __cdecl _dynamic_atexit_destructor_for__MorphTargetAttributeNamePrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = MorphTargetAttributeNamePrefix.Data.AllocatorInstance.Data;
  if (MorphTargetAttributeNamePrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
  {
    return;
  }
  if (MorphTargetAttributeNamePrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

