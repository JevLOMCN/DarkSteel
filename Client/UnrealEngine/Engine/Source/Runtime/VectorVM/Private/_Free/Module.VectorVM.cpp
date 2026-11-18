// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VectorVM
// Functions: 223

// `dynamic_initializer_for_'CVarVVMPageSizeInKB'' @ 14116b810

void __cdecl VectorVM::Runtime::_dynamic_initializer_for__CVarVVMPageSizeInKB__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVVMPageSizeInKB,L"vm.PageSizeInKB",&GVVMPageSizeInKB,
             L"Minimum allocation per VM instance.  There are 64 of these, so multiply GVVMPageSizeInKB * 64 * 1024 to get total number of bytes used by the VVM\n"
             ,4);
  atexit(_dynamic_atexit_destructor_for__CVarVVMPageSizeInKB__);
  return;
}

// `dynamic_initializer_for_'LogVectorVM'' @ 14116b860

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVectorVM__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogVectorVM,L"LogVectorVM",All,All);
  atexit(_dynamic_atexit_destructor_for__LogVectorVM__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantVectorVM'' @ 14116b8a0

void __cdecl _dynamic_initializer_for__ModuleRegistrantVectorVM__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "VectorVM";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"VectorVM",8);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VectorVM_Public_VectorVM_h__Script_VectorVM_3955983247'' @ 14116b8f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VectorVM_Public_VectorVM_h__Script_VectorVM_3955983247__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/VectorVM",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VectorVM_Public_VectorVM_h__Script_VectorVM_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_VectorVM'' @ 14116b940

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_VectorVM__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xd820a0bc;
  local_res8[0].DeclarationsHash = 0xc922d119;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_VectorVM,L"/Script/VectorVM",
             &Z_Registration_Info_UPackage__Script_VectorVM,local_res8);
  return;
}

// Z_Construct_UPackage__Script_VectorVM @ 148dbc390

UPackage * __cdecl Z_Construct_UPackage__Script_VectorVM(void)

{
  if (Z_Registration_Info_UPackage__Script_VectorVM.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_VectorVM.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_VectorVM.OuterSingleton;
}

// EVectorVMBaseTypes_StaticEnum @ 148dbc3d0

UEnum * __cdecl EVectorVMBaseTypes_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVectorVMBaseTypes.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_VectorVM();
    Z_Registration_Info_UEnum_EVectorVMBaseTypes.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes,(UObject *)pUVar1,
                       L"EVectorVMBaseTypes");
  }
  return Z_Registration_Info_UEnum_EVectorVMBaseTypes.OuterSingleton;
}

// EVectorVMOperandLocation_StaticEnum @ 148dbc410

UEnum * __cdecl EVectorVMOperandLocation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVectorVMOperandLocation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_VectorVM();
    Z_Registration_Info_UEnum_EVectorVMOperandLocation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation,(UObject *)pUVar1,
                       L"EVectorVMOperandLocation");
  }
  return Z_Registration_Info_UEnum_EVectorVMOperandLocation.OuterSingleton;
}

// StaticEnum<enum_EVectorVMBaseTypes> @ 148dbc450

UEnum * __cdecl StaticEnum<enum_EVectorVMBaseTypes>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVectorVMBaseTypes.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_VectorVM();
    Z_Registration_Info_UEnum_EVectorVMBaseTypes.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes,(UObject *)pUVar1,
                       L"EVectorVMBaseTypes");
  }
  return Z_Registration_Info_UEnum_EVectorVMBaseTypes.OuterSingleton;
}

// StaticEnum<enum_EVectorVMOperandLocation> @ 148dbc490

UEnum * __cdecl StaticEnum<enum_EVectorVMOperandLocation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVectorVMOperandLocation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_VectorVM();
    Z_Registration_Info_UEnum_EVectorVMOperandLocation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation,(UObject *)pUVar1,
                       L"EVectorVMOperandLocation");
  }
  return Z_Registration_Info_UEnum_EVectorVMOperandLocation.OuterSingleton;
}

// operator<< @ 148dbc4d0

FArchive * __cdecl VectorVM::Bridge::operator<<(FArchive *param_1,FRuntimeContextData *param_2)

{
  ushort *puVar1;
  int *piVar2;
  ulong64 *puVar3;
  uint *puVar4;
  uint *puVar5;
  ushort *puVar6;
  int *piVar7;
  ulong64 *puVar8;
  
  puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->NumBytecodeBytes);
    }
  }
  else {
    param_2->NumBytecodeBytes = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = &param_2->MaxOutputDataSet;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->NumConstsAlloced;
  puVar6 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar4 = &param_2->NumTempRegisters;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->NumConstsRemapped;
  puVar6 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &param_2->NumInputsRemapped;
  puVar6 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &param_2->NumNoAdvanceInputs;
  puVar6 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &param_2->NumInputDataSets;
  puVar6 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &param_2->NumOutputsRemapped;
  puVar6 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar1 = &param_2->NumOutputInstructions;
  puVar6 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar4 = &param_2->NumExtFns;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = &param_2->MaxExtFnRegisters;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = &param_2->NumDummyRegsReq;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->MaxExtFnUsed;
  piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar7;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar4 = &param_2->Flags;
  puVar5 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar3 = &param_2->HashId;
  puVar8 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if (puVar8 + 1 <= (ulong64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *puVar3 = *puVar8;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar3,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar3);
  return param_1;
}

// AllocVectorVMState @ 148dbc9f0

FVectorVMState * __cdecl
VectorVM::Runtime::AllocVectorVMState(TArrayView<unsigned_char_const_,int> *param_1)

{
  ushort *puVar1;
  code *pcVar2;
  bool bVar3;
  FVectorVMState *pFVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uchar *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uchar *puVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uchar *puVar17;
  FRuntimeContextData local_1f0;
  ulong64 local_1b8;
  uchar *local_1a8;
  undefined8 local_1a0;
  ushort *local_198;
  ushort *local_190;
  ushort *local_188;
  uchar *local_180;
  ushort *local_178;
  ushort *local_170;
  uchar *local_168;
  uint local_160;
  uint local_15c;
  ushort local_158;
  undefined2 local_156;
  uint local_154;
  ushort local_150;
  ushort local_14e;
  ushort local_14c;
  ushort local_14a;
  ushort local_148;
  ushort local_146;
  uint local_144;
  uint local_140;
  uint local_13c;
  int local_138;
  uint local_134;
  ulong64 local_130;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  ulonglong local_110;
  FArchiveState local_108;
  undefined8 local_78;
  uchar *local_70;
  longlong local_68;
  undefined8 local_60;
  uchar *local_58;
  undefined8 uStack_50;
  
  if (param_1->ArrayNum != 0) {
    local_58 = param_1->DataPtr;
    uStack_50 = *(undefined8 *)&param_1->ArrayNum;
    local_1a0 = 0;
    local_108._padding_ = 0;
    local_108.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_156 = 0;
    local_108.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_108.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_108.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_108._40_8_ = 0;
    local_108.ArSerializingDefaults = 0;
    local_108.ArPortFlags = 0;
    local_108.ArMaxSerializeSize = 0;
    local_108.ArUEVer.FileVersionUE4 = 0;
    local_108.ArUEVer.FileVersionUE5 = 0;
    local_108.ArLicenseeUEVer = 0;
    local_108.ArEngineVer.Major = 0;
    local_108.ArEngineVer.Minor = 0;
    local_108.ArEngineVer.Patch = 0;
    local_108.ArEngineVer._6_2_ = 0;
    local_108.ArEngineVer.Changelist = 0;
    local_108.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_108.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_108.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_108.SerializedProperty = (FProperty *)0x0;
    local_108.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_108.bCustomVersionsAreReset = false;
    local_108._129_7_ = 0;
    local_108.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_108);
    local_70 = param_1->DataPtr;
    local_68 = (longlong)(int)*(undefined8 *)&param_1->ArrayNum;
    local_78 = 0;
    local_108._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    local_60 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_108,true);
    (**(code **)(local_108._padding_ + 0x108))(&local_108,0);
    local_108._padding_ = (longlong)&___7FMemoryReaderView__6B_;
    Bridge::operator<<((FArchive *)&local_108,&local_1f0);
    FArchive::~FArchive((FArchive *)&local_108);
    uVar9 = (ulonglong)local_1f0.NumBytecodeBytes + 0x4f & 0xfffffffffffffff0;
    local_160 = local_1f0.NumBytecodeBytes;
    local_15c = local_1f0.MaxOutputDataSet;
    local_150 = local_1f0.NumConstsRemapped;
    uVar11 = (ulonglong)((uint)local_1f0.NumConstsRemapped + (uint)local_1f0.NumConstsRemapped) +
             0xf + uVar9 & 0xfffffffffffffff0;
    uVar5 = (uint)local_1f0.NumOutputsRemapped * 2;
    uVar8 = (ulonglong)((uint)local_1f0.NumInputsRemapped + (uint)local_1f0.NumInputsRemapped) + 0xf
            + uVar11 & 0xfffffffffffffff0;
    local_158 = local_1f0.NumConstsAlloced;
    lVar15 = (ulonglong)local_1f0.NumInputDataSets * 0x10 + uVar8;
    local_154 = local_1f0.NumTempRegisters;
    uVar16 = (ulonglong)(uint)local_1f0.NumOutputsRemapped + 0xf + lVar15 & 0xfffffffffffffff0;
    uVar12 = (ulonglong)uVar5 + 0xf + uVar16 & 0xfffffffffffffff0;
    local_148 = local_1f0.NumOutputsRemapped;
    local_146 = local_1f0.NumOutputInstructions;
    local_140 = local_1f0.MaxExtFnRegisters;
    local_13c = local_1f0.NumDummyRegsReq;
    local_1b8 = local_1f0.HashId;
    local_130 = local_1f0.HashId;
    puVar17 = param_1->DataPtr;
    local_180 = puVar17 + lVar15;
    local_14c = local_1f0.NumNoAdvanceInputs;
    local_198 = (ushort *)(puVar17 + uVar9);
    local_190 = (ushort *)(puVar17 + uVar11);
    local_138 = local_1f0.MaxExtFnUsed;
    local_178 = (ushort *)(puVar17 + uVar16);
    local_1a8 = puVar17 + 0x40;
    local_170 = (ushort *)(puVar17 + uVar12);
    local_188 = (ushort *)(puVar17 + uVar8);
    uVar8 = (ulonglong)local_1f0.NumInputsRemapped;
    local_128 = ((ulonglong)local_1f0.NumNoAdvanceInputs + (ulonglong)local_1f0.NumConstsRemapped) *
                0x10;
    local_14e = local_1f0.NumInputsRemapped;
    local_118 = (ulonglong)local_1f0.MaxOutputDataSet * 4 + 0xf & 0xfffffffffffffff0;
    local_120 = ((longlong)local_1f0.MaxExtFnUsed + 1) * 0x10;
    local_110 = (ulonglong)local_1f0.NumConstsRemapped * 3 + 0xf & 0xfffffffffffffff0;
    local_14a = local_1f0.NumInputDataSets;
    puVar17 = puVar17 + ((ulonglong)uVar5 + 0xf + uVar12 & 0xfffffffffffffff0);
    local_144 = local_1f0.NumExtFns;
    local_134 = local_1f0.Flags;
    puVar10 = (uchar *)(local_128 + 0xe0 +
                       ((uVar8 + 5) * 3 & 0xfffffffffffffff0) + local_110 + local_118 + local_120);
    local_168 = puVar17;
    pFVar4 = FMemory::Malloc((ulong64)puVar10,0x10);
    if (pFVar4 != (FVectorVMState *)0x0) {
      uVar5 = (int)local_128 + 0xe0;
      uVar6 = (int)local_120 + uVar5;
      pFVar4->TotalNumBytes = (uint)puVar10;
      uVar14 = (int)local_118 + uVar6;
      pFVar4->ConstantBuffers = (FVecReg *)&pFVar4[1].NumBytecodeBytes;
      puVar13 = (uchar *)((longlong)&pFVar4->Bytecode + (ulonglong)uVar14);
      pFVar4->ConstMapCacheIdx = puVar13;
      pFVar4->ExtFunctionTable =
           (FVectorVMExtFunctionData *)((longlong)&pFVar4->Bytecode + (ulonglong)uVar5);
      pFVar4->NumOutputPerDataSet = (int *)((longlong)&pFVar4->Bytecode + (ulonglong)uVar6);
      puVar7 = (uchar *)((longlong)&pFVar4->Bytecode + (ulonglong)((int)local_110 + uVar14));
      pFVar4->InputMapCacheIdx = puVar7;
      pFVar4->ConstMapCacheSrc = (ushort *)(puVar13 + local_1f0.NumConstsRemapped);
      puVar1 = (ushort *)(puVar7 + uVar8);
      pFVar4->InputMapCacheSrc = puVar1;
      if ((puVar10 < (uchar *)((uVar8 * 2 - (longlong)pFVar4) + (longlong)puVar1)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(size_t)((uint8*)VVMState->InputMapCacheSrc - StatePtr) + sizeof(uint16) * RuntimeContext.NumInputsRemapped <= VVMStateTotalNumBytes"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                             ,0x933,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FVectorVMState *)(*pcVar2)();
        return pFVar4;
      }
      pFVar4->NumInstancesExecCached = 0;
      if (local_1f0.NumExtFns != 0) {
        uVar8 = (ulonglong)local_1f0.NumExtFns;
        lVar15 = 0;
        do {
          *(undefined8 *)((longlong)&pFVar4->ExtFunctionTable->Function + lVar15) = 0;
          *(undefined4 *)((longlong)&pFVar4->ExtFunctionTable->NumInputs + lVar15) =
               *(undefined4 *)(puVar17 + lVar15 + 8);
          *(undefined4 *)((longlong)&pFVar4->ExtFunctionTable->NumOutputs + lVar15) =
               *(undefined4 *)(puVar17 + lVar15 + 0xc);
          uVar8 = uVar8 - 1;
          lVar15 = lVar15 + 0x10;
        } while (uVar8 != 0);
      }
      pFVar4->ConstRemapTable = local_198;
      pFVar4->InputRemapTable = local_190;
      pFVar4->InputDataSetOffsets = local_188;
      pFVar4->OutputRemapDataSetIdx = local_180;
      pFVar4->OutputRemapDataType = local_178;
      pFVar4->OutputRemapDst = local_170;
      pFVar4->NumOutputsRemapped = (uint)local_1f0.NumOutputsRemapped;
      pFVar4->Bytecode = local_1a8;
      pFVar4->NumBytecodeBytes = local_1f0.NumBytecodeBytes;
      pFVar4->NumInputBuffers = (uint)local_1f0.NumInputsRemapped;
      pFVar4->NumInputDataSets = (uint)local_1f0.NumInputDataSets;
      pFVar4->OptimizerHashId = local_1b8;
      pFVar4->NumOutputBuffers = (uint)local_1f0.NumOutputInstructions;
      pFVar4->NumTempRegisters = local_1f0.NumTempRegisters;
      pFVar4->NumConstBuffers = (uint)local_1f0.NumConstsRemapped;
      pFVar4->MaxOutputDataSet = local_1f0.MaxOutputDataSet;
      pFVar4->NumDummyRegsRequired = local_1f0.NumDummyRegsReq;
      pFVar4->Flags = local_1f0.Flags & 0xffffffef;
      pFVar4->BatchOverheadSize =
           local_1f0.MaxOutputDataSet * 0x10 +
           (local_1f0.MaxExtFnRegisters + (uint)local_1f0.NumInputsRemapped * 2 +
            local_1f0.NumTempRegisters + (uint)local_1f0.NumOutputInstructions +
           (uint)local_1f0.NumConstsRemapped) * 9 + (local_1f0.NumDummyRegsReq + 0x30) * 0x10;
      pFVar4->NumExtFunctions = local_1f0.NumExtFns;
      pFVar4->MaxExtFnRegisters = local_1f0.MaxExtFnRegisters;
      pFVar4->ChunkLocalDataOutputIdxNumBytes = local_1f0.MaxOutputDataSet * 4;
      pFVar4->ChunkLocalNumOutputNumBytes = local_1f0.MaxOutputDataSet * 4;
      pFVar4->ChunkLocalOutputMaskIdxNumBytes = local_1f0.MaxOutputDataSet * 8;
      return pFVar4;
    }
  }
  return (FVectorVMState *)0x0;
}

// CreateSrcOperandMask @ 148dbcf20

uchar __cdecl
VectorVM::CreateSrcOperandMask
          (EVectorVMOperandLocation param_1,EVectorVMOperandLocation param_2,
          EVectorVMOperandLocation param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 0;
  if (param_2 == Constant) {
    bVar1 = 2;
  }
  bVar2 = 0;
  if (param_3 == Constant) {
    bVar2 = 4;
  }
  return param_1 == Constant | bVar1 | bVar2;
}

// EmptyLinkFunctionForGeneratedCodeVectorVM @ 148dbcf60

void __cdecl EmptyLinkFunctionForGeneratedCodeVectorVM(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVectorVM_init @ 148dbcf70

void __cdecl EmptyLinkFunctionForGeneratedCodeVectorVM_init(void)

{
  return;
}

// ExecChunkMultipleLoops @ 148dbcf80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
VectorVM::Runtime::ExecChunkMultipleLoops
          (FVectorVMExecContext *param_1,FVectorVMBatchState *param_2,int param_3)

{
  ulonglong uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uchar **ppuVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  uint uVar14;
  float fVar15;
  float *pfVar16;
  float *pfVar17;
  uint *puVar18;
  uint *puVar19;
  int *piVar20;
  int *piVar21;
  float *pfVar22;
  float fVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  int *piVar27;
  int *piVar28;
  int *piVar29;
  int *piVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [14];
  unkbyte10 Var34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  uchar *puVar63;
  undefined1 (*pauVar64) [16];
  __m128i *p_Var65;
  undefined1 (*pauVar66) [16];
  longlong lVar67;
  ushort *puVar68;
  char (*pacVar69) [16];
  int *piVar70;
  char (*pacVar71) [16];
  undefined1 (*pauVar72) [16];
  __m128i *p_Var73;
  uchar *puVar74;
  ulonglong *puVar75;
  __m128i *p_Var76;
  float *pfVar77;
  undefined1 (*pauVar78) [16];
  float *pfVar79;
  int *piVar80;
  uint *puVar81;
  uint *puVar82;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  __m128i _Var90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  int iVar127;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  int iVar83;
  int iVar128;
  undefined1 auVar116 [16];
  uint uVar84;
  uint uVar85;
  int iVar86;
  uint uVar120;
  uint uVar121;
  int iVar122;
  uint uVar124;
  uint uVar125;
  int iVar126;
  uint uVar129;
  uint uVar130;
  int iVar131;
  undefined1 auVar117 [16];
  int iVar119;
  int iVar123;
  undefined1 in_ZMM0 [64];
  undefined1 auVar118 [64];
  undefined1 auVar132 [48];
  __m128i in_XMM1;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  __m128i _Var136;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  uint uVar156;
  __m128i in_XMM2;
  __m128i _Var140;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  uint uVar174;
  uint uVar180;
  uint uVar181;
  uint uVar182;
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  float fVar185;
  float fVar186;
  float fVar187;
  float fVar188;
  ushort *local_res20;
  int local_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  __m128i local_178;
  __m128i local_168;
  undefined1 local_158 [16];
  __m128i local_148;
  __m128i local_138;
  __m128i local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  __m128i local_f8;
  
  SetBatchPointersForCorrectChunkOffsets(param_1,param_2);
  puVar68 = (ushort *)(param_1->VVMState->Bytecode + 1);
  local_res20 = puVar68;
  iVar62 = __isa_available;
  iVar83 = ___xmm_000587c5000587c5000587c5000587c5;
  iVar119 = _UNK_151cf02d4;
  iVar123 = _UNK_151cf02d8;
  iVar128 = _UNK_151cf02dc;
  fVar185 = ___xmm_77800000778000007780000077800000;
  fVar186 = _UNK_1506896d4;
  fVar187 = _UNK_1506896d8;
  fVar188 = _UNK_1506896dc;
  uVar44 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar43 = _UNK_15061cc74;
  uVar42 = _UNK_15061cc78;
  uVar41 = _UNK_15061cc7c;
  uVar40 = ___xmm_00000001000000010000000100000001;
  uVar39 = _UNK_150631da4;
  uVar182 = _UNK_150631da8;
  uVar181 = _UNK_150631dac;
  uVar180 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar174 = _UNK_15076b1f4;
  uVar156 = _UNK_15076b1f8;
  uVar14 = _UNK_15076b1fc;
  iVar38 = ___xmm_00000004000000040000000400000004;
  iVar37 = _UNK_150b50dd4;
  iVar36 = _UNK_150b50dd8;
  iVar35 = _UNK_150b50ddc;
switchD_148dbd065_caseD_24:
  iVar61 = _UNK_151cf02dc;
  iVar60 = _UNK_151cf02d8;
  iVar59 = _UNK_151cf02d4;
  iVar58 = ___xmm_000587c5000587c5000587c5000587c5;
  uVar51 = _UNK_1506896ec;
  uVar50 = _UNK_1506896e8;
  uVar49 = _UNK_1506896e4;
  uVar48 = __xmm_7f8000007f8000007f8000007f800000;
  uVar130 = _UNK_1506895bc;
  uVar125 = _UNK_1506895b8;
  uVar121 = _UNK_1506895b4;
  uVar85 = ___xmm_00400000004000000040000000400000;
  uVar129 = _UNK_1506895ac;
  uVar124 = _UNK_1506895a8;
  uVar120 = _UNK_1506895a4;
  uVar84 = ___xmm_00007fff00007fff00007fff00007fff;
  iVar47 = _UNK_15068959c;
  iVar46 = _UNK_150689598;
  iVar45 = _UNK_150689594;
  iVar127 = ___xmm_00007c0000007c0000007c0000007c00;
  iVar131 = _UNK_15068958c;
  iVar126 = _UNK_150689588;
  iVar122 = _UNK_150689584;
  iVar86 = ___xmm_00007bff00007bff00007bff00007bff;
  switch(*(undefined1 *)((longlong)puVar68 + -1)) {
  case 0:
    goto switchD_148dbd065_caseD_0;
  case 1:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      in_XMM1.m128i_i32[0] = (int)(fVar15 + auVar172._0_4_);
      in_XMM1.m128i_i32[1] = (int)(*pfVar79 + auVar172._4_4_);
      in_XMM1.m128i_i32[2] = (int)(*pfVar16 + auVar172._8_4_);
      in_XMM1.m128i_i32[3] = (int)(*pfVar17 + auVar172._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 2:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pfVar77 = (float *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i32[0] = (int)(fVar15 - auVar172._0_4_);
      in_XMM1.m128i_i32[1] = (int)(*pfVar79 - auVar172._4_4_);
      in_XMM1.m128i_i32[2] = (int)(*pfVar16 - auVar172._8_4_);
      in_XMM1.m128i_i32[3] = (int)(*pfVar17 - auVar172._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 3:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      in_XMM1.m128i_i32[0] = (int)(fVar15 * auVar172._0_4_);
      in_XMM1.m128i_i32[1] = (int)(*pfVar79 * auVar172._4_4_);
      in_XMM1.m128i_i32[2] = (int)(*pfVar16 * auVar172._8_4_);
      in_XMM1.m128i_i32[3] = (int)(*pfVar17 * auVar172._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 4:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      auVar172 = divps(auVar172,(undefined1  [16])in_XMM2);
      in_ZMM0._0_4_ = (float)(uVar44 & in_XMM2.m128i_u32[0]);
      in_ZMM0._4_4_ = (float)(uVar43 & in_XMM2.m128i_u32[1]);
      in_ZMM0._8_4_ = (float)(uVar42 & in_XMM2.m128i_u32[2]);
      in_ZMM0._12_4_ = (float)(uVar41 & in_XMM2.m128i_u32[3]);
      in_XMM1.m128i_u32[0] = -(uint)(VVMConstVec4_Epsilon4[0] < in_ZMM0._0_4_) & auVar172._0_4_;
      in_XMM1.m128i_u32[1] = -(uint)(VVMConstVec4_Epsilon4[1] < in_ZMM0._4_4_) & auVar172._4_4_;
      in_XMM1.m128i_u32[2] = -(uint)(VVMConstVec4_Epsilon4[2] < in_ZMM0._8_4_) & auVar172._8_4_;
      in_XMM1.m128i_u32[3] = -(uint)(VVMConstVec4_Epsilon4[3] < in_ZMM0._12_4_) & auVar172._12_4_;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 5:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      in_XMM2._0_4_ = fVar15 * in_XMM1.m128i_i32[0] + auVar172._0_4_;
      in_XMM2._4_4_ = *pfVar79 * in_XMM1.m128i_i32[1] + auVar172._4_4_;
      in_XMM2._8_4_ = *pfVar16 * in_XMM1.m128i_i32[2] + auVar172._8_4_;
      in_XMM2.m128i_i32[3] = (int)(*pfVar17 * in_XMM1.m128i_i32[3] + auVar172._12_4_);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 6:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pacVar69 = (char (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pfVar77 = (float *)ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    pauVar72 = pauVar66 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar4);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      in_XMM2.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar3);
      auVar87._0_4_ =
           (GlobalVectorConstants::FloatOne.m128_f32[0] - fVar15) * in_XMM1.m128i_i32[0] +
           fVar15 * in_XMM2.m128i_i32[0];
      auVar87._4_4_ =
           (GlobalVectorConstants::FloatOne.m128_f32[1] - *pfVar79) * in_XMM1.m128i_i32[1] +
           *pfVar79 * in_XMM2.m128i_i32[1];
      auVar87._8_4_ =
           (GlobalVectorConstants::FloatOne.m128_f32[2] - *pfVar16) * in_XMM1.m128i_i32[2] +
           *pfVar16 * in_XMM2.m128i_i32[2];
      auVar87._12_4_ =
           (GlobalVectorConstants::FloatOne.m128_f32[3] - *pfVar17) * in_XMM1.m128i_i32[3] +
           *pfVar17 * in_XMM2.m128i_i32[3];
      in_ZMM0._0_16_ = auVar87;
      *pauVar66 = auVar87;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 7:
    p_Var65 = (__m128i *)param_2->RegPtrTable[puVar68[1]];
    pacVar71 = (char (*) [16])param_2->RegPtrTable[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      auVar88._0_4_ = (float)(uVar44 & in_XMM2.m128i_u32[0]);
      auVar88._4_4_ = (float)(uVar43 & in_XMM2.m128i_u32[1]);
      auVar88._8_4_ = (float)(uVar42 & in_XMM2.m128i_u32[2]);
      auVar88._12_4_ = (float)(uVar41 & in_XMM2.m128i_u32[3]);
      in_ZMM0._0_16_ = rcpps(auVar88,(undefined1  [16])in_XMM2);
      in_XMM1.m128i_u32[0] = -(uint)(VVMConstVec4_Epsilon4[0] < auVar88._0_4_) & in_ZMM0._0_4_;
      in_XMM1.m128i_u32[1] = -(uint)(VVMConstVec4_Epsilon4[1] < auVar88._4_4_) & in_ZMM0._4_4_;
      in_XMM1.m128i_u32[2] = -(uint)(VVMConstVec4_Epsilon4[2] < auVar88._8_4_) & in_ZMM0._8_4_;
      in_XMM1.m128i_u32[3] = -(uint)(VVMConstVec4_Epsilon4[3] < auVar88._12_4_) & in_ZMM0._12_4_;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 8:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pacVar71 = (char (*) [16])param_2->RegPtrTable[*puVar68];
    pauVar72 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      in_ZMM0._0_16_ = sqrtps(in_ZMM0._0_16_,(undefined1  [16])in_XMM2);
      uVar84 = -(uint)(VVMConstVec4_Epsilon4[0] < in_XMM2.m128i_i32[0]);
      uVar120 = -(uint)(VVMConstVec4_Epsilon4[1] < in_XMM2.m128i_i32[1]);
      uVar124 = -(uint)(VVMConstVec4_Epsilon4[2] < in_XMM2.m128i_i32[2]);
      uVar129 = -(uint)(VVMConstVec4_Epsilon4[3] < in_XMM2.m128i_i32[3]);
      in_XMM1.m128i_i32[1] = uVar120;
      in_XMM1.m128i_i32[0] = uVar84;
      in_XMM1.m128i_i32[2] = uVar124;
      in_XMM1.m128i_i32[3] = uVar129;
      auVar172 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,in_ZMM0._0_16_);
      auVar157._0_4_ = auVar172._0_4_ & uVar84;
      auVar157._4_4_ = auVar172._4_4_ & uVar120;
      auVar157._8_4_ = auVar172._8_4_ & uVar124;
      auVar157._12_4_ = auVar172._12_4_ & uVar129;
      *pauVar66 = auVar157;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 9:
    p_Var65 = (__m128i *)param_2->RegPtrTable[puVar68[1]];
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      in_ZMM0._0_16_ = sqrtps(auVar172,auVar172);
      in_XMM1.m128i_u32[0] = -(uint)(VVMConstVec4_Epsilon4[0] < auVar172._0_4_) & in_ZMM0._0_4_;
      in_XMM1.m128i_u32[1] = -(uint)(VVMConstVec4_Epsilon4[1] < auVar172._4_4_) & in_ZMM0._4_4_;
      in_XMM1.m128i_u32[2] = -(uint)(VVMConstVec4_Epsilon4[2] < auVar172._8_4_) & in_ZMM0._8_4_;
      in_XMM1.m128i_u32[3] = -(uint)(VVMConstVec4_Epsilon4[3] < auVar172._12_4_) & in_ZMM0._12_4_;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 10:
    in_XMM2._0_12_ = ZEXT812(0);
    in_XMM2.m128i_i32[3] = 0;
    p_Var65 = (__m128i *)param_2->RegPtrTable[puVar68[1]];
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      in_XMM1.m128i_i32[0] = (int)(0.0 - auVar172._0_4_);
      in_XMM1.m128i_i32[1] = (int)(0.0 - auVar172._4_4_);
      in_XMM1.m128i_i32[2] = (int)(0.0 - auVar172._8_4_);
      in_XMM1.m128i_i32[3] = (int)(0.0 - auVar172._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0xb:
    p_Var65 = (__m128i *)param_2->RegPtrTable[puVar68[1]];
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      in_XMM1.m128i_u32[0] = uVar44 & auVar172._0_4_;
      in_XMM1.m128i_u32[1] = uVar43 & auVar172._4_4_;
      in_XMM1.m128i_u32[2] = uVar42 & auVar172._8_4_;
      in_XMM1.m128i_u32[3] = uVar41 & auVar172._12_4_;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0xc:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pauVar64 = pauVar66 + param_3;
    pauVar72 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      in_ZMM0._0_16_ = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      __vdecl_expf4();
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0xd:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pauVar64 = pauVar66 + param_3;
    pauVar72 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      in_ZMM0._0_16_ = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      __vdecl_exp2f4();
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0xe:
    puVar81 = (uint *)param_2->RegPtrTable[puVar68[1]];
    puVar82 = puVar81 + (longlong)param_3 * 4;
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      __vdecl_logf4();
      *puVar81 = -(uint)(0.0 < auVar172._0_4_) & in_ZMM0._0_4_;
      puVar81[1] = -(uint)(0.0 < auVar172._4_4_) & in_ZMM0._4_4_;
      puVar81[2] = -(uint)(0.0 < auVar172._8_4_) & in_ZMM0._8_4_;
      puVar81[3] = -(uint)(0.0 < auVar172._12_4_) & in_ZMM0._12_4_;
      puVar81 = puVar81 + 4;
    } while (puVar81 < puVar82);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    iVar83 = ___xmm_000587c5000587c5000587c5000587c5;
    iVar119 = _UNK_151cf02d4;
    iVar123 = _UNK_151cf02d8;
    iVar128 = _UNK_151cf02dc;
    fVar185 = ___xmm_77800000778000007780000077800000;
    fVar186 = _UNK_1506896d4;
    fVar187 = _UNK_1506896d8;
    fVar188 = _UNK_1506896dc;
    goto switchD_148dbd065_caseD_24;
  case 0xf:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pauVar64 = pauVar66 + param_3;
    pauVar72 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      in_ZMM0._0_16_ = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      __vdecl_log2f4();
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x10:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pauVar64 = pauVar66 + param_3;
    pauVar72 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      in_ZMM0._0_16_ = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      __vdecl_sinf4();
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x11:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pauVar64 = pauVar66 + param_3;
    pauVar72 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      in_ZMM0._0_16_ = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      __vdecl_cosf4();
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x12:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pauVar64 = pauVar66 + param_3;
    pauVar72 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      in_ZMM0._0_16_ = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      __vdecl_tanf4();
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x13:
    p_Var65 = (__m128i *)param_2->RegPtrTable[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    pfVar77 = (float *)param_2->RegPtrTable[*puVar68];
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      auVar158._0_4_ = (VVMConstVec4_One4[0] - fVar15) * (fVar15 + VVMConstVec4_One4[0]);
      auVar158._4_4_ = (VVMConstVec4_One4[1] - *pfVar79) * (*pfVar79 + VVMConstVec4_One4[1]);
      auVar158._8_4_ = (VVMConstVec4_One4[2] - *pfVar16) * (*pfVar16 + VVMConstVec4_One4[2]);
      auVar158._12_4_ = (VVMConstVec4_One4[3] - *pfVar17) * (*pfVar17 + VVMConstVec4_One4[3]);
      in_XMM2.m128i_i8 = (char  [16])sqrtps(in_XMM2.m128i_i8,auVar158);
      in_ZMM0._0_4_ =
           (float)(-(uint)(VVMConstVec4_Epsilon4[0] < auVar158._0_4_) & in_XMM2.m128i_u32[0]);
      in_ZMM0._4_4_ =
           (float)(-(uint)(VVMConstVec4_Epsilon4[1] < auVar158._4_4_) & in_XMM2.m128i_u32[1]);
      in_ZMM0._8_4_ =
           (float)(-(uint)(VVMConstVec4_Epsilon4[2] < auVar158._8_4_) & in_XMM2.m128i_u32[2]);
      in_ZMM0._12_4_ =
           (float)(-(uint)(VVMConstVec4_Epsilon4[3] < auVar158._12_4_) & in_XMM2.m128i_u32[3]);
      __vdecl_atan2f4();
      in_XMM1.m128i_i32[0] = (int)(VVMConstVec4_QuarterPi4[0] - in_ZMM0._0_4_);
      in_XMM1.m128i_i32[1] = (int)(VVMConstVec4_QuarterPi4[1] - in_ZMM0._4_4_);
      in_XMM1.m128i_i32[2] = (int)(VVMConstVec4_QuarterPi4[2] - in_ZMM0._8_4_);
      in_XMM1.m128i_i32[3] = (int)(VVMConstVec4_QuarterPi4[3] - in_ZMM0._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x14:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pauVar72 = pauVar66 + param_3;
    pacVar71 = (char (*) [16])param_2->RegPtrTable[*puVar68];
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      auVar159._0_4_ =
           (VVMConstVec4_One4[0] - in_XMM1._0_4_) * (in_XMM1._0_4_ + VVMConstVec4_One4[0]);
      auVar159._4_4_ =
           (VVMConstVec4_One4[1] - in_XMM1._4_4_) * (in_XMM1._4_4_ + VVMConstVec4_One4[1]);
      auVar159._8_4_ =
           (VVMConstVec4_One4[2] - in_XMM1._8_4_) * (in_XMM1._8_4_ + VVMConstVec4_One4[2]);
      auVar159._12_4_ =
           (VVMConstVec4_One4[3] - in_XMM1._12_4_) * (in_XMM1._12_4_ + VVMConstVec4_One4[3]);
      in_XMM2.m128i_i8 = (char  [16])sqrtps(in_XMM2.m128i_i8,auVar159);
      in_ZMM0._0_4_ =
           (float)(-(uint)(VVMConstVec4_Epsilon4[0] < auVar159._0_4_) & in_XMM2.m128i_u32[0]);
      in_ZMM0._4_4_ =
           (float)(-(uint)(VVMConstVec4_Epsilon4[1] < auVar159._4_4_) & in_XMM2.m128i_u32[1]);
      in_ZMM0._8_4_ =
           (float)(-(uint)(VVMConstVec4_Epsilon4[2] < auVar159._8_4_) & in_XMM2.m128i_u32[2]);
      in_ZMM0._12_4_ =
           (float)(-(uint)(VVMConstVec4_Epsilon4[3] < auVar159._12_4_) & in_XMM2.m128i_u32[3]);
      __vdecl_atan2f4();
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x15:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pauVar64 = pauVar66 + param_3;
    pauVar72 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      in_ZMM0._0_16_ = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      __vdecl_atanf4();
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x16:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    pauVar72 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[1]];
    bVar6 = param_2->RegIncTable[*puVar68];
    pauVar64 = pauVar66 + param_3;
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      in_ZMM0._0_16_ = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar3);
      __vdecl_atan2f4();
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    break;
  case 0x17:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pauVar72 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    pauVar64 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      auVar172 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      in_ZMM0._0_16_ = roundps(auVar172,auVar172,2);
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x18:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pauVar72 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    pauVar64 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      auVar172 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      in_ZMM0._0_16_ = roundps(auVar172,auVar172,1);
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x19:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    puVar81 = (uint *)ppuVar7[puVar68[1]];
    bVar6 = param_2->RegIncTable[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      uVar84 = *puVar81;
      puVar82 = puVar81 + 1;
      puVar18 = puVar81 + 2;
      puVar19 = puVar81 + 3;
      puVar81 = (uint *)((longlong)puVar81 + (ulonglong)bVar3);
      in_ZMM0._0_16_ = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      uVar84 = -(uint)((float)(uVar84 & uVar44) <= GlobalVectorConstants::SmallNumber.m128_f32[0]);
      uVar120 = -(uint)((float)(*puVar82 & uVar43) <= GlobalVectorConstants::SmallNumber.m128_f32[1]
                       );
      uVar124 = -(uint)((float)(*puVar18 & uVar42) <= GlobalVectorConstants::SmallNumber.m128_f32[2]
                       );
      uVar129 = -(uint)((float)(*puVar19 & uVar41) <= GlobalVectorConstants::SmallNumber.m128_f32[3]
                       );
      __vdecl_fmodf4();
      auVar184._0_4_ = uVar84 & GlobalVectorConstants::FloatZero.m128_u32[0];
      auVar184._4_4_ = uVar120 & GlobalVectorConstants::FloatZero.m128_u32[1];
      auVar184._8_4_ = uVar124 & GlobalVectorConstants::FloatZero.m128_u32[2];
      auVar184._12_4_ = uVar129 & GlobalVectorConstants::FloatZero.m128_u32[3];
      auVar133._0_4_ = ~uVar84 & in_ZMM0._0_4_;
      auVar133._4_4_ = ~uVar120 & in_ZMM0._4_4_;
      auVar133._8_4_ = ~uVar124 & in_ZMM0._8_4_;
      auVar133._12_4_ = ~uVar129 & in_ZMM0._12_4_;
      in_XMM1 = (__m128i)(auVar133 | auVar184);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    iVar83 = ___xmm_000587c5000587c5000587c5000587c5;
    iVar119 = _UNK_151cf02d4;
    iVar123 = _UNK_151cf02d8;
    iVar128 = _UNK_151cf02dc;
    goto switchD_148dbd065_caseD_24;
  case 0x1a:
    p_Var65 = (__m128i *)param_2->RegPtrTable[puVar68[1]];
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      in_ZMM0._0_16_ = roundps(in_ZMM0._0_16_,auVar172,3);
      in_XMM1.m128i_i32[0] = (int)(auVar172._0_4_ - in_ZMM0._0_4_);
      in_XMM1.m128i_i32[1] = (int)(auVar172._4_4_ - in_ZMM0._4_4_);
      in_XMM1.m128i_i32[2] = (int)(auVar172._8_4_ - in_ZMM0._8_4_);
      in_XMM1.m128i_i32[3] = (int)(auVar172._12_4_ - in_ZMM0._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x1b:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pauVar72 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    pauVar64 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      auVar172 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      in_ZMM0._0_16_ = roundps(auVar172,auVar172,3);
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x1c:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      auVar117 = *pauVar72;
      in_ZMM0._0_16_ = auVar117;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      auVar172 = maxps(auVar172,auVar117);
      in_XMM2.m128i_i8 = (char  [16])minps(auVar172,in_XMM1.m128i_i8);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x1d:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      auVar117 = *pauVar72;
      in_ZMM0._0_16_ = auVar117;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar3);
      in_XMM1 = (__m128i)minps(auVar172,auVar117);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x1e:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      auVar117 = *pauVar72;
      in_ZMM0._0_16_ = auVar117;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar3);
      in_XMM1 = (__m128i)maxps(auVar172,auVar117);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x1f:
    ppuVar7 = param_2->RegPtrTable;
    puVar81 = (uint *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[1]];
    bVar6 = param_2->RegIncTable[*puVar68];
    puVar82 = puVar81 + (longlong)param_3 * 4;
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar3);
      bVar8 = VVMConstVec4_Epsilon4[0] < auVar172._0_4_;
      bVar9 = VVMConstVec4_Epsilon4[1] < auVar172._4_4_;
      bVar10 = VVMConstVec4_Epsilon4[2] < auVar172._8_4_;
      bVar11 = VVMConstVec4_Epsilon4[3] < auVar172._12_4_;
      __vdecl_powf4();
      *puVar81 = -(uint)bVar8 & in_ZMM0._0_4_;
      puVar81[1] = -(uint)bVar9 & in_ZMM0._4_4_;
      puVar81[2] = -(uint)bVar10 & in_ZMM0._8_4_;
      puVar81[3] = -(uint)bVar11 & in_ZMM0._12_4_;
      puVar81 = puVar81 + 4;
    } while (puVar81 < puVar82);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    iVar83 = ___xmm_000587c5000587c5000587c5000587c5;
    iVar119 = _UNK_151cf02d4;
    iVar123 = _UNK_151cf02d8;
    iVar128 = _UNK_151cf02dc;
    goto switchD_148dbd065_caseD_24;
  case 0x20:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pauVar72 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    pauVar64 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      auVar172 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      in_ZMM0._0_16_ = roundps(auVar172,auVar172,8);
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x21:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pfVar77 = (float *)param_2->RegPtrTable[*puVar68];
    pauVar72 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      uVar84 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[0] <= fVar15);
      uVar120 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[1] <= *pfVar79);
      uVar124 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[2] <= *pfVar16);
      uVar129 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[3] <= *pfVar17);
      in_XMM1.m128i_u32[0] = uVar84 & GlobalVectorConstants::FloatOne.m128_u32[0];
      in_XMM1.m128i_u32[1] = uVar120 & GlobalVectorConstants::FloatOne.m128_u32[1];
      in_XMM1.m128i_u32[2] = uVar124 & GlobalVectorConstants::FloatOne.m128_u32[2];
      in_XMM1.m128i_u32[3] = uVar129 & GlobalVectorConstants::FloatOne.m128_u32[3];
      auVar89._0_4_ = ~uVar84 & GlobalVectorConstants::FloatMinusOne.m128_u32[0];
      auVar89._4_4_ = ~uVar120 & GlobalVectorConstants::FloatMinusOne.m128_u32[1];
      auVar89._8_4_ = ~uVar124 & GlobalVectorConstants::FloatMinusOne.m128_u32[2];
      auVar89._12_4_ = ~uVar129 & GlobalVectorConstants::FloatMinusOne.m128_u32[3];
      in_ZMM0._0_16_ = auVar89 | (undefined1  [16])in_XMM1;
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x22:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      uVar84 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[0] <= fVar15 - auVar172._0_4_);
      uVar120 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[1] <= *pfVar79 - auVar172._4_4_);
      uVar124 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[2] <= *pfVar16 - auVar172._8_4_);
      uVar129 = -(uint)(GlobalVectorConstants::FloatZero.m128_f32[3] <= *pfVar17 - auVar172._12_4_);
      in_XMM2._0_4_ = (float)(uVar84 & GlobalVectorConstants::FloatOne.m128_u32[0]);
      in_XMM2._4_4_ = (float)(uVar120 & GlobalVectorConstants::FloatOne.m128_u32[1]);
      in_XMM2._8_4_ = (float)(uVar124 & GlobalVectorConstants::FloatOne.m128_u32[2]);
      in_XMM2.m128i_u32[3] = uVar129 & GlobalVectorConstants::FloatOne.m128_u32[3];
      auVar134._0_4_ = ~uVar84 & (uint)GlobalVectorConstants::FloatZero.m128_f32[0];
      auVar134._4_4_ = ~uVar120 & (uint)GlobalVectorConstants::FloatZero.m128_f32[1];
      auVar134._8_4_ = ~uVar124 & (uint)GlobalVectorConstants::FloatZero.m128_f32[2];
      auVar134._12_4_ = ~uVar129 & (uint)GlobalVectorConstants::FloatZero.m128_f32[3];
      in_XMM1.m128i_i8 = auVar134 | in_XMM2.m128i_i8;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x23:
    p_Var65 = (__m128i *)param_2->RegPtrTable[puVar68[1]];
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      fVar53 = VVMConstVec4_One4[3];
      fVar52 = VVMConstVec4_One4[2];
      fVar23 = VVMConstVec4_One4[1];
      fVar15 = VVMConstVec4_One4[0];
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
                    /* WARNING: Load size is inaccurate */
      in_XMM2 = *(__m128i *)((__m128i *)((longlong)&param_2->RandState + 0x40))->m128i_i8;
      iVar86 = *(int *)&param_2->RandState;
      iVar122 = *(int *)((longlong)&param_2->RandState + 4);
      iVar126 = *(int *)((longlong)&param_2->RandState + 8);
      iVar131 = *(int *)((longlong)&param_2->RandState + 0xc);
      *(undefined8 *)((longlong)&param_2->RandState + 0x40) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x30);
      *(undefined8 *)((longlong)&param_2->RandState + 0x48) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x38);
      *(undefined8 *)((longlong)&param_2->RandState + 0x30) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x20);
      *(undefined8 *)((longlong)&param_2->RandState + 0x38) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x28);
      *(undefined8 *)((longlong)&param_2->RandState + 0x20) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x10);
      *(undefined8 *)((longlong)&param_2->RandState + 0x28) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x18);
      *(int *)((longlong)&param_2->RandState + 0x10) = iVar86;
      *(int *)((longlong)&param_2->RandState + 0x14) = iVar122;
      *(int *)((longlong)&param_2->RandState + 0x18) = iVar126;
      *(int *)((longlong)&param_2->RandState + 0x1c) = iVar131;
      uVar84 = in_XMM2.m128i_u32[0] >> 2 ^ in_XMM2.m128i_u32[0];
      uVar120 = in_XMM2.m128i_u32[1] >> 2 ^ in_XMM2.m128i_u32[1];
      uVar124 = in_XMM2.m128i_u32[2] >> 2 ^ in_XMM2.m128i_u32[2];
      uVar129 = in_XMM2.m128i_u32[3] >> 2 ^ in_XMM2.m128i_u32[3];
      uVar84 = uVar84 << 1 ^ uVar84 ^ iVar86 << 4;
      uVar120 = uVar120 << 1 ^ uVar120 ^ iVar122 << 4;
      uVar124 = uVar124 << 1 ^ uVar124 ^ iVar126 << 4;
      uVar129 = uVar129 << 1 ^ uVar129 ^ iVar131 << 4;
      *(uint *)&param_2->RandState = uVar84;
      *(uint *)((longlong)&param_2->RandState + 4) = uVar120;
      *(uint *)((longlong)&param_2->RandState + 8) = uVar124;
      *(uint *)((longlong)&param_2->RandState + 0xc) = uVar129;
      _Var90._0_4_ = iVar83 + *(int *)((longlong)&param_2->RandState + 0x50);
      _Var90._4_4_ = iVar119 + *(int *)((longlong)&param_2->RandState + 0x54);
      _Var90._8_4_ = iVar123 + *(int *)((longlong)&param_2->RandState + 0x58);
      _Var90._12_4_ = iVar128 + *(int *)((longlong)&param_2->RandState + 0x5c);
      in_ZMM0._0_16_ = (undefined1  [16])_Var90;
      (param_2->RandState)._s_0.Counters = _Var90;
      in_XMM1.m128i_i32[0] =
           (int)(((float)(uVar84 + _Var90._0_4_ >> 9 | uVar180) - fVar15) * auVar172._0_4_);
      in_XMM1.m128i_i32[1] =
           (int)(((float)(uVar120 + _Var90._4_4_ >> 9 | uVar174) - fVar23) * auVar172._4_4_);
      in_XMM1.m128i_i32[2] =
           (int)(((float)(uVar124 + _Var90._8_4_ >> 9 | uVar156) - fVar52) * auVar172._8_4_);
      in_XMM1.m128i_i32[3] =
           (int)(((float)(uVar129 + _Var90._12_4_ >> 9 | uVar14) - fVar53) * auVar172._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
  default:
    goto switchD_148dbd065_caseD_24;
  case 0x25:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pfVar77 = (float *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i32[1] = -(uint)(*pfVar79 < auVar172._4_4_);
      in_XMM1.m128i_i32[0] = -(uint)(fVar15 < auVar172._0_4_);
      in_XMM1.m128i_i32[2] = -(uint)(*pfVar16 < auVar172._8_4_);
      in_XMM1.m128i_i32[3] = -(uint)(*pfVar17 < auVar172._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x26:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pfVar77 = (float *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i32[1] = -(uint)(*pfVar79 <= auVar172._4_4_);
      in_XMM1.m128i_i32[0] = -(uint)(fVar15 <= auVar172._0_4_);
      in_XMM1.m128i_i32[2] = -(uint)(*pfVar16 <= auVar172._8_4_);
      in_XMM1.m128i_i32[3] = -(uint)(*pfVar17 <= auVar172._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x27:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      in_XMM1.m128i_i32[1] = -(uint)(*pfVar79 < auVar172._4_4_);
      in_XMM1.m128i_i32[0] = -(uint)(fVar15 < auVar172._0_4_);
      in_XMM1.m128i_i32[2] = -(uint)(*pfVar16 < auVar172._8_4_);
      in_XMM1.m128i_i32[3] = -(uint)(*pfVar17 < auVar172._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x28:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      in_XMM1.m128i_i32[1] = -(uint)(*pfVar79 <= auVar172._4_4_);
      in_XMM1.m128i_i32[0] = -(uint)(fVar15 <= auVar172._0_4_);
      in_XMM1.m128i_i32[2] = -(uint)(*pfVar16 <= auVar172._8_4_);
      in_XMM1.m128i_i32[3] = -(uint)(*pfVar17 <= auVar172._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x29:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      in_XMM1.m128i_i32[1] = -(uint)(*pfVar79 == auVar172._4_4_);
      in_XMM1.m128i_i32[0] = -(uint)(fVar15 == auVar172._0_4_);
      in_XMM1.m128i_i32[2] = -(uint)(*pfVar16 == auVar172._8_4_);
      in_XMM1.m128i_i32[3] = -(uint)(*pfVar17 == auVar172._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x2a:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      in_XMM1.m128i_i32[1] = -(uint)(*pfVar79 != auVar172._4_4_);
      in_XMM1.m128i_i32[0] = -(uint)(fVar15 != auVar172._0_4_);
      in_XMM1.m128i_i32[2] = -(uint)(*pfVar16 != auVar172._8_4_);
      in_XMM1.m128i_i32[3] = -(uint)(*pfVar17 != auVar172._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x2b:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    puVar81 = (uint *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      uVar84 = *puVar81;
      puVar82 = puVar81 + 1;
      puVar18 = puVar81 + 2;
      puVar19 = puVar81 + 3;
      puVar81 = (uint *)((longlong)puVar81 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      auVar160._0_4_ = uVar84 & in_XMM2.m128i_u32[0];
      auVar160._4_4_ = *puVar82 & in_XMM2.m128i_u32[1];
      auVar160._8_4_ = *puVar18 & in_XMM2.m128i_u32[2];
      auVar160._12_4_ = *puVar19 & in_XMM2.m128i_u32[3];
      auVar135._0_4_ = ~in_XMM2.m128i_u32[0] & auVar172._0_4_;
      auVar135._4_4_ = ~in_XMM2.m128i_u32[1] & auVar172._4_4_;
      auVar135._8_4_ = ~in_XMM2.m128i_u32[2] & auVar172._8_4_;
      auVar135._12_4_ = ~in_XMM2.m128i_u32[3] & auVar172._12_4_;
      in_XMM1 = (__m128i)(auVar135 | auVar160);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x2c:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    piVar80 = (int *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar3);
      in_XMM1.m128i_i32[0] = iVar86 + auVar172._0_4_;
      in_XMM1.m128i_i32[1] = *piVar70 + auVar172._4_4_;
      in_XMM1.m128i_i32[2] = *piVar20 + auVar172._8_4_;
      in_XMM1.m128i_i32[3] = *piVar21 + auVar172._12_4_;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x2d:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    piVar80 = (int *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i32[0] = iVar86 - auVar172._0_4_;
      in_XMM1.m128i_i32[1] = *piVar70 - auVar172._4_4_;
      in_XMM1.m128i_i32[2] = *piVar20 - auVar172._8_4_;
      in_XMM1.m128i_i32[3] = *piVar21 - auVar172._12_4_;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x2e:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      auVar117 = *pauVar72;
      in_ZMM0._0_16_ = auVar117;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar3);
      in_XMM1 = (__m128i)pmulld(auVar172,auVar117);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x2f:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    puVar74 = ppuVar7[*puVar68];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    bVar6 = param_2->RegIncTable[*puVar68];
    pauVar64 = pauVar66 + param_3;
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar3);
      uVar31 = *(undefined8 *)puVar74;
      puVar63 = puVar74 + 8;
      puVar74 = puVar74 + bVar6;
      iVar86 = auVar172._0_4_;
      if (iVar86 == 0) {
        local_208 = 0;
      }
      else {
        local_208 = (int)uVar31;
        if ((iVar86 == -1) && (local_208 == -0x80000000)) {
          local_208 = 0x7fffffff;
        }
        else {
          local_208 = local_208 / iVar86;
        }
      }
      iVar86 = auVar172._4_4_;
      if (iVar86 == 0) {
        iStack_204 = 0;
      }
      else {
        iStack_204 = (int)((ulonglong)uVar31 >> 0x20);
        if ((iVar86 == -1) && (iStack_204 == -0x80000000)) {
          iStack_204 = 0x7fffffff;
        }
        else {
          iStack_204 = iStack_204 / iVar86;
        }
      }
      iVar86 = auVar172._8_4_;
      if (iVar86 == 0) {
        iStack_200 = 0;
      }
      else {
        iStack_200 = (int)*(undefined8 *)puVar63;
        if ((iVar86 == -1) && (iStack_200 == -0x80000000)) {
          iStack_200 = 0x7fffffff;
        }
        else {
          iStack_200 = iStack_200 / iVar86;
        }
      }
      in_XMM1 = (__m128i)(auVar172 >> 0x60);
      iVar86 = auVar172._12_4_;
      if (iVar86 == 0) {
        iStack_1fc = 0;
      }
      else {
        iStack_1fc = (int)((ulonglong)*(undefined8 *)puVar63 >> 0x20);
        if ((iVar86 == -1) && (iStack_1fc == -0x80000000)) {
          iStack_1fc = 0x7fffffff;
        }
        else {
          iStack_1fc = iStack_1fc / iVar86;
        }
      }
      auVar32._4_4_ = iStack_204;
      auVar32._0_4_ = local_208;
      auVar32._8_4_ = iStack_200;
      auVar32._12_4_ = iStack_1fc;
      in_ZMM0._0_16_ = auVar32;
      *pauVar66 = auVar32;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x30:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    piVar80 = (int *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      iVar122 = *piVar80;
      iVar126 = piVar80[1];
      iVar131 = piVar80[2];
      iVar127 = piVar80[3];
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      iVar86 = auVar172._0_4_;
      uVar84 = (uint)(iVar122 < iVar86) * iVar86 | (uint)(iVar122 >= iVar86) * iVar122;
      iVar86 = auVar172._4_4_;
      uVar120 = (uint)(iVar126 < iVar86) * iVar86 | (uint)(iVar126 >= iVar86) * iVar126;
      iVar86 = auVar172._8_4_;
      uVar124 = (uint)(iVar131 < iVar86) * iVar86 | (uint)(iVar131 >= iVar86) * iVar131;
      iVar86 = auVar172._12_4_;
      uVar129 = (uint)(iVar127 < iVar86) * iVar86 | (uint)(iVar127 >= iVar86) * iVar127;
      iVar86 = in_XMM1.m128i_i32[0];
      in_XMM2._0_4_ =
           (float)((uint)(iVar86 < (int)uVar84) * iVar86 | (iVar86 >= (int)uVar84) * uVar84);
      iVar86 = in_XMM1.m128i_i32[1];
      in_XMM2._4_4_ =
           (float)((uint)(iVar86 < (int)uVar120) * iVar86 | (iVar86 >= (int)uVar120) * uVar120);
      iVar86 = in_XMM1.m128i_i32[2];
      in_XMM2._8_4_ =
           (float)((uint)(iVar86 < (int)uVar124) * iVar86 | (iVar86 >= (int)uVar124) * uVar124);
      iVar86 = in_XMM1.m128i_i32[3];
      in_XMM2.m128i_u32[3] =
           (uint)(iVar86 < (int)uVar129) * iVar86 | (iVar86 >= (int)uVar129) * uVar129;
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x31:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    piVar80 = (int *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      iVar122 = *piVar80;
      iVar126 = piVar80[1];
      iVar131 = piVar80[2];
      iVar127 = piVar80[3];
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      iVar86 = auVar172._0_4_;
      in_XMM1.m128i_u32[0] = (uint)(iVar86 < iVar122) * iVar86 | (uint)(iVar86 >= iVar122) * iVar122
      ;
      iVar86 = auVar172._4_4_;
      in_XMM1.m128i_u32[1] = (uint)(iVar86 < iVar126) * iVar86 | (uint)(iVar86 >= iVar126) * iVar126
      ;
      iVar86 = auVar172._8_4_;
      in_XMM1.m128i_u32[2] = (uint)(iVar86 < iVar131) * iVar86 | (uint)(iVar86 >= iVar131) * iVar131
      ;
      iVar86 = auVar172._12_4_;
      in_XMM1.m128i_u32[3] = (uint)(iVar86 < iVar127) * iVar86 | (uint)(iVar86 >= iVar127) * iVar127
      ;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x32:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    piVar80 = (int *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      iVar122 = *piVar80;
      iVar126 = piVar80[1];
      iVar131 = piVar80[2];
      iVar127 = piVar80[3];
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      iVar86 = auVar172._0_4_;
      in_XMM1.m128i_u32[0] = (uint)(iVar122 < iVar86) * iVar86 | (uint)(iVar122 >= iVar86) * iVar122
      ;
      iVar86 = auVar172._4_4_;
      in_XMM1.m128i_u32[1] = (uint)(iVar126 < iVar86) * iVar86 | (uint)(iVar126 >= iVar86) * iVar126
      ;
      iVar86 = auVar172._8_4_;
      in_XMM1.m128i_u32[2] = (uint)(iVar131 < iVar86) * iVar86 | (uint)(iVar131 >= iVar86) * iVar131
      ;
      iVar86 = auVar172._12_4_;
      in_XMM1.m128i_u32[3] = (uint)(iVar127 < iVar86) * iVar86 | (uint)(iVar127 >= iVar86) * iVar127
      ;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x33:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pauVar72 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    pauVar64 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      auVar172 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      in_ZMM0._0_16_ = pabsd(auVar172,auVar172);
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x34:
    p_Var65 = (__m128i *)param_2->RegPtrTable[puVar68[1]];
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      in_XMM1.m128i_i32[0] = GlobalVectorConstants::IntZero.m128i_i32[0] - auVar172._0_4_;
      in_XMM1.m128i_i32[1] = GlobalVectorConstants::IntZero.m128i_i32[1] - auVar172._4_4_;
      in_XMM1.m128i_i32[2] = GlobalVectorConstants::IntZero.m128i_i32[2] - auVar172._8_4_;
      in_XMM1.m128i_i32[3] = GlobalVectorConstants::IntZero.m128i_i32[3] - auVar172._12_4_;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x35:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    piVar80 = (int *)param_2->RegPtrTable[*puVar68];
    pauVar72 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      uVar84 = -(uint)(iVar86 < GlobalVectorConstants::IntZero.m128i_i32[0]) ^
               GlobalVectorConstants::IntAllMask.m128i_u32[0];
      uVar120 = -(uint)(*piVar70 < GlobalVectorConstants::IntZero.m128i_i32[1]) ^
                GlobalVectorConstants::IntAllMask.m128i_u32[1];
      uVar124 = -(uint)(*piVar20 < GlobalVectorConstants::IntZero.m128i_i32[2]) ^
                GlobalVectorConstants::IntAllMask.m128i_u32[2];
      uVar129 = -(uint)(*piVar21 < GlobalVectorConstants::IntZero.m128i_i32[3]) ^
                GlobalVectorConstants::IntAllMask.m128i_u32[3];
      in_XMM1.m128i_u32[0] = ~uVar84 & GlobalVectorConstants::IntMinusOne.m128i_u32[0];
      in_XMM1.m128i_u32[1] = ~uVar120 & GlobalVectorConstants::IntMinusOne.m128i_u32[1];
      in_XMM1.m128i_u32[2] = ~uVar124 & GlobalVectorConstants::IntMinusOne.m128i_u32[2];
      in_XMM1.m128i_u32[3] = ~uVar129 & GlobalVectorConstants::IntMinusOne.m128i_u32[3];
      auVar91._0_4_ = uVar84 & GlobalVectorConstants::IntOne.m128i_u32[0];
      auVar91._4_4_ = uVar120 & GlobalVectorConstants::IntOne.m128i_u32[1];
      auVar91._8_4_ = uVar124 & GlobalVectorConstants::IntOne.m128i_u32[2];
      auVar91._12_4_ = uVar129 & GlobalVectorConstants::IntOne.m128i_u32[3];
      in_ZMM0._0_16_ = auVar91 | (undefined1  [16])in_XMM1;
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x36:
    puVar74 = param_2->RegPtrTable[puVar68[1]];
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    puVar63 = puVar74 + (longlong)param_3 * 0x10;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      fVar53 = VVMConstVec4_One4[3];
      fVar52 = VVMConstVec4_One4[2];
      fVar23 = VVMConstVec4_One4[1];
      fVar15 = VVMConstVec4_One4[0];
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      puVar74 = puVar74 + 0x10;
                    /* WARNING: Load size is inaccurate */
      in_XMM2 = *(__m128i *)((__m128i *)((longlong)&param_2->RandState + 0x40))->m128i_i8;
      iVar86 = *(int *)&param_2->RandState;
      iVar122 = *(int *)((longlong)&param_2->RandState + 4);
      iVar126 = *(int *)((longlong)&param_2->RandState + 8);
      iVar131 = *(int *)((longlong)&param_2->RandState + 0xc);
      *(undefined8 *)((longlong)&param_2->RandState + 0x40) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x30);
      *(undefined8 *)((longlong)&param_2->RandState + 0x48) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x38);
      *(undefined8 *)((longlong)&param_2->RandState + 0x30) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x20);
      *(undefined8 *)((longlong)&param_2->RandState + 0x38) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x28);
      *(undefined8 *)((longlong)&param_2->RandState + 0x20) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x10);
      *(undefined8 *)((longlong)&param_2->RandState + 0x28) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x18);
      *(int *)((longlong)&param_2->RandState + 0x10) = iVar86;
      *(int *)((longlong)&param_2->RandState + 0x14) = iVar122;
      *(int *)((longlong)&param_2->RandState + 0x18) = iVar126;
      *(int *)((longlong)&param_2->RandState + 0x1c) = iVar131;
      uVar84 = in_XMM2.m128i_u32[0] >> 2 ^ in_XMM2.m128i_u32[0];
      uVar120 = in_XMM2.m128i_u32[1] >> 2 ^ in_XMM2.m128i_u32[1];
      uVar124 = in_XMM2.m128i_u32[2] >> 2 ^ in_XMM2.m128i_u32[2];
      uVar129 = in_XMM2.m128i_u32[3] >> 2 ^ in_XMM2.m128i_u32[3];
      in_XMM1.m128i_u32[0] = uVar84 << 1 ^ uVar84 ^ iVar86 << 4;
      in_XMM1.m128i_u32[1] = uVar120 << 1 ^ uVar120 ^ iVar122 << 4;
      in_XMM1.m128i_u32[2] = uVar124 << 1 ^ uVar124 ^ iVar126 << 4;
      in_XMM1.m128i_u32[3] = uVar129 << 1 ^ uVar129 ^ iVar131 << 4;
      (param_2->RandState)._s_0.State[0] = in_XMM1;
      iVar86 = iVar83 + *(int *)((longlong)&param_2->RandState + 0x50);
      iVar122 = iVar119 + *(int *)((longlong)&param_2->RandState + 0x54);
      iVar126 = iVar123 + *(int *)((longlong)&param_2->RandState + 0x58);
      iVar131 = iVar128 + *(int *)((longlong)&param_2->RandState + 0x5c);
      *(int *)((longlong)&param_2->RandState + 0x50) = iVar86;
      *(int *)((longlong)&param_2->RandState + 0x54) = iVar122;
      *(int *)((longlong)&param_2->RandState + 0x58) = iVar126;
      *(int *)((longlong)&param_2->RandState + 0x5c) = iVar131;
      auVar92._0_4_ =
           (int)(((float)((uint)(iVar86 + in_XMM1.m128i_i32[0]) >> 9 | uVar180) - fVar15) *
                auVar172._0_4_);
      auVar92._4_4_ =
           (int)(((float)((uint)(iVar122 + in_XMM1.m128i_i32[1]) >> 9 | uVar174) - fVar23) *
                auVar172._4_4_);
      auVar92._8_4_ =
           (int)(((float)((uint)(iVar126 + in_XMM1.m128i_i32[2]) >> 9 | uVar156) - fVar52) *
                auVar172._8_4_);
      auVar92._12_4_ =
           (int)(((float)((uint)(iVar131 + in_XMM1.m128i_i32[3]) >> 9 | uVar14) - fVar53) *
                auVar172._12_4_);
      in_ZMM0._0_16_ = auVar92;
      *pauVar66 = auVar92;
    } while (puVar74 < puVar63);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x37:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    piVar80 = (int *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar3);
      in_XMM1.m128i_i32[0] = -(uint)(auVar172._0_4_ < iVar86);
      in_XMM1.m128i_i32[1] = -(uint)(auVar172._4_4_ < *piVar70);
      in_XMM1.m128i_i32[2] = -(uint)(auVar172._8_4_ < *piVar20);
      in_XMM1.m128i_i32[3] = -(uint)(auVar172._12_4_ < *piVar21);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x38:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    piVar80 = (int *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_u32[0] =
           -(uint)(auVar172._0_4_ < iVar86) ^ GlobalVectorConstants::IntAllMask.m128i_u32[0];
      in_XMM1.m128i_u32[1] =
           -(uint)(auVar172._4_4_ < *piVar70) ^ GlobalVectorConstants::IntAllMask.m128i_u32[1];
      in_XMM1.m128i_u32[2] =
           -(uint)(auVar172._8_4_ < *piVar20) ^ GlobalVectorConstants::IntAllMask.m128i_u32[2];
      in_XMM1.m128i_u32[3] =
           -(uint)(auVar172._12_4_ < *piVar21) ^ GlobalVectorConstants::IntAllMask.m128i_u32[3];
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x39:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    piVar80 = (int *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i32[0] = -(uint)(auVar172._0_4_ < iVar86);
      in_XMM1.m128i_i32[1] = -(uint)(auVar172._4_4_ < *piVar70);
      in_XMM1.m128i_i32[2] = -(uint)(auVar172._8_4_ < *piVar20);
      in_XMM1.m128i_i32[3] = -(uint)(auVar172._12_4_ < *piVar21);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x3a:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    piVar80 = (int *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar3);
      in_XMM1.m128i_u32[0] =
           -(uint)(auVar172._0_4_ < iVar86) ^ GlobalVectorConstants::IntAllMask.m128i_u32[0];
      in_XMM1.m128i_u32[1] =
           -(uint)(auVar172._4_4_ < *piVar70) ^ GlobalVectorConstants::IntAllMask.m128i_u32[1];
      in_XMM1.m128i_u32[2] =
           -(uint)(auVar172._8_4_ < *piVar20) ^ GlobalVectorConstants::IntAllMask.m128i_u32[2];
      in_XMM1.m128i_u32[3] =
           -(uint)(auVar172._12_4_ < *piVar21) ^ GlobalVectorConstants::IntAllMask.m128i_u32[3];
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x3b:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    piVar80 = (int *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar3);
      in_XMM1.m128i_i32[0] = -(uint)(iVar86 == auVar172._0_4_);
      in_XMM1.m128i_i32[1] = -(uint)(*piVar70 == auVar172._4_4_);
      in_XMM1.m128i_i32[2] = -(uint)(*piVar20 == auVar172._8_4_);
      in_XMM1.m128i_i32[3] = -(uint)(*piVar21 == auVar172._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x3c:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    piVar80 = (int *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar3);
      in_XMM1.m128i_u32[0] =
           -(uint)(iVar86 == auVar172._0_4_) ^ GlobalVectorConstants::IntAllMask.m128i_u32[0];
      in_XMM1.m128i_u32[1] =
           -(uint)(*piVar70 == auVar172._4_4_) ^ GlobalVectorConstants::IntAllMask.m128i_u32[1];
      in_XMM1.m128i_u32[2] =
           -(uint)(*piVar20 == auVar172._8_4_) ^ GlobalVectorConstants::IntAllMask.m128i_u32[2];
      in_XMM1.m128i_u32[3] =
           -(uint)(*piVar21 == auVar172._12_4_) ^ GlobalVectorConstants::IntAllMask.m128i_u32[3];
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x3d:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    puVar81 = (uint *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      uVar84 = *puVar81;
      puVar82 = puVar81 + 1;
      puVar18 = puVar81 + 2;
      puVar19 = puVar81 + 3;
      puVar81 = (uint *)((longlong)puVar81 + (ulonglong)bVar3);
      in_XMM1.m128i_u32[0] = uVar84 & auVar172._0_4_;
      in_XMM1.m128i_u32[1] = *puVar82 & auVar172._4_4_;
      in_XMM1.m128i_u32[2] = *puVar18 & auVar172._8_4_;
      in_XMM1.m128i_u32[3] = *puVar19 & auVar172._12_4_;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x3e:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      auVar117 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar3);
      in_XMM1 = (__m128i)(auVar117 | auVar172);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x3f:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    puVar81 = (uint *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      uVar84 = *puVar81;
      puVar82 = puVar81 + 1;
      puVar18 = puVar81 + 2;
      puVar19 = puVar81 + 3;
      puVar81 = (uint *)((longlong)puVar81 + (ulonglong)bVar3);
      in_XMM1.m128i_u32[0] = uVar84 ^ auVar172._0_4_;
      in_XMM1.m128i_u32[1] = *puVar82 ^ auVar172._4_4_;
      in_XMM1.m128i_u32[2] = *puVar18 ^ auVar172._8_4_;
      in_XMM1.m128i_u32[3] = *puVar19 ^ auVar172._12_4_;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x40:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    puVar81 = (uint *)param_2->RegPtrTable[*puVar68];
    pauVar72 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      uVar84 = *puVar81;
      puVar82 = puVar81 + 1;
      puVar18 = puVar81 + 2;
      puVar19 = puVar81 + 3;
      puVar81 = (uint *)((longlong)puVar81 + (ulonglong)bVar6);
      auVar93._0_4_ = uVar84 ^ GlobalVectorConstants::IntAllMask.m128i_u32[0];
      auVar93._4_4_ = *puVar82 ^ GlobalVectorConstants::IntAllMask.m128i_u32[1];
      auVar93._8_4_ = *puVar18 ^ GlobalVectorConstants::IntAllMask.m128i_u32[2];
      auVar93._12_4_ = *puVar19 ^ GlobalVectorConstants::IntAllMask.m128i_u32[3];
      in_ZMM0._0_16_ = auVar93;
      *pauVar66 = auVar93;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x41:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    bVar6 = param_2->RegIncTable[*puVar68];
    pauVar64 = pauVar66 + param_3;
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      local_188 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar3);
      local_178.m128i_i8 = in_XMM1.m128i_i8;
      if (iVar62 < 5) {
        lVar67 = 0;
        do {
          *(int *)(local_1d8 + lVar67) =
               *(int *)(local_178.m128i_i8 + lVar67) <<
               ((byte)*(undefined4 *)(local_188 + lVar67) & 0x1f);
          lVar67 = lVar67 + 4;
        } while (lVar67 < 0x10);
        in_ZMM0._0_16_ = local_1d8;
      }
      else {
        local_1d8 = vpsllvd_avx2((undefined1  [16])in_XMM1,local_188);
        in_ZMM0 = ZEXT1664(local_1d8);
      }
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x42:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    bVar6 = param_2->RegIncTable[*puVar68];
    pauVar64 = pauVar66 + param_3;
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      local_158 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar3);
      local_168.m128i_i8 = in_XMM1.m128i_i8;
      if (iVar62 < 5) {
        lVar67 = 0;
        do {
          *(uint *)(local_1c8 + lVar67) =
               *(uint *)(local_168.m128i_i8 + lVar67) >>
               ((byte)*(undefined4 *)(local_158 + lVar67) & 0x1f);
          lVar67 = lVar67 + 4;
        } while (lVar67 < 0x10);
        in_ZMM0._0_16_ = local_1c8;
      }
      else {
        local_1c8 = vpsrlvd_avx2((undefined1  [16])in_XMM1,local_158);
        in_ZMM0 = ZEXT1664(local_1c8);
      }
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x43:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    puVar81 = (uint *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      uVar84 = *puVar81;
      puVar82 = puVar81 + 1;
      puVar18 = puVar81 + 2;
      puVar19 = puVar81 + 3;
      puVar81 = (uint *)((longlong)puVar81 + (ulonglong)bVar3);
      in_XMM1.m128i_u32[0] = uVar84 & auVar172._0_4_;
      in_XMM1.m128i_u32[1] = *puVar82 & auVar172._4_4_;
      in_XMM1.m128i_u32[2] = *puVar18 & auVar172._8_4_;
      in_XMM1.m128i_u32[3] = *puVar19 & auVar172._12_4_;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x44:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      auVar117 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar3);
      in_XMM1 = (__m128i)(auVar117 | auVar172);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x45:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    puVar81 = (uint *)ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      uVar84 = *puVar81;
      puVar82 = puVar81 + 1;
      puVar18 = puVar81 + 2;
      puVar19 = puVar81 + 3;
      puVar81 = (uint *)((longlong)puVar81 + (ulonglong)bVar3);
      in_XMM1.m128i_u32[0] = uVar84 ^ auVar172._0_4_;
      in_XMM1.m128i_u32[1] = *puVar82 ^ auVar172._4_4_;
      in_XMM1.m128i_u32[2] = *puVar18 ^ auVar172._8_4_;
      in_XMM1.m128i_u32[3] = *puVar19 ^ auVar172._12_4_;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x46:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    puVar81 = (uint *)param_2->RegPtrTable[*puVar68];
    pauVar72 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      uVar84 = *puVar81;
      puVar82 = puVar81 + 1;
      puVar18 = puVar81 + 2;
      puVar19 = puVar81 + 3;
      puVar81 = (uint *)((longlong)puVar81 + (ulonglong)bVar6);
      auVar94._0_4_ = uVar84 ^ GlobalVectorConstants::IntAllMask.m128i_u32[0];
      auVar94._4_4_ = *puVar82 ^ GlobalVectorConstants::IntAllMask.m128i_u32[1];
      auVar94._8_4_ = *puVar18 ^ GlobalVectorConstants::IntAllMask.m128i_u32[2];
      auVar94._12_4_ = *puVar19 ^ GlobalVectorConstants::IntAllMask.m128i_u32[3];
      in_ZMM0._0_16_ = auVar94;
      *pauVar66 = auVar94;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x47:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    pfVar77 = (float *)param_2->RegPtrTable[*puVar68];
    pauVar72 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      auVar95._0_4_ = (int)fVar15;
      auVar95._4_4_ = (int)*pfVar79;
      auVar95._8_4_ = (int)*pfVar16;
      auVar95._12_4_ = (int)*pfVar17;
      in_ZMM0._0_16_ = auVar95;
      *pauVar66 = auVar95;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x48:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    piVar80 = (int *)param_2->RegPtrTable[*puVar68];
    pauVar72 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      auVar96._0_4_ = (float)iVar86;
      auVar96._4_4_ = (float)*piVar70;
      auVar96._8_4_ = (float)*piVar20;
      auVar96._12_4_ = (float)*piVar21;
      in_ZMM0._0_16_ = auVar96;
      *pauVar66 = auVar96;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x49:
    in_XMM2._0_12_ = ZEXT812(0);
    in_XMM2.m128i_i32[3] = 0;
    p_Var65 = (__m128i *)param_2->RegPtrTable[puVar68[1]];
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      in_XMM1.m128i_i32[1] = -(uint)(0.0 < auVar172._4_4_);
      in_XMM1.m128i_i32[0] = -(uint)(0.0 < auVar172._0_4_);
      in_XMM1.m128i_i32[2] = -(uint)(0.0 < auVar172._8_4_);
      in_XMM1.m128i_i32[3] = -(uint)(0.0 < auVar172._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x4a:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    puVar81 = (uint *)param_2->RegPtrTable[*puVar68];
    pauVar72 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      uVar84 = *puVar81;
      puVar82 = puVar81 + 1;
      puVar18 = puVar81 + 2;
      puVar19 = puVar81 + 3;
      puVar81 = (uint *)((longlong)puVar81 + (ulonglong)bVar6);
      auVar97._0_4_ = uVar84 & (uint)VVMConstVec4_One4[0];
      auVar97._4_4_ = *puVar82 & (uint)VVMConstVec4_One4[1];
      auVar97._8_4_ = *puVar18 & (uint)VVMConstVec4_One4[2];
      auVar97._12_4_ = *puVar19 & (uint)VVMConstVec4_One4[3];
      in_ZMM0._0_16_ = auVar97;
      *pauVar66 = auVar97;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x4b:
    in_XMM1._0_12_ = ZEXT812(0);
    in_XMM1.m128i_i32[3] = 0;
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    piVar80 = (int *)param_2->RegPtrTable[*puVar68];
    pauVar72 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      auVar98._0_4_ = -(uint)(0 < iVar86);
      auVar98._4_4_ = -(uint)(0 < *piVar70);
      auVar98._8_4_ = -(uint)(0 < *piVar20);
      auVar98._12_4_ = -(uint)(0 < *piVar21);
      in_ZMM0._0_16_ = auVar98;
      *pauVar66 = auVar98;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x4c:
    p_Var65 = (__m128i *)param_2->RegPtrTable[puVar68[1]];
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      in_XMM1.m128i_u32[0] = uVar40 & auVar172._0_4_;
      in_XMM1.m128i_u32[1] = uVar39 & auVar172._4_4_;
      in_XMM1.m128i_u32[2] = uVar182 & auVar172._8_4_;
      in_XMM1.m128i_u32[3] = uVar181 & auVar172._12_4_;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x53:
  case 0x54:
    puVar68 = (ushort *)VVM_Output32(true,(uchar *)puVar68,param_2,param_1);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x55:
    puVar68 = (ushort *)VVM_Output16(true,(uchar *)puVar68,param_2,param_1);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x56:
    puVar68 = (ushort *)VVM_acquireindex(true,(uchar *)puVar68,param_2,param_1);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x57:
    puVar68 = (ushort *)VVM_external_func_call(true,(uchar *)puVar68,param_2,param_1,param_3);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x58:
    iVar86 = (param_2->ChunkLocalData).StartInstanceThisChunk;
    _Var136._0_4_ = iVar86 + VVMConstVec4_ZeroOneTwoThree4i[0];
    _Var136._4_4_ = iVar86 + VVMConstVec4_ZeroOneTwoThree4i[1];
    _Var136._8_4_ = iVar86 + VVMConstVec4_ZeroOneTwoThree4i[2];
    _Var136._12_4_ = iVar86 + VVMConstVec4_ZeroOneTwoThree4i[3];
    p_Var65 = (__m128i *)param_2->RegPtrTable[*puVar68];
    p_Var73 = p_Var65 + param_3;
    do {
                    /* WARNING: Store size is inaccurate */
      *(__m128i *)p_Var65->m128i_i8 = _Var136;
      p_Var65 = p_Var65 + 1;
      in_XMM1.m128i_i32[0] = _Var136.m128i_i32[0] + iVar38;
      in_XMM1.m128i_i32[1] = _Var136.m128i_i32[1] + iVar37;
      in_XMM1.m128i_i32[2] = _Var136.m128i_i32[2] + iVar36;
      in_XMM1.m128i_i32[3] = _Var136.m128i_i32[3] + iVar35;
      _Var136 = in_XMM1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 3);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x5b:
    puVar68 = puVar68 + 1;
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x5d:
    puVar68 = (ushort *)VVM_update_id(true,(uchar *)puVar68,param_2,param_1,param_3);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x5e:
    puVar68 = (ushort *)VVM_acquire_id(true,(uchar *)puVar68,param_2,param_1,param_3);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x5f:
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[puVar68[1]];
    puVar75 = (ulonglong *)param_2->RegPtrTable[*puVar68];
    bVar6 = param_2->RegIncTable[*puVar68];
    pauVar72 = pauVar66 + param_3;
    do {
      uVar1 = *puVar75;
      auVar12._8_4_ = 0;
      auVar12._0_8_ = uVar1;
      auVar12._12_2_ = (short)(uVar1 >> 0x30);
      auVar13._8_2_ = (short)(uVar1 >> 0x20);
      auVar13._0_8_ = uVar1;
      auVar13._10_4_ = auVar12._10_4_;
      auVar33._6_8_ = 0;
      auVar33._0_6_ = auVar13._8_6_;
      Var34 = CONCAT82(SUB148(auVar33 << 0x40,6),(short)(uVar1 >> 0x10));
      in_XMM2._0_4_ = (float)CONCAT22(0,(ushort)uVar1);
      in_XMM2._4_10_ = Var34;
      in_XMM2.m128i_i16[7] = 0;
      puVar75 = (ulonglong *)((longlong)puVar75 + (ulonglong)(bVar6 >> 1));
      uVar174 = uVar84 & (uint)in_XMM2._0_4_;
      uVar156 = (uint)Var34;
      uVar180 = uVar120 & uVar156;
      uVar181 = uVar124 & auVar13._8_4_;
      uVar14 = auVar12._10_4_ >> 0x10;
      uVar182 = uVar129 & uVar14;
      auVar161._0_4_ = -(uint)(iVar127 < (int)uVar174) & uVar85;
      auVar161._4_4_ = -(uint)(iVar45 < (int)uVar180) & uVar121;
      auVar161._8_4_ = -(uint)(iVar46 < (int)uVar181) & uVar125;
      auVar161._12_4_ = -(uint)(iVar47 < (int)uVar182) & uVar130;
      auVar175._0_4_ = (float)(uVar174 << 0xd) * fVar185;
      auVar175._4_4_ = (float)(uVar180 << 0xd) * fVar186;
      auVar175._8_4_ = (float)(uVar181 << 0xd) * fVar187;
      auVar175._12_4_ = (float)(uVar182 << 0xd) * fVar188;
      auVar99._0_4_ = -(uint)(iVar86 < (int)uVar174) & uVar48;
      auVar99._4_4_ = -(uint)(iVar122 < (int)uVar180) & uVar49;
      auVar99._8_4_ = -(uint)(iVar126 < (int)uVar181) & uVar50;
      auVar99._12_4_ = -(uint)(iVar131 < (int)uVar182) & uVar51;
      in_ZMM0._0_16_ = auVar99;
      in_XMM1.m128i_u32[0] = (uVar174 ^ (uint)in_XMM2._0_4_) << 0x10;
      in_XMM1.m128i_u32[1] = (uVar180 ^ uVar156) << 0x10;
      in_XMM1.m128i_u32[2] = (uVar181 ^ auVar13._8_4_) << 0x10;
      in_XMM1.m128i_u32[3] = (uVar182 ^ uVar14) << 0x10;
      *pauVar66 = auVar161 | auVar99 | (undefined1  [16])in_XMM1 | auVar175;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    iVar83 = ___xmm_000587c5000587c5000587c5000587c5;
    iVar119 = _UNK_151cf02d4;
    iVar123 = _UNK_151cf02d8;
    iVar128 = _UNK_151cf02dc;
    uVar44 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar43 = _UNK_15061cc74;
    uVar42 = _UNK_15061cc78;
    uVar41 = _UNK_15061cc7c;
    uVar40 = ___xmm_00000001000000010000000100000001;
    uVar39 = _UNK_150631da4;
    uVar182 = _UNK_150631da8;
    uVar181 = _UNK_150631dac;
    uVar180 = ___xmm_3f8000003f8000003f8000003f800000;
    uVar174 = _UNK_15076b1f4;
    uVar156 = _UNK_15076b1f8;
    uVar14 = _UNK_15076b1fc;
    iVar38 = ___xmm_00000004000000040000000400000004;
    iVar37 = _UNK_150b50dd4;
    iVar36 = _UNK_150b50dd8;
    iVar35 = _UNK_150b50ddc;
    goto switchD_148dbd065_caseD_24;
  case 0x62:
    iVar86 = (param_2->ChunkLocalData).StartInstanceThisChunk;
    in_XMM2._0_4_ = (float)(iVar86 + VVMConstVec4_ZeroOneTwoThree4i[0]);
    in_XMM2._4_4_ = (float)(iVar86 + VVMConstVec4_ZeroOneTwoThree4i[1]);
    in_XMM2._8_4_ = (float)(iVar86 + VVMConstVec4_ZeroOneTwoThree4i[2]);
    in_XMM2.m128i_i32[3] = iVar86 + VVMConstVec4_ZeroOneTwoThree4i[3];
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    pauVar72 = pauVar66 + param_3;
    do {
      auVar100._0_4_ = (float)in_XMM2.m128i_i32[0];
      iVar86 = in_XMM2.m128i_i32[1];
      auVar100._4_4_ = (float)iVar86;
      iVar122 = in_XMM2.m128i_i32[2];
      auVar100._8_4_ = (float)iVar122;
      iVar126 = in_XMM2.m128i_i32[3];
      auVar100._12_4_ = (float)iVar126;
      in_ZMM0._0_16_ = auVar100;
      in_XMM2._0_4_ = (float)(in_XMM2.m128i_i32[0] + iVar38);
      in_XMM2._4_4_ = (float)(iVar86 + iVar37);
      in_XMM2._8_4_ = (float)(iVar122 + iVar36);
      in_XMM2.m128i_i32[3] = iVar126 + iVar35;
      *pauVar66 = auVar100;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 3);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 99:
    iVar86 = (param_2->ChunkLocalData).StartInstanceThisChunk;
    p_Var65 = (__m128i *)param_2->RegPtrTable[puVar68[1]];
    pauVar66 = (undefined1 (*) [16])param_2->RegPtrTable[*puVar68];
    _Var140._0_4_ = iVar86 + VVMConstVec4_ZeroOneTwoThree4i[0];
    _Var140._4_4_ = iVar86 + VVMConstVec4_ZeroOneTwoThree4i[1];
    _Var140._8_4_ = iVar86 + VVMConstVec4_ZeroOneTwoThree4i[2];
    _Var140._12_4_ = iVar86 + VVMConstVec4_ZeroOneTwoThree4i[3];
    bVar6 = param_2->RegIncTable[*puVar68];
    p_Var73 = p_Var65 + param_3;
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      in_XMM2._0_4_ = (float)(_Var140.m128i_i32[0] + iVar38);
      in_XMM2._4_4_ = (float)(_Var140.m128i_i32[1] + iVar37);
      in_XMM2._8_4_ = (float)(_Var140.m128i_i32[2] + iVar36);
      in_XMM2.m128i_i32[3] = _Var140.m128i_i32[3] + iVar35;
      in_XMM1.m128i_i32[0] = _Var140.m128i_i32[0] + auVar172._0_4_;
      in_XMM1.m128i_i32[1] = _Var140.m128i_i32[1] + auVar172._4_4_;
      in_XMM1.m128i_i32[2] = _Var140.m128i_i32[2] + auVar172._8_4_;
      in_XMM1.m128i_i32[3] = _Var140.m128i_i32[3] + auVar172._12_4_;
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
      _Var140 = in_XMM2;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 5);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 100:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    pfVar77 = (float *)ppuVar7[*puVar68];
    pfVar79 = (float *)ppuVar7[puVar68[1]];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pacVar69 = (char (*) [16])ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    pauVar72 = pauVar66 + param_3;
    do {
      fVar15 = *pfVar79;
      pfVar16 = pfVar79 + 1;
      pfVar17 = pfVar79 + 2;
      pfVar22 = pfVar79 + 3;
      pfVar79 = (float *)((longlong)pfVar79 + (ulonglong)bVar3);
      fVar23 = *pfVar77;
      pfVar24 = pfVar77 + 1;
      pfVar25 = pfVar77 + 2;
      pfVar26 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      in_XMM1.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar5);
      auVar162._0_4_ = -(uint)(fVar23 < fVar15) & in_XMM2.m128i_u32[0];
      auVar162._4_4_ = -(uint)(*pfVar24 < *pfVar16) & in_XMM2.m128i_u32[1];
      auVar162._8_4_ = -(uint)(*pfVar25 < *pfVar17) & in_XMM2.m128i_u32[2];
      auVar162._12_4_ = -(uint)(*pfVar26 < *pfVar22) & in_XMM2.m128i_u32[3];
      auVar101._0_4_ = ~-(uint)(fVar23 < fVar15) & in_XMM1.m128i_u32[0];
      auVar101._4_4_ = ~-(uint)(*pfVar24 < *pfVar16) & in_XMM1.m128i_u32[1];
      auVar101._8_4_ = ~-(uint)(*pfVar25 < *pfVar17) & in_XMM1.m128i_u32[2];
      auVar101._12_4_ = ~-(uint)(*pfVar26 < *pfVar22) & in_XMM1.m128i_u32[3];
      in_ZMM0._0_16_ = auVar101 | auVar162;
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x65:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    pfVar77 = (float *)ppuVar7[*puVar68];
    pfVar79 = (float *)ppuVar7[puVar68[1]];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pacVar69 = (char (*) [16])ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    pauVar72 = pauVar66 + param_3;
    do {
      fVar15 = *pfVar79;
      pfVar16 = pfVar79 + 1;
      pfVar17 = pfVar79 + 2;
      pfVar22 = pfVar79 + 3;
      pfVar79 = (float *)((longlong)pfVar79 + (ulonglong)bVar3);
      fVar23 = *pfVar77;
      pfVar24 = pfVar77 + 1;
      pfVar25 = pfVar77 + 2;
      pfVar26 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      in_XMM1.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar5);
      auVar163._0_4_ = -(uint)(fVar23 <= fVar15) & in_XMM2.m128i_u32[0];
      auVar163._4_4_ = -(uint)(*pfVar24 <= *pfVar16) & in_XMM2.m128i_u32[1];
      auVar163._8_4_ = -(uint)(*pfVar25 <= *pfVar17) & in_XMM2.m128i_u32[2];
      auVar163._12_4_ = -(uint)(*pfVar26 <= *pfVar22) & in_XMM2.m128i_u32[3];
      auVar102._0_4_ = ~-(uint)(fVar23 <= fVar15) & in_XMM1.m128i_u32[0];
      auVar102._4_4_ = ~-(uint)(*pfVar24 <= *pfVar16) & in_XMM1.m128i_u32[1];
      auVar102._8_4_ = ~-(uint)(*pfVar25 <= *pfVar17) & in_XMM1.m128i_u32[2];
      auVar102._12_4_ = ~-(uint)(*pfVar26 <= *pfVar22) & in_XMM1.m128i_u32[3];
      in_ZMM0._0_16_ = auVar102 | auVar163;
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x66:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    pfVar77 = (float *)ppuVar7[*puVar68];
    pfVar79 = (float *)ppuVar7[puVar68[1]];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pacVar69 = (char (*) [16])ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    pauVar72 = pauVar66 + param_3;
    do {
      fVar15 = *pfVar77;
      pfVar16 = pfVar77 + 1;
      pfVar17 = pfVar77 + 2;
      pfVar22 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      fVar23 = *pfVar79;
      pfVar24 = pfVar79 + 1;
      pfVar25 = pfVar79 + 2;
      pfVar26 = pfVar79 + 3;
      pfVar79 = (float *)((longlong)pfVar79 + (ulonglong)bVar3);
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      in_XMM1.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar5);
      auVar164._0_4_ = -(uint)(fVar23 == fVar15) & in_XMM2.m128i_u32[0];
      auVar164._4_4_ = -(uint)(*pfVar24 == *pfVar16) & in_XMM2.m128i_u32[1];
      auVar164._8_4_ = -(uint)(*pfVar25 == *pfVar17) & in_XMM2.m128i_u32[2];
      auVar164._12_4_ = -(uint)(*pfVar26 == *pfVar22) & in_XMM2.m128i_u32[3];
      auVar103._0_4_ = ~-(uint)(fVar23 == fVar15) & in_XMM1.m128i_u32[0];
      auVar103._4_4_ = ~-(uint)(*pfVar24 == *pfVar16) & in_XMM1.m128i_u32[1];
      auVar103._8_4_ = ~-(uint)(*pfVar25 == *pfVar17) & in_XMM1.m128i_u32[2];
      auVar103._12_4_ = ~-(uint)(*pfVar26 == *pfVar22) & in_XMM1.m128i_u32[3];
      in_ZMM0._0_16_ = auVar103 | auVar164;
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x67:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    piVar80 = (int *)ppuVar7[*puVar68];
    piVar70 = (int *)ppuVar7[puVar68[1]];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pacVar69 = (char (*) [16])ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    pauVar72 = pauVar66 + param_3;
    do {
      iVar62 = *piVar80;
      piVar20 = piVar80 + 1;
      piVar21 = piVar80 + 2;
      piVar27 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      iVar86 = *piVar70;
      piVar28 = piVar70 + 1;
      piVar29 = piVar70 + 2;
      piVar30 = piVar70 + 3;
      piVar70 = (int *)((longlong)piVar70 + (ulonglong)bVar3);
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      in_XMM1.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar5);
      auVar165._0_4_ = -(uint)(iVar62 < iVar86) & in_XMM2.m128i_u32[0];
      auVar165._4_4_ = -(uint)(*piVar20 < *piVar28) & in_XMM2.m128i_u32[1];
      auVar165._8_4_ = -(uint)(*piVar21 < *piVar29) & in_XMM2.m128i_u32[2];
      auVar165._12_4_ = -(uint)(*piVar27 < *piVar30) & in_XMM2.m128i_u32[3];
      auVar104._0_4_ = ~-(uint)(iVar62 < iVar86) & in_XMM1.m128i_u32[0];
      auVar104._4_4_ = ~-(uint)(*piVar20 < *piVar28) & in_XMM1.m128i_u32[1];
      auVar104._8_4_ = ~-(uint)(*piVar21 < *piVar29) & in_XMM1.m128i_u32[2];
      auVar104._12_4_ = ~-(uint)(*piVar27 < *piVar30) & in_XMM1.m128i_u32[3];
      in_ZMM0._0_16_ = auVar104 | auVar165;
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x68:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    piVar80 = (int *)ppuVar7[*puVar68];
    piVar70 = (int *)ppuVar7[puVar68[1]];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pacVar69 = (char (*) [16])ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    pauVar72 = pauVar66 + param_3;
    do {
      iVar62 = *piVar70;
      piVar20 = piVar70 + 1;
      piVar21 = piVar70 + 2;
      piVar27 = piVar70 + 3;
      piVar70 = (int *)((longlong)piVar70 + (ulonglong)bVar3);
      iVar86 = *piVar80;
      piVar28 = piVar80 + 1;
      piVar29 = piVar80 + 2;
      piVar30 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      in_XMM1.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar5);
      uVar84 = -(uint)(iVar62 < iVar86) ^ GlobalVectorConstants::IntAllMask.m128i_u32[0];
      uVar120 = -(uint)(*piVar20 < *piVar28) ^ GlobalVectorConstants::IntAllMask.m128i_u32[1];
      uVar124 = -(uint)(*piVar21 < *piVar29) ^ GlobalVectorConstants::IntAllMask.m128i_u32[2];
      uVar129 = -(uint)(*piVar27 < *piVar30) ^ GlobalVectorConstants::IntAllMask.m128i_u32[3];
      auVar166._0_4_ = uVar84 & in_XMM2.m128i_u32[0];
      auVar166._4_4_ = uVar120 & in_XMM2.m128i_u32[1];
      auVar166._8_4_ = uVar124 & in_XMM2.m128i_u32[2];
      auVar166._12_4_ = uVar129 & in_XMM2.m128i_u32[3];
      auVar105._0_4_ = ~uVar84 & in_XMM1.m128i_u32[0];
      auVar105._4_4_ = ~uVar120 & in_XMM1.m128i_u32[1];
      auVar105._8_4_ = ~uVar124 & in_XMM1.m128i_u32[2];
      auVar105._12_4_ = ~uVar129 & in_XMM1.m128i_u32[3];
      in_ZMM0._0_16_ = auVar105 | auVar166;
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x69:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    piVar80 = (int *)ppuVar7[*puVar68];
    piVar70 = (int *)ppuVar7[puVar68[1]];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pacVar69 = (char (*) [16])ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    pauVar72 = pauVar66 + param_3;
    do {
      iVar62 = *piVar80;
      piVar20 = piVar80 + 1;
      piVar21 = piVar80 + 2;
      piVar27 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      iVar86 = *piVar70;
      piVar28 = piVar70 + 1;
      piVar29 = piVar70 + 2;
      piVar30 = piVar70 + 3;
      piVar70 = (int *)((longlong)piVar70 + (ulonglong)bVar3);
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      in_XMM1.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar5);
      auVar167._0_4_ = -(uint)(iVar86 == iVar62) & in_XMM2.m128i_u32[0];
      auVar167._4_4_ = -(uint)(*piVar28 == *piVar20) & in_XMM2.m128i_u32[1];
      auVar167._8_4_ = -(uint)(*piVar29 == *piVar21) & in_XMM2.m128i_u32[2];
      auVar167._12_4_ = -(uint)(*piVar30 == *piVar27) & in_XMM2.m128i_u32[3];
      auVar106._0_4_ = ~-(uint)(iVar86 == iVar62) & in_XMM1.m128i_u32[0];
      auVar106._4_4_ = ~-(uint)(*piVar28 == *piVar20) & in_XMM1.m128i_u32[1];
      auVar106._8_4_ = ~-(uint)(*piVar29 == *piVar21) & in_XMM1.m128i_u32[2];
      auVar106._12_4_ = ~-(uint)(*piVar30 == *piVar27) & in_XMM1.m128i_u32[3];
      in_ZMM0._0_16_ = auVar106 | auVar167;
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x6a:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pfVar77 = (float *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      in_XMM2._0_4_ = (float)(-(uint)(fVar15 < auVar172._0_4_) & in_XMM1.m128i_u32[0]);
      in_XMM2._4_4_ = (float)(-(uint)(*pfVar79 < auVar172._4_4_) & in_XMM1.m128i_u32[1]);
      in_XMM2._8_4_ = (float)(-(uint)(*pfVar16 < auVar172._8_4_) & in_XMM1.m128i_u32[2]);
      in_XMM2.m128i_u32[3] = -(uint)(*pfVar17 < auVar172._12_4_) & in_XMM1.m128i_u32[3];
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x6b:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pfVar77 = (float *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      in_XMM2._0_4_ = (float)(-(uint)(fVar15 <= auVar172._0_4_) & in_XMM1.m128i_u32[0]);
      in_XMM2._4_4_ = (float)(-(uint)(*pfVar79 <= auVar172._4_4_) & in_XMM1.m128i_u32[1]);
      in_XMM2._8_4_ = (float)(-(uint)(*pfVar16 <= auVar172._8_4_) & in_XMM1.m128i_u32[2]);
      in_XMM2.m128i_u32[3] = -(uint)(*pfVar17 <= auVar172._12_4_) & in_XMM1.m128i_u32[3];
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x6c:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      in_XMM2._0_4_ = (float)(-(uint)(fVar15 < in_XMM1.m128i_i32[0]) & auVar172._0_4_);
      in_XMM2._4_4_ = (float)(-(uint)(*pfVar79 < in_XMM1.m128i_i32[1]) & auVar172._4_4_);
      in_XMM2._8_4_ = (float)(-(uint)(*pfVar16 < in_XMM1.m128i_i32[2]) & auVar172._8_4_);
      in_XMM2.m128i_u32[3] = -(uint)(*pfVar17 < in_XMM1.m128i_i32[3]) & auVar172._12_4_;
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x6d:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      in_XMM2._0_4_ = (float)(-(uint)(fVar15 <= in_XMM1.m128i_i32[0]) & auVar172._0_4_);
      in_XMM2._4_4_ = (float)(-(uint)(*pfVar79 <= in_XMM1.m128i_i32[1]) & auVar172._4_4_);
      in_XMM2._8_4_ = (float)(-(uint)(*pfVar16 <= in_XMM1.m128i_i32[2]) & auVar172._8_4_);
      in_XMM2.m128i_u32[3] = -(uint)(*pfVar17 <= in_XMM1.m128i_i32[3]) & auVar172._12_4_;
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x6e:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      in_XMM2._0_4_ = (float)(-(uint)(fVar15 == in_XMM1.m128i_i32[0]) & auVar172._0_4_);
      in_XMM2._4_4_ = (float)(-(uint)(*pfVar79 == in_XMM1.m128i_i32[1]) & auVar172._4_4_);
      in_XMM2._8_4_ = (float)(-(uint)(*pfVar16 == in_XMM1.m128i_i32[2]) & auVar172._8_4_);
      in_XMM2.m128i_u32[3] = -(uint)(*pfVar17 == in_XMM1.m128i_i32[3]) & auVar172._12_4_;
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x6f:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      in_XMM2._0_4_ = (float)(-(uint)(fVar15 != in_XMM1.m128i_i32[0]) & auVar172._0_4_);
      in_XMM2._4_4_ = (float)(-(uint)(*pfVar79 != in_XMM1.m128i_i32[1]) & auVar172._4_4_);
      in_XMM2._8_4_ = (float)(-(uint)(*pfVar16 != in_XMM1.m128i_i32[2]) & auVar172._8_4_);
      in_XMM2.m128i_u32[3] = -(uint)(*pfVar17 != in_XMM1.m128i_i32[3]) & auVar172._12_4_;
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x70:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    piVar80 = (int *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      in_XMM2._0_4_ = (float)(-(uint)(in_XMM1.m128i_i32[0] < iVar86) & auVar172._0_4_);
      in_XMM2._4_4_ = (float)(-(uint)(in_XMM1.m128i_i32[1] < *piVar70) & auVar172._4_4_);
      in_XMM2._8_4_ = (float)(-(uint)(in_XMM1.m128i_i32[2] < *piVar20) & auVar172._8_4_);
      in_XMM2.m128i_u32[3] = -(uint)(in_XMM1.m128i_i32[3] < *piVar21) & auVar172._12_4_;
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x71:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    piVar80 = (int *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      in_XMM2._0_4_ =
           (float)((-(uint)(auVar172._0_4_ < iVar86) ^
                   GlobalVectorConstants::IntAllMask.m128i_u32[0]) & in_XMM1.m128i_u32[0]);
      in_XMM2._4_4_ =
           (float)((-(uint)(auVar172._4_4_ < *piVar70) ^
                   GlobalVectorConstants::IntAllMask.m128i_u32[1]) & in_XMM1.m128i_u32[1]);
      in_XMM2._8_4_ =
           (float)((-(uint)(auVar172._8_4_ < *piVar20) ^
                   GlobalVectorConstants::IntAllMask.m128i_u32[2]) & in_XMM1.m128i_u32[2]);
      in_XMM2.m128i_u32[3] =
           (-(uint)(auVar172._12_4_ < *piVar21) ^ GlobalVectorConstants::IntAllMask.m128i_u32[3]) &
           in_XMM1.m128i_u32[3];
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x72:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    piVar80 = (int *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      in_XMM2._0_4_ = (float)(-(uint)(auVar172._0_4_ < iVar86) & in_XMM1.m128i_u32[0]);
      in_XMM2._4_4_ = (float)(-(uint)(auVar172._4_4_ < *piVar70) & in_XMM1.m128i_u32[1]);
      in_XMM2._8_4_ = (float)(-(uint)(auVar172._8_4_ < *piVar20) & in_XMM1.m128i_u32[2]);
      in_XMM2.m128i_u32[3] = -(uint)(auVar172._12_4_ < *piVar21) & in_XMM1.m128i_u32[3];
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x73:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    piVar80 = (int *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      in_XMM2._0_4_ =
           (float)((-(uint)(auVar172._0_4_ < iVar86) ^
                   GlobalVectorConstants::IntAllMask.m128i_u32[0]) & in_XMM1.m128i_u32[0]);
      in_XMM2._4_4_ =
           (float)((-(uint)(auVar172._4_4_ < *piVar70) ^
                   GlobalVectorConstants::IntAllMask.m128i_u32[1]) & in_XMM1.m128i_u32[1]);
      in_XMM2._8_4_ =
           (float)((-(uint)(auVar172._8_4_ < *piVar20) ^
                   GlobalVectorConstants::IntAllMask.m128i_u32[2]) & in_XMM1.m128i_u32[2]);
      in_XMM2.m128i_u32[3] =
           (-(uint)(auVar172._12_4_ < *piVar21) ^ GlobalVectorConstants::IntAllMask.m128i_u32[3]) &
           in_XMM1.m128i_u32[3];
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x74:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    piVar80 = (int *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      in_XMM2._0_4_ = (float)(-(uint)(iVar86 == in_XMM1.m128i_i32[0]) & auVar172._0_4_);
      in_XMM2._4_4_ = (float)(-(uint)(*piVar70 == in_XMM1.m128i_i32[1]) & auVar172._4_4_);
      in_XMM2._8_4_ = (float)(-(uint)(*piVar20 == in_XMM1.m128i_i32[2]) & auVar172._8_4_);
      in_XMM2.m128i_u32[3] = -(uint)(*piVar21 == in_XMM1.m128i_i32[3]) & auVar172._12_4_;
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x75:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    piVar80 = (int *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      in_XMM2._0_4_ =
           (float)((-(uint)(iVar86 == auVar172._0_4_) ^
                   GlobalVectorConstants::IntAllMask.m128i_u32[0]) & in_XMM1.m128i_u32[0]);
      in_XMM2._4_4_ =
           (float)((-(uint)(*piVar70 == auVar172._4_4_) ^
                   GlobalVectorConstants::IntAllMask.m128i_u32[1]) & in_XMM1.m128i_u32[1]);
      in_XMM2._8_4_ =
           (float)((-(uint)(*piVar20 == auVar172._8_4_) ^
                   GlobalVectorConstants::IntAllMask.m128i_u32[2]) & in_XMM1.m128i_u32[2]);
      in_XMM2.m128i_u32[3] =
           (-(uint)(*piVar21 == auVar172._12_4_) ^ GlobalVectorConstants::IntAllMask.m128i_u32[3]) &
           in_XMM1.m128i_u32[3];
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x76:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pfVar77 = (float *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      auVar141._4_4_ = -(uint)(*pfVar79 < auVar172._4_4_);
      auVar141._0_4_ = -(uint)(fVar15 < auVar172._0_4_);
      auVar141._8_4_ = -(uint)(*pfVar16 < auVar172._8_4_);
      auVar141._12_4_ = -(uint)(*pfVar17 < auVar172._12_4_);
      in_XMM2.m128i_i8 = auVar141 | in_XMM1.m128i_i8;
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x77:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pfVar77 = (float *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      auVar142._4_4_ = -(uint)(*pfVar79 <= auVar172._4_4_);
      auVar142._0_4_ = -(uint)(fVar15 <= auVar172._0_4_);
      auVar142._8_4_ = -(uint)(*pfVar16 <= auVar172._8_4_);
      auVar142._12_4_ = -(uint)(*pfVar17 <= auVar172._12_4_);
      in_XMM2.m128i_i8 = auVar142 | in_XMM1.m128i_i8;
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x78:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      auVar143._4_4_ = -(uint)(*pfVar79 < in_XMM1.m128i_i32[1]);
      auVar143._0_4_ = -(uint)(fVar15 < in_XMM1.m128i_i32[0]);
      auVar143._8_4_ = -(uint)(*pfVar16 < in_XMM1.m128i_i32[2]);
      auVar143._12_4_ = -(uint)(*pfVar17 < in_XMM1.m128i_i32[3]);
      in_XMM2 = (__m128i)(auVar143 | auVar172);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x79:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      auVar144._4_4_ = -(uint)(*pfVar79 <= in_XMM1.m128i_i32[1]);
      auVar144._0_4_ = -(uint)(fVar15 <= in_XMM1.m128i_i32[0]);
      auVar144._8_4_ = -(uint)(*pfVar16 <= in_XMM1.m128i_i32[2]);
      auVar144._12_4_ = -(uint)(*pfVar17 <= in_XMM1.m128i_i32[3]);
      in_XMM2 = (__m128i)(auVar144 | auVar172);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x7a:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      auVar145._4_4_ = -(uint)(*pfVar79 == in_XMM1.m128i_i32[1]);
      auVar145._0_4_ = -(uint)(fVar15 == in_XMM1.m128i_i32[0]);
      auVar145._8_4_ = -(uint)(*pfVar16 == in_XMM1.m128i_i32[2]);
      auVar145._12_4_ = -(uint)(*pfVar17 == in_XMM1.m128i_i32[3]);
      in_XMM2 = (__m128i)(auVar145 | auVar172);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x7b:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      auVar146._4_4_ = -(uint)(*pfVar79 != in_XMM1.m128i_i32[1]);
      auVar146._0_4_ = -(uint)(fVar15 != in_XMM1.m128i_i32[0]);
      auVar146._8_4_ = -(uint)(*pfVar16 != in_XMM1.m128i_i32[2]);
      auVar146._12_4_ = -(uint)(*pfVar17 != in_XMM1.m128i_i32[3]);
      in_XMM2 = (__m128i)(auVar146 | auVar172);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x7c:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    piVar80 = (int *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      auVar147._0_4_ = -(uint)(in_XMM1.m128i_i32[0] < iVar86);
      auVar147._4_4_ = -(uint)(in_XMM1.m128i_i32[1] < *piVar70);
      auVar147._8_4_ = -(uint)(in_XMM1.m128i_i32[2] < *piVar20);
      auVar147._12_4_ = -(uint)(in_XMM1.m128i_i32[3] < *piVar21);
      in_XMM2 = (__m128i)(auVar147 | auVar172);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x7d:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    piVar80 = (int *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      auVar148._0_4_ =
           -(uint)(auVar172._0_4_ < iVar86) ^ GlobalVectorConstants::IntAllMask.m128i_u32[0];
      auVar148._4_4_ =
           -(uint)(auVar172._4_4_ < *piVar70) ^ GlobalVectorConstants::IntAllMask.m128i_u32[1];
      auVar148._8_4_ =
           -(uint)(auVar172._8_4_ < *piVar20) ^ GlobalVectorConstants::IntAllMask.m128i_u32[2];
      auVar148._12_4_ =
           -(uint)(auVar172._12_4_ < *piVar21) ^ GlobalVectorConstants::IntAllMask.m128i_u32[3];
      in_XMM2.m128i_i8 = auVar148 | in_XMM1.m128i_i8;
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x7e:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    piVar80 = (int *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      auVar149._0_4_ = -(uint)(auVar172._0_4_ < iVar86);
      auVar149._4_4_ = -(uint)(auVar172._4_4_ < *piVar70);
      auVar149._8_4_ = -(uint)(auVar172._8_4_ < *piVar20);
      auVar149._12_4_ = -(uint)(auVar172._12_4_ < *piVar21);
      in_XMM2.m128i_i8 = auVar149 | in_XMM1.m128i_i8;
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x7f:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    piVar80 = (int *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      auVar150._0_4_ =
           -(uint)(auVar172._0_4_ < iVar86) ^ GlobalVectorConstants::IntAllMask.m128i_u32[0];
      auVar150._4_4_ =
           -(uint)(auVar172._4_4_ < *piVar70) ^ GlobalVectorConstants::IntAllMask.m128i_u32[1];
      auVar150._8_4_ =
           -(uint)(auVar172._8_4_ < *piVar20) ^ GlobalVectorConstants::IntAllMask.m128i_u32[2];
      auVar150._12_4_ =
           -(uint)(auVar172._12_4_ < *piVar21) ^ GlobalVectorConstants::IntAllMask.m128i_u32[3];
      in_XMM2.m128i_i8 = auVar150 | in_XMM1.m128i_i8;
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x80:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    piVar80 = (int *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      auVar151._0_4_ = -(uint)(iVar86 == in_XMM1.m128i_i32[0]);
      auVar151._4_4_ = -(uint)(*piVar70 == in_XMM1.m128i_i32[1]);
      auVar151._8_4_ = -(uint)(*piVar20 == in_XMM1.m128i_i32[2]);
      auVar151._12_4_ = -(uint)(*piVar21 == in_XMM1.m128i_i32[3]);
      in_XMM2 = (__m128i)(auVar151 | auVar172);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x81:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    piVar80 = (int *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      auVar152._0_4_ =
           -(uint)(iVar86 == auVar172._0_4_) ^ GlobalVectorConstants::IntAllMask.m128i_u32[0];
      auVar152._4_4_ =
           -(uint)(*piVar70 == auVar172._4_4_) ^ GlobalVectorConstants::IntAllMask.m128i_u32[1];
      auVar152._8_4_ =
           -(uint)(*piVar20 == auVar172._8_4_) ^ GlobalVectorConstants::IntAllMask.m128i_u32[2];
      auVar152._12_4_ =
           -(uint)(*piVar21 == auVar172._12_4_) ^ GlobalVectorConstants::IntAllMask.m128i_u32[3];
      in_XMM2.m128i_i8 = auVar152 | in_XMM1.m128i_i8;
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x82:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pacVar69 = (char (*) [16])ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    pauVar64 = pauVar66 + param_3;
    do {
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar72;
      in_ZMM0._0_16_ = auVar172;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar4);
      in_XMM1.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar5);
      auVar168._0_4_ = fVar15 * in_XMM2.m128i_i32[0] + auVar172._0_4_ + in_XMM1.m128i_i32[0];
      auVar168._4_4_ = *pfVar79 * in_XMM2.m128i_i32[1] + auVar172._4_4_ + in_XMM1.m128i_i32[1];
      auVar168._8_4_ = *pfVar16 * in_XMM2.m128i_i32[2] + auVar172._8_4_ + in_XMM1.m128i_i32[2];
      auVar168._12_4_ = *pfVar17 * in_XMM2.m128i_i32[3] + auVar172._12_4_ + in_XMM1.m128i_i32[3];
      *pauVar66 = auVar168;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x83:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pacVar69 = (char (*) [16])ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    pauVar64 = pauVar66 + param_3;
    do {
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar72;
      in_ZMM0._0_16_ = auVar172;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar4);
      in_XMM1.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar5);
      auVar169._0_4_ = (fVar15 * in_XMM2.m128i_i32[0] + auVar172._0_4_) - in_XMM1.m128i_i32[0];
      auVar169._4_4_ = (*pfVar79 * in_XMM2.m128i_i32[1] + auVar172._4_4_) - in_XMM1.m128i_i32[1];
      auVar169._8_4_ = (*pfVar16 * in_XMM2.m128i_i32[2] + auVar172._8_4_) - in_XMM1.m128i_i32[2];
      auVar169._12_4_ = (*pfVar17 * in_XMM2.m128i_i32[3] + auVar172._12_4_) - in_XMM1.m128i_i32[3];
      *pauVar66 = auVar169;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x84:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pfVar79 = (float *)ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    p_Var73 = p_Var65 + param_3;
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar16 = pfVar77 + 1;
      pfVar17 = pfVar77 + 2;
      pfVar22 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      fVar23 = *pfVar79;
      pfVar24 = pfVar79 + 1;
      pfVar25 = pfVar79 + 2;
      pfVar26 = pfVar79 + 3;
      pfVar79 = (float *)((longlong)pfVar79 + (ulonglong)bVar5);
      in_XMM2._0_4_ = fVar23 - (fVar15 * in_XMM1.m128i_i32[0] + auVar172._0_4_);
      in_XMM2._4_4_ = *pfVar24 - (*pfVar16 * in_XMM1.m128i_i32[1] + auVar172._4_4_);
      in_XMM2._8_4_ = *pfVar25 - (*pfVar17 * in_XMM1.m128i_i32[2] + auVar172._8_4_);
      in_XMM2.m128i_i32[3] = (int)(*pfVar26 - (*pfVar22 * in_XMM1.m128i_i32[3] + auVar172._12_4_));
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x85:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pacVar69 = (char (*) [16])ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    pauVar64 = pauVar66 + param_3;
    do {
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar72;
      in_ZMM0._0_16_ = auVar172;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar4);
      in_XMM1.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar5);
      auVar170._0_4_ = (fVar15 * in_XMM2.m128i_i32[0] + auVar172._0_4_) * in_XMM1.m128i_i32[0];
      auVar170._4_4_ = (*pfVar79 * in_XMM2.m128i_i32[1] + auVar172._4_4_) * in_XMM1.m128i_i32[1];
      auVar170._8_4_ = (*pfVar16 * in_XMM2.m128i_i32[2] + auVar172._8_4_) * in_XMM1.m128i_i32[2];
      auVar170._12_4_ = (*pfVar17 * in_XMM2.m128i_i32[3] + auVar172._12_4_) * in_XMM1.m128i_i32[3];
      *pauVar66 = auVar170;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x86:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    pauVar64 = pauVar66 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      auVar172 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar4);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      in_XMM2._0_4_ = fVar15 * in_XMM1.m128i_i32[0] + auVar172._0_4_;
      in_XMM2._4_4_ = *pfVar79 * in_XMM1.m128i_i32[1] + auVar172._4_4_;
      in_XMM2._8_4_ = *pfVar16 * in_XMM1.m128i_i32[2] + auVar172._8_4_;
      in_XMM2.m128i_i32[3] = (int)(*pfVar17 * in_XMM1.m128i_i32[3] + auVar172._12_4_);
      in_ZMM0._0_16_ = sqrtps(auVar172,(undefined1  [16])in_XMM2);
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x87:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[3]];
    pfVar79 = (float *)ppuVar7[puVar68[4]];
    pauVar64 = (undefined1 (*) [16])ppuVar7[puVar68[5]];
    puVar74 = param_2->RegIncTable;
    pauVar78 = pauVar64 + param_3;
    bVar6 = puVar74[puVar68[1]];
    bVar3 = puVar74[puVar68[2]];
    bVar4 = puVar74[puVar68[3]];
    bVar5 = puVar74[puVar68[4]];
    bVar2 = puVar74[*puVar68];
    do {
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar2);
      fVar15 = *pfVar77;
      pfVar16 = pfVar77 + 1;
      pfVar17 = pfVar77 + 2;
      pfVar22 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      auVar117 = *pauVar72;
      in_ZMM0._0_16_ = auVar117;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      fVar23 = *pfVar79;
      pfVar24 = pfVar79 + 1;
      pfVar25 = pfVar79 + 2;
      pfVar26 = pfVar79 + 3;
      pfVar79 = (float *)((longlong)pfVar79 + (ulonglong)bVar5);
      in_XMM2._0_4_ = fVar23 * in_XMM1.m128i_i32[0];
      in_XMM2._4_4_ = *pfVar24 * in_XMM1.m128i_i32[1];
      in_XMM2._8_4_ = *pfVar25 * in_XMM1.m128i_i32[2];
      in_XMM2.m128i_i32[3] = (int)(*pfVar26 * in_XMM1.m128i_i32[3]);
      auVar176._0_4_ = fVar15 * auVar172._0_4_ + auVar117._0_4_ + in_XMM2._0_4_;
      auVar176._4_4_ = *pfVar16 * auVar172._4_4_ + auVar117._4_4_ + in_XMM2._4_4_;
      auVar176._8_4_ = *pfVar17 * auVar172._8_4_ + auVar117._8_4_ + in_XMM2._8_4_;
      auVar176._12_4_ = *pfVar22 * auVar172._12_4_ + auVar117._12_4_ + (float)in_XMM2.m128i_i32[3];
      *pauVar64 = auVar176;
      pauVar64 = pauVar64 + 1;
    } while (pauVar64 < pauVar78);
    goto LAB_148dc066c;
  case 0x88:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[3]];
    pacVar69 = (char (*) [16])ppuVar7[puVar68[4]];
    pauVar64 = (undefined1 (*) [16])ppuVar7[puVar68[5]];
    puVar74 = param_2->RegIncTable;
    pauVar78 = pauVar64 + param_3;
    bVar6 = puVar74[puVar68[1]];
    bVar3 = puVar74[puVar68[2]];
    bVar4 = puVar74[puVar68[3]];
    bVar5 = puVar74[puVar68[4]];
    bVar2 = puVar74[*puVar68];
    do {
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar2);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      auVar117 = *pauVar72;
      in_ZMM0._0_16_ = auVar117;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      in_XMM2.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar5);
      auVar177._0_4_ =
           (fVar15 * auVar172._0_4_ + auVar117._0_4_) * in_XMM1.m128i_i32[0] + in_XMM2.m128i_i32[0];
      auVar177._4_4_ =
           (*pfVar79 * auVar172._4_4_ + auVar117._4_4_) * in_XMM1.m128i_i32[1] +
           in_XMM2.m128i_i32[1];
      auVar177._8_4_ =
           (*pfVar16 * auVar172._8_4_ + auVar117._8_4_) * in_XMM1.m128i_i32[2] +
           in_XMM2.m128i_i32[2];
      auVar177._12_4_ =
           (*pfVar17 * auVar172._12_4_ + auVar117._12_4_) * in_XMM1.m128i_i32[3] +
           in_XMM2.m128i_i32[3];
      *pauVar64 = auVar177;
      pauVar64 = pauVar64 + 1;
    } while (pauVar64 < pauVar78);
LAB_148dc066c:
    puVar68 = (ushort *)((longlong)puVar68 + 0xd);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x89:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pacVar69 = (char (*) [16])ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    pauVar64 = pauVar66 + param_3;
    do {
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar72;
      in_ZMM0._0_16_ = auVar172;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar4);
      in_XMM1.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar5);
      auVar171._0_4_ = fVar15 * in_XMM2.m128i_i32[0] * auVar172._0_4_ + in_XMM1.m128i_i32[0];
      auVar171._4_4_ = *pfVar79 * in_XMM2.m128i_i32[1] * auVar172._4_4_ + in_XMM1.m128i_i32[1];
      auVar171._8_4_ = *pfVar16 * in_XMM2.m128i_i32[2] * auVar172._8_4_ + in_XMM1.m128i_i32[2];
      auVar171._12_4_ = *pfVar17 * in_XMM2.m128i_i32[3] * auVar172._12_4_ + in_XMM1.m128i_i32[3];
      *pauVar66 = auVar171;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x8a:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pfVar79 = (float *)ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    p_Var73 = p_Var65 + param_3;
    do {
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar16 = pfVar77 + 1;
      pfVar17 = pfVar77 + 2;
      pfVar22 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      fVar23 = *pfVar79;
      pfVar24 = pfVar79 + 1;
      pfVar25 = pfVar79 + 2;
      pfVar26 = pfVar79 + 3;
      pfVar79 = (float *)((longlong)pfVar79 + (ulonglong)bVar5);
      in_XMM1.m128i_i32[0] = (int)(fVar23 * auVar172._0_4_ + fVar15 * in_XMM2.m128i_i32[0]);
      in_XMM1.m128i_i32[1] = (int)(*pfVar24 * auVar172._4_4_ + *pfVar16 * in_XMM2.m128i_i32[1]);
      in_XMM1.m128i_i32[2] = (int)(*pfVar25 * auVar172._8_4_ + *pfVar17 * in_XMM2.m128i_i32[2]);
      in_XMM1.m128i_i32[3] = (int)(*pfVar26 * auVar172._12_4_ + *pfVar22 * in_XMM2.m128i_i32[3]);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x8b:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      in_XMM2._0_4_ = fVar15 * in_XMM1.m128i_i32[0] + auVar172._0_4_;
      in_XMM2._4_4_ = *pfVar79 * in_XMM1.m128i_i32[1] + auVar172._4_4_;
      in_XMM2._8_4_ = *pfVar16 * in_XMM1.m128i_i32[2] + auVar172._8_4_;
      in_XMM2.m128i_i32[3] = (int)(*pfVar17 * in_XMM1.m128i_i32[3] + auVar172._12_4_);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x8c:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      in_XMM2._0_4_ = fVar15 * in_XMM1.m128i_i32[0] - auVar172._0_4_;
      in_XMM2._4_4_ = *pfVar79 * in_XMM1.m128i_i32[1] - auVar172._4_4_;
      in_XMM2._8_4_ = *pfVar16 * in_XMM1.m128i_i32[2] - auVar172._8_4_;
      in_XMM2.m128i_i32[3] = (int)(*pfVar17 * in_XMM1.m128i_i32[3] - auVar172._12_4_);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x8d:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pfVar79 = (float *)ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      fVar15 = *pfVar77;
      pfVar16 = pfVar77 + 1;
      pfVar17 = pfVar77 + 2;
      pfVar22 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      fVar23 = *pfVar79;
      pfVar24 = pfVar79 + 1;
      pfVar25 = pfVar79 + 2;
      pfVar26 = pfVar79 + 3;
      pfVar79 = (float *)((longlong)pfVar79 + (ulonglong)bVar4);
      in_XMM1.m128i_i32[0] = (int)(fVar15 * auVar172._0_4_);
      in_XMM1.m128i_i32[1] = (int)(*pfVar16 * auVar172._4_4_);
      in_XMM1.m128i_i32[2] = (int)(*pfVar17 * auVar172._8_4_);
      in_XMM1.m128i_i32[3] = (int)(*pfVar22 * auVar172._12_4_);
      in_XMM2._0_4_ = fVar23 - (float)in_XMM1.m128i_i32[0];
      in_XMM2._4_4_ = *pfVar24 - (float)in_XMM1.m128i_i32[1];
      in_XMM2._8_4_ = *pfVar25 - (float)in_XMM1.m128i_i32[2];
      in_XMM2.m128i_i32[3] = (int)(*pfVar26 - (float)in_XMM1.m128i_i32[3]);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x8e:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      in_XMM2._0_4_ = fVar15 * in_XMM1.m128i_i32[0] * auVar172._0_4_;
      in_XMM2._4_4_ = *pfVar79 * in_XMM1.m128i_i32[1] * auVar172._4_4_;
      in_XMM2._8_4_ = *pfVar16 * in_XMM1.m128i_i32[2] * auVar172._8_4_;
      in_XMM2.m128i_i32[3] = (int)(*pfVar17 * in_XMM1.m128i_i32[3] * auVar172._12_4_);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x8f:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      auVar153._0_4_ = fVar15 * in_XMM1.m128i_i32[0];
      auVar153._4_4_ = *pfVar79 * in_XMM1.m128i_i32[1];
      auVar153._8_4_ = *pfVar16 * in_XMM1.m128i_i32[2];
      auVar153._12_4_ = *pfVar17 * in_XMM1.m128i_i32[3];
      in_XMM2 = (__m128i)maxps(auVar153,auVar172);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x90:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = ppuVar7[puVar68[3]];
    lVar67 = (longlong)puVar74 - (longlong)p_Var65;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      in_XMM1.m128i_i32[0] = (int)(fVar15 * auVar172._0_4_);
      in_XMM1.m128i_i32[1] = (int)(*pfVar79 * auVar172._4_4_);
      in_XMM1.m128i_i32[2] = (int)(*pfVar16 * auVar172._8_4_);
      in_XMM1.m128i_i32[3] = (int)(*pfVar17 * auVar172._12_4_);
      *p_Var65 = in_XMM1;
      *(__m128i *)(lVar67 + (longlong)p_Var65) = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < (__m128i *)(puVar74 + (longlong)param_3 * 0x10));
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x91:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pfVar79 = (float *)ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    p_Var73 = p_Var65 + param_3;
    do {
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar16 = pfVar77 + 1;
      pfVar17 = pfVar77 + 2;
      pfVar22 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      fVar23 = *pfVar79;
      pfVar24 = pfVar79 + 1;
      pfVar25 = pfVar79 + 2;
      pfVar26 = pfVar79 + 3;
      pfVar79 = (float *)((longlong)pfVar79 + (ulonglong)bVar5);
      in_XMM1.m128i_i32[0] = (int)(fVar23 * auVar172._0_4_ + fVar15 + in_XMM2.m128i_i32[0]);
      in_XMM1.m128i_i32[1] = (int)(*pfVar24 * auVar172._4_4_ + *pfVar16 + in_XMM2.m128i_i32[1]);
      in_XMM1.m128i_i32[2] = (int)(*pfVar25 * auVar172._8_4_ + *pfVar17 + in_XMM2.m128i_i32[2]);
      in_XMM1.m128i_i32[3] = (int)(*pfVar26 * auVar172._12_4_ + *pfVar22 + in_XMM2.m128i_i32[3]);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x92:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      in_XMM2._0_4_ = fVar15 + in_XMM1.m128i_i32[0] + auVar172._0_4_;
      in_XMM2._4_4_ = *pfVar79 + in_XMM1.m128i_i32[1] + auVar172._4_4_;
      in_XMM2._8_4_ = *pfVar16 + in_XMM1.m128i_i32[2] + auVar172._8_4_;
      in_XMM2.m128i_i32[3] = (int)(*pfVar17 + in_XMM1.m128i_i32[3] + auVar172._12_4_);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x93:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pfVar77 = (float *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pfVar79 = (float *)ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      fVar15 = *pfVar77;
      pfVar16 = pfVar77 + 1;
      pfVar17 = pfVar77 + 2;
      pfVar22 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      fVar23 = *pfVar79;
      pfVar24 = pfVar79 + 1;
      pfVar25 = pfVar79 + 2;
      pfVar26 = pfVar79 + 3;
      pfVar79 = (float *)((longlong)pfVar79 + (ulonglong)bVar4);
      in_XMM2._0_4_ = fVar15 - auVar172._0_4_;
      in_XMM2._4_4_ = *pfVar16 - auVar172._4_4_;
      in_XMM2._8_4_ = *pfVar17 - auVar172._8_4_;
      in_XMM2.m128i_i32[3] = (int)(*pfVar22 - auVar172._12_4_);
      in_XMM1.m128i_i32[1] = -(uint)(*pfVar24 < in_XMM2._4_4_);
      in_XMM1.m128i_i32[0] = -(uint)(fVar23 < in_XMM2._0_4_);
      in_XMM1.m128i_i32[2] = -(uint)(*pfVar25 < in_XMM2._8_4_);
      in_XMM1.m128i_i32[3] = -(uint)(*pfVar26 < (float)in_XMM2.m128i_i32[3]);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x94:
    ppuVar7 = param_2->RegPtrTable;
    in_XMM2._0_12_ = ZEXT812(0);
    in_XMM2.m128i_i32[3] = 0;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    pfVar77 = (float *)ppuVar7[*puVar68];
    pfVar79 = (float *)ppuVar7[puVar68[1]];
    pauVar72 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      fVar15 = *pfVar79;
      pfVar16 = pfVar79 + 1;
      pfVar17 = pfVar79 + 2;
      pfVar22 = pfVar79 + 3;
      pfVar79 = (float *)((longlong)pfVar79 + (ulonglong)bVar3);
      fVar23 = *pfVar77;
      pfVar24 = pfVar77 + 1;
      pfVar25 = pfVar77 + 2;
      pfVar26 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      in_XMM1.m128i_i32[0] = (int)(fVar23 - fVar15);
      in_XMM1.m128i_i32[1] = (int)(*pfVar24 - *pfVar16);
      in_XMM1.m128i_i32[2] = (int)(*pfVar25 - *pfVar17);
      in_XMM1.m128i_i32[3] = (int)(*pfVar26 - *pfVar22);
      auVar107._0_4_ = 0.0 - (float)in_XMM1.m128i_i32[0];
      auVar107._4_4_ = 0.0 - (float)in_XMM1.m128i_i32[1];
      auVar107._8_4_ = 0.0 - (float)in_XMM1.m128i_i32[2];
      auVar107._12_4_ = 0.0 - (float)in_XMM1.m128i_i32[3];
      in_ZMM0._0_16_ = auVar107;
      *pauVar66 = auVar107;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x95:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pfVar77 = (float *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      in_XMM2._0_4_ = (fVar15 - auVar172._0_4_) * in_XMM1.m128i_i32[0];
      in_XMM2._4_4_ = (*pfVar79 - auVar172._4_4_) * in_XMM1.m128i_i32[1];
      in_XMM2._8_4_ = (*pfVar16 - auVar172._8_4_) * in_XMM1.m128i_i32[2];
      in_XMM2.m128i_i32[3] = (int)((*pfVar17 - auVar172._12_4_) * in_XMM1.m128i_i32[3]);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x96:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[1]];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pauVar64 = (undefined1 (*) [16])ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    p_Var73 = p_Var65 + param_3;
    do {
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      auVar117 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar4);
      auVar139 = *pauVar64;
      pauVar64 = (undefined1 (*) [16])(*pauVar64 + bVar5);
      auVar172 = divps(auVar172,(undefined1  [16])in_XMM2);
      in_ZMM0._0_4_ = (float)(in_XMM2.m128i_u32[0] & uVar44);
      in_ZMM0._4_4_ = (float)(in_XMM2.m128i_u32[1] & uVar43);
      in_ZMM0._8_4_ = (float)(in_XMM2.m128i_u32[2] & uVar42);
      in_ZMM0._12_4_ = (float)(in_XMM2.m128i_u32[3] & uVar41);
      in_XMM1.m128i_i32[0] =
           (int)((float)(-(uint)(VVMConstVec4_Epsilon4[0] < in_ZMM0._0_4_) & auVar172._0_4_) *
                 auVar117._0_4_ + auVar139._0_4_);
      in_XMM1.m128i_i32[1] =
           (int)((float)(-(uint)(VVMConstVec4_Epsilon4[1] < in_ZMM0._4_4_) & auVar172._4_4_) *
                 auVar117._4_4_ + auVar139._4_4_);
      in_XMM1.m128i_i32[2] =
           (int)((float)(-(uint)(VVMConstVec4_Epsilon4[2] < in_ZMM0._8_4_) & auVar172._8_4_) *
                 auVar117._8_4_ + auVar139._8_4_);
      in_XMM1.m128i_i32[3] =
           (int)((float)(-(uint)(VVMConstVec4_Epsilon4[3] < in_ZMM0._12_4_) & auVar172._12_4_) *
                 auVar117._12_4_ + auVar139._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x97:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    pauVar72 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[1]];
    pauVar64 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar3);
      auVar172 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      auVar172 = divps(auVar172,(undefined1  [16])in_XMM2);
      in_XMM1.m128i_u32[0] =
           -(uint)(VVMConstVec4_Epsilon4[0] < (float)(uVar44 & in_XMM2.m128i_u32[0])) &
           auVar172._0_4_;
      in_XMM1.m128i_u32[1] =
           -(uint)(VVMConstVec4_Epsilon4[1] < (float)(uVar43 & in_XMM2.m128i_u32[1])) &
           auVar172._4_4_;
      in_XMM1.m128i_u32[2] =
           -(uint)(VVMConstVec4_Epsilon4[2] < (float)(uVar42 & in_XMM2.m128i_u32[2])) &
           auVar172._8_4_;
      in_XMM1.m128i_u32[3] =
           -(uint)(VVMConstVec4_Epsilon4[3] < (float)(uVar41 & in_XMM2.m128i_u32[3])) &
           auVar172._12_4_;
      auVar108._0_4_ = (int)(float)in_XMM1.m128i_i32[0];
      auVar108._4_4_ = (int)(float)in_XMM1.m128i_i32[1];
      auVar108._8_4_ = (int)(float)in_XMM1.m128i_i32[2];
      auVar108._12_4_ = (int)(float)in_XMM1.m128i_i32[3];
      in_ZMM0._0_16_ = auVar108;
      *pauVar66 = auVar108;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x98:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      auVar117 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar4);
      auVar172 = divps(auVar172,(undefined1  [16])in_XMM2);
      in_ZMM0._0_4_ = (float)(uVar44 & in_XMM2.m128i_u32[0]);
      in_ZMM0._4_4_ = (float)(uVar43 & in_XMM2.m128i_u32[1]);
      in_ZMM0._8_4_ = (float)(uVar42 & in_XMM2.m128i_u32[2]);
      in_ZMM0._12_4_ = (float)(uVar41 & in_XMM2.m128i_u32[3]);
      in_XMM1.m128i_i32[0] =
           (int)((float)(-(uint)(VVMConstVec4_Epsilon4[0] < in_ZMM0._0_4_) & auVar172._0_4_) *
                auVar117._0_4_);
      in_XMM1.m128i_i32[1] =
           (int)((float)(-(uint)(VVMConstVec4_Epsilon4[1] < in_ZMM0._4_4_) & auVar172._4_4_) *
                auVar117._4_4_);
      in_XMM1.m128i_i32[2] =
           (int)((float)(-(uint)(VVMConstVec4_Epsilon4[2] < in_ZMM0._8_4_) & auVar172._8_4_) *
                auVar117._8_4_);
      in_XMM1.m128i_i32[3] =
           (int)((float)(-(uint)(VVMConstVec4_Epsilon4[3] < in_ZMM0._12_4_) & auVar172._12_4_) *
                auVar117._12_4_);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x99:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      auVar117 = *pauVar72;
      in_ZMM0._0_16_ = auVar117;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      auVar172 = pmulld(auVar172,auVar117);
      in_XMM2._0_4_ = (float)(auVar172._0_4_ + in_XMM1.m128i_i32[0]);
      in_XMM2._4_4_ = (float)(auVar172._4_4_ + in_XMM1.m128i_i32[1]);
      in_XMM2._8_4_ = (float)(auVar172._8_4_ + in_XMM1.m128i_i32[2]);
      in_XMM2.m128i_i32[3] = auVar172._12_4_ + in_XMM1.m128i_i32[3];
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x9a:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[3]];
    puVar74 = param_2->RegIncTable;
    piVar80 = (int *)ppuVar7[*puVar68];
    piVar70 = (int *)ppuVar7[puVar68[1]];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pauVar72 = pauVar66 + param_3;
    iVar62 = __isa_available;
    do {
      iVar86 = *piVar80;
      piVar20 = piVar80 + 1;
      piVar21 = piVar80 + 2;
      piVar27 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      iVar122 = *piVar70;
      piVar28 = piVar70 + 1;
      piVar29 = piVar70 + 2;
      piVar30 = piVar70 + 3;
      piVar70 = (int *)((longlong)piVar70 + (ulonglong)bVar3);
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      in_XMM1.m128i_i32[0] = iVar122 + iVar86;
      in_XMM1.m128i_i32[1] = *piVar28 + *piVar20;
      in_XMM1.m128i_i32[2] = *piVar29 + *piVar21;
      in_XMM1.m128i_i32[3] = *piVar30 + *piVar27;
      local_148 = in_XMM1;
      local_138.m128i_i8 = in_XMM2.m128i_i8;
      if (iVar62 < 5) {
        lVar67 = 0;
        do {
          *(uint *)(local_1b8 + lVar67) =
               *(uint *)(local_148.m128i_i8 + lVar67) >>
               ((byte)*(undefined4 *)(local_138.m128i_i8 + lVar67) & 0x1f);
          lVar67 = lVar67 + 4;
        } while (lVar67 < 0x10);
        in_ZMM0._0_16_ = local_1b8;
        iVar62 = __isa_available;
      }
      else {
        local_1b8 = vpsrlvd_avx2((undefined1  [16])in_XMM1,(undefined1  [16])in_XMM2);
        in_ZMM0 = ZEXT1664(local_1b8);
      }
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0x9b:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    piVar80 = (int *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar3);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar4);
      auVar154._0_4_ = iVar86 + in_XMM1.m128i_i32[0];
      auVar154._4_4_ = *piVar70 + in_XMM1.m128i_i32[1];
      auVar154._8_4_ = *piVar20 + in_XMM1.m128i_i32[2];
      auVar154._12_4_ = *piVar21 + in_XMM1.m128i_i32[3];
      in_XMM2 = (__m128i)pmulld(auVar154,auVar172);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x9c:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[1]];
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    p_Var73 = (__m128i *)ppuVar7[puVar68[2]];
    bVar6 = param_2->RegIncTable[*puVar68];
    p_Var76 = p_Var65;
    do {
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      in_XMM1.m128i_u32[0] = uVar40 & auVar172._0_4_;
      in_XMM1.m128i_u32[1] = uVar39 & auVar172._4_4_;
      in_XMM1.m128i_u32[2] = uVar182 & auVar172._8_4_;
      in_XMM1.m128i_u32[3] = uVar181 & auVar172._12_4_;
      *p_Var76 = in_XMM1;
      *p_Var73 = in_XMM1;
      p_Var73 = p_Var73 + 1;
      p_Var76 = p_Var76 + 1;
    } while (p_Var73 < p_Var65 + param_3);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x9d:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    piVar80 = (int *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      auVar137._0_4_ = (float)iVar86;
      auVar137._4_4_ = (float)*piVar70;
      auVar137._8_4_ = (float)*piVar20;
      auVar137._12_4_ = (float)*piVar21;
      in_ZMM0._0_4_ = (float)(uVar44 & auVar172._0_4_);
      in_ZMM0._4_4_ = (float)(uVar43 & auVar172._4_4_);
      in_ZMM0._8_4_ = (float)(uVar42 & auVar172._8_4_);
      in_ZMM0._12_4_ = (float)(uVar41 & auVar172._12_4_);
      in_XMM1 = (__m128i)divps(auVar137,auVar172);
      in_XMM2._0_4_ =
           (float)(-(uint)(VVMConstVec4_Epsilon4[0] < in_ZMM0._0_4_) & in_XMM1.m128i_u32[0]);
      in_XMM2._4_4_ =
           (float)(-(uint)(VVMConstVec4_Epsilon4[1] < in_ZMM0._4_4_) & in_XMM1.m128i_u32[1]);
      in_XMM2._8_4_ =
           (float)(-(uint)(VVMConstVec4_Epsilon4[2] < in_ZMM0._8_4_) & in_XMM1.m128i_u32[2]);
      in_XMM2.m128i_u32[3] =
           -(uint)(VVMConstVec4_Epsilon4[3] < in_ZMM0._12_4_) & in_XMM1.m128i_u32[3];
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x9e:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    piVar80 = (int *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    p_Var73 = p_Var65 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i32[0] = (int)(float)iVar86;
      in_XMM1.m128i_i32[1] = (int)(float)*piVar70;
      in_XMM1.m128i_i32[2] = (int)(float)*piVar20;
      in_XMM1.m128i_i32[3] = (int)(float)*piVar21;
      auVar172 = divps(auVar172,(undefined1  [16])in_XMM1);
      in_ZMM0._0_4_ = (float)(uVar44 & in_XMM1.m128i_u32[0]);
      in_ZMM0._4_4_ = (float)(uVar43 & in_XMM1.m128i_u32[1]);
      in_ZMM0._8_4_ = (float)(uVar42 & in_XMM1.m128i_u32[2]);
      in_ZMM0._12_4_ = (float)(uVar41 & in_XMM1.m128i_u32[3]);
      in_XMM2._0_4_ = (float)(-(uint)(VVMConstVec4_Epsilon4[0] < in_ZMM0._0_4_) & auVar172._0_4_);
      in_XMM2._4_4_ = (float)(-(uint)(VVMConstVec4_Epsilon4[1] < in_ZMM0._4_4_) & auVar172._4_4_);
      in_XMM2._8_4_ = (float)(-(uint)(VVMConstVec4_Epsilon4[2] < in_ZMM0._8_4_) & auVar172._8_4_);
      in_XMM2.m128i_u32[3] = -(uint)(VVMConstVec4_Epsilon4[3] < in_ZMM0._12_4_) & auVar172._12_4_;
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0x9f:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    piVar80 = (int *)ppuVar7[*puVar68];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[1]];
    pauVar72 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar3);
      auVar109._0_4_ = (float)iVar86 * in_XMM1.m128i_i32[0];
      auVar109._4_4_ = (float)*piVar70 * in_XMM1.m128i_i32[1];
      auVar109._8_4_ = (float)*piVar20 * in_XMM1.m128i_i32[2];
      auVar109._12_4_ = (float)*piVar21 * in_XMM1.m128i_i32[3];
      in_ZMM0._0_16_ = auVar109;
      *pauVar66 = auVar109;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0xa0:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[3]];
    piVar80 = (int *)ppuVar7[*puVar68];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar69 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    pauVar72 = pauVar66 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar6);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar3);
      in_XMM2.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar4);
      auVar110._0_4_ = (float)iVar86 * in_XMM1.m128i_i32[0] + in_XMM2.m128i_i32[0];
      auVar110._4_4_ = (float)*piVar70 * in_XMM1.m128i_i32[1] + in_XMM2.m128i_i32[1];
      auVar110._8_4_ = (float)*piVar20 * in_XMM1.m128i_i32[2] + in_XMM2.m128i_i32[2];
      auVar110._12_4_ = (float)*piVar21 * in_XMM1.m128i_i32[3] + in_XMM2.m128i_i32[3];
      in_ZMM0._0_16_ = auVar110;
      *pauVar66 = auVar110;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0xa1:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    piVar80 = (int *)ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      iVar86 = *piVar80;
      piVar70 = piVar80 + 1;
      piVar20 = piVar80 + 2;
      piVar21 = piVar80 + 3;
      piVar80 = (int *)((longlong)piVar80 + (ulonglong)bVar4);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
      in_ZMM0._0_4_ = (float)iVar86;
      in_ZMM0._4_4_ = (float)*piVar70;
      in_ZMM0._8_4_ = (float)*piVar20;
      in_ZMM0._12_4_ = (float)*piVar21;
      in_XMM2._0_4_ = fVar15 * in_XMM1.m128i_i32[0] + in_ZMM0._0_4_;
      in_XMM2._4_4_ = *pfVar79 * in_XMM1.m128i_i32[1] + in_ZMM0._4_4_;
      in_XMM2._8_4_ = *pfVar16 * in_XMM1.m128i_i32[2] + in_ZMM0._8_4_;
      in_XMM2.m128i_i32[3] = (int)(*pfVar17 * in_XMM1.m128i_i32[3] + in_ZMM0._12_4_);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0xa2:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    puVar81 = (uint *)ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      uVar84 = *puVar81;
      puVar82 = puVar81 + 1;
      puVar18 = puVar81 + 2;
      puVar19 = puVar81 + 3;
      puVar81 = (uint *)((longlong)puVar81 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      in_ZMM0._0_16_ = auVar172;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar4);
      auVar155._0_4_ = (int)auVar172._0_4_ & uVar84;
      auVar155._4_4_ = (int)auVar172._4_4_ & *puVar82;
      auVar155._8_4_ = (int)auVar172._8_4_ & *puVar18;
      auVar155._12_4_ = (int)auVar172._12_4_ & *puVar19;
      auVar173._0_4_ = ~uVar84 & in_XMM1.m128i_u32[0];
      auVar173._4_4_ = ~*puVar82 & in_XMM1.m128i_u32[1];
      auVar173._8_4_ = ~*puVar18 & in_XMM1.m128i_u32[2];
      auVar173._12_4_ = ~*puVar19 & in_XMM1.m128i_u32[3];
      in_XMM2 = (__m128i)(auVar155 | auVar173);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0xa3:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    pfVar77 = (float *)ppuVar7[*puVar68];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[1]];
    pauVar72 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar3);
      iVar122 = (int)fVar15;
      iVar126 = (int)*pfVar79;
      iVar131 = (int)*pfVar16;
      iVar127 = (int)*pfVar17;
      iVar86 = in_XMM1.m128i_i32[0];
      auVar111._0_4_ = (uint)(iVar122 < iVar86) * iVar86 | (uint)(iVar122 >= iVar86) * iVar122;
      iVar86 = in_XMM1.m128i_i32[1];
      auVar111._4_4_ = (uint)(iVar126 < iVar86) * iVar86 | (uint)(iVar126 >= iVar86) * iVar126;
      iVar86 = in_XMM1.m128i_i32[2];
      auVar111._8_4_ = (uint)(iVar131 < iVar86) * iVar86 | (uint)(iVar131 >= iVar86) * iVar131;
      iVar86 = in_XMM1.m128i_i32[3];
      auVar111._12_4_ = (uint)(iVar127 < iVar86) * iVar86 | (uint)(iVar127 >= iVar86) * iVar127;
      in_ZMM0._0_16_ = auVar111;
      *pauVar66 = auVar111;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0xa4:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    pfVar77 = (float *)ppuVar7[*puVar68];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[1]];
    pauVar72 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      fVar15 = *pfVar77;
      pfVar79 = pfVar77 + 1;
      pfVar16 = pfVar77 + 2;
      pfVar17 = pfVar77 + 3;
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar3);
      auVar112._0_4_ = (int)fVar15 + in_XMM1.m128i_i32[0];
      auVar112._4_4_ = (int)*pfVar79 + in_XMM1.m128i_i32[1];
      auVar112._8_4_ = (int)*pfVar16 + in_XMM1.m128i_i32[2];
      auVar112._12_4_ = (int)*pfVar17 + in_XMM1.m128i_i32[3];
      in_ZMM0._0_16_ = auVar112;
      *pauVar66 = auVar112;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0xa5:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    puVar81 = (uint *)ppuVar7[puVar68[1]];
    pfVar77 = (float *)ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    p_Var73 = p_Var65 + param_3;
    do {
      uVar84 = *puVar81;
      puVar82 = puVar81 + 1;
      puVar18 = puVar81 + 2;
      puVar19 = puVar81 + 3;
      puVar81 = (uint *)((longlong)puVar81 + (ulonglong)bVar3);
      in_ZMM0._0_16_ = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      fVar185 = *pfVar77;
      fVar186 = pfVar77[1];
      fVar187 = pfVar77[2];
      fVar188 = pfVar77[3];
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar4);
      uVar84 = -(uint)((float)(uVar84 & uVar44) <= GlobalVectorConstants::SmallNumber.m128_f32[0]);
      uVar120 = -(uint)((float)(*puVar82 & uVar43) <= GlobalVectorConstants::SmallNumber.m128_f32[1]
                       );
      uVar124 = -(uint)((float)(*puVar18 & uVar42) <= GlobalVectorConstants::SmallNumber.m128_f32[2]
                       );
      uVar129 = -(uint)((float)(*puVar19 & uVar41) <= GlobalVectorConstants::SmallNumber.m128_f32[3]
                       );
      __vdecl_fmodf4();
      in_XMM1.m128i_i32[0] =
           (int)((float)(~uVar84 & in_ZMM0._0_4_ |
                        uVar84 & GlobalVectorConstants::FloatZero.m128_u32[0]) + fVar185);
      in_XMM1.m128i_i32[1] =
           (int)((float)(~uVar120 & in_ZMM0._4_4_ |
                        uVar120 & GlobalVectorConstants::FloatZero.m128_u32[1]) + fVar186);
      in_XMM1.m128i_i32[2] =
           (int)((float)(~uVar124 & in_ZMM0._8_4_ |
                        uVar124 & GlobalVectorConstants::FloatZero.m128_u32[2]) + fVar187);
      in_XMM1.m128i_i32[3] =
           (int)((float)(~uVar129 & in_ZMM0._12_4_ |
                        uVar129 & GlobalVectorConstants::FloatZero.m128_u32[3]) + fVar188);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)local_res20 + 9);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    iVar83 = ___xmm_000587c5000587c5000587c5000587c5;
    iVar119 = _UNK_151cf02d4;
    iVar123 = _UNK_151cf02d8;
    iVar128 = _UNK_151cf02dc;
    fVar185 = ___xmm_77800000778000007780000077800000;
    fVar186 = _UNK_1506896d4;
    fVar187 = _UNK_1506896d8;
    fVar188 = _UNK_1506896dc;
    goto switchD_148dbd065_caseD_24;
  case 0xa6:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    puVar81 = (uint *)ppuVar7[puVar68[1]];
    pauVar72 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      uVar84 = *puVar81;
      puVar82 = puVar81 + 1;
      puVar18 = puVar81 + 2;
      puVar19 = puVar81 + 3;
      puVar81 = (uint *)((longlong)puVar81 + (ulonglong)bVar3);
      auVar113._0_4_ = (float)(int)(uVar84 & in_XMM1.m128i_u32[0]);
      auVar113._4_4_ = (float)(int)(*puVar82 & in_XMM1.m128i_u32[1]);
      auVar113._8_4_ = (float)(int)(*puVar18 & in_XMM1.m128i_u32[2]);
      auVar113._12_4_ = (float)(int)(*puVar19 & in_XMM1.m128i_u32[3]);
      in_ZMM0._0_16_ = auVar113;
      *pauVar66 = auVar113;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0xa7:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[3]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    pacVar69 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pauVar64 = pauVar66 + param_3;
    iVar62 = __isa_available;
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      local_118 = *pauVar72;
      auVar118._16_48_ = in_ZMM0._16_48_;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar3);
      in_XMM2.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar4);
      local_128.m128i_i8 = in_XMM1.m128i_i8;
      if (iVar62 < 5) {
        lVar67 = 0;
        do {
          *(uint *)(local_1a8 + lVar67) =
               *(uint *)(local_128.m128i_i8 + lVar67) >>
               ((byte)*(undefined4 *)(local_118 + lVar67) & 0x1f);
          lVar67 = lVar67 + 4;
        } while (lVar67 < 0x10);
        auVar118._0_16_ = local_1a8;
        iVar62 = __isa_available;
      }
      else {
        local_1a8 = vpsrlvd_avx2((undefined1  [16])in_XMM1,local_118);
        auVar118 = ZEXT1664(local_1a8);
      }
      auVar114._0_4_ = auVar118._0_4_ & in_XMM2.m128i_u32[0];
      auVar114._4_4_ = auVar118._4_4_ & in_XMM2.m128i_u32[1];
      auVar114._8_4_ = auVar118._8_4_ & in_XMM2.m128i_u32[2];
      in_ZMM0._16_48_ = auVar118._16_48_;
      auVar114._12_4_ = auVar118._12_4_ & in_XMM2.m128i_u32[3];
      in_ZMM0._0_16_ = auVar114;
      *pauVar66 = auVar114;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0xa8:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pacVar69 = (char (*) [16])ppuVar7[puVar68[1]];
    pauVar72 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      in_XMM2.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar3);
      auVar115._4_4_ = -(uint)(0.0 - in_XMM1.m128i_i32[1] < in_XMM2.m128i_i32[1]);
      auVar115._0_4_ = -(uint)(0.0 - in_XMM1.m128i_i32[0] < in_XMM2.m128i_i32[0]);
      auVar115._8_4_ = -(uint)(0.0 - in_XMM1.m128i_i32[2] < in_XMM2.m128i_i32[2]);
      auVar115._12_4_ = -(uint)(0.0 - in_XMM1.m128i_i32[3] < in_XMM2.m128i_i32[3]);
      in_ZMM0._0_16_ = auVar115;
      *pauVar66 = auVar115;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar72);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0xa9:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[3]];
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    puVar74 = param_2->RegIncTable;
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    p_Var73 = p_Var65 + param_3;
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar3);
      auVar117 = *pauVar72;
      in_ZMM0._0_16_ = auVar117;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar4);
      in_XMM2 = (__m128i)pmulld(auVar172 | (undefined1  [16])in_XMM1,auVar117);
      *p_Var65 = in_XMM2;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0xaa:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[3]];
    puVar74 = param_2->RegIncTable;
    pacVar71 = (char (*) [16])ppuVar7[*puVar68];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    pacVar69 = (char (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pauVar64 = pauVar66 + param_3;
    iVar62 = __isa_available;
    do {
      in_XMM1.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar6);
      local_108 = *pauVar72;
      auVar132 = in_ZMM0._16_48_;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar3);
      in_XMM2.m128i_i8 = *pacVar69;
      pacVar69 = (char (*) [16])((longlong)*pacVar69 + (ulonglong)bVar4);
      local_f8.m128i_i8 = in_XMM1.m128i_i8;
      if (iVar62 < 5) {
        lVar67 = 0;
        do {
          *(int *)(local_198 + lVar67) =
               *(int *)((longlong)&local_f8 + lVar67) <<
               ((byte)*(undefined4 *)(local_108 + lVar67) & 0x1f);
          lVar67 = lVar67 + 4;
          iVar62 = __isa_available;
        } while (lVar67 < 0x10);
      }
      else {
        local_198 = vpsllvd_avx2((undefined1  [16])in_XMM1,local_108);
        auVar132 = (undefined1  [48])0x0;
      }
      in_ZMM0._0_16_ = local_198 | (undefined1  [16])in_XMM2;
      in_ZMM0._16_48_ = auVar132;
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 9);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0xab:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    pauVar72 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pfVar77 = (float *)ppuVar7[puVar68[1]];
    pauVar64 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      fVar53 = VVMConstVec4_One4[3];
      fVar52 = VVMConstVec4_One4[2];
      fVar23 = VVMConstVec4_One4[1];
      fVar15 = VVMConstVec4_One4[0];
      auVar172 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      fVar185 = *pfVar77;
      fVar186 = pfVar77[1];
      fVar187 = pfVar77[2];
      fVar188 = pfVar77[3];
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar3);
                    /* WARNING: Load size is inaccurate */
      in_XMM2 = *(__m128i *)((__m128i *)((longlong)&param_2->RandState + 0x40))->m128i_i8;
      iVar83 = *(int *)&param_2->RandState;
      iVar119 = *(int *)((longlong)&param_2->RandState + 4);
      iVar123 = *(int *)((longlong)&param_2->RandState + 8);
      iVar128 = *(int *)((longlong)&param_2->RandState + 0xc);
      *(undefined8 *)((longlong)&param_2->RandState + 0x40) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x30);
      *(undefined8 *)((longlong)&param_2->RandState + 0x48) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x38);
      *(undefined8 *)((longlong)&param_2->RandState + 0x30) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x20);
      *(undefined8 *)((longlong)&param_2->RandState + 0x38) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x28);
      *(undefined8 *)((longlong)&param_2->RandState + 0x20) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x10);
      *(undefined8 *)((longlong)&param_2->RandState + 0x28) =
           *(undefined8 *)((longlong)&param_2->RandState + 0x18);
      uVar84 = in_XMM2.m128i_u32[0] >> 2 ^ in_XMM2.m128i_u32[0];
      uVar120 = in_XMM2.m128i_u32[1] >> 2 ^ in_XMM2.m128i_u32[1];
      uVar124 = in_XMM2.m128i_u32[2] >> 2 ^ in_XMM2.m128i_u32[2];
      uVar129 = in_XMM2.m128i_u32[3] >> 2 ^ in_XMM2.m128i_u32[3];
      *(int *)((longlong)&param_2->RandState + 0x10) = iVar83;
      *(int *)((longlong)&param_2->RandState + 0x14) = iVar119;
      *(int *)((longlong)&param_2->RandState + 0x18) = iVar123;
      *(int *)((longlong)&param_2->RandState + 0x1c) = iVar128;
      in_XMM1.m128i_u32[0] = uVar84 << 1 ^ uVar84 ^ iVar83 << 4;
      in_XMM1.m128i_u32[1] = uVar120 << 1 ^ uVar120 ^ iVar119 << 4;
      in_XMM1.m128i_u32[2] = uVar124 << 1 ^ uVar124 ^ iVar123 << 4;
      in_XMM1.m128i_u32[3] = uVar129 << 1 ^ uVar129 ^ iVar128 << 4;
      (param_2->RandState)._s_0.State[0] = in_XMM1;
      iVar83 = iVar58 + *(int *)((longlong)&param_2->RandState + 0x50);
      iVar119 = iVar59 + *(int *)((longlong)&param_2->RandState + 0x54);
      iVar123 = iVar60 + *(int *)((longlong)&param_2->RandState + 0x58);
      iVar128 = iVar61 + *(int *)((longlong)&param_2->RandState + 0x5c);
      *(int *)((longlong)&param_2->RandState + 0x50) = iVar83;
      *(int *)((longlong)&param_2->RandState + 0x54) = iVar119;
      *(int *)((longlong)&param_2->RandState + 0x58) = iVar123;
      *(int *)((longlong)&param_2->RandState + 0x5c) = iVar128;
      auVar116._0_4_ =
           ((float)((uint)(iVar83 + in_XMM1.m128i_i32[0]) >> 9 | uVar180) - fVar15) * auVar172._0_4_
           + fVar185;
      auVar116._4_4_ =
           ((float)((uint)(iVar119 + in_XMM1.m128i_i32[1]) >> 9 | uVar174) - fVar23) *
           auVar172._4_4_ + fVar186;
      auVar116._8_4_ =
           ((float)((uint)(iVar123 + in_XMM1.m128i_i32[2]) >> 9 | uVar156) - fVar52) *
           auVar172._8_4_ + fVar187;
      auVar116._12_4_ =
           ((float)((uint)(iVar128 + in_XMM1.m128i_i32[3]) >> 9 | uVar14) - fVar53) *
           auVar172._12_4_ + fVar188;
      in_ZMM0._0_16_ = auVar116;
      *pauVar66 = auVar116;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    iVar83 = ___xmm_000587c5000587c5000587c5000587c5;
    iVar119 = _UNK_151cf02d4;
    iVar123 = _UNK_151cf02d8;
    iVar128 = _UNK_151cf02dc;
    fVar185 = ___xmm_77800000778000007780000077800000;
    fVar186 = _UNK_1506896d4;
    fVar187 = _UNK_1506896d8;
    fVar188 = _UNK_1506896dc;
    goto switchD_148dbd065_caseD_24;
  case 0xac:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    pfVar77 = (float *)ppuVar7[*puVar68];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    pauVar64 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      fVar56 = VVMConstVec4_One4[3];
      fVar54 = VVMConstVec4_One4[2];
      fVar52 = VVMConstVec4_One4[1];
      fVar15 = VVMConstVec4_One4[0];
      uVar84 = *(uint *)((longlong)&param_2->RandState + 0x40);
      uVar120 = *(uint *)((longlong)&param_2->RandState + 0x44);
      uVar124 = *(uint *)((longlong)&param_2->RandState + 0x48);
      uVar129 = *(uint *)((longlong)&param_2->RandState + 0x4c);
      fVar185 = *pfVar77;
      fVar186 = pfVar77[1];
      fVar187 = pfVar77[2];
      fVar188 = pfVar77[3];
      pfVar77 = (float *)((longlong)pfVar77 + (ulonglong)bVar6);
      uVar85 = *(uint *)((longlong)&param_2->RandState + 0x30);
      uVar121 = *(uint *)((longlong)&param_2->RandState + 0x34);
      uVar125 = *(uint *)((longlong)&param_2->RandState + 0x38);
      uVar130 = *(uint *)((longlong)&param_2->RandState + 0x3c);
      iVar86 = *(int *)&param_2->RandState;
      iVar122 = *(int *)((longlong)&param_2->RandState + 4);
      iVar126 = *(int *)((longlong)&param_2->RandState + 8);
      iVar131 = *(int *)((longlong)&param_2->RandState + 0xc);
      *(uint *)((longlong)&param_2->RandState + 0x40) = uVar85;
      *(uint *)((longlong)&param_2->RandState + 0x44) = uVar121;
      *(uint *)((longlong)&param_2->RandState + 0x48) = uVar125;
      *(uint *)((longlong)&param_2->RandState + 0x4c) = uVar130;
      _Var140 = (param_2->RandState)._s_0.State[2];
      (param_2->RandState)._s_0.State[3] = _Var140;
      _Var136 = (param_2->RandState)._s_0.State[1];
      uVar84 = uVar84 >> 2 ^ uVar84;
      uVar120 = uVar120 >> 2 ^ uVar120;
      uVar124 = uVar124 >> 2 ^ uVar124;
      uVar129 = uVar129 >> 2 ^ uVar129;
      (param_2->RandState)._s_0.State[2] = _Var136;
      *(int *)((longlong)&param_2->RandState + 0x10) = iVar86;
      *(int *)((longlong)&param_2->RandState + 0x14) = iVar122;
      *(int *)((longlong)&param_2->RandState + 0x18) = iVar126;
      *(int *)((longlong)&param_2->RandState + 0x1c) = iVar131;
      uVar84 = uVar84 << 1 ^ uVar84 ^ iVar86 << 4;
      uVar120 = uVar120 << 1 ^ uVar120 ^ iVar122 << 4;
      uVar124 = uVar124 << 1 ^ uVar124 ^ iVar126 << 4;
      uVar129 = uVar129 << 1 ^ uVar129 ^ iVar131 << 4;
      *(uint *)&param_2->RandState = uVar84;
      *(uint *)((longlong)&param_2->RandState + 4) = uVar120;
      *(uint *)((longlong)&param_2->RandState + 8) = uVar124;
      *(uint *)((longlong)&param_2->RandState + 0xc) = uVar129;
      in_XMM2._0_4_ = (float)(iVar83 + *(int *)((longlong)&param_2->RandState + 0x50));
      in_XMM2._4_4_ = (float)(iVar119 + *(int *)((longlong)&param_2->RandState + 0x54));
      in_XMM2._8_4_ = (float)(iVar123 + *(int *)((longlong)&param_2->RandState + 0x58));
      in_XMM2.m128i_i32[3] = iVar128 + *(int *)((longlong)&param_2->RandState + 0x5c);
      (param_2->RandState)._s_0.Counters = in_XMM2;
      fVar57 = VVMConstVec4_One4[3];
      fVar55 = VVMConstVec4_One4[2];
      fVar53 = VVMConstVec4_One4[1];
      fVar23 = VVMConstVec4_One4[0];
      uVar85 = uVar85 >> 2 ^ uVar85;
      uVar121 = uVar121 >> 2 ^ uVar121;
      uVar125 = uVar125 >> 2 ^ uVar125;
      uVar130 = uVar130 >> 2 ^ uVar130;
      (param_2->RandState)._s_0.State[4] = _Var140;
      (param_2->RandState)._s_0.State[3] = _Var136;
      *(int *)((longlong)&param_2->RandState + 0x20) = iVar86;
      *(int *)((longlong)&param_2->RandState + 0x24) = iVar122;
      *(int *)((longlong)&param_2->RandState + 0x28) = iVar126;
      *(int *)((longlong)&param_2->RandState + 0x2c) = iVar131;
      *(uint *)((longlong)&param_2->RandState + 0x10) = uVar84;
      *(uint *)((longlong)&param_2->RandState + 0x14) = uVar120;
      *(uint *)((longlong)&param_2->RandState + 0x18) = uVar124;
      *(uint *)((longlong)&param_2->RandState + 0x1c) = uVar129;
      iVar86 = ___xmm_000587c5000587c5000587c5000587c5 + (int)in_XMM2._0_4_;
      iVar122 = _UNK_151cf02d4 + (int)in_XMM2._4_4_;
      iVar126 = _UNK_151cf02d8 + (int)in_XMM2._8_4_;
      iVar131 = _UNK_151cf02dc + in_XMM2.m128i_i32[3];
      in_XMM1.m128i_u32[0] = uVar85 << 1 ^ uVar85 ^ uVar84 << 4;
      in_XMM1.m128i_u32[1] = uVar121 << 1 ^ uVar121 ^ uVar120 << 4;
      in_XMM1.m128i_u32[2] = uVar125 << 1 ^ uVar125 ^ uVar124 << 4;
      in_XMM1.m128i_u32[3] = uVar130 << 1 ^ uVar130 ^ uVar129 << 4;
      (param_2->RandState)._s_0.State[0] = in_XMM1;
      *(int *)((longlong)&param_2->RandState + 0x50) = iVar86;
      *(int *)((longlong)&param_2->RandState + 0x54) = iVar122;
      *(int *)((longlong)&param_2->RandState + 0x58) = iVar126;
      *(int *)((longlong)&param_2->RandState + 0x5c) = iVar131;
      iVar128 = _UNK_151cf02dc;
      iVar123 = _UNK_151cf02d8;
      iVar119 = _UNK_151cf02d4;
      iVar83 = ___xmm_000587c5000587c5000587c5000587c5;
      auVar183._0_4_ = ((float)((int)in_XMM2._0_4_ + uVar84 >> 9 | uVar180) - fVar15) * fVar185;
      auVar183._4_4_ = ((float)((int)in_XMM2._4_4_ + uVar120 >> 9 | uVar174) - fVar52) * fVar186;
      auVar183._8_4_ = ((float)((int)in_XMM2._8_4_ + uVar124 >> 9 | uVar156) - fVar54) * fVar187;
      auVar183._12_4_ = ((float)(in_XMM2.m128i_i32[3] + uVar129 >> 9 | uVar14) - fVar56) * fVar188;
      *pauVar66 = auVar183;
      pauVar66 = pauVar66 + 1;
      auVar117._0_4_ =
           ((float)((uint)(iVar86 + in_XMM1.m128i_i32[0]) >> 9 | uVar180) - fVar23) * fVar185;
      auVar117._4_4_ =
           ((float)((uint)(iVar122 + in_XMM1.m128i_i32[1]) >> 9 | uVar174) - fVar53) * fVar186;
      auVar117._8_4_ =
           ((float)((uint)(iVar126 + in_XMM1.m128i_i32[2]) >> 9 | uVar156) - fVar55) * fVar187;
      auVar117._12_4_ =
           ((float)((uint)(iVar131 + in_XMM1.m128i_i32[3]) >> 9 | uVar14) - fVar57) * fVar188;
      in_ZMM0._0_16_ = auVar117;
      *pauVar72 = auVar117;
      pauVar72 = pauVar72 + 1;
    } while (pauVar66 < pauVar64);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    iVar83 = ___xmm_000587c5000587c5000587c5000587c5;
    iVar119 = _UNK_151cf02d4;
    iVar123 = _UNK_151cf02d8;
    iVar128 = _UNK_151cf02dc;
    fVar185 = ___xmm_77800000778000007780000077800000;
    fVar186 = _UNK_1506896d4;
    fVar187 = _UNK_1506896d8;
    fVar188 = _UNK_1506896dc;
    goto switchD_148dbd065_caseD_24;
  case 0xad:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    pauVar72 = (undefined1 (*) [16])ppuVar7[*puVar68];
    pauVar64 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    pauVar78 = pauVar66 + param_3;
    bVar6 = param_2->RegIncTable[*puVar68];
    bVar3 = param_2->RegIncTable[puVar68[1]];
    do {
      auVar172 = *pauVar64;
      pauVar64 = (undefined1 (*) [16])(*pauVar64 + bVar3);
      auVar117 = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      in_XMM1 = (__m128i)maxps(auVar117,auVar172);
      auVar172._0_4_ = (int)in_XMM1.m128i_i32[0];
      auVar172._4_4_ = (int)in_XMM1.m128i_i32[1];
      auVar172._8_4_ = (int)in_XMM1.m128i_i32[2];
      auVar172._12_4_ = (int)in_XMM1.m128i_i32[3];
      in_ZMM0._0_16_ = auVar172;
      *pauVar66 = auVar172;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar78);
    puVar68 = (ushort *)((longlong)puVar68 + 7);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0xae:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    puVar81 = (uint *)ppuVar7[puVar68[1]];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    p_Var73 = p_Var65 + param_3;
    do {
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      uVar84 = *puVar81;
      puVar82 = puVar81 + 1;
      puVar18 = puVar81 + 2;
      puVar19 = puVar81 + 3;
      puVar81 = (uint *)((longlong)puVar81 + (ulonglong)bVar3);
      auVar117 = *pauVar72;
      in_ZMM0._0_16_ = auVar117;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar4);
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar5);
      auVar178._0_4_ = uVar84 & auVar172._0_4_;
      auVar178._4_4_ = *puVar82 & auVar172._4_4_;
      auVar178._8_4_ = *puVar18 & auVar172._8_4_;
      auVar178._12_4_ = *puVar19 & auVar172._12_4_;
      auVar138._0_4_ = ~auVar172._0_4_ & auVar117._0_4_;
      auVar138._4_4_ = ~auVar172._4_4_ & auVar117._4_4_;
      auVar138._8_4_ = ~auVar172._8_4_ & auVar117._8_4_;
      auVar138._12_4_ = ~auVar172._12_4_ & auVar117._12_4_;
      auVar138 = auVar138 | auVar178;
      in_XMM1.m128i_i32[0] = (int)(auVar138._0_4_ * in_XMM2.m128i_i32[0]);
      in_XMM1.m128i_i32[1] = (int)(auVar138._4_4_ * in_XMM2.m128i_i32[1]);
      in_XMM1.m128i_i32[2] = (int)(auVar138._8_4_ * in_XMM2.m128i_i32[2]);
      in_XMM1.m128i_i32[3] = (int)(auVar138._12_4_ * in_XMM2.m128i_i32[3]);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0xaf:
    ppuVar7 = param_2->RegPtrTable;
    p_Var65 = (__m128i *)ppuVar7[puVar68[4]];
    puVar74 = param_2->RegIncTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[*puVar68];
    puVar81 = (uint *)ppuVar7[puVar68[1]];
    pauVar72 = (undefined1 (*) [16])ppuVar7[puVar68[2]];
    bVar6 = puVar74[*puVar68];
    bVar3 = puVar74[puVar68[1]];
    bVar4 = puVar74[puVar68[2]];
    pacVar71 = (char (*) [16])ppuVar7[puVar68[3]];
    bVar5 = puVar74[puVar68[3]];
    p_Var73 = p_Var65 + param_3;
    do {
      auVar172 = *pauVar66;
      pauVar66 = (undefined1 (*) [16])(*pauVar66 + bVar6);
      uVar84 = *puVar81;
      puVar82 = puVar81 + 1;
      puVar18 = puVar81 + 2;
      puVar19 = puVar81 + 3;
      puVar81 = (uint *)((longlong)puVar81 + (ulonglong)bVar3);
      auVar117 = *pauVar72;
      in_ZMM0._0_16_ = auVar117;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar4);
      in_XMM2.m128i_i8 = *pacVar71;
      pacVar71 = (char (*) [16])((longlong)*pacVar71 + (ulonglong)bVar5);
      auVar179._0_4_ = uVar84 & auVar172._0_4_;
      auVar179._4_4_ = *puVar82 & auVar172._4_4_;
      auVar179._8_4_ = *puVar18 & auVar172._8_4_;
      auVar179._12_4_ = *puVar19 & auVar172._12_4_;
      auVar139._0_4_ = ~auVar172._0_4_ & auVar117._0_4_;
      auVar139._4_4_ = ~auVar172._4_4_ & auVar117._4_4_;
      auVar139._8_4_ = ~auVar172._8_4_ & auVar117._8_4_;
      auVar139._12_4_ = ~auVar172._12_4_ & auVar117._12_4_;
      auVar139 = auVar139 | auVar179;
      in_XMM1.m128i_i32[0] = (int)(auVar139._0_4_ + in_XMM2.m128i_i32[0]);
      in_XMM1.m128i_i32[1] = (int)(auVar139._4_4_ + in_XMM2.m128i_i32[1]);
      in_XMM1.m128i_i32[2] = (int)(auVar139._8_4_ + in_XMM2.m128i_i32[2]);
      in_XMM1.m128i_i32[3] = (int)(auVar139._12_4_ + in_XMM2.m128i_i32[3]);
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
    } while (p_Var65 < p_Var73);
    puVar68 = (ushort *)((longlong)puVar68 + 0xb);
    local_res20 = puVar68;
    iVar62 = __isa_available;
    goto switchD_148dbd065_caseD_24;
  case 0xb0:
    ppuVar7 = param_2->RegPtrTable;
    pauVar66 = (undefined1 (*) [16])ppuVar7[puVar68[1]];
    pauVar64 = pauVar66 + param_3;
    pauVar72 = (undefined1 (*) [16])ppuVar7[*puVar68];
    p_Var65 = (__m128i *)ppuVar7[puVar68[2]];
    bVar6 = param_2->RegIncTable[*puVar68];
    do {
      in_ZMM0._0_16_ = *pauVar72;
      pauVar72 = (undefined1 (*) [16])(*pauVar72 + bVar6);
      __vdecl_sincosf4();
      *p_Var65 = in_XMM1;
      p_Var65 = p_Var65 + 1;
      *pauVar66 = in_ZMM0._0_16_;
      pauVar66 = pauVar66 + 1;
    } while (pauVar66 < pauVar64);
    break;
  case 0xb1:
    puVar68 = (ushort *)VVM_Output32_from_16(true,(uchar *)puVar68,param_2,param_1);
    local_res20 = puVar68;
    goto switchD_148dbd065_caseD_24;
  case 0xb2:
    goto switchD_148dbd065_caseD_b2;
  }
  puVar68 = (ushort *)((longlong)puVar68 + 7);
  local_res20 = puVar68;
  iVar62 = __isa_available;
  goto switchD_148dbd065_caseD_24;
switchD_148dbd065_caseD_b2:
  puVar68 = (ushort *)VVM_Output16_from_16(true,(uchar *)puVar68,param_2,param_1);
  local_res20 = puVar68;
  goto switchD_148dbd065_caseD_24;
switchD_148dbd065_caseD_0:
  return;
}

// ExecChunkSingleLoop @ 148dc21a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
VectorVM::Runtime::ExecChunkSingleLoop(FVectorVMExecContext *param_1,FVectorVMBatchState *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ulonglong uVar3;
  byte bVar4;
  ushort uVar5;
  int *piVar6;
  float *pfVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  uint *puVar13;
  uint *puVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [14];
  unkbyte10 Var38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  int iVar55;
  uchar **ppuVar56;
  longlong lVar57;
  ushort *puVar58;
  uint *puVar59;
  ulonglong *puVar60;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  __m128i _Var67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  uint uVar61;
  uint uVar87;
  __m128i _Var79;
  uint uVar62;
  uint uVar84;
  uint uVar86;
  uint uVar88;
  __m128i _Var80;
  uint uVar83;
  uint uVar85;
  undefined1 in_ZMM0 [64];
  undefined1 auVar81 [64];
  undefined1 auVar82 [64];
  float fVar89;
  int iVar93;
  float fVar110;
  int iVar115;
  int iVar116;
  int iVar122;
  int iVar123;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar117;
  float fVar124;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  uint uVar90;
  undefined1 auVar104 [16];
  uint uVar111;
  uint uVar118;
  uint uVar125;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar91;
  float fVar112;
  float fVar119;
  float fVar126;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar92;
  float fVar113;
  float fVar114;
  float fVar120;
  float fVar121;
  int iVar127;
  float fVar128;
  float fVar129;
  undefined1 auVar109 [16];
  int iVar130;
  __m128i in_XMM2;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  int iVar136;
  uint uVar137;
  int iVar138;
  uint uVar139;
  int iVar140;
  uint uVar141;
  int iVar142;
  uint uVar143;
  int local_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  __m128i local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [14] [16];
  
  SetBatchPointersForCorrectChunkOffsets(param_1,param_2);
  iVar55 = __isa_available;
  uVar54 = _UNK_1506895bc;
  uVar53 = _UNK_1506895b8;
  uVar52 = _UNK_1506895b4;
  uVar51 = ___xmm_00400000004000000040000000400000;
  uVar50 = _UNK_1506895ac;
  uVar49 = _UNK_1506895a8;
  uVar48 = _UNK_1506895a4;
  uVar47 = ___xmm_00007fff00007fff00007fff00007fff;
  iVar46 = _UNK_15068959c;
  iVar45 = _UNK_150689598;
  iVar44 = _UNK_150689594;
  iVar43 = ___xmm_00007c0000007c0000007c0000007c00;
  iVar42 = _UNK_15068958c;
  iVar41 = _UNK_150689588;
  iVar40 = _UNK_150689584;
  iVar39 = ___xmm_00007bff00007bff00007bff00007bff;
  puVar58 = (ushort *)(param_1->VVMState->Bytecode + 1);
  uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar86 = _UNK_15061cc74;
  uVar84 = _UNK_15061cc78;
  uVar62 = _UNK_15061cc7c;
  iVar136 = ___xmm_000587c5000587c5000587c5000587c5;
  iVar138 = _UNK_151cf02d4;
  iVar140 = _UNK_151cf02d8;
  iVar142 = _UNK_151cf02dc;
  fVar30 = ___xmm_77800000778000007780000077800000;
  fVar29 = _UNK_1506896d4;
  fVar28 = _UNK_1506896d8;
  fVar27 = _UNK_1506896dc;
  uVar61 = _UNK_15076b1fc;
  uVar83 = _UNK_15076b1f8;
  uVar85 = _UNK_15076b1f4;
  uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
  auVar109 = ___xmm_00000001000000010000000100000001;
LAB_148dc2289:
  iVar130 = _UNK_151cf02dc;
  iVar122 = _UNK_151cf02d8;
  iVar115 = _UNK_151cf02d4;
  iVar93 = ___xmm_000587c5000587c5000587c5000587c5;
  fVar126 = VVMConstVec4_One4[3];
  fVar119 = VVMConstVec4_One4[2];
  fVar112 = VVMConstVec4_One4[1];
  fVar91 = VVMConstVec4_One4[0];
  in_ZMM0._0_16_ = ___xmm_7f8000007f8000007f8000007f800000;
switchD_148dc22a7_caseD_24:
  fVar121 = GlobalVectorConstants::FloatOne.m128_f32[0];
  fVar89 = GlobalVectorConstants::FloatOne.m128_f32[1];
  fVar129 = GlobalVectorConstants::FloatOne.m128_f32[2];
  fVar110 = GlobalVectorConstants::FloatOne.m128_f32[3];
  fVar124 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar92 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar114 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar117 = GlobalVectorConstants::FloatZero.m128_f32[3];
  iVar127 = GlobalVectorConstants::IntZero.m128i_i32[1];
  iVar116 = GlobalVectorConstants::IntZero.m128i_i32[2];
  iVar123 = GlobalVectorConstants::IntZero.m128i_i32[3];
  uVar90 = GlobalVectorConstants::IntAllMask.m128i_u32[0];
  uVar111 = GlobalVectorConstants::IntAllMask.m128i_u32[1];
  uVar118 = GlobalVectorConstants::IntAllMask.m128i_u32[2];
  uVar125 = GlobalVectorConstants::IntAllMask.m128i_u32[3];
  switch(*(undefined1 *)((longlong)puVar58 + -1)) {
  case 0:
    return;
  case 1:
    goto switchD_148dc22a7_caseD_1;
  case 2:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    in_ZMM0._0_16_ = auVar109;
    pfVar10 = (float *)ppuVar56[*puVar58];
    auVar104._0_4_ = *pfVar10 - auVar109._0_4_;
    auVar104._4_4_ = pfVar10[1] - auVar109._4_4_;
    auVar104._8_4_ = pfVar10[2] - auVar109._8_4_;
    auVar104._12_4_ = pfVar10[3] - auVar109._12_4_;
    goto LAB_148dc22c5;
  case 3:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    auVar104._0_4_ = *pfVar10 * auVar109._0_4_;
    auVar104._4_4_ = pfVar10[1] * auVar109._4_4_;
    auVar104._8_4_ = pfVar10[2] * auVar109._8_4_;
    auVar104._12_4_ = pfVar10[3] * auVar109._12_4_;
    goto LAB_148dc22c5;
  case 4:
    ppuVar56 = param_2->RegPtrTable;
    uVar5 = *puVar58;
    auVar106 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    goto LAB_148dc2324;
  case 5:
  case 0x8b:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    uVar5 = *puVar58;
    fVar91 = *pfVar10;
    fVar112 = pfVar10[1];
    fVar119 = pfVar10[2];
    fVar126 = pfVar10[3];
    goto LAB_148dc2368;
  case 6:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[2]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    pfVar12 = (float *)ppuVar56[puVar58[1]];
    puVar1 = puVar58 + 3;
    puVar58 = (ushort *)((longlong)puVar58 + 9);
    in_ZMM0._0_4_ = *pfVar12 * *pfVar10;
    in_ZMM0._4_4_ = pfVar12[1] * pfVar10[1];
    in_ZMM0._8_4_ = pfVar12[2] * pfVar10[2];
    in_ZMM0._12_4_ = pfVar12[3] * pfVar10[3];
    in_XMM2.m128i_i32[0] = (int)((fVar121 - *pfVar10) * *pfVar11 + in_ZMM0._0_4_);
    in_XMM2.m128i_i32[1] = (int)((fVar89 - pfVar10[1]) * pfVar11[1] + in_ZMM0._4_4_);
    in_XMM2.m128i_i32[2] = (int)((fVar129 - pfVar10[2]) * pfVar11[2] + in_ZMM0._8_4_);
    in_XMM2.m128i_i32[3] = (int)((fVar110 - pfVar10[3]) * pfVar11[3] + in_ZMM0._12_4_);
    *(__m128i *)ppuVar56[*puVar1] = in_XMM2;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 7:
    uVar5 = *puVar58;
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    auVar109 = *(undefined1 (*) [16])param_2->RegPtrTable[uVar5];
    auVar63._0_4_ = (float)(uVar88 & auVar109._0_4_);
    auVar63._4_4_ = (float)(uVar86 & auVar109._4_4_);
    auVar63._8_4_ = (float)(uVar84 & auVar109._8_4_);
    auVar63._12_4_ = (float)(uVar62 & auVar109._12_4_);
    in_ZMM0._0_16_ = rcpps(auVar63,auVar109);
    in_XMM2.m128i_u32[0] = -(uint)(VVMConstVec4_Epsilon4[0] < auVar63._0_4_) & in_ZMM0._0_4_;
    in_XMM2.m128i_u32[1] = -(uint)(VVMConstVec4_Epsilon4[1] < auVar63._4_4_) & in_ZMM0._4_4_;
    in_XMM2.m128i_u32[2] = -(uint)(VVMConstVec4_Epsilon4[2] < auVar63._8_4_) & in_ZMM0._8_4_;
    in_XMM2.m128i_u32[3] = -(uint)(VVMConstVec4_Epsilon4[3] < auVar63._12_4_) & in_ZMM0._12_4_;
    *(__m128i *)param_2->RegPtrTable[*puVar1] = in_XMM2;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 8:
    uVar5 = *puVar58;
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
                    /* WARNING: Load size is inaccurate */
    in_XMM2 = *(__m128i *)((__m128i *)param_2->RegPtrTable[uVar5])->m128i_i8;
    puVar13 = (uint *)param_2->RegPtrTable[*puVar1];
    in_ZMM0._0_16_ = sqrtps(___xmm_7f8000007f8000007f8000007f800000,(undefined1  [16])in_XMM2);
    bVar17 = VVMConstVec4_Epsilon4[1] < in_XMM2.m128i_i32[1];
    bVar18 = VVMConstVec4_Epsilon4[2] < in_XMM2.m128i_i32[2];
    bVar19 = VVMConstVec4_Epsilon4[3] < in_XMM2.m128i_i32[3];
    auVar109 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,in_ZMM0._0_16_);
    *puVar13 = auVar109._0_4_ & -(uint)(VVMConstVec4_Epsilon4[0] < in_XMM2.m128i_i32[0]);
    puVar13[1] = auVar109._4_4_ & -(uint)bVar17;
    puVar13[2] = auVar109._8_4_ & -(uint)bVar18;
    puVar13[3] = auVar109._12_4_ & -(uint)bVar19;
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 9:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    uVar90 = -(uint)(VVMConstVec4_Epsilon4[0] < auVar109._0_4_);
    uVar111 = -(uint)(VVMConstVec4_Epsilon4[1] < auVar109._4_4_);
    uVar118 = -(uint)(VVMConstVec4_Epsilon4[2] < auVar109._8_4_);
    uVar125 = -(uint)(VVMConstVec4_Epsilon4[3] < auVar109._12_4_);
    auVar109 = sqrtps(auVar109,auVar109);
    goto LAB_148dc2471;
  case 10:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    auVar94._0_4_ = 0.0 - auVar109._0_4_;
    auVar94._4_4_ = 0.0 - auVar109._4_4_;
    auVar94._8_4_ = 0.0 - auVar109._8_4_;
    auVar94._12_4_ = 0.0 - auVar109._12_4_;
    goto LAB_148dc2474;
  case 0xb:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    uVar90 = uVar88;
    uVar111 = uVar86;
    uVar118 = uVar84;
    uVar125 = uVar62;
LAB_148dc2471:
    in_ZMM0._0_16_ = auVar109;
    auVar94._0_4_ = (float)(uVar90 & auVar109._0_4_);
    auVar94._4_4_ = (float)(uVar111 & auVar109._4_4_);
    auVar94._8_4_ = (float)(uVar118 & auVar109._8_4_);
    auVar94._12_4_ = (float)(uVar125 & auVar109._12_4_);
    goto LAB_148dc2474;
  case 0xc:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    __vdecl_expf4();
    goto LAB_148dc24c4;
  case 0xd:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    __vdecl_exp2f4();
    goto LAB_148dc24c4;
  case 0xe:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    __vdecl_logf4();
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    puVar13 = (uint *)ppuVar56[*puVar1];
    *puVar13 = -(uint)(0.0 < auVar109._0_4_) & in_ZMM0._0_4_;
    puVar13[1] = -(uint)(0.0 < auVar109._4_4_) & in_ZMM0._4_4_;
    puVar13[2] = -(uint)(0.0 < auVar109._8_4_) & in_ZMM0._8_4_;
    puVar13[3] = -(uint)(0.0 < auVar109._12_4_) & in_ZMM0._12_4_;
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    fVar30 = ___xmm_77800000778000007780000077800000;
    fVar29 = _UNK_1506896d4;
    fVar28 = _UNK_1506896d8;
    fVar27 = _UNK_1506896dc;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0xf:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    __vdecl_log2f4();
    goto LAB_148dc24c4;
  case 0x10:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    __vdecl_sinf4();
    goto LAB_148dc24c4;
  case 0x11:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    __vdecl_cosf4();
    goto LAB_148dc24c4;
  case 0x12:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    __vdecl_tanf4();
    goto LAB_148dc24c4;
  case 0x13:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[*puVar58];
    auVar134._0_4_ = (VVMConstVec4_One4[0] - *pfVar10) * (*pfVar10 + VVMConstVec4_One4[0]);
    auVar134._4_4_ = (VVMConstVec4_One4[1] - pfVar10[1]) * (pfVar10[1] + VVMConstVec4_One4[1]);
    auVar134._8_4_ = (VVMConstVec4_One4[2] - pfVar10[2]) * (pfVar10[2] + VVMConstVec4_One4[2]);
    auVar134._12_4_ = (VVMConstVec4_One4[3] - pfVar10[3]) * (pfVar10[3] + VVMConstVec4_One4[3]);
    in_XMM2.m128i_i8 = (char  [16])sqrtps(in_XMM2.m128i_i8,auVar134);
    in_ZMM0._0_4_ =
         (float)(-(uint)(VVMConstVec4_Epsilon4[0] < auVar134._0_4_) & in_XMM2.m128i_u32[0]);
    in_ZMM0._4_4_ =
         (float)(-(uint)(VVMConstVec4_Epsilon4[1] < auVar134._4_4_) & in_XMM2.m128i_u32[1]);
    in_ZMM0._8_4_ =
         (float)(-(uint)(VVMConstVec4_Epsilon4[2] < auVar134._8_4_) & in_XMM2.m128i_u32[2]);
    in_ZMM0._12_4_ =
         (float)(-(uint)(VVMConstVec4_Epsilon4[3] < auVar134._12_4_) & in_XMM2.m128i_u32[3]);
    __vdecl_atan2f4();
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    fVar91 = VVMConstVec4_QuarterPi4[1] - in_ZMM0._4_4_;
    fVar112 = VVMConstVec4_QuarterPi4[2] - in_ZMM0._8_4_;
    fVar119 = VVMConstVec4_QuarterPi4[3] - in_ZMM0._12_4_;
    pfVar10 = (float *)ppuVar56[*puVar1];
    *pfVar10 = VVMConstVec4_QuarterPi4[0] - in_ZMM0._0_4_;
    pfVar10[1] = fVar91;
    pfVar10[2] = fVar112;
    pfVar10[3] = fVar119;
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x14:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[*puVar58];
    auVar135._0_4_ = (VVMConstVec4_One4[0] - *pfVar10) * (*pfVar10 + VVMConstVec4_One4[0]);
    auVar135._4_4_ = (VVMConstVec4_One4[1] - pfVar10[1]) * (pfVar10[1] + VVMConstVec4_One4[1]);
    auVar135._8_4_ = (VVMConstVec4_One4[2] - pfVar10[2]) * (pfVar10[2] + VVMConstVec4_One4[2]);
    auVar135._12_4_ = (VVMConstVec4_One4[3] - pfVar10[3]) * (pfVar10[3] + VVMConstVec4_One4[3]);
    in_XMM2.m128i_i8 = (char  [16])sqrtps(in_XMM2.m128i_i8,auVar135);
    in_ZMM0._0_4_ =
         (float)(-(uint)(VVMConstVec4_Epsilon4[0] < auVar135._0_4_) & in_XMM2.m128i_u32[0]);
    in_ZMM0._4_4_ =
         (float)(-(uint)(VVMConstVec4_Epsilon4[1] < auVar135._4_4_) & in_XMM2.m128i_u32[1]);
    in_ZMM0._8_4_ =
         (float)(-(uint)(VVMConstVec4_Epsilon4[2] < auVar135._8_4_) & in_XMM2.m128i_u32[2]);
    in_ZMM0._12_4_ =
         (float)(-(uint)(VVMConstVec4_Epsilon4[3] < auVar135._12_4_) & in_XMM2.m128i_u32[3]);
    __vdecl_atan2f4();
    goto LAB_148dc24c4;
  case 0x15:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    __vdecl_atanf4();
LAB_148dc24c4:
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    *(undefined1 (*) [16])ppuVar56[*puVar1] = in_ZMM0._0_16_;
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x16:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    __vdecl_atan2f4();
    puVar1 = puVar58 + 2;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    *(undefined1 (*) [16])ppuVar56[*puVar1] = in_ZMM0._0_16_;
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x17:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    auVar94 = roundps(auVar109,*(undefined1 (*) [16])ppuVar56[*puVar58],2);
    goto LAB_148dc2474;
  case 0x18:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    auVar94 = roundps(auVar109,*(undefined1 (*) [16])ppuVar56[*puVar58],1);
    goto LAB_148dc2474;
  case 0x19:
    ppuVar56 = param_2->RegPtrTable;
    puVar13 = (uint *)ppuVar56[puVar58[1]];
    uVar87 = -(uint)((float)(uVar88 & *puVar13) <= GlobalVectorConstants::SmallNumber.m128_f32[0]);
    uVar86 = -(uint)((float)(uVar86 & puVar13[1]) <= GlobalVectorConstants::SmallNumber.m128_f32[1])
    ;
    uVar84 = -(uint)((float)(uVar84 & puVar13[2]) <= GlobalVectorConstants::SmallNumber.m128_f32[2])
    ;
    uVar62 = -(uint)((float)(uVar62 & puVar13[3]) <= GlobalVectorConstants::SmallNumber.m128_f32[3])
    ;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    __vdecl_fmodf4();
    puVar1 = puVar58 + 2;
    uVar61 = GlobalVectorConstants::FloatZero.m128_u32[1];
    uVar83 = GlobalVectorConstants::FloatZero.m128_u32[2];
    uVar85 = GlobalVectorConstants::FloatZero.m128_u32[3];
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    puVar13 = (uint *)ppuVar56[*puVar1];
    *puVar13 = ~uVar87 & in_ZMM0._0_4_ | uVar87 & GlobalVectorConstants::FloatZero.m128_u32[0];
    puVar13[1] = ~uVar86 & in_ZMM0._4_4_ | uVar86 & uVar61;
    puVar13[2] = ~uVar84 & in_ZMM0._8_4_ | uVar84 & uVar83;
    puVar13[3] = ~uVar62 & in_ZMM0._12_4_ | uVar62 & uVar85;
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    fVar30 = ___xmm_77800000778000007780000077800000;
    fVar29 = _UNK_1506896d4;
    fVar28 = _UNK_1506896d8;
    fVar27 = _UNK_1506896dc;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x1a:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = roundps(___xmm_7f8000007f8000007f8000007f800000,auVar109,3);
    auVar94._0_4_ = auVar109._0_4_ - in_ZMM0._0_4_;
    auVar94._4_4_ = auVar109._4_4_ - in_ZMM0._4_4_;
    auVar94._8_4_ = auVar109._8_4_ - in_ZMM0._8_4_;
    auVar94._12_4_ = auVar109._12_4_ - in_ZMM0._12_4_;
    goto LAB_148dc2474;
  case 0x1b:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    auVar94 = roundps(auVar109,*(undefined1 (*) [16])ppuVar56[*puVar58],3);
    goto LAB_148dc2474;
  case 0x1c:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = maxps(*(undefined1 (*) [16])ppuVar56[*puVar58],
                     *(undefined1 (*) [16])ppuVar56[puVar58[1]]);
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[puVar58[2]];
    auVar103 = minps(auVar109,*(undefined1 (*) [16])ppuVar56[puVar58[2]]);
    goto LAB_148dc2380;
  case 0x1d:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    auVar104 = minps(*(undefined1 (*) [16])ppuVar56[*puVar58],
                     *(undefined1 (*) [16])ppuVar56[puVar58[1]]);
    goto LAB_148dc22c5;
  case 0x1e:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    auVar104 = maxps(*(undefined1 (*) [16])ppuVar56[*puVar58],
                     *(undefined1 (*) [16])ppuVar56[puVar58[1]]);
    goto LAB_148dc22c5;
  case 0x1f:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    auVar81._16_48_ = in_ZMM0._16_48_;
    auVar81._0_16_ = auVar109;
    __vdecl_powf4();
    puVar1 = puVar58 + 2;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    auVar64._0_4_ = auVar81._0_4_ & -(uint)(VVMConstVec4_Epsilon4[0] < auVar109._0_4_);
    auVar64._4_4_ = auVar81._4_4_ & -(uint)(VVMConstVec4_Epsilon4[1] < auVar109._4_4_);
    auVar64._8_4_ = auVar81._8_4_ & -(uint)(VVMConstVec4_Epsilon4[2] < auVar109._8_4_);
    in_ZMM0._16_48_ = auVar81._16_48_;
    auVar64._12_4_ = auVar81._12_4_ & -(uint)(VVMConstVec4_Epsilon4[3] < auVar109._12_4_);
    in_ZMM0._0_16_ = auVar64;
    *(undefined1 (*) [16])ppuVar56[*puVar1] = auVar64;
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    fVar30 = ___xmm_77800000778000007780000077800000;
    fVar29 = _UNK_1506896d4;
    fVar28 = _UNK_1506896d8;
    fVar27 = _UNK_1506896dc;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x20:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    auVar94 = roundps(auVar109,*(undefined1 (*) [16])ppuVar56[*puVar58],8);
    goto LAB_148dc2474;
  case 0x21:
    pfVar10 = (float *)param_2->RegPtrTable[*puVar58];
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    auVar95._0_4_ = -(uint)(fVar124 <= *pfVar10) & (uint)fVar121;
    auVar95._4_4_ = -(uint)(fVar92 <= pfVar10[1]) & (uint)fVar89;
    auVar95._8_4_ = -(uint)(fVar114 <= pfVar10[2]) & (uint)fVar129;
    auVar95._12_4_ = -(uint)(fVar117 <= pfVar10[3]) & (uint)fVar110;
    auVar65._0_4_ = ~-(uint)(fVar124 <= *pfVar10) & GlobalVectorConstants::FloatMinusOne.m128_u32[0]
    ;
    auVar65._4_4_ =
         ~-(uint)(fVar92 <= pfVar10[1]) & GlobalVectorConstants::FloatMinusOne.m128_u32[1];
    auVar65._8_4_ =
         ~-(uint)(fVar114 <= pfVar10[2]) & GlobalVectorConstants::FloatMinusOne.m128_u32[2];
    auVar65._12_4_ =
         ~-(uint)(fVar117 <= pfVar10[3]) & GlobalVectorConstants::FloatMinusOne.m128_u32[3];
    in_ZMM0._0_16_ = auVar65 | auVar95;
    *(undefined1 (*) [16])param_2->RegPtrTable[*puVar1] = in_ZMM0._0_16_;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x22:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    puVar1 = puVar58 + 2;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    uVar90 = -(uint)(fVar124 <= *pfVar10 - *pfVar11);
    uVar111 = -(uint)(fVar92 <= pfVar10[1] - pfVar11[1]);
    uVar118 = -(uint)(fVar114 <= pfVar10[2] - pfVar11[2]);
    uVar125 = -(uint)(fVar117 <= pfVar10[3] - pfVar11[3]);
    auVar66._0_4_ = uVar90 & (uint)fVar121;
    auVar66._4_4_ = uVar111 & (uint)fVar89;
    auVar66._8_4_ = uVar118 & (uint)fVar129;
    auVar66._12_4_ = uVar125 & (uint)fVar110;
    in_ZMM0._0_16_ = auVar66;
    auVar131._0_4_ = ~uVar90 & (uint)fVar124;
    auVar131._4_4_ = ~uVar111 & (uint)fVar92;
    auVar131._8_4_ = ~uVar118 & (uint)fVar114;
    auVar131._12_4_ = ~uVar125 & (uint)fVar117;
    in_XMM2 = (__m128i)(auVar131 | auVar66);
    *(__m128i *)ppuVar56[*puVar1] = in_XMM2;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x23:
    uVar62 = *(uint *)((longlong)&param_2->RandState + 0x40);
    uVar84 = *(uint *)((longlong)&param_2->RandState + 0x44);
    uVar86 = *(uint *)((longlong)&param_2->RandState + 0x48);
    uVar88 = *(uint *)((longlong)&param_2->RandState + 0x4c);
    iVar93 = *(int *)&param_2->RandState;
    iVar115 = *(int *)((longlong)&param_2->RandState + 4);
    iVar122 = *(int *)((longlong)&param_2->RandState + 8);
    iVar130 = *(int *)((longlong)&param_2->RandState + 0xc);
    pfVar10 = (float *)param_2->RegPtrTable[puVar58[1]];
    uVar5 = *puVar58;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    pfVar11 = (float *)param_2->RegPtrTable[uVar5];
    fVar89 = *pfVar11;
    fVar110 = pfVar11[1];
    fVar117 = pfVar11[2];
    fVar124 = pfVar11[3];
    *(undefined8 *)((longlong)&param_2->RandState + 0x40) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x30);
    *(undefined8 *)((longlong)&param_2->RandState + 0x48) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x38);
    *(undefined8 *)((longlong)&param_2->RandState + 0x30) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x20);
    *(undefined8 *)((longlong)&param_2->RandState + 0x38) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x28);
    *(undefined8 *)((longlong)&param_2->RandState + 0x20) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x10);
    *(undefined8 *)((longlong)&param_2->RandState + 0x28) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x18);
    *(int *)((longlong)&param_2->RandState + 0x10) = iVar93;
    *(int *)((longlong)&param_2->RandState + 0x14) = iVar115;
    *(int *)((longlong)&param_2->RandState + 0x18) = iVar122;
    *(int *)((longlong)&param_2->RandState + 0x1c) = iVar130;
    uVar62 = uVar62 >> 2 ^ uVar62;
    uVar84 = uVar84 >> 2 ^ uVar84;
    uVar86 = uVar86 >> 2 ^ uVar86;
    uVar88 = uVar88 >> 2 ^ uVar88;
    in_XMM2.m128i_u32[0] = iVar93 << 4;
    in_XMM2.m128i_u32[1] = iVar115 << 4;
    in_XMM2.m128i_u32[2] = iVar122 << 4;
    in_XMM2.m128i_u32[3] = iVar130 << 4;
    uVar62 = uVar62 << 1 ^ uVar62 ^ in_XMM2.m128i_u32[0];
    uVar84 = uVar84 << 1 ^ uVar84 ^ in_XMM2.m128i_u32[1];
    uVar86 = uVar86 << 1 ^ uVar86 ^ in_XMM2.m128i_u32[2];
    uVar88 = uVar88 << 1 ^ uVar88 ^ in_XMM2.m128i_u32[3];
    *(uint *)&param_2->RandState = uVar62;
    *(uint *)((longlong)&param_2->RandState + 4) = uVar84;
    *(uint *)((longlong)&param_2->RandState + 8) = uVar86;
    *(uint *)((longlong)&param_2->RandState + 0xc) = uVar88;
    _Var67._0_4_ = iVar136 + *(int *)((longlong)&param_2->RandState + 0x50);
    _Var67._4_4_ = iVar138 + *(int *)((longlong)&param_2->RandState + 0x54);
    _Var67._8_4_ = iVar140 + *(int *)((longlong)&param_2->RandState + 0x58);
    _Var67._12_4_ = iVar142 + *(int *)((longlong)&param_2->RandState + 0x5c);
    in_ZMM0._0_16_ = (undefined1  [16])_Var67;
    (param_2->RandState)._s_0.Counters = _Var67;
    *pfVar10 = ((float)(uVar62 + _Var67._0_4_ >> 9 | uVar87) - fVar91) * fVar89;
    pfVar10[1] = ((float)(uVar84 + _Var67._4_4_ >> 9 | uVar85) - fVar112) * fVar110;
    pfVar10[2] = ((float)(uVar86 + _Var67._8_4_ >> 9 | uVar83) - fVar119) * fVar117;
    pfVar10[3] = ((float)(uVar88 + _Var67._12_4_ >> 9 | uVar61) - fVar126) * fVar124;
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  default:
    goto switchD_148dc22a7_caseD_24;
  case 0x25:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    in_ZMM0._0_16_ = auVar109;
    pfVar10 = (float *)ppuVar56[*puVar58];
    auVar104._4_4_ = (float)-(uint)(pfVar10[1] < auVar109._4_4_);
    auVar104._0_4_ = (float)-(uint)(*pfVar10 < auVar109._0_4_);
    auVar104._8_4_ = (float)-(uint)(pfVar10[2] < auVar109._8_4_);
    auVar104._12_4_ = (float)-(uint)(pfVar10[3] < auVar109._12_4_);
    goto LAB_148dc22c5;
  case 0x26:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    in_ZMM0._0_16_ = auVar109;
    pfVar10 = (float *)ppuVar56[*puVar58];
    auVar104._4_4_ = (float)-(uint)(pfVar10[1] <= auVar109._4_4_);
    auVar104._0_4_ = (float)-(uint)(*pfVar10 <= auVar109._0_4_);
    auVar104._8_4_ = (float)-(uint)(pfVar10[2] <= auVar109._8_4_);
    auVar104._12_4_ = (float)-(uint)(pfVar10[3] <= auVar109._12_4_);
    goto LAB_148dc22c5;
  case 0x27:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    auVar104._4_4_ = (float)-(uint)(pfVar10[1] < auVar109._4_4_);
    auVar104._0_4_ = (float)-(uint)(*pfVar10 < auVar109._0_4_);
    auVar104._8_4_ = (float)-(uint)(pfVar10[2] < auVar109._8_4_);
    auVar104._12_4_ = (float)-(uint)(pfVar10[3] < auVar109._12_4_);
    goto LAB_148dc22c5;
  case 0x28:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    auVar104._4_4_ = (float)-(uint)(pfVar10[1] <= auVar109._4_4_);
    auVar104._0_4_ = (float)-(uint)(*pfVar10 <= auVar109._0_4_);
    auVar104._8_4_ = (float)-(uint)(pfVar10[2] <= auVar109._8_4_);
    auVar104._12_4_ = (float)-(uint)(pfVar10[3] <= auVar109._12_4_);
    goto LAB_148dc22c5;
  case 0x29:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    auVar104._4_4_ = (float)-(uint)(pfVar10[1] == auVar109._4_4_);
    auVar104._0_4_ = (float)-(uint)(*pfVar10 == auVar109._0_4_);
    auVar104._8_4_ = (float)-(uint)(pfVar10[2] == auVar109._8_4_);
    auVar104._12_4_ = (float)-(uint)(pfVar10[3] == auVar109._12_4_);
    goto LAB_148dc22c5;
  case 0x2a:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    auVar104._4_4_ = (float)-(uint)(pfVar10[1] != auVar109._4_4_);
    auVar104._0_4_ = (float)-(uint)(*pfVar10 != auVar109._0_4_);
    auVar104._8_4_ = (float)-(uint)(pfVar10[2] != auVar109._8_4_);
    auVar104._12_4_ = (float)-(uint)(pfVar10[3] != auVar109._12_4_);
    goto LAB_148dc22c5;
  case 0x2b:
    ppuVar56 = param_2->RegPtrTable;
    puVar13 = (uint *)ppuVar56[*puVar58];
    puVar59 = (uint *)ppuVar56[puVar58[2]];
    puVar14 = (uint *)ppuVar56[puVar58[1]];
    puVar1 = puVar58 + 3;
    puVar58 = (ushort *)((longlong)puVar58 + 9);
    auVar132._0_4_ = ~*puVar13 & *puVar59;
    auVar132._4_4_ = ~puVar13[1] & puVar59[1];
    auVar132._8_4_ = ~puVar13[2] & puVar59[2];
    auVar132._12_4_ = ~puVar13[3] & puVar59[3];
    auVar68._0_4_ = *puVar14 & *puVar13;
    auVar68._4_4_ = puVar14[1] & puVar13[1];
    auVar68._8_4_ = puVar14[2] & puVar13[2];
    auVar68._12_4_ = puVar14[3] & puVar13[3];
    in_ZMM0._0_16_ = auVar68;
    in_XMM2 = (__m128i)(auVar132 | auVar68);
    *(__m128i *)ppuVar56[*puVar1] = in_XMM2;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x2c:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[puVar58[1]];
    uVar5 = *puVar58;
    iVar93 = *piVar6;
    iVar115 = piVar6[1];
    iVar122 = piVar6[2];
    iVar130 = piVar6[3];
    goto LAB_148dc2a5a;
  case 0x2d:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[*puVar58];
    puVar1 = puVar58 + 1;
    iVar93 = piVar6[1];
    iVar115 = piVar6[2];
    iVar122 = piVar6[3];
    puVar2 = puVar58 + 2;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar1];
    in_ZMM0._0_16_ = auVar109;
    piVar9 = (int *)ppuVar56[*puVar2];
    *piVar9 = *piVar6 - auVar109._0_4_;
    piVar9[1] = iVar93 - auVar109._4_4_;
    piVar9[2] = iVar115 - auVar109._8_4_;
    piVar9[3] = iVar122 - auVar109._12_4_;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x2e:
    ppuVar56 = param_2->RegPtrTable;
    puVar1 = puVar58 + 1;
    uVar5 = *puVar58;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar1];
    puVar2 = puVar58 + 2;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    auVar109 = pmulld(*(undefined1 (*) [16])ppuVar56[uVar5],*(undefined1 (*) [16])ppuVar56[*puVar1])
    ;
    *(undefined1 (*) [16])ppuVar56[*puVar2] = auVar109;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x2f:
    ppuVar56 = param_2->RegPtrTable;
    pauVar15 = (undefined1 (*) [16])ppuVar56[puVar58[2]];
    piVar6 = (int *)ppuVar56[puVar58[1]];
    iVar93 = *piVar6;
    iVar115 = piVar6[1];
    iVar122 = piVar6[2];
    iVar130 = piVar6[3];
    uVar31 = *(undefined8 *)ppuVar56[*puVar58];
    uVar32 = *(undefined8 *)(ppuVar56[*puVar58] + 8);
    if (iVar93 == 0) {
      local_208 = 0;
    }
    else {
      local_208 = (int)uVar31;
      if ((iVar93 == -1) && (local_208 == -0x80000000)) {
        local_208 = 0x7fffffff;
      }
      else {
        local_208 = local_208 / iVar93;
      }
    }
    if (iVar115 == 0) {
      iStack_204 = 0;
    }
    else {
      iStack_204 = (int)((ulonglong)uVar31 >> 0x20);
      if ((iVar115 == -1) && (iStack_204 == -0x80000000)) {
        iStack_204 = 0x7fffffff;
      }
      else {
        iStack_204 = iStack_204 / iVar115;
      }
    }
    if (iVar122 == 0) {
      iStack_200 = 0;
    }
    else {
      iStack_200 = (int)uVar32;
      if ((iVar122 == -1) && (iStack_200 == -0x80000000)) {
        iStack_200 = 0x7fffffff;
      }
      else {
        iStack_200 = iStack_200 / iVar122;
      }
    }
    if (iVar130 == 0) {
      puVar58 = (ushort *)((longlong)puVar58 + 7);
      auVar34._4_4_ = iStack_204;
      auVar34._0_4_ = local_208;
      auVar34._8_4_ = iStack_200;
      auVar34._12_4_ = 0;
      in_ZMM0._0_16_ = auVar34;
      *pauVar15 = auVar34;
      auVar109 = ___xmm_00000001000000010000000100000001;
    }
    else {
      iStack_1fc = (int)((ulonglong)uVar32 >> 0x20);
      if ((iVar130 == -1) && (iStack_1fc == -0x80000000)) {
        puVar58 = (ushort *)((longlong)puVar58 + 7);
        auVar35._4_4_ = iStack_204;
        auVar35._0_4_ = local_208;
        auVar35._8_4_ = iStack_200;
        auVar35._12_4_ = 0x7fffffff;
        in_ZMM0._0_16_ = auVar35;
        *pauVar15 = auVar35;
        auVar109 = ___xmm_00000001000000010000000100000001;
      }
      else {
        puVar58 = (ushort *)((longlong)puVar58 + 7);
        auVar36._4_4_ = iStack_204;
        auVar36._0_4_ = local_208;
        auVar36._8_4_ = iStack_200;
        auVar36._12_4_ = iStack_1fc / iVar130;
        in_ZMM0._0_16_ = auVar36;
        *pauVar15 = auVar36;
        auVar109 = ___xmm_00000001000000010000000100000001;
      }
    }
    goto LAB_148dc2289;
  case 0x30:
    ppuVar56 = param_2->RegPtrTable;
                    /* WARNING: Load size is inaccurate */
    in_XMM2 = *(__m128i *)((__m128i *)ppuVar56[puVar58[2]])->m128i_i8;
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    in_ZMM0._0_16_ = auVar109;
    piVar6 = (int *)ppuVar56[*puVar58];
    puVar1 = puVar58 + 3;
    puVar58 = (ushort *)((longlong)puVar58 + 9);
    iVar115 = *piVar6;
    iVar122 = piVar6[1];
    iVar130 = piVar6[2];
    iVar127 = piVar6[3];
    puVar13 = (uint *)ppuVar56[*puVar1];
    iVar93 = auVar109._0_4_;
    uVar90 = (uint)(iVar115 < iVar93) * iVar93 | (uint)(iVar115 >= iVar93) * iVar115;
    iVar93 = auVar109._4_4_;
    uVar111 = (uint)(iVar122 < iVar93) * iVar93 | (uint)(iVar122 >= iVar93) * iVar122;
    iVar93 = auVar109._8_4_;
    uVar118 = (uint)(iVar130 < iVar93) * iVar93 | (uint)(iVar130 >= iVar93) * iVar130;
    iVar93 = auVar109._12_4_;
    uVar125 = (uint)(iVar127 < iVar93) * iVar93 | (uint)(iVar127 >= iVar93) * iVar127;
    iVar93 = in_XMM2.m128i_i32[0];
    iVar115 = in_XMM2.m128i_i32[1];
    iVar122 = in_XMM2.m128i_i32[2];
    iVar130 = in_XMM2.m128i_i32[3];
    *puVar13 = (uint)(iVar93 < (int)uVar90) * iVar93 | (iVar93 >= (int)uVar90) * uVar90;
    puVar13[1] = (uint)(iVar115 < (int)uVar111) * iVar115 | (iVar115 >= (int)uVar111) * uVar111;
    puVar13[2] = (uint)(iVar122 < (int)uVar118) * iVar122 | (iVar122 >= (int)uVar118) * uVar118;
    puVar13[3] = (uint)(iVar130 < (int)uVar125) * iVar130 | (iVar130 >= (int)uVar125) * uVar125;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x31:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    in_ZMM0._0_16_ = auVar109;
    piVar6 = (int *)ppuVar56[*puVar58];
    puVar1 = puVar58 + 2;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    iVar127 = *piVar6;
    iVar116 = piVar6[1];
    iVar123 = piVar6[2];
    iVar26 = piVar6[3];
    puVar13 = (uint *)ppuVar56[*puVar1];
    iVar93 = auVar109._0_4_;
    iVar115 = auVar109._4_4_;
    iVar122 = auVar109._8_4_;
    iVar130 = auVar109._12_4_;
    *puVar13 = (uint)(iVar93 < iVar127) * iVar93 | (uint)(iVar93 >= iVar127) * iVar127;
    puVar13[1] = (uint)(iVar115 < iVar116) * iVar115 | (uint)(iVar115 >= iVar116) * iVar116;
    puVar13[2] = (uint)(iVar122 < iVar123) * iVar122 | (uint)(iVar122 >= iVar123) * iVar123;
    puVar13[3] = (uint)(iVar130 < iVar26) * iVar130 | (uint)(iVar130 >= iVar26) * iVar26;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x32:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    in_ZMM0._0_16_ = auVar109;
    piVar6 = (int *)ppuVar56[*puVar58];
    puVar1 = puVar58 + 2;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    iVar127 = *piVar6;
    iVar116 = piVar6[1];
    iVar123 = piVar6[2];
    iVar26 = piVar6[3];
    puVar13 = (uint *)ppuVar56[*puVar1];
    iVar93 = auVar109._0_4_;
    iVar115 = auVar109._4_4_;
    iVar122 = auVar109._8_4_;
    iVar130 = auVar109._12_4_;
    *puVar13 = (uint)(iVar127 < iVar93) * iVar93 | (uint)(iVar127 >= iVar93) * iVar127;
    puVar13[1] = (uint)(iVar116 < iVar115) * iVar115 | (uint)(iVar116 >= iVar115) * iVar116;
    puVar13[2] = (uint)(iVar123 < iVar122) * iVar122 | (uint)(iVar123 >= iVar122) * iVar123;
    puVar13[3] = (uint)(iVar26 < iVar130) * iVar130 | (uint)(iVar26 >= iVar130) * iVar26;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x33:
    uVar5 = *puVar58;
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    auVar104 = *(undefined1 (*) [16])param_2->RegPtrTable[uVar5];
    in_ZMM0._0_16_ = auVar104;
    auVar109 = pabsd(auVar109,auVar104);
    *(undefined1 (*) [16])param_2->RegPtrTable[*puVar1] = auVar109;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x34:
    uVar5 = *puVar58;
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    auVar109 = *(undefined1 (*) [16])param_2->RegPtrTable[uVar5];
    in_ZMM0._0_16_ = auVar109;
    piVar6 = (int *)param_2->RegPtrTable[*puVar1];
    *piVar6 = GlobalVectorConstants::IntZero.m128i_i32[0] - auVar109._0_4_;
    piVar6[1] = iVar127 - auVar109._4_4_;
    piVar6[2] = iVar116 - auVar109._8_4_;
    piVar6[3] = iVar123 - auVar109._12_4_;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x35:
    piVar6 = (int *)param_2->RegPtrTable[*puVar58];
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    uVar90 = -(uint)(*piVar6 < GlobalVectorConstants::IntZero.m128i_i32[0]) ^ uVar90;
    uVar111 = -(uint)(piVar6[1] < iVar127) ^ uVar111;
    uVar118 = -(uint)(piVar6[2] < iVar116) ^ uVar118;
    uVar125 = -(uint)(piVar6[3] < iVar123) ^ uVar125;
    auVar96._0_4_ = ~uVar90 & GlobalVectorConstants::IntMinusOne.m128i_u32[0];
    auVar96._4_4_ = ~uVar111 & GlobalVectorConstants::IntMinusOne.m128i_u32[1];
    auVar96._8_4_ = ~uVar118 & GlobalVectorConstants::IntMinusOne.m128i_u32[2];
    auVar96._12_4_ = ~uVar125 & GlobalVectorConstants::IntMinusOne.m128i_u32[3];
    auVar69._0_4_ = uVar90 & GlobalVectorConstants::IntOne.m128i_u32[0];
    auVar69._4_4_ = uVar111 & GlobalVectorConstants::IntOne.m128i_u32[1];
    auVar69._8_4_ = uVar118 & GlobalVectorConstants::IntOne.m128i_u32[2];
    auVar69._12_4_ = uVar125 & GlobalVectorConstants::IntOne.m128i_u32[3];
    in_ZMM0._0_16_ = auVar69 | auVar96;
    *(undefined1 (*) [16])param_2->RegPtrTable[*puVar1] = in_ZMM0._0_16_;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x36:
    uVar62 = *(uint *)((longlong)&param_2->RandState + 0x40);
    uVar84 = *(uint *)((longlong)&param_2->RandState + 0x44);
    uVar86 = *(uint *)((longlong)&param_2->RandState + 0x48);
    uVar88 = *(uint *)((longlong)&param_2->RandState + 0x4c);
    uVar5 = *puVar58;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    iVar93 = *(int *)&param_2->RandState;
    iVar115 = *(int *)((longlong)&param_2->RandState + 4);
    iVar122 = *(int *)((longlong)&param_2->RandState + 8);
    iVar130 = *(int *)((longlong)&param_2->RandState + 0xc);
    pauVar15 = (undefined1 (*) [16])param_2->RegPtrTable[uVar5];
    fVar89 = *(float *)*pauVar15;
    fVar110 = *(float *)(*pauVar15 + 4);
    fVar117 = *(float *)(*pauVar15 + 8);
    fVar124 = *(float *)(*pauVar15 + 0xc);
    *(undefined8 *)((longlong)&param_2->RandState + 0x40) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x30);
    *(undefined8 *)((longlong)&param_2->RandState + 0x48) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x38);
    *(undefined8 *)((longlong)&param_2->RandState + 0x30) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x20);
    *(undefined8 *)((longlong)&param_2->RandState + 0x38) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x28);
    *(undefined8 *)((longlong)&param_2->RandState + 0x20) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x10);
    *(undefined8 *)((longlong)&param_2->RandState + 0x28) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x18);
    *(int *)((longlong)&param_2->RandState + 0x10) = iVar93;
    *(int *)((longlong)&param_2->RandState + 0x14) = iVar115;
    *(int *)((longlong)&param_2->RandState + 0x18) = iVar122;
    *(int *)((longlong)&param_2->RandState + 0x1c) = iVar130;
    uVar62 = uVar62 >> 2 ^ uVar62;
    uVar84 = uVar84 >> 2 ^ uVar84;
    uVar86 = uVar86 >> 2 ^ uVar86;
    uVar88 = uVar88 >> 2 ^ uVar88;
    in_XMM2.m128i_u32[0] = iVar93 << 4;
    in_XMM2.m128i_u32[1] = iVar115 << 4;
    in_XMM2.m128i_u32[2] = iVar122 << 4;
    in_XMM2.m128i_u32[3] = iVar130 << 4;
    uVar62 = uVar62 << 1 ^ uVar62 ^ in_XMM2.m128i_u32[0];
    uVar84 = uVar84 << 1 ^ uVar84 ^ in_XMM2.m128i_u32[1];
    uVar86 = uVar86 << 1 ^ uVar86 ^ in_XMM2.m128i_u32[2];
    uVar88 = uVar88 << 1 ^ uVar88 ^ in_XMM2.m128i_u32[3];
    *(uint *)&param_2->RandState = uVar62;
    *(uint *)((longlong)&param_2->RandState + 4) = uVar84;
    *(uint *)((longlong)&param_2->RandState + 8) = uVar86;
    *(uint *)((longlong)&param_2->RandState + 0xc) = uVar88;
    iVar93 = iVar136 + *(int *)((longlong)&param_2->RandState + 0x50);
    iVar115 = iVar138 + *(int *)((longlong)&param_2->RandState + 0x54);
    iVar122 = iVar140 + *(int *)((longlong)&param_2->RandState + 0x58);
    iVar130 = iVar142 + *(int *)((longlong)&param_2->RandState + 0x5c);
    *(int *)((longlong)&param_2->RandState + 0x50) = iVar93;
    *(int *)((longlong)&param_2->RandState + 0x54) = iVar115;
    *(int *)((longlong)&param_2->RandState + 0x58) = iVar122;
    *(int *)((longlong)&param_2->RandState + 0x5c) = iVar130;
    auVar70._0_4_ = (int)(((float)(uVar62 + iVar93 >> 9 | uVar87) - fVar91) * fVar89);
    auVar70._4_4_ = (int)(((float)(uVar84 + iVar115 >> 9 | uVar85) - fVar112) * fVar110);
    auVar70._8_4_ = (int)(((float)(uVar86 + iVar122 >> 9 | uVar83) - fVar119) * fVar117);
    auVar70._12_4_ = (int)(((float)(uVar88 + iVar130 >> 9 | uVar61) - fVar126) * fVar124);
    in_ZMM0._0_16_ = auVar70;
    *pauVar15 = auVar70;
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x37:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    piVar6 = (int *)ppuVar56[puVar58[1]];
    iVar93 = *piVar6;
    iVar115 = piVar6[1];
    iVar122 = piVar6[2];
    iVar130 = piVar6[3];
    goto LAB_148dc2e3e;
  case 0x38:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[*puVar58];
    puVar1 = puVar58 + 1;
    iVar93 = piVar6[1];
    iVar115 = piVar6[2];
    iVar122 = piVar6[3];
    puVar2 = puVar58 + 2;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar1];
    in_ZMM0._0_16_ = auVar109;
    puVar13 = (uint *)ppuVar56[*puVar2];
    *puVar13 = -(uint)(auVar109._0_4_ < *piVar6) ^ uVar90;
    puVar13[1] = -(uint)(auVar109._4_4_ < iVar93) ^ uVar111;
    puVar13[2] = -(uint)(auVar109._8_4_ < iVar115) ^ uVar118;
    puVar13[3] = -(uint)(auVar109._12_4_ < iVar122) ^ uVar125;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x39:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[*puVar58];
    iVar93 = *piVar6;
    iVar115 = piVar6[1];
    iVar122 = piVar6[2];
    iVar130 = piVar6[3];
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
LAB_148dc2e3e:
    in_ZMM0._0_16_ = auVar109;
    auVar97._0_4_ = -(uint)(auVar109._0_4_ < iVar93);
    auVar97._4_4_ = -(uint)(auVar109._4_4_ < iVar115);
    auVar97._8_4_ = -(uint)(auVar109._8_4_ < iVar122);
    auVar97._12_4_ = -(uint)(auVar109._12_4_ < iVar130);
    goto LAB_148dc2e42;
  case 0x3a:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    piVar6 = (int *)ppuVar56[puVar58[1]];
    auVar97._0_4_ = -(uint)(auVar109._0_4_ < *piVar6) ^ uVar90;
    auVar97._4_4_ = -(uint)(auVar109._4_4_ < piVar6[1]) ^ uVar111;
    auVar97._8_4_ = -(uint)(auVar109._8_4_ < piVar6[2]) ^ uVar118;
    auVar97._12_4_ = -(uint)(auVar109._12_4_ < piVar6[3]) ^ uVar125;
    goto LAB_148dc2e42;
  case 0x3b:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[puVar58[1]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    auVar97._0_4_ = -(uint)(*piVar6 == auVar109._0_4_);
    auVar97._4_4_ = -(uint)(piVar6[1] == auVar109._4_4_);
    auVar97._8_4_ = -(uint)(piVar6[2] == auVar109._8_4_);
    auVar97._12_4_ = -(uint)(piVar6[3] == auVar109._12_4_);
    goto LAB_148dc2e42;
  case 0x3c:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[puVar58[1]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    auVar97._0_4_ = -(uint)(*piVar6 == auVar109._0_4_) ^ uVar90;
    auVar97._4_4_ = -(uint)(piVar6[1] == auVar109._4_4_) ^ uVar111;
    auVar97._8_4_ = -(uint)(piVar6[2] == auVar109._8_4_) ^ uVar118;
    auVar97._12_4_ = -(uint)(piVar6[3] == auVar109._12_4_) ^ uVar125;
    goto LAB_148dc2e42;
  case 0x3d:
  case 0x43:
    ppuVar56 = param_2->RegPtrTable;
    puVar13 = (uint *)ppuVar56[puVar58[1]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    auVar97._0_4_ = *puVar13 & auVar109._0_4_;
    auVar97._4_4_ = puVar13[1] & auVar109._4_4_;
    auVar97._8_4_ = puVar13[2] & auVar109._8_4_;
    auVar97._12_4_ = puVar13[3] & auVar109._12_4_;
    goto LAB_148dc2e42;
  case 0x3e:
  case 0x44:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    auVar97 = *(undefined1 (*) [16])ppuVar56[puVar58[1]] | *(undefined1 (*) [16])ppuVar56[*puVar58];
    goto LAB_148dc2e42;
  case 0x3f:
  case 0x45:
    ppuVar56 = param_2->RegPtrTable;
    puVar13 = (uint *)ppuVar56[puVar58[1]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    auVar97._0_4_ = *puVar13 ^ auVar109._0_4_;
    auVar97._4_4_ = puVar13[1] ^ auVar109._4_4_;
    auVar97._8_4_ = puVar13[2] ^ auVar109._8_4_;
    auVar97._12_4_ = puVar13[3] ^ auVar109._12_4_;
    goto LAB_148dc2e42;
  case 0x40:
  case 0x46:
    ppuVar56 = param_2->RegPtrTable;
    puVar13 = (uint *)ppuVar56[*puVar58];
    auVar71._0_4_ = *puVar13 ^ uVar90;
    auVar71._4_4_ = puVar13[1] ^ uVar111;
    auVar71._8_4_ = puVar13[2] ^ uVar118;
    auVar71._12_4_ = puVar13[3] ^ uVar125;
    goto LAB_148dc2fa8;
  case 0x41:
    ppuVar56 = param_2->RegPtrTable;
    pauVar15 = (undefined1 (*) [16])ppuVar56[puVar58[2]];
    local_188 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    local_198 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    if (iVar55 < 5) {
      lVar57 = 0;
      do {
        *(int *)(local_1e8 + lVar57) =
             *(int *)(local_188 + lVar57) << ((byte)*(undefined4 *)(local_198 + lVar57) & 0x1f);
        lVar57 = lVar57 + 4;
      } while (lVar57 < 0x10);
      in_ZMM0._0_16_ = local_1e8;
      puVar58 = (ushort *)((longlong)puVar58 + 7);
      *pauVar15 = local_1e8;
      auVar109 = ___xmm_00000001000000010000000100000001;
    }
    else {
      local_1e8 = vpsllvd_avx2(*(undefined1 (*) [16])ppuVar56[*puVar58],
                               *(undefined1 (*) [16])ppuVar56[puVar58[1]]);
      in_ZMM0 = ZEXT1664(local_1e8);
      puVar58 = (ushort *)((longlong)puVar58 + 7);
      *pauVar15 = local_1e8;
      auVar109 = ___xmm_00000001000000010000000100000001;
    }
    goto LAB_148dc2289;
  case 0x42:
    ppuVar56 = param_2->RegPtrTable;
    pauVar15 = (undefined1 (*) [16])ppuVar56[puVar58[2]];
    local_178 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    local_168 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    if (iVar55 < 5) {
      lVar57 = 0;
      do {
        *(uint *)(local_1d8 + lVar57) =
             *(uint *)(local_178 + lVar57) >> ((byte)*(undefined4 *)(local_168 + lVar57) & 0x1f);
        lVar57 = lVar57 + 4;
      } while (lVar57 < 0x10);
      in_ZMM0._0_16_ = local_1d8;
      puVar58 = (ushort *)((longlong)puVar58 + 7);
      *pauVar15 = local_1d8;
      auVar109 = ___xmm_00000001000000010000000100000001;
    }
    else {
      local_1d8 = vpsrlvd_avx2(*(undefined1 (*) [16])ppuVar56[*puVar58],
                               *(undefined1 (*) [16])ppuVar56[puVar58[1]]);
      in_ZMM0 = ZEXT1664(local_1d8);
      puVar58 = (ushort *)((longlong)puVar58 + 7);
      *pauVar15 = local_1d8;
      auVar109 = ___xmm_00000001000000010000000100000001;
    }
    goto LAB_148dc2289;
  case 0x47:
    uVar5 = *puVar58;
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    auVar109 = *(undefined1 (*) [16])param_2->RegPtrTable[uVar5];
    in_ZMM0._0_16_ = auVar109;
    piVar6 = (int *)param_2->RegPtrTable[*puVar1];
    *piVar6 = (int)auVar109._0_4_;
    piVar6[1] = (int)auVar109._4_4_;
    piVar6[2] = (int)auVar109._8_4_;
    piVar6[3] = (int)auVar109._12_4_;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x48:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    auVar94._0_4_ = (float)auVar109._0_4_;
    auVar94._4_4_ = (float)auVar109._4_4_;
    auVar94._8_4_ = (float)auVar109._8_4_;
    auVar94._12_4_ = (float)auVar109._12_4_;
    goto LAB_148dc2474;
  case 0x49:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    auVar94._4_4_ = (float)-(uint)(0.0 < auVar109._4_4_);
    auVar94._0_4_ = (float)-(uint)(0.0 < auVar109._0_4_);
    auVar94._8_4_ = (float)-(uint)(0.0 < auVar109._8_4_);
    auVar94._12_4_ = (float)-(uint)(0.0 < auVar109._12_4_);
LAB_148dc2474:
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    *(undefined1 (*) [16])ppuVar56[*puVar1] = auVar94;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x4a:
    puVar13 = (uint *)param_2->RegPtrTable[*puVar58];
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    auVar72._0_4_ = *puVar13 & (uint)VVMConstVec4_One4[0];
    auVar72._4_4_ = puVar13[1] & (uint)VVMConstVec4_One4[1];
    auVar72._8_4_ = puVar13[2] & (uint)VVMConstVec4_One4[2];
    auVar72._12_4_ = puVar13[3] & (uint)VVMConstVec4_One4[3];
    in_ZMM0._0_16_ = auVar72;
    *(undefined1 (*) [16])param_2->RegPtrTable[*puVar1] = auVar72;
    goto LAB_148dc2289;
  case 0x4b:
    in_ZMM0._0_16_ = ZEXT816(0);
    piVar6 = (int *)param_2->RegPtrTable[*puVar58];
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    iVar93 = piVar6[1];
    iVar115 = piVar6[2];
    iVar122 = piVar6[3];
    piVar9 = (int *)param_2->RegPtrTable[*puVar1];
    *piVar9 = -(uint)(0 < *piVar6);
    piVar9[1] = -(uint)(0 < iVar93);
    piVar9[2] = -(uint)(0 < iVar115);
    piVar9[3] = -(uint)(0 < iVar122);
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x4c:
    uVar5 = *puVar58;
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    auVar104 = *(undefined1 (*) [16])param_2->RegPtrTable[uVar5];
    in_ZMM0._0_16_ = auVar104;
    puVar13 = (uint *)param_2->RegPtrTable[*puVar1];
    *puVar13 = auVar109._0_4_ & auVar104._0_4_;
    puVar13[1] = auVar109._4_4_ & auVar104._4_4_;
    puVar13[2] = auVar109._8_4_ & auVar104._8_4_;
    puVar13[3] = auVar109._12_4_ & auVar104._12_4_;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x53:
  case 0x54:
    puVar58 = (ushort *)VVM_Output32(false,(uchar *)puVar58,param_2,param_1);
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x55:
    puVar58 = (ushort *)VVM_Output16(false,(uchar *)puVar58,param_2,param_1);
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x56:
    puVar58 = (ushort *)VVM_acquireindex(false,(uchar *)puVar58,param_2,param_1);
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x57:
    puVar58 = (ushort *)VVM_external_func_call(false,(uchar *)puVar58,param_2,param_1,1);
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x58:
    uVar5 = *puVar58;
    puVar58 = (ushort *)((longlong)puVar58 + 3);
    auVar33._4_4_ = VVMConstVec4_ZeroOneTwoThree4i[1];
    auVar33._0_4_ = VVMConstVec4_ZeroOneTwoThree4i[0];
    auVar33._8_4_ = VVMConstVec4_ZeroOneTwoThree4i[2];
    auVar33._12_4_ = VVMConstVec4_ZeroOneTwoThree4i[3];
    in_ZMM0._0_16_ = auVar33;
    *(undefined1 (*) [16])param_2->RegPtrTable[uVar5] = auVar33;
    goto LAB_148dc2289;
  case 0x5b:
    goto switchD_148dc22a7_caseD_5b;
  case 0x5d:
    puVar58 = (ushort *)VVM_update_id(false,(uchar *)puVar58,param_2,param_1,1);
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x5e:
    puVar58 = (ushort *)VVM_acquire_id(false,(uchar *)puVar58,param_2,param_1,1);
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x5f:
    puVar59 = (uint *)param_2->RegPtrTable[puVar58[1]];
    puVar60 = (ulonglong *)param_2->RegPtrTable[*puVar58];
    puVar13 = puVar59 + 4;
    bVar4 = param_2->RegIncTable[*puVar58];
    do {
      uVar3 = *puVar60;
      auVar20._8_4_ = 0;
      auVar20._0_8_ = uVar3;
      auVar20._12_2_ = (short)(uVar3 >> 0x30);
      auVar21._8_2_ = (short)(uVar3 >> 0x20);
      auVar21._0_8_ = uVar3;
      auVar21._10_4_ = auVar20._10_4_;
      auVar37._6_8_ = 0;
      auVar37._0_6_ = auVar21._8_6_;
      Var38 = CONCAT82(SUB148(auVar37 << 0x40,6),(short)(uVar3 >> 0x10));
      in_XMM2.m128i_i32[0] = CONCAT22(0,(ushort)uVar3);
      in_XMM2._4_10_ = Var38;
      in_XMM2.m128i_i16[7] = 0;
      puVar60 = (ulonglong *)((longlong)puVar60 + (ulonglong)(bVar4 >> 1));
      uVar86 = uVar47 & in_XMM2.m128i_u32[0];
      uVar84 = (uint)Var38;
      uVar88 = uVar48 & uVar84;
      uVar90 = uVar49 & auVar21._8_4_;
      uVar61 = auVar20._10_4_ >> 0x10;
      uVar111 = uVar50 & uVar61;
      uVar83 = in_ZMM0._0_4_;
      uVar85 = in_ZMM0._4_4_;
      uVar87 = in_ZMM0._8_4_;
      uVar62 = in_ZMM0._12_4_;
      in_ZMM0._0_16_ = ___xmm_7f8000007f8000007f8000007f800000;
      *puVar59 = -(uint)(iVar39 < (int)uVar86) & uVar83 | -(uint)(iVar43 < (int)uVar86) & uVar51 |
                 (uVar86 ^ in_XMM2.m128i_u32[0]) << 0x10 | (uint)((float)(uVar86 << 0xd) * fVar30);
      puVar59[1] = -(uint)(iVar40 < (int)uVar88) & uVar85 | -(uint)(iVar44 < (int)uVar88) & uVar52 |
                   (uVar88 ^ uVar84) << 0x10 | (uint)((float)(uVar88 << 0xd) * fVar29);
      puVar59[2] = -(uint)(iVar41 < (int)uVar90) & uVar87 | -(uint)(iVar45 < (int)uVar90) & uVar53 |
                   (uVar90 ^ auVar21._8_4_) << 0x10 | (uint)((float)(uVar90 << 0xd) * fVar28);
      puVar59[3] = -(uint)(iVar42 < (int)uVar111) & uVar62 | -(uint)(iVar46 < (int)uVar111) & uVar54
                   | (uVar111 ^ uVar61) << 0x10 | (uint)((float)(uVar111 << 0xd) * fVar27);
      puVar59 = puVar59 + 4;
    } while (puVar59 < puVar13);
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x62:
    uVar5 = *puVar58;
    puVar58 = (ushort *)((longlong)puVar58 + 3);
    in_ZMM0._0_4_ = VVMConstVec4_ZeroOneTwoThree4[0];
    in_ZMM0._4_4_ = VVMConstVec4_ZeroOneTwoThree4[1];
    in_ZMM0._8_4_ = VVMConstVec4_ZeroOneTwoThree4[2];
    in_ZMM0._12_4_ = VVMConstVec4_ZeroOneTwoThree4[3];
    *(float (*) [4])param_2->RegPtrTable[uVar5] = VVMConstVec4_ZeroOneTwoThree4;
    goto LAB_148dc2289;
  case 99:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[*puVar58];
    auVar71._0_4_ = *piVar6 + VVMConstVec4_ZeroOneTwoThree4i[0];
    auVar71._4_4_ = piVar6[1] + VVMConstVec4_ZeroOneTwoThree4i[1];
    auVar71._8_4_ = piVar6[2] + VVMConstVec4_ZeroOneTwoThree4i[2];
    auVar71._12_4_ = piVar6[3] + VVMConstVec4_ZeroOneTwoThree4i[3];
LAB_148dc2fa8:
    in_ZMM0._0_16_ = auVar71;
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 5);
    *(undefined1 (*) [16])ppuVar56[*puVar1] = auVar71;
    goto LAB_148dc2289;
  case 100:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    in_XMM2.m128i_i32[1] = -(uint)(pfVar11[1] < pfVar10[1]);
    in_XMM2.m128i_i32[0] = -(uint)(*pfVar11 < *pfVar10);
    in_XMM2.m128i_i32[2] = -(uint)(pfVar11[2] < pfVar10[2]);
    in_XMM2.m128i_i32[3] = -(uint)(pfVar11[3] < pfVar10[3]);
    goto LAB_148dc334f;
  case 0x65:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    in_XMM2.m128i_i32[1] = -(uint)(pfVar11[1] <= pfVar10[1]);
    in_XMM2.m128i_i32[0] = -(uint)(*pfVar11 <= *pfVar10);
    in_XMM2.m128i_i32[2] = -(uint)(pfVar11[2] <= pfVar10[2]);
    in_XMM2.m128i_i32[3] = -(uint)(pfVar11[3] <= pfVar10[3]);
    goto LAB_148dc334f;
  case 0x66:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    in_XMM2.m128i_i32[1] = -(uint)(pfVar10[1] == pfVar11[1]);
    in_XMM2.m128i_i32[0] = -(uint)(*pfVar10 == *pfVar11);
    in_XMM2.m128i_i32[2] = -(uint)(pfVar10[2] == pfVar11[2]);
    in_XMM2.m128i_i32[3] = -(uint)(pfVar10[3] == pfVar11[3]);
    goto LAB_148dc334f;
  case 0x67:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[*puVar58];
    piVar9 = (int *)ppuVar56[puVar58[1]];
    in_XMM2.m128i_i32[0] = -(uint)(*piVar6 < *piVar9);
    in_XMM2.m128i_i32[1] = -(uint)(piVar6[1] < piVar9[1]);
    in_XMM2.m128i_i32[2] = -(uint)(piVar6[2] < piVar9[2]);
    in_XMM2.m128i_i32[3] = -(uint)(piVar6[3] < piVar9[3]);
    goto LAB_148dc334f;
  case 0x68:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[*puVar58];
    piVar9 = (int *)ppuVar56[puVar58[1]];
    in_XMM2.m128i_u32[0] = -(uint)(*piVar9 < *piVar6) ^ uVar90;
    in_XMM2.m128i_u32[1] = -(uint)(piVar9[1] < piVar6[1]) ^ uVar111;
    in_XMM2.m128i_u32[2] = -(uint)(piVar9[2] < piVar6[2]) ^ uVar118;
    in_XMM2.m128i_u32[3] = -(uint)(piVar9[3] < piVar6[3]) ^ uVar125;
    goto LAB_148dc334f;
  case 0x69:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[puVar58[1]];
    piVar9 = (int *)ppuVar56[*puVar58];
    in_XMM2.m128i_i32[0] = -(uint)(*piVar6 == *piVar9);
    in_XMM2.m128i_i32[1] = -(uint)(piVar6[1] == piVar9[1]);
    in_XMM2.m128i_i32[2] = -(uint)(piVar6[2] == piVar9[2]);
    in_XMM2.m128i_i32[3] = -(uint)(piVar6[3] == piVar9[3]);
LAB_148dc334f:
    puVar13 = (uint *)ppuVar56[puVar58[3]];
    puVar59 = (uint *)ppuVar56[puVar58[2]];
    auVar98._0_4_ = ~in_XMM2.m128i_u32[0] & *puVar13;
    auVar98._4_4_ = ~in_XMM2.m128i_u32[1] & puVar13[1];
    auVar98._8_4_ = ~in_XMM2.m128i_u32[2] & puVar13[2];
    auVar98._12_4_ = ~in_XMM2.m128i_u32[3] & puVar13[3];
    auVar73._0_4_ = *puVar59 & in_XMM2.m128i_u32[0];
    auVar73._4_4_ = puVar59[1] & in_XMM2.m128i_u32[1];
    auVar73._8_4_ = puVar59[2] & in_XMM2.m128i_u32[2];
    auVar73._12_4_ = puVar59[3] & in_XMM2.m128i_u32[3];
    in_ZMM0._0_16_ = auVar73;
    auVar99 = auVar98 | auVar73;
LAB_148dc3371:
    puVar1 = puVar58 + 4;
    puVar58 = (ushort *)((longlong)puVar58 + 0xb);
    *(undefined1 (*) [16])ppuVar56[*puVar1] = auVar99;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x6a:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    fVar91 = *pfVar10;
    fVar112 = pfVar10[1];
    fVar119 = pfVar10[2];
    fVar126 = pfVar10[3];
    pfVar10 = (float *)ppuVar56[*puVar58];
    fVar89 = *pfVar10;
    fVar110 = pfVar10[1];
    fVar117 = pfVar10[2];
    fVar124 = pfVar10[3];
    goto LAB_148dc344f;
  case 0x6b:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    uVar90 = -(uint)(*pfVar11 <= *pfVar10);
    uVar111 = -(uint)(pfVar11[1] <= pfVar10[1]);
    uVar118 = -(uint)(pfVar11[2] <= pfVar10[2]);
    uVar125 = -(uint)(pfVar11[3] <= pfVar10[3]);
    break;
  case 0x6c:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    fVar89 = *pfVar10;
    fVar110 = pfVar10[1];
    fVar117 = pfVar10[2];
    fVar124 = pfVar10[3];
    pfVar10 = (float *)ppuVar56[*puVar58];
    fVar91 = *pfVar10;
    fVar112 = pfVar10[1];
    fVar119 = pfVar10[2];
    fVar126 = pfVar10[3];
LAB_148dc344f:
    uVar90 = -(uint)(fVar89 < fVar91);
    uVar111 = -(uint)(fVar110 < fVar112);
    uVar118 = -(uint)(fVar117 < fVar119);
    uVar125 = -(uint)(fVar124 < fVar126);
    break;
  case 0x6d:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    uVar90 = -(uint)(*pfVar10 <= *pfVar11);
    uVar111 = -(uint)(pfVar10[1] <= pfVar11[1]);
    uVar118 = -(uint)(pfVar10[2] <= pfVar11[2]);
    uVar125 = -(uint)(pfVar10[3] <= pfVar11[3]);
    break;
  case 0x6e:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    uVar90 = -(uint)(*pfVar10 == *pfVar11);
    uVar111 = -(uint)(pfVar10[1] == pfVar11[1]);
    uVar118 = -(uint)(pfVar10[2] == pfVar11[2]);
    uVar125 = -(uint)(pfVar10[3] == pfVar11[3]);
    break;
  case 0x6f:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    uVar90 = -(uint)(*pfVar10 != *pfVar11);
    uVar111 = -(uint)(pfVar10[1] != pfVar11[1]);
    uVar118 = -(uint)(pfVar10[2] != pfVar11[2]);
    uVar125 = -(uint)(pfVar10[3] != pfVar11[3]);
    break;
  case 0x70:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[*puVar58];
    piVar9 = (int *)ppuVar56[puVar58[1]];
    uVar90 = -(uint)(*piVar6 < *piVar9);
    uVar111 = -(uint)(piVar6[1] < piVar9[1]);
    uVar118 = -(uint)(piVar6[2] < piVar9[2]);
    uVar125 = -(uint)(piVar6[3] < piVar9[3]);
    break;
  case 0x71:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[*puVar58];
    piVar9 = (int *)ppuVar56[puVar58[1]];
    uVar90 = -(uint)(*piVar9 < *piVar6) ^ uVar90;
    uVar111 = -(uint)(piVar9[1] < piVar6[1]) ^ uVar111;
    uVar118 = -(uint)(piVar9[2] < piVar6[2]) ^ uVar118;
    uVar125 = -(uint)(piVar9[3] < piVar6[3]) ^ uVar125;
    break;
  case 0x72:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[*puVar58];
    piVar9 = (int *)ppuVar56[puVar58[1]];
    uVar90 = -(uint)(*piVar9 < *piVar6);
    uVar111 = -(uint)(piVar9[1] < piVar6[1]);
    uVar118 = -(uint)(piVar9[2] < piVar6[2]);
    uVar125 = -(uint)(piVar9[3] < piVar6[3]);
    break;
  case 0x73:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[*puVar58];
    piVar9 = (int *)ppuVar56[puVar58[1]];
    uVar90 = -(uint)(*piVar6 < *piVar9) ^ uVar90;
    uVar111 = -(uint)(piVar6[1] < piVar9[1]) ^ uVar111;
    uVar118 = -(uint)(piVar6[2] < piVar9[2]) ^ uVar118;
    uVar125 = -(uint)(piVar6[3] < piVar9[3]) ^ uVar125;
    break;
  case 0x74:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[puVar58[1]];
    piVar9 = (int *)ppuVar56[*puVar58];
    uVar90 = -(uint)(*piVar6 == *piVar9);
    uVar111 = -(uint)(piVar6[1] == piVar9[1]);
    uVar118 = -(uint)(piVar6[2] == piVar9[2]);
    uVar125 = -(uint)(piVar6[3] == piVar9[3]);
    break;
  case 0x75:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[puVar58[1]];
    piVar9 = (int *)ppuVar56[*puVar58];
    uVar90 = -(uint)(*piVar6 == *piVar9) ^ uVar90;
    uVar111 = -(uint)(piVar6[1] == piVar9[1]) ^ uVar111;
    uVar118 = -(uint)(piVar6[2] == piVar9[2]) ^ uVar118;
    uVar125 = -(uint)(piVar6[3] == piVar9[3]) ^ uVar125;
    break;
  case 0x76:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    fVar91 = *pfVar10;
    fVar112 = pfVar10[1];
    fVar119 = pfVar10[2];
    fVar126 = pfVar10[3];
    pfVar10 = (float *)ppuVar56[*puVar58];
    fVar89 = *pfVar10;
    fVar110 = pfVar10[1];
    fVar117 = pfVar10[2];
    fVar124 = pfVar10[3];
    goto LAB_148dc361a;
  case 0x77:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    auVar100._4_4_ = -(uint)(pfVar11[1] <= pfVar10[1]);
    auVar100._0_4_ = -(uint)(*pfVar11 <= *pfVar10);
    auVar100._8_4_ = -(uint)(pfVar11[2] <= pfVar10[2]);
    auVar100._12_4_ = -(uint)(pfVar11[3] <= pfVar10[3]);
    goto LAB_148dc361e;
  case 0x78:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    fVar89 = *pfVar10;
    fVar110 = pfVar10[1];
    fVar117 = pfVar10[2];
    fVar124 = pfVar10[3];
    pfVar10 = (float *)ppuVar56[*puVar58];
    fVar91 = *pfVar10;
    fVar112 = pfVar10[1];
    fVar119 = pfVar10[2];
    fVar126 = pfVar10[3];
LAB_148dc361a:
    auVar100._4_4_ = -(uint)(fVar110 < fVar112);
    auVar100._0_4_ = -(uint)(fVar89 < fVar91);
    auVar100._8_4_ = -(uint)(fVar117 < fVar119);
    auVar100._12_4_ = -(uint)(fVar124 < fVar126);
    goto LAB_148dc361e;
  case 0x79:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    auVar100._4_4_ = -(uint)(pfVar10[1] <= pfVar11[1]);
    auVar100._0_4_ = -(uint)(*pfVar10 <= *pfVar11);
    auVar100._8_4_ = -(uint)(pfVar10[2] <= pfVar11[2]);
    auVar100._12_4_ = -(uint)(pfVar10[3] <= pfVar11[3]);
    goto LAB_148dc361e;
  case 0x7a:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    auVar100._4_4_ = -(uint)(pfVar10[1] == pfVar11[1]);
    auVar100._0_4_ = -(uint)(*pfVar10 == *pfVar11);
    auVar100._8_4_ = -(uint)(pfVar10[2] == pfVar11[2]);
    auVar100._12_4_ = -(uint)(pfVar10[3] == pfVar11[3]);
    goto LAB_148dc361e;
  case 0x7b:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    auVar100._4_4_ = -(uint)(pfVar10[1] != pfVar11[1]);
    auVar100._0_4_ = -(uint)(*pfVar10 != *pfVar11);
    auVar100._8_4_ = -(uint)(pfVar10[2] != pfVar11[2]);
    auVar100._12_4_ = -(uint)(pfVar10[3] != pfVar11[3]);
    goto LAB_148dc361e;
  case 0x7c:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[*puVar58];
    piVar9 = (int *)ppuVar56[puVar58[1]];
    auVar100._0_4_ = -(uint)(*piVar6 < *piVar9);
    auVar100._4_4_ = -(uint)(piVar6[1] < piVar9[1]);
    auVar100._8_4_ = -(uint)(piVar6[2] < piVar9[2]);
    auVar100._12_4_ = -(uint)(piVar6[3] < piVar9[3]);
    goto LAB_148dc361e;
  case 0x7d:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[*puVar58];
    piVar9 = (int *)ppuVar56[puVar58[1]];
    auVar100._0_4_ = -(uint)(*piVar9 < *piVar6) ^ uVar90;
    auVar100._4_4_ = -(uint)(piVar9[1] < piVar6[1]) ^ uVar111;
    auVar100._8_4_ = -(uint)(piVar9[2] < piVar6[2]) ^ uVar118;
    auVar100._12_4_ = -(uint)(piVar9[3] < piVar6[3]) ^ uVar125;
    goto LAB_148dc361e;
  case 0x7e:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[*puVar58];
    piVar9 = (int *)ppuVar56[puVar58[1]];
    auVar100._0_4_ = -(uint)(*piVar9 < *piVar6);
    auVar100._4_4_ = -(uint)(piVar9[1] < piVar6[1]);
    auVar100._8_4_ = -(uint)(piVar9[2] < piVar6[2]);
    auVar100._12_4_ = -(uint)(piVar9[3] < piVar6[3]);
    goto LAB_148dc361e;
  case 0x7f:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[*puVar58];
    piVar9 = (int *)ppuVar56[puVar58[1]];
    auVar100._0_4_ = -(uint)(*piVar6 < *piVar9) ^ uVar90;
    auVar100._4_4_ = -(uint)(piVar6[1] < piVar9[1]) ^ uVar111;
    auVar100._8_4_ = -(uint)(piVar6[2] < piVar9[2]) ^ uVar118;
    auVar100._12_4_ = -(uint)(piVar6[3] < piVar9[3]) ^ uVar125;
    goto LAB_148dc361e;
  case 0x80:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[puVar58[1]];
    piVar9 = (int *)ppuVar56[*puVar58];
    auVar100._0_4_ = -(uint)(*piVar6 == *piVar9);
    auVar100._4_4_ = -(uint)(piVar6[1] == piVar9[1]);
    auVar100._8_4_ = -(uint)(piVar6[2] == piVar9[2]);
    auVar100._12_4_ = -(uint)(piVar6[3] == piVar9[3]);
    goto LAB_148dc361e;
  case 0x81:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[puVar58[1]];
    piVar9 = (int *)ppuVar56[*puVar58];
    auVar100._0_4_ = -(uint)(*piVar6 == *piVar9) ^ uVar90;
    auVar100._4_4_ = -(uint)(piVar6[1] == piVar9[1]) ^ uVar111;
    auVar100._8_4_ = -(uint)(piVar6[2] == piVar9[2]) ^ uVar118;
    auVar100._12_4_ = -(uint)(piVar6[3] == piVar9[3]) ^ uVar125;
LAB_148dc361e:
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[puVar58[2]];
    auVar108 = auVar100 | *(undefined1 (*) [16])ppuVar56[puVar58[2]];
    goto LAB_148dc3462;
  case 0x82:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    pfVar12 = (float *)ppuVar56[puVar58[2]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[3]];
    in_ZMM0._0_16_ = auVar109;
    auVar99._0_4_ = *pfVar10 * *pfVar11 + *pfVar12 + auVar109._0_4_;
    auVar99._4_4_ = pfVar10[1] * pfVar11[1] + pfVar12[1] + auVar109._4_4_;
    auVar99._8_4_ = pfVar10[2] * pfVar11[2] + pfVar12[2] + auVar109._8_4_;
    auVar99._12_4_ = pfVar10[3] * pfVar11[3] + pfVar12[3] + auVar109._12_4_;
    goto LAB_148dc3371;
  case 0x83:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    pfVar12 = (float *)ppuVar56[puVar58[2]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[3]];
    in_ZMM0._0_16_ = auVar109;
    auVar99._0_4_ = (*pfVar10 * *pfVar11 + *pfVar12) - auVar109._0_4_;
    auVar99._4_4_ = (pfVar10[1] * pfVar11[1] + pfVar12[1]) - auVar109._4_4_;
    auVar99._8_4_ = (pfVar10[2] * pfVar11[2] + pfVar12[2]) - auVar109._8_4_;
    auVar99._12_4_ = (pfVar10[3] * pfVar11[3] + pfVar12[3]) - auVar109._12_4_;
    goto LAB_148dc3371;
  case 0x84:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    pfVar12 = (float *)ppuVar56[puVar58[2]];
    pfVar7 = (float *)ppuVar56[puVar58[3]];
    puVar1 = puVar58 + 4;
    puVar58 = (ushort *)((longlong)puVar58 + 0xb);
    auVar74._0_4_ = *pfVar7 - (*pfVar10 * *pfVar11 + *pfVar12);
    auVar74._4_4_ = pfVar7[1] - (pfVar10[1] * pfVar11[1] + pfVar12[1]);
    auVar74._8_4_ = pfVar7[2] - (pfVar10[2] * pfVar11[2] + pfVar12[2]);
    auVar74._12_4_ = pfVar7[3] - (pfVar10[3] * pfVar11[3] + pfVar12[3]);
    in_ZMM0._0_16_ = auVar74;
    *(undefined1 (*) [16])ppuVar56[*puVar1] = auVar74;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x85:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    pfVar12 = (float *)ppuVar56[puVar58[2]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[3]];
    in_ZMM0._0_16_ = auVar109;
    auVar99._0_4_ = (*pfVar10 * *pfVar11 + *pfVar12) * auVar109._0_4_;
    auVar99._4_4_ = (pfVar10[1] * pfVar11[1] + pfVar12[1]) * auVar109._4_4_;
    auVar99._8_4_ = (pfVar10[2] * pfVar11[2] + pfVar12[2]) * auVar109._8_4_;
    auVar99._12_4_ = (pfVar10[3] * pfVar11[3] + pfVar12[3]) * auVar109._12_4_;
    goto LAB_148dc3371;
  case 0x86:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[2]];
    in_ZMM0._0_16_ = auVar109;
    auVar101._0_4_ = *pfVar10 * *pfVar11 + auVar109._0_4_;
    auVar101._4_4_ = pfVar10[1] * pfVar11[1] + auVar109._4_4_;
    auVar101._8_4_ = pfVar10[2] * pfVar11[2] + auVar109._8_4_;
    auVar101._12_4_ = pfVar10[3] * pfVar11[3] + auVar109._12_4_;
    auVar103 = sqrtps(auVar101,auVar101);
    goto LAB_148dc2380;
  case 0x87:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    pfVar12 = (float *)ppuVar56[puVar58[2]];
    pfVar7 = (float *)ppuVar56[puVar58[4]];
    puVar1 = puVar58 + 3;
    puVar2 = puVar58 + 5;
    puVar58 = (ushort *)((longlong)puVar58 + 0xd);
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar1];
    in_ZMM0._0_16_ = auVar109;
    in_XMM2.m128i_i32[0] = (int)(*pfVar10 * *pfVar11 + *pfVar12 + *pfVar7 * auVar109._0_4_);
    in_XMM2.m128i_i32[1] = (int)(pfVar10[1] * pfVar11[1] + pfVar12[1] + pfVar7[1] * auVar109._4_4_);
    in_XMM2.m128i_i32[2] = (int)(pfVar10[2] * pfVar11[2] + pfVar12[2] + pfVar7[2] * auVar109._8_4_);
    in_XMM2.m128i_i32[3] = (int)(pfVar10[3] * pfVar11[3] + pfVar12[3] + pfVar7[3] * auVar109._12_4_)
    ;
    *(__m128i *)ppuVar56[*puVar2] = in_XMM2;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x88:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    fVar91 = pfVar10[1];
    fVar112 = pfVar10[2];
    fVar119 = pfVar10[3];
    pfVar11 = (float *)ppuVar56[*puVar58];
    fVar126 = pfVar11[1];
    fVar89 = pfVar11[2];
    fVar110 = pfVar11[3];
    pfVar12 = (float *)ppuVar56[puVar58[2]];
    fVar117 = pfVar12[1];
    fVar124 = pfVar12[2];
    fVar92 = pfVar12[3];
    pfVar7 = (float *)ppuVar56[puVar58[3]];
    puVar1 = puVar58 + 4;
    fVar114 = pfVar7[1];
    fVar121 = pfVar7[2];
    fVar129 = pfVar7[3];
    puVar2 = puVar58 + 5;
    puVar58 = (ushort *)((longlong)puVar58 + 0xd);
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar1];
    in_ZMM0._0_16_ = auVar109;
    pfVar8 = (float *)ppuVar56[*puVar2];
    *pfVar8 = (*pfVar10 * *pfVar11 + *pfVar12) * *pfVar7 + auVar109._0_4_;
    pfVar8[1] = (fVar91 * fVar126 + fVar117) * fVar114 + auVar109._4_4_;
    pfVar8[2] = (fVar112 * fVar89 + fVar124) * fVar121 + auVar109._8_4_;
    pfVar8[3] = (fVar119 * fVar110 + fVar92) * fVar129 + auVar109._12_4_;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x89:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    pfVar12 = (float *)ppuVar56[puVar58[2]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[3]];
    in_ZMM0._0_16_ = auVar109;
    auVar99._0_4_ = *pfVar10 * *pfVar11 * *pfVar12 + auVar109._0_4_;
    auVar99._4_4_ = pfVar10[1] * pfVar11[1] * pfVar12[1] + auVar109._4_4_;
    auVar99._8_4_ = pfVar10[2] * pfVar11[2] * pfVar12[2] + auVar109._8_4_;
    auVar99._12_4_ = pfVar10[3] * pfVar11[3] * pfVar12[3] + auVar109._12_4_;
    goto LAB_148dc3371;
  case 0x8a:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[3]];
    pfVar11 = (float *)ppuVar56[puVar58[2]];
    pfVar12 = (float *)ppuVar56[puVar58[1]];
    uVar5 = *puVar58;
    puVar1 = puVar58 + 4;
    puVar58 = (ushort *)((longlong)puVar58 + 0xb);
    auVar109 = *(undefined1 (*) [16])ppuVar56[uVar5];
    in_ZMM0._0_16_ = auVar109;
    in_XMM2.m128i_i32[0] = (int)(*pfVar10 * *pfVar11 + *pfVar12 * auVar109._0_4_);
    in_XMM2.m128i_i32[1] = (int)(pfVar10[1] * pfVar11[1] + pfVar12[1] * auVar109._4_4_);
    in_XMM2.m128i_i32[2] = (int)(pfVar10[2] * pfVar11[2] + pfVar12[2] * auVar109._8_4_);
    in_XMM2.m128i_i32[3] = (int)(pfVar10[3] * pfVar11[3] + pfVar12[3] * auVar109._12_4_);
    *(__m128i *)ppuVar56[*puVar1] = in_XMM2;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x8c:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[2]];
    in_ZMM0._0_16_ = auVar109;
    auVar103._0_4_ = *pfVar10 * *pfVar11 - auVar109._0_4_;
    auVar103._4_4_ = pfVar10[1] * pfVar11[1] - auVar109._4_4_;
    auVar103._8_4_ = pfVar10[2] * pfVar11[2] - auVar109._8_4_;
    auVar103._12_4_ = pfVar10[3] * pfVar11[3] - auVar109._12_4_;
    goto LAB_148dc2380;
  case 0x8d:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    pfVar12 = (float *)ppuVar56[puVar58[2]];
    puVar1 = puVar58 + 3;
    puVar58 = (ushort *)((longlong)puVar58 + 9);
    auVar75._0_4_ = *pfVar12 - *pfVar10 * *pfVar11;
    auVar75._4_4_ = pfVar12[1] - pfVar10[1] * pfVar11[1];
    auVar75._8_4_ = pfVar12[2] - pfVar10[2] * pfVar11[2];
    auVar75._12_4_ = pfVar12[3] - pfVar10[3] * pfVar11[3];
    in_ZMM0._0_16_ = auVar75;
    *(undefined1 (*) [16])ppuVar56[*puVar1] = auVar75;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x8e:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[2]];
    in_ZMM0._0_16_ = auVar109;
    auVar103._0_4_ = *pfVar10 * *pfVar11 * auVar109._0_4_;
    auVar103._4_4_ = pfVar10[1] * pfVar11[1] * auVar109._4_4_;
    auVar103._8_4_ = pfVar10[2] * pfVar11[2] * auVar109._8_4_;
    auVar103._12_4_ = pfVar10[3] * pfVar11[3] * auVar109._12_4_;
    goto LAB_148dc2380;
  case 0x8f:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    auVar102._0_4_ = *pfVar10 * *pfVar11;
    auVar102._4_4_ = pfVar10[1] * pfVar11[1];
    auVar102._8_4_ = pfVar10[2] * pfVar11[2];
    auVar102._12_4_ = pfVar10[3] * pfVar11[3];
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[puVar58[2]];
    auVar103 = maxps(auVar102,*(undefined1 (*) [16])ppuVar56[puVar58[2]]);
    goto LAB_148dc2380;
  case 0x90:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[3]];
    pfVar11 = (float *)ppuVar56[puVar58[1]];
    uVar5 = *puVar58;
    puVar1 = puVar58 + 2;
    puVar58 = (ushort *)((longlong)puVar58 + 9);
    auVar109 = *(undefined1 (*) [16])ppuVar56[uVar5];
    in_ZMM0._0_16_ = auVar109;
    pfVar12 = (float *)ppuVar56[*puVar1];
    fVar91 = *pfVar11 * auVar109._0_4_;
    fVar112 = pfVar11[1] * auVar109._4_4_;
    fVar119 = pfVar11[2] * auVar109._8_4_;
    fVar126 = pfVar11[3] * auVar109._12_4_;
    *pfVar12 = fVar91;
    pfVar12[1] = fVar112;
    pfVar12[2] = fVar119;
    pfVar12[3] = fVar126;
    *pfVar10 = fVar91;
    pfVar10[1] = fVar112;
    pfVar10[2] = fVar119;
    pfVar10[3] = fVar126;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x91:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[3]];
    pfVar11 = (float *)ppuVar56[puVar58[2]];
    pfVar12 = (float *)ppuVar56[puVar58[1]];
    uVar5 = *puVar58;
    puVar1 = puVar58 + 4;
    puVar58 = (ushort *)((longlong)puVar58 + 0xb);
    auVar109 = *(undefined1 (*) [16])ppuVar56[uVar5];
    in_ZMM0._0_16_ = auVar109;
    in_XMM2.m128i_i32[0] = (int)(*pfVar10 * *pfVar11 + *pfVar12 + auVar109._0_4_);
    in_XMM2.m128i_i32[1] = (int)(pfVar10[1] * pfVar11[1] + pfVar12[1] + auVar109._4_4_);
    in_XMM2.m128i_i32[2] = (int)(pfVar10[2] * pfVar11[2] + pfVar12[2] + auVar109._8_4_);
    in_XMM2.m128i_i32[3] = (int)(pfVar10[3] * pfVar11[3] + pfVar12[3] + auVar109._12_4_);
    *(__m128i *)ppuVar56[*puVar1] = in_XMM2;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x92:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    fVar91 = *pfVar10 + *pfVar11;
    fVar112 = pfVar10[1] + pfVar11[1];
    fVar119 = pfVar10[2] + pfVar11[2];
    fVar126 = pfVar10[3] + pfVar11[3];
    goto LAB_148dc2372;
  case 0x93:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    pfVar12 = (float *)ppuVar56[puVar58[2]];
    puVar1 = puVar58 + 3;
    puVar58 = (ushort *)((longlong)puVar58 + 9);
    auVar76._4_4_ = -(uint)(pfVar12[1] < pfVar11[1] - pfVar10[1]);
    auVar76._0_4_ = -(uint)(*pfVar12 < *pfVar11 - *pfVar10);
    auVar76._8_4_ = -(uint)(pfVar12[2] < pfVar11[2] - pfVar10[2]);
    auVar76._12_4_ = -(uint)(pfVar12[3] < pfVar11[3] - pfVar10[3]);
    in_ZMM0._0_16_ = auVar76;
    *(undefined1 (*) [16])ppuVar56[*puVar1] = auVar76;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x94:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    in_ZMM0._0_16_ = auVar109;
    pfVar10 = (float *)ppuVar56[*puVar58];
    puVar1 = puVar58 + 2;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    in_XMM2.m128i_i32[0] = (int)(0.0 - (*pfVar10 - auVar109._0_4_));
    in_XMM2.m128i_i32[1] = (int)(0.0 - (pfVar10[1] - auVar109._4_4_));
    in_XMM2.m128i_i32[2] = (int)(0.0 - (pfVar10[2] - auVar109._8_4_));
    in_XMM2.m128i_i32[3] = (int)(0.0 - (pfVar10[3] - auVar109._12_4_));
    *(__m128i *)ppuVar56[*puVar1] = in_XMM2;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x95:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[2]];
    in_ZMM0._0_16_ = auVar109;
    auVar103._0_4_ = (*pfVar11 - *pfVar10) * auVar109._0_4_;
    auVar103._4_4_ = (pfVar11[1] - pfVar10[1]) * auVar109._4_4_;
    auVar103._8_4_ = (pfVar11[2] - pfVar10[2]) * auVar109._8_4_;
    auVar103._12_4_ = (pfVar11[3] - pfVar10[3]) * auVar109._12_4_;
    goto LAB_148dc2380;
  case 0x96:
    ppuVar56 = param_2->RegPtrTable;
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    pfVar10 = (float *)ppuVar56[puVar58[2]];
    puVar1 = puVar58 + 3;
    auVar133 = divps(*(undefined1 (*) [16])ppuVar56[*puVar58],auVar109);
    puVar2 = puVar58 + 4;
    puVar58 = (ushort *)((longlong)puVar58 + 0xb);
    auVar104 = *(undefined1 (*) [16])ppuVar56[*puVar1];
    in_ZMM0._0_16_ = auVar104;
    in_XMM2.m128i_i32[0] =
         (int)((float)(-(uint)(VVMConstVec4_Epsilon4[0] < (float)(uVar88 & auVar109._0_4_)) &
                      auVar133._0_4_) * *pfVar10 + auVar104._0_4_);
    in_XMM2.m128i_i32[1] =
         (int)((float)(-(uint)(VVMConstVec4_Epsilon4[1] < (float)(uVar86 & auVar109._4_4_)) &
                      auVar133._4_4_) * pfVar10[1] + auVar104._4_4_);
    in_XMM2.m128i_i32[2] =
         (int)((float)(-(uint)(VVMConstVec4_Epsilon4[2] < (float)(uVar84 & auVar109._8_4_)) &
                      auVar133._8_4_) * pfVar10[2] + auVar104._8_4_);
    in_XMM2.m128i_i32[3] =
         (int)((float)(-(uint)(VVMConstVec4_Epsilon4[3] < (float)(uVar62 & auVar109._12_4_)) &
                      auVar133._12_4_) * pfVar10[3] + auVar104._12_4_);
    *(__m128i *)ppuVar56[*puVar2] = in_XMM2;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x97:
    ppuVar56 = param_2->RegPtrTable;
    uVar5 = *puVar58;
                    /* WARNING: Load size is inaccurate */
    in_XMM2 = *(__m128i *)((__m128i *)ppuVar56[puVar58[1]])->m128i_i8;
    puVar1 = puVar58 + 2;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    auVar109 = divps(*(undefined1 (*) [16])ppuVar56[uVar5],(undefined1  [16])in_XMM2);
    auVar77._0_4_ =
         (int)(float)(-(uint)(VVMConstVec4_Epsilon4[0] < (float)(uVar88 & in_XMM2.m128i_u32[0])) &
                     auVar109._0_4_);
    auVar77._4_4_ =
         (int)(float)(-(uint)(VVMConstVec4_Epsilon4[1] < (float)(uVar86 & in_XMM2.m128i_u32[1])) &
                     auVar109._4_4_);
    auVar77._8_4_ =
         (int)(float)(-(uint)(VVMConstVec4_Epsilon4[2] < (float)(uVar84 & in_XMM2.m128i_u32[2])) &
                     auVar109._8_4_);
    auVar77._12_4_ =
         (int)(float)(-(uint)(VVMConstVec4_Epsilon4[3] < (float)(uVar62 & in_XMM2.m128i_u32[3])) &
                     auVar109._12_4_);
    in_ZMM0._0_16_ = auVar77;
    *(undefined1 (*) [16])ppuVar56[*puVar1] = auVar77;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x98:
    ppuVar56 = param_2->RegPtrTable;
    uVar5 = *puVar58;
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    puVar1 = puVar58 + 2;
    puVar2 = puVar58 + 3;
    puVar58 = (ushort *)((longlong)puVar58 + 9);
    auVar133 = divps(*(undefined1 (*) [16])ppuVar56[uVar5],auVar109);
    auVar104 = *(undefined1 (*) [16])ppuVar56[*puVar1];
    in_ZMM0._0_16_ = auVar104;
    in_XMM2.m128i_i32[0] =
         (int)((float)(-(uint)(VVMConstVec4_Epsilon4[0] < (float)(uVar88 & auVar109._0_4_)) &
                      auVar133._0_4_) * auVar104._0_4_);
    in_XMM2.m128i_i32[1] =
         (int)((float)(-(uint)(VVMConstVec4_Epsilon4[1] < (float)(uVar86 & auVar109._4_4_)) &
                      auVar133._4_4_) * auVar104._4_4_);
    in_XMM2.m128i_i32[2] =
         (int)((float)(-(uint)(VVMConstVec4_Epsilon4[2] < (float)(uVar84 & auVar109._8_4_)) &
                      auVar133._8_4_) * auVar104._8_4_);
    in_XMM2.m128i_i32[3] =
         (int)((float)(-(uint)(VVMConstVec4_Epsilon4[3] < (float)(uVar62 & auVar109._12_4_)) &
                      auVar133._12_4_) * auVar104._12_4_);
    *(__m128i *)ppuVar56[*puVar2] = in_XMM2;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x99:
    ppuVar56 = param_2->RegPtrTable;
    auVar104 = pmulld(*(undefined1 (*) [16])ppuVar56[*puVar58],
                      *(undefined1 (*) [16])ppuVar56[puVar58[1]]);
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[2]];
    in_ZMM0._0_16_ = auVar109;
    auVar108._0_4_ = auVar104._0_4_ + auVar109._0_4_;
    auVar108._4_4_ = auVar104._4_4_ + auVar109._4_4_;
    auVar108._8_4_ = auVar104._8_4_ + auVar109._8_4_;
    auVar108._12_4_ = auVar104._12_4_ + auVar109._12_4_;
    goto LAB_148dc3462;
  case 0x9a:
    ppuVar56 = param_2->RegPtrTable;
    pauVar15 = (undefined1 (*) [16])ppuVar56[puVar58[3]];
    piVar6 = (int *)ppuVar56[*puVar58];
    piVar9 = (int *)ppuVar56[puVar58[1]];
    local_158._0_4_ = *piVar9 + *piVar6;
    local_158._4_4_ = piVar9[1] + piVar6[1];
    local_158._8_4_ = piVar9[2] + piVar6[2];
    local_158._12_4_ = piVar9[3] + piVar6[3];
    in_XMM2 = *(__m128i *)ppuVar56[puVar58[2]];
    local_148 = in_XMM2;
    if (iVar55 < 5) {
      lVar57 = 0;
      do {
        *(uint *)(local_1c8 + lVar57) =
             *(uint *)(local_158 + lVar57) >>
             ((byte)*(undefined4 *)(local_148.m128i_i8 + lVar57) & 0x1f);
        lVar57 = lVar57 + 4;
      } while (lVar57 < 0x10);
      in_ZMM0._0_16_ = local_1c8;
      puVar58 = (ushort *)((longlong)puVar58 + 9);
      *pauVar15 = local_1c8;
      auVar109 = ___xmm_00000001000000010000000100000001;
    }
    else {
      local_1c8 = vpsrlvd_avx2(local_158,(undefined1  [16])in_XMM2);
      in_ZMM0 = ZEXT1664(local_1c8);
      puVar58 = (ushort *)((longlong)puVar58 + 9);
      *pauVar15 = local_1c8;
      auVar109 = ___xmm_00000001000000010000000100000001;
    }
    goto LAB_148dc2289;
  case 0x9b:
    ppuVar56 = param_2->RegPtrTable;
    auVar104 = *(undefined1 (*) [16])ppuVar56[puVar58[2]];
    piVar6 = (int *)ppuVar56[puVar58[1]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    auVar133._0_4_ = *piVar6 + auVar109._0_4_;
    auVar133._4_4_ = piVar6[1] + auVar109._4_4_;
    auVar133._8_4_ = piVar6[2] + auVar109._8_4_;
    auVar133._12_4_ = piVar6[3] + auVar109._12_4_;
    goto LAB_148dc3e37;
  case 0x9c:
    ppuVar56 = param_2->RegPtrTable;
    puVar13 = (uint *)ppuVar56[puVar58[2]];
    uVar5 = *puVar58;
    puVar1 = puVar58 + 1;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    auVar104 = *(undefined1 (*) [16])ppuVar56[uVar5];
    in_ZMM0._0_16_ = auVar104;
    puVar59 = (uint *)ppuVar56[*puVar1];
    uVar90 = auVar109._0_4_ & auVar104._0_4_;
    uVar111 = auVar109._4_4_ & auVar104._4_4_;
    uVar118 = auVar109._8_4_ & auVar104._8_4_;
    uVar125 = auVar109._12_4_ & auVar104._12_4_;
    *puVar59 = uVar90;
    puVar59[1] = uVar111;
    puVar59[2] = uVar118;
    puVar59[3] = uVar125;
    *puVar13 = uVar90;
    puVar13[1] = uVar111;
    puVar13[2] = uVar118;
    puVar13[3] = uVar125;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x9d:
    ppuVar56 = param_2->RegPtrTable;
    uVar5 = *puVar58;
                    /* WARNING: Load size is inaccurate */
    in_XMM2 = *(__m128i *)((__m128i *)ppuVar56[puVar58[1]])->m128i_i8;
    puVar1 = puVar58 + 2;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    bVar17 = VVMConstVec4_Epsilon4[1] < (float)(uVar86 & in_XMM2.m128i_u32[1]);
    bVar18 = VVMConstVec4_Epsilon4[2] < (float)(uVar84 & in_XMM2.m128i_u32[2]);
    bVar19 = VVMConstVec4_Epsilon4[3] < (float)(uVar62 & in_XMM2.m128i_u32[3]);
    auVar109 = *(undefined1 (*) [16])ppuVar56[uVar5];
    in_ZMM0._0_16_ = auVar109;
    puVar13 = (uint *)ppuVar56[*puVar1];
    auVar105._0_4_ = (float)auVar109._0_4_;
    auVar105._4_4_ = (float)auVar109._4_4_;
    auVar105._8_4_ = (float)auVar109._8_4_;
    auVar105._12_4_ = (float)auVar109._12_4_;
    auVar109 = divps(auVar105,(undefined1  [16])in_XMM2);
    *puVar13 = -(uint)(VVMConstVec4_Epsilon4[0] < (float)(uVar88 & in_XMM2.m128i_u32[0])) &
               auVar109._0_4_;
    puVar13[1] = -(uint)bVar17 & auVar109._4_4_;
    puVar13[2] = -(uint)bVar18 & auVar109._8_4_;
    puVar13[3] = -(uint)bVar19 & auVar109._12_4_;
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x9e:
    ppuVar56 = param_2->RegPtrTable;
    uVar5 = puVar58[1];
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    auVar106._0_4_ = (float)auVar109._0_4_;
    auVar106._4_4_ = (float)auVar109._4_4_;
    auVar106._8_4_ = (float)auVar109._8_4_;
    auVar106._12_4_ = (float)auVar109._12_4_;
LAB_148dc2324:
    puVar1 = puVar58 + 2;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    in_ZMM0._0_16_ = divps(*(undefined1 (*) [16])ppuVar56[uVar5],auVar106);
    in_XMM2.m128i_u32[0] =
         -(uint)(VVMConstVec4_Epsilon4[0] < (float)(uVar88 & auVar106._0_4_)) & in_ZMM0._0_4_;
    in_XMM2.m128i_u32[1] =
         -(uint)(VVMConstVec4_Epsilon4[1] < (float)(uVar86 & auVar106._4_4_)) & in_ZMM0._4_4_;
    in_XMM2.m128i_u32[2] =
         -(uint)(VVMConstVec4_Epsilon4[2] < (float)(uVar84 & auVar106._8_4_)) & in_ZMM0._8_4_;
    in_XMM2.m128i_u32[3] =
         -(uint)(VVMConstVec4_Epsilon4[3] < (float)(uVar62 & auVar106._12_4_)) & in_ZMM0._12_4_;
    *(__m128i *)ppuVar56[*puVar1] = in_XMM2;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0x9f:
    ppuVar56 = param_2->RegPtrTable;
    piVar6 = (int *)ppuVar56[*puVar58];
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    in_ZMM0._0_16_ = auVar109;
    auVar104._0_4_ = (float)*piVar6 * auVar109._0_4_;
    auVar104._4_4_ = (float)piVar6[1] * auVar109._4_4_;
    auVar104._8_4_ = (float)piVar6[2] * auVar109._8_4_;
    auVar104._12_4_ = (float)piVar6[3] * auVar109._12_4_;
    goto LAB_148dc22c5;
  case 0xa0:
    ppuVar56 = param_2->RegPtrTable;
    uVar5 = puVar58[1];
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    fVar91 = (float)auVar109._0_4_;
    fVar112 = (float)auVar109._4_4_;
    fVar119 = (float)auVar109._8_4_;
    fVar126 = (float)auVar109._12_4_;
LAB_148dc2368:
    pfVar10 = (float *)ppuVar56[uVar5];
    fVar91 = fVar91 * *pfVar10;
    fVar112 = fVar112 * pfVar10[1];
    fVar119 = fVar119 * pfVar10[2];
    fVar126 = fVar126 * pfVar10[3];
LAB_148dc2372:
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[2]];
    in_ZMM0._0_16_ = auVar109;
    auVar103._0_4_ = fVar91 + auVar109._0_4_;
    auVar103._4_4_ = fVar112 + auVar109._4_4_;
    auVar103._8_4_ = fVar119 + auVar109._8_4_;
    auVar103._12_4_ = fVar126 + auVar109._12_4_;
LAB_148dc2380:
    puVar1 = puVar58 + 3;
    puVar58 = (ushort *)((longlong)puVar58 + 9);
    *(undefined1 (*) [16])ppuVar56[*puVar1] = auVar103;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0xa1:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    pfVar11 = (float *)ppuVar56[*puVar58];
    puVar1 = puVar58 + 2;
    puVar2 = puVar58 + 3;
    puVar58 = (ushort *)((longlong)puVar58 + 9);
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar1];
    in_ZMM0._0_16_ = auVar109;
    in_XMM2.m128i_i32[0] = (int)(*pfVar10 * *pfVar11 + (float)auVar109._0_4_);
    in_XMM2.m128i_i32[1] = (int)(pfVar10[1] * pfVar11[1] + (float)auVar109._4_4_);
    in_XMM2.m128i_i32[2] = (int)(pfVar10[2] * pfVar11[2] + (float)auVar109._8_4_);
    in_XMM2.m128i_i32[3] = (int)(pfVar10[3] * pfVar11[3] + (float)auVar109._12_4_);
    *(__m128i *)ppuVar56[*puVar2] = in_XMM2;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0xa2:
    ppuVar56 = param_2->RegPtrTable;
    puVar13 = (uint *)ppuVar56[*puVar58];
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[2]];
    in_ZMM0._0_16_ = auVar109;
    auVar107._0_4_ = (int)*pfVar10 & *puVar13;
    auVar107._4_4_ = (int)pfVar10[1] & puVar13[1];
    auVar107._8_4_ = (int)pfVar10[2] & puVar13[2];
    auVar107._12_4_ = (int)pfVar10[3] & puVar13[3];
    in_XMM2.m128i_u32[0] = ~*puVar13 & auVar109._0_4_;
    in_XMM2.m128i_u32[1] = ~puVar13[1] & auVar109._4_4_;
    in_XMM2.m128i_u32[2] = ~puVar13[2] & auVar109._8_4_;
    in_XMM2.m128i_u32[3] = ~puVar13[3] & auVar109._12_4_;
    auVar108 = auVar107 | (undefined1  [16])in_XMM2;
    goto LAB_148dc3462;
  case 0xa3:
    ppuVar56 = param_2->RegPtrTable;
                    /* WARNING: Load size is inaccurate */
    in_XMM2 = *(__m128i *)((__m128i *)ppuVar56[puVar58[1]])->m128i_i8;
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    iVar115 = (int)auVar109._0_4_;
    iVar122 = (int)auVar109._4_4_;
    iVar130 = (int)auVar109._8_4_;
    iVar127 = (int)auVar109._12_4_;
    iVar93 = in_XMM2.m128i_i32[0];
    auVar97._0_4_ = (uint)(iVar115 < iVar93) * iVar93 | (uint)(iVar115 >= iVar93) * iVar115;
    iVar93 = in_XMM2.m128i_i32[1];
    auVar97._4_4_ = (uint)(iVar122 < iVar93) * iVar93 | (uint)(iVar122 >= iVar93) * iVar122;
    iVar93 = in_XMM2.m128i_i32[2];
    auVar97._8_4_ = (uint)(iVar130 < iVar93) * iVar93 | (uint)(iVar130 >= iVar93) * iVar130;
    iVar93 = in_XMM2.m128i_i32[3];
    auVar97._12_4_ = (uint)(iVar127 < iVar93) * iVar93 | (uint)(iVar127 >= iVar93) * iVar127;
LAB_148dc2e42:
    puVar1 = puVar58 + 2;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    *(undefined1 (*) [16])ppuVar56[*puVar1] = auVar97;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0xa4:
    ppuVar56 = param_2->RegPtrTable;
    uVar5 = puVar58[1];
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    iVar93 = (int)auVar109._0_4_;
    iVar115 = (int)auVar109._4_4_;
    iVar122 = (int)auVar109._8_4_;
    iVar130 = (int)auVar109._12_4_;
LAB_148dc2a5a:
    auVar109 = *(undefined1 (*) [16])ppuVar56[uVar5];
    in_ZMM0._0_16_ = auVar109;
    iVar93 = iVar93 + auVar109._0_4_;
    iVar115 = iVar115 + auVar109._4_4_;
    iVar122 = iVar122 + auVar109._8_4_;
    iVar130 = iVar130 + auVar109._12_4_;
LAB_148dc2a66:
    puVar1 = puVar58 + 2;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    piVar6 = (int *)ppuVar56[*puVar1];
    *piVar6 = iVar93;
    piVar6[1] = iVar115;
    piVar6[2] = iVar122;
    piVar6[3] = iVar130;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0xa5:
    ppuVar56 = param_2->RegPtrTable;
    puVar13 = (uint *)ppuVar56[puVar58[1]];
    uVar87 = -(uint)((float)(uVar88 & *puVar13) <= GlobalVectorConstants::SmallNumber.m128_f32[0]);
    uVar86 = -(uint)((float)(uVar86 & puVar13[1]) <= GlobalVectorConstants::SmallNumber.m128_f32[1])
    ;
    uVar84 = -(uint)((float)(uVar84 & puVar13[2]) <= GlobalVectorConstants::SmallNumber.m128_f32[2])
    ;
    uVar62 = -(uint)((float)(uVar62 & puVar13[3]) <= GlobalVectorConstants::SmallNumber.m128_f32[3])
    ;
    auVar82._16_48_ = in_ZMM0._16_48_;
    auVar82._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    __vdecl_fmodf4();
    puVar1 = puVar58 + 2;
    uVar61 = GlobalVectorConstants::FloatZero.m128_u32[1];
    uVar83 = GlobalVectorConstants::FloatZero.m128_u32[2];
    uVar85 = GlobalVectorConstants::FloatZero.m128_u32[3];
    puVar2 = puVar58 + 3;
    puVar58 = (ushort *)((longlong)puVar58 + 9);
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar1];
    in_ZMM0._16_48_ = auVar82._16_48_;
    in_ZMM0._0_16_ = auVar109;
    pfVar10 = (float *)ppuVar56[*puVar2];
    *pfVar10 = (float)(~uVar87 & auVar82._0_4_ |
                      uVar87 & GlobalVectorConstants::FloatZero.m128_u32[0]) + auVar109._0_4_;
    pfVar10[1] = (float)(~uVar86 & auVar82._4_4_ | uVar86 & uVar61) + auVar109._4_4_;
    pfVar10[2] = (float)(~uVar84 & auVar82._8_4_ | uVar84 & uVar83) + auVar109._8_4_;
    pfVar10[3] = (float)(~uVar62 & auVar82._12_4_ | uVar62 & uVar85) + auVar109._12_4_;
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    fVar30 = ___xmm_77800000778000007780000077800000;
    fVar29 = _UNK_1506896d4;
    fVar28 = _UNK_1506896d8;
    fVar27 = _UNK_1506896dc;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0xa6:
    ppuVar56 = param_2->RegPtrTable;
    puVar13 = (uint *)ppuVar56[puVar58[1]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    in_ZMM0._0_16_ = auVar109;
    auVar104._0_4_ = (float)(int)(*puVar13 & auVar109._0_4_);
    auVar104._4_4_ = (float)(int)(puVar13[1] & auVar109._4_4_);
    auVar104._8_4_ = (float)(int)(puVar13[2] & auVar109._8_4_);
    auVar104._12_4_ = (float)(int)(puVar13[3] & auVar109._12_4_);
    goto LAB_148dc22c5;
  case 0xa7:
    ppuVar56 = param_2->RegPtrTable;
    pauVar15 = (undefined1 (*) [16])ppuVar56[puVar58[3]];
                    /* WARNING: Load size is inaccurate */
    in_XMM2 = *(__m128i *)((__m128i *)ppuVar56[puVar58[2]])->m128i_i8;
    local_138 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    local_128 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    if (iVar55 < 5) {
      lVar57 = 0;
      do {
        *(uint *)(local_1b8 + lVar57) =
             *(uint *)(local_138 + lVar57) >> ((byte)*(undefined4 *)(local_128 + lVar57) & 0x1f);
        lVar57 = lVar57 + 4;
      } while (lVar57 < 0x10);
      puVar58 = (ushort *)((longlong)puVar58 + 9);
      auVar109._0_4_ = local_1b8._0_4_ & in_XMM2.m128i_u32[0];
      auVar109._4_4_ = local_1b8._4_4_ & in_XMM2.m128i_u32[1];
      auVar109._8_4_ = local_1b8._8_4_ & in_XMM2.m128i_u32[2];
      auVar109._12_4_ = local_1b8._12_4_ & in_XMM2.m128i_u32[3];
      in_ZMM0._0_16_ = auVar109;
      *pauVar15 = auVar109;
      auVar109 = ___xmm_00000001000000010000000100000001;
    }
    else {
      local_1b8 = vpsrlvd_avx2(*(undefined1 (*) [16])ppuVar56[*puVar58],
                               *(undefined1 (*) [16])ppuVar56[puVar58[1]]);
      puVar58 = (ushort *)((longlong)puVar58 + 9);
      auVar78._0_4_ = local_1b8._0_4_ & in_XMM2.m128i_u32[0];
      auVar78._4_4_ = local_1b8._4_4_ & in_XMM2.m128i_u32[1];
      auVar78._8_4_ = local_1b8._8_4_ & in_XMM2.m128i_u32[2];
      auVar78._12_4_ = local_1b8._12_4_ & in_XMM2.m128i_u32[3];
      in_ZMM0 = ZEXT1664(auVar78);
      *pauVar15 = auVar78;
      auVar109 = ___xmm_00000001000000010000000100000001;
    }
    goto LAB_148dc2289;
  case 0xa8:
    ppuVar56 = param_2->RegPtrTable;
    pfVar10 = (float *)ppuVar56[*puVar58];
    auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    in_ZMM0._0_16_ = auVar109;
    auVar104._4_4_ = (float)-(uint)(0.0 - pfVar10[1] < auVar109._4_4_);
    auVar104._0_4_ = (float)-(uint)(0.0 - *pfVar10 < auVar109._0_4_);
    auVar104._8_4_ = (float)-(uint)(0.0 - pfVar10[2] < auVar109._8_4_);
    auVar104._12_4_ = (float)-(uint)(0.0 - pfVar10[3] < auVar109._12_4_);
    goto LAB_148dc22c5;
  case 0xa9:
    ppuVar56 = param_2->RegPtrTable;
    auVar104 = *(undefined1 (*) [16])ppuVar56[puVar58[2]];
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
    auVar133 = *(undefined1 (*) [16])ppuVar56[puVar58[1]] | auVar109;
LAB_148dc3e37:
    in_ZMM0._0_16_ = auVar109;
    puVar1 = puVar58 + 3;
    puVar58 = (ushort *)((longlong)puVar58 + 9);
    in_XMM2 = (__m128i)pmulld(auVar133,auVar104);
    *(__m128i *)ppuVar56[*puVar1] = in_XMM2;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0xaa:
    ppuVar56 = param_2->RegPtrTable;
    pauVar15 = (undefined1 (*) [16])ppuVar56[puVar58[3]];
                    /* WARNING: Load size is inaccurate */
    in_XMM2 = *(__m128i *)((__m128i *)ppuVar56[puVar58[2]])->m128i_i8;
    local_108[0] = *(undefined1 (*) [16])ppuVar56[*puVar58];
    local_118 = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    if (iVar55 < 5) {
      lVar57 = 0;
      do {
        *(int *)(local_1a8 + lVar57) =
             *(int *)(local_108[0] + lVar57) << ((byte)*(undefined4 *)(local_118 + lVar57) & 0x1f);
        lVar57 = lVar57 + 4;
      } while (lVar57 < 0x10);
      puVar58 = (ushort *)((longlong)puVar58 + 9);
      in_ZMM0._0_16_ = local_1a8 | (undefined1  [16])in_XMM2;
      *pauVar15 = in_ZMM0._0_16_;
      auVar109 = ___xmm_00000001000000010000000100000001;
    }
    else {
      local_1a8 = vpsllvd_avx2(*(undefined1 (*) [16])ppuVar56[*puVar58],
                               *(undefined1 (*) [16])ppuVar56[puVar58[1]]);
      puVar58 = (ushort *)((longlong)puVar58 + 9);
      in_ZMM0 = ZEXT1664(local_1a8 | (undefined1  [16])in_XMM2);
      *pauVar15 = local_1a8 | (undefined1  [16])in_XMM2;
      auVar109 = ___xmm_00000001000000010000000100000001;
    }
    goto LAB_148dc2289;
  case 0xab:
    ppuVar56 = param_2->RegPtrTable;
    uVar61 = *(uint *)((longlong)&param_2->RandState + 0x40);
    uVar83 = *(uint *)((longlong)&param_2->RandState + 0x44);
    uVar85 = *(uint *)((longlong)&param_2->RandState + 0x48);
    uVar87 = *(uint *)((longlong)&param_2->RandState + 0x4c);
    pfVar10 = (float *)ppuVar56[puVar58[2]];
    iVar93 = *(int *)&param_2->RandState;
    iVar115 = *(int *)((longlong)&param_2->RandState + 4);
    iVar122 = *(int *)((longlong)&param_2->RandState + 8);
    iVar130 = *(int *)((longlong)&param_2->RandState + 0xc);
    pfVar11 = (float *)ppuVar56[puVar58[1]];
    uVar5 = *puVar58;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    fVar92 = *pfVar11;
    fVar114 = pfVar11[1];
    fVar121 = pfVar11[2];
    fVar129 = pfVar11[3];
    pfVar11 = (float *)ppuVar56[uVar5];
    fVar89 = *pfVar11;
    fVar110 = pfVar11[1];
    fVar117 = pfVar11[2];
    fVar124 = pfVar11[3];
    *(undefined8 *)((longlong)&param_2->RandState + 0x40) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x30);
    *(undefined8 *)((longlong)&param_2->RandState + 0x48) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x38);
    *(undefined8 *)((longlong)&param_2->RandState + 0x30) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x20);
    *(undefined8 *)((longlong)&param_2->RandState + 0x38) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x28);
    *(undefined8 *)((longlong)&param_2->RandState + 0x20) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x10);
    *(undefined8 *)((longlong)&param_2->RandState + 0x28) =
         *(undefined8 *)((longlong)&param_2->RandState + 0x18);
    *(int *)((longlong)&param_2->RandState + 0x10) = iVar93;
    *(int *)((longlong)&param_2->RandState + 0x14) = iVar115;
    *(int *)((longlong)&param_2->RandState + 0x18) = iVar122;
    *(int *)((longlong)&param_2->RandState + 0x1c) = iVar130;
    uVar61 = uVar61 >> 2 ^ uVar61;
    uVar83 = uVar83 >> 2 ^ uVar83;
    uVar85 = uVar85 >> 2 ^ uVar85;
    uVar87 = uVar87 >> 2 ^ uVar87;
    in_XMM2.m128i_u32[0] = iVar93 << 4;
    in_XMM2.m128i_u32[1] = iVar115 << 4;
    in_XMM2.m128i_u32[2] = iVar122 << 4;
    in_XMM2.m128i_u32[3] = iVar130 << 4;
    uVar61 = uVar61 << 1 ^ uVar61 ^ in_XMM2.m128i_u32[0];
    uVar83 = uVar83 << 1 ^ uVar83 ^ in_XMM2.m128i_u32[1];
    uVar85 = uVar85 << 1 ^ uVar85 ^ in_XMM2.m128i_u32[2];
    uVar87 = uVar87 << 1 ^ uVar87 ^ in_XMM2.m128i_u32[3];
    *(uint *)&param_2->RandState = uVar61;
    *(uint *)((longlong)&param_2->RandState + 4) = uVar83;
    *(uint *)((longlong)&param_2->RandState + 8) = uVar85;
    *(uint *)((longlong)&param_2->RandState + 0xc) = uVar87;
    _Var79._0_4_ = iVar136 + *(int *)((longlong)&param_2->RandState + 0x50);
    _Var79._4_4_ = iVar138 + *(int *)((longlong)&param_2->RandState + 0x54);
    _Var79._8_4_ = iVar140 + *(int *)((longlong)&param_2->RandState + 0x58);
    _Var79._12_4_ = iVar142 + *(int *)((longlong)&param_2->RandState + 0x5c);
    in_ZMM0._0_16_ = (undefined1  [16])_Var79;
    (param_2->RandState)._s_0.Counters = _Var79;
    fVar113 = (float)(uVar83 + _Var79._4_4_ >> 9 | _UNK_15076b1f4);
    fVar120 = (float)(uVar85 + _Var79._8_4_ >> 9 | _UNK_15076b1f8);
    fVar128 = (float)(uVar87 + _Var79._12_4_ >> 9 | _UNK_15076b1fc);
    *pfVar10 = ((float)(uVar61 + _Var79._0_4_ >> 9 | ___xmm_3f8000003f8000003f8000003f800000) -
               fVar91) * fVar89 + fVar92;
    pfVar10[1] = (fVar113 - fVar112) * fVar110 + fVar114;
    pfVar10[2] = (fVar120 - fVar119) * fVar117 + fVar121;
    pfVar10[3] = (fVar128 - fVar126) * fVar124 + fVar129;
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0xac:
    ppuVar56 = param_2->RegPtrTable;
    uVar62 = *(uint *)((longlong)&param_2->RandState + 0x40);
    uVar84 = *(uint *)((longlong)&param_2->RandState + 0x44);
    uVar86 = *(uint *)((longlong)&param_2->RandState + 0x48);
    uVar88 = *(uint *)((longlong)&param_2->RandState + 0x4c);
    uVar90 = *(uint *)((longlong)&param_2->RandState + 0x30);
    uVar111 = *(uint *)((longlong)&param_2->RandState + 0x34);
    uVar118 = *(uint *)((longlong)&param_2->RandState + 0x38);
    uVar125 = *(uint *)((longlong)&param_2->RandState + 0x3c);
    pfVar10 = (float *)ppuVar56[puVar58[1]];
    iVar136 = *(int *)&param_2->RandState;
    iVar138 = *(int *)((longlong)&param_2->RandState + 4);
    iVar140 = *(int *)((longlong)&param_2->RandState + 8);
    iVar142 = *(int *)((longlong)&param_2->RandState + 0xc);
    pfVar11 = (float *)ppuVar56[puVar58[2]];
    uVar62 = uVar62 >> 2 ^ uVar62;
    uVar84 = uVar84 >> 2 ^ uVar84;
    uVar86 = uVar86 >> 2 ^ uVar86;
    uVar88 = uVar88 >> 2 ^ uVar88;
    uVar5 = *puVar58;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    pfVar12 = (float *)ppuVar56[uVar5];
    uVar137 = uVar62 << 1 ^ uVar62 ^ iVar136 << 4;
    uVar139 = uVar84 << 1 ^ uVar84 ^ iVar138 << 4;
    uVar141 = uVar86 << 1 ^ uVar86 ^ iVar140 << 4;
    uVar143 = uVar88 << 1 ^ uVar88 ^ iVar142 << 4;
    uVar62 = uVar90 >> 2 ^ uVar90;
    uVar84 = uVar111 >> 2 ^ uVar111;
    uVar86 = uVar118 >> 2 ^ uVar118;
    uVar88 = uVar125 >> 2 ^ uVar125;
    fVar27 = *pfVar12;
    fVar28 = pfVar12[1];
    fVar29 = pfVar12[2];
    fVar30 = pfVar12[3];
    *(uint *)((longlong)&param_2->RandState + 0x40) = uVar90;
    *(uint *)((longlong)&param_2->RandState + 0x44) = uVar111;
    *(uint *)((longlong)&param_2->RandState + 0x48) = uVar118;
    *(uint *)((longlong)&param_2->RandState + 0x4c) = uVar125;
    uVar31 = *(undefined8 *)((longlong)&param_2->RandState + 0x20);
    uVar32 = *(undefined8 *)((longlong)&param_2->RandState + 0x28);
    *(undefined8 *)((longlong)&param_2->RandState + 0x30) = uVar31;
    *(undefined8 *)((longlong)&param_2->RandState + 0x38) = uVar32;
    uVar22 = *(undefined4 *)((longlong)&param_2->RandState + 0x10);
    uVar23 = *(undefined4 *)((longlong)&param_2->RandState + 0x14);
    uVar24 = *(undefined4 *)((longlong)&param_2->RandState + 0x18);
    uVar25 = *(undefined4 *)((longlong)&param_2->RandState + 0x1c);
    *(undefined4 *)((longlong)&param_2->RandState + 0x20) = uVar22;
    *(undefined4 *)((longlong)&param_2->RandState + 0x24) = uVar23;
    *(undefined4 *)((longlong)&param_2->RandState + 0x28) = uVar24;
    *(undefined4 *)((longlong)&param_2->RandState + 0x2c) = uVar25;
    *(int *)((longlong)&param_2->RandState + 0x10) = iVar136;
    *(int *)((longlong)&param_2->RandState + 0x14) = iVar138;
    *(int *)((longlong)&param_2->RandState + 0x18) = iVar140;
    *(int *)((longlong)&param_2->RandState + 0x1c) = iVar142;
    *(uint *)&param_2->RandState = uVar137;
    *(uint *)((longlong)&param_2->RandState + 4) = uVar139;
    *(uint *)((longlong)&param_2->RandState + 8) = uVar141;
    *(uint *)((longlong)&param_2->RandState + 0xc) = uVar143;
    in_XMM2.m128i_i32[0] = iVar93 + *(int *)((longlong)&param_2->RandState + 0x50);
    in_XMM2.m128i_i32[1] = iVar115 + *(int *)((longlong)&param_2->RandState + 0x54);
    in_XMM2.m128i_i32[2] = iVar122 + *(int *)((longlong)&param_2->RandState + 0x58);
    in_XMM2.m128i_i32[3] = iVar130 + *(int *)((longlong)&param_2->RandState + 0x5c);
    (param_2->RandState)._s_0.Counters = in_XMM2;
    fVar124 = VVMConstVec4_One4[3];
    fVar117 = VVMConstVec4_One4[2];
    fVar110 = VVMConstVec4_One4[1];
    fVar89 = VVMConstVec4_One4[0];
    *(undefined8 *)((longlong)&param_2->RandState + 0x40) = uVar31;
    *(undefined8 *)((longlong)&param_2->RandState + 0x48) = uVar32;
    *(undefined4 *)((longlong)&param_2->RandState + 0x30) = uVar22;
    *(undefined4 *)((longlong)&param_2->RandState + 0x34) = uVar23;
    *(undefined4 *)((longlong)&param_2->RandState + 0x38) = uVar24;
    *(undefined4 *)((longlong)&param_2->RandState + 0x3c) = uVar25;
    *(int *)((longlong)&param_2->RandState + 0x20) = iVar136;
    *(int *)((longlong)&param_2->RandState + 0x24) = iVar138;
    *(int *)((longlong)&param_2->RandState + 0x28) = iVar140;
    *(int *)((longlong)&param_2->RandState + 0x2c) = iVar142;
    *(uint *)((longlong)&param_2->RandState + 0x10) = uVar137;
    *(uint *)((longlong)&param_2->RandState + 0x14) = uVar139;
    *(uint *)((longlong)&param_2->RandState + 0x18) = uVar141;
    *(uint *)((longlong)&param_2->RandState + 0x1c) = uVar143;
    iVar142 = _UNK_151cf02dc;
    iVar140 = _UNK_151cf02d8;
    iVar138 = _UNK_151cf02d4;
    iVar136 = ___xmm_000587c5000587c5000587c5000587c5;
    uVar62 = uVar62 << 1 ^ uVar62 ^ uVar137 << 4;
    uVar84 = uVar84 << 1 ^ uVar84 ^ uVar139 << 4;
    uVar86 = uVar86 << 1 ^ uVar86 ^ uVar141 << 4;
    uVar88 = uVar88 << 1 ^ uVar88 ^ uVar143 << 4;
    *(uint *)&param_2->RandState = uVar62;
    *(uint *)((longlong)&param_2->RandState + 4) = uVar84;
    *(uint *)((longlong)&param_2->RandState + 8) = uVar86;
    *(uint *)((longlong)&param_2->RandState + 0xc) = uVar88;
    _Var80._0_4_ = iVar136 + in_XMM2.m128i_i32[0];
    _Var80._4_4_ = iVar138 + in_XMM2.m128i_i32[1];
    _Var80._8_4_ = iVar140 + in_XMM2.m128i_i32[2];
    _Var80._12_4_ = iVar142 + in_XMM2.m128i_i32[3];
    in_ZMM0._0_16_ = (undefined1  [16])_Var80;
    (param_2->RandState)._s_0.Counters = _Var80;
    fVar92 = (float)(uVar62 + _Var80._0_4_ >> 9 | ___xmm_3f8000003f8000003f8000003f800000);
    fVar114 = (float)(uVar84 + _Var80._4_4_ >> 9 | _UNK_15076b1f4);
    fVar121 = (float)(uVar86 + _Var80._8_4_ >> 9 | _UNK_15076b1f8);
    fVar129 = (float)(uVar88 + _Var80._12_4_ >> 9 | _UNK_15076b1fc);
    *pfVar10 = ((float)(uVar137 + in_XMM2.m128i_i32[0] >> 9 | uVar87) - fVar91) * fVar27;
    pfVar10[1] = ((float)(uVar139 + in_XMM2.m128i_i32[1] >> 9 | uVar85) - fVar112) * fVar28;
    pfVar10[2] = ((float)(uVar141 + in_XMM2.m128i_i32[2] >> 9 | uVar83) - fVar119) * fVar29;
    pfVar10[3] = ((float)(uVar143 + in_XMM2.m128i_i32[3] >> 9 | uVar61) - fVar126) * fVar30;
    *pfVar11 = (fVar92 - fVar89) * fVar27;
    pfVar11[1] = (fVar114 - fVar110) * fVar28;
    pfVar11[2] = (fVar121 - fVar117) * fVar29;
    pfVar11[3] = (fVar129 - fVar124) * fVar30;
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    fVar30 = ___xmm_77800000778000007780000077800000;
    fVar29 = _UNK_1506896d4;
    fVar28 = _UNK_1506896d8;
    fVar27 = _UNK_1506896dc;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0xad:
    ppuVar56 = param_2->RegPtrTable;
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[puVar58[1]];
    auVar109 = maxps(*(undefined1 (*) [16])ppuVar56[*puVar58],
                     *(undefined1 (*) [16])ppuVar56[puVar58[1]]);
    iVar93 = (int)auVar109._0_4_;
    iVar115 = (int)auVar109._4_4_;
    iVar122 = (int)auVar109._8_4_;
    iVar130 = (int)auVar109._12_4_;
    goto LAB_148dc2a66;
  case 0xae:
    ppuVar56 = param_2->RegPtrTable;
    puVar13 = (uint *)ppuVar56[*puVar58];
    puVar59 = (uint *)ppuVar56[puVar58[2]];
    puVar14 = (uint *)ppuVar56[puVar58[1]];
    puVar1 = puVar58 + 3;
    puVar2 = puVar58 + 4;
    puVar58 = (ushort *)((longlong)puVar58 + 0xb);
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar1];
    in_ZMM0._0_16_ = auVar109;
    in_XMM2.m128i_i32[0] =
         (int)((float)(~*puVar13 & *puVar59 | *puVar14 & *puVar13) * auVar109._0_4_);
    in_XMM2.m128i_i32[1] =
         (int)((float)(~puVar13[1] & puVar59[1] | puVar14[1] & puVar13[1]) * auVar109._4_4_);
    in_XMM2.m128i_i32[2] =
         (int)((float)(~puVar13[2] & puVar59[2] | puVar14[2] & puVar13[2]) * auVar109._8_4_);
    in_XMM2.m128i_i32[3] =
         (int)((float)(~puVar13[3] & puVar59[3] | puVar14[3] & puVar13[3]) * auVar109._12_4_);
    *(__m128i *)ppuVar56[*puVar2] = in_XMM2;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0xaf:
    ppuVar56 = param_2->RegPtrTable;
    puVar13 = (uint *)ppuVar56[*puVar58];
    puVar59 = (uint *)ppuVar56[puVar58[2]];
    puVar14 = (uint *)ppuVar56[puVar58[1]];
    puVar1 = puVar58 + 3;
    puVar2 = puVar58 + 4;
    puVar58 = (ushort *)((longlong)puVar58 + 0xb);
    auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar1];
    in_ZMM0._0_16_ = auVar109;
    in_XMM2.m128i_i32[0] =
         (int)((float)(~*puVar13 & *puVar59 | *puVar14 & *puVar13) + auVar109._0_4_);
    in_XMM2.m128i_i32[1] =
         (int)((float)(~puVar13[1] & puVar59[1] | puVar14[1] & puVar13[1]) + auVar109._4_4_);
    in_XMM2.m128i_i32[2] =
         (int)((float)(~puVar13[2] & puVar59[2] | puVar14[2] & puVar13[2]) + auVar109._8_4_);
    in_XMM2.m128i_i32[3] =
         (int)((float)(~puVar13[3] & puVar59[3] | puVar14[3] & puVar13[3]) + auVar109._12_4_);
    *(__m128i *)ppuVar56[*puVar2] = in_XMM2;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0xb0:
    ppuVar56 = param_2->RegPtrTable;
    pauVar15 = (undefined1 (*) [16])ppuVar56[puVar58[1]];
    in_ZMM0._0_16_ = *(undefined1 (*) [16])ppuVar56[*puVar58];
    pauVar16 = (undefined1 (*) [16])ppuVar56[puVar58[2]];
    __vdecl_sincosf4();
    *pauVar16 = auVar109;
    puVar58 = (ushort *)((longlong)puVar58 + 7);
    *pauVar15 = in_ZMM0._0_16_;
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0xb1:
    puVar58 = (ushort *)VVM_Output32_from_16(false,(uchar *)puVar58,param_2,param_1);
    uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar86 = _UNK_15061cc74;
    uVar84 = _UNK_15061cc78;
    uVar62 = _UNK_15061cc7c;
    uVar61 = _UNK_15076b1fc;
    uVar83 = _UNK_15076b1f8;
    uVar85 = _UNK_15076b1f4;
    uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
    auVar109 = ___xmm_00000001000000010000000100000001;
    goto LAB_148dc2289;
  case 0xb2:
    goto switchD_148dc22a7_caseD_b2;
  }
  auVar109 = *(undefined1 (*) [16])ppuVar56[puVar58[2]];
  in_ZMM0._0_16_ = auVar109;
  auVar108._0_4_ = uVar90 & auVar109._0_4_;
  auVar108._4_4_ = uVar111 & auVar109._4_4_;
  auVar108._8_4_ = uVar118 & auVar109._8_4_;
  auVar108._12_4_ = uVar125 & auVar109._12_4_;
LAB_148dc3462:
  puVar1 = puVar58 + 3;
  puVar58 = (ushort *)((longlong)puVar58 + 9);
  *(undefined1 (*) [16])ppuVar56[*puVar1] = auVar108;
  auVar109 = ___xmm_00000001000000010000000100000001;
  goto LAB_148dc2289;
switchD_148dc22a7_caseD_b2:
  puVar58 = (ushort *)VVM_Output16_from_16(false,(uchar *)puVar58,param_2,param_1);
  uVar88 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar86 = _UNK_15061cc74;
  uVar84 = _UNK_15061cc78;
  uVar62 = _UNK_15061cc7c;
  uVar61 = _UNK_15076b1fc;
  uVar83 = _UNK_15076b1f8;
  uVar85 = _UNK_15076b1f4;
  uVar87 = ___xmm_3f8000003f8000003f8000003f800000;
  auVar109 = ___xmm_00000001000000010000000100000001;
  goto LAB_148dc2289;
switchD_148dc22a7_caseD_5b:
  puVar58 = puVar58 + 1;
  goto switchD_148dc22a7_caseD_24;
switchD_148dc22a7_caseD_1:
  ppuVar56 = param_2->RegPtrTable;
  pfVar10 = (float *)ppuVar56[puVar58[1]];
  auVar109 = *(undefined1 (*) [16])ppuVar56[*puVar58];
  in_ZMM0._0_16_ = auVar109;
  auVar104._0_4_ = *pfVar10 + auVar109._0_4_;
  auVar104._4_4_ = pfVar10[1] + auVar109._4_4_;
  auVar104._8_4_ = pfVar10[2] + auVar109._8_4_;
  auVar104._12_4_ = pfVar10[3] + auVar109._12_4_;
LAB_148dc22c5:
  puVar1 = puVar58 + 2;
  puVar58 = (ushort *)((longlong)puVar58 + 7);
  *(undefined1 (*) [16])ppuVar56[*puVar1] = auVar104;
  auVar109 = ___xmm_00000001000000010000000100000001;
  goto LAB_148dc2289;
}

// ExecVectorVMState @ 148dc4890

void __cdecl VectorVM::Runtime::ExecVectorVMState(FVectorVMExecContext *param_1)

{
  uint *puVar1;
  FVecReg *pFVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FVectorVMBatchState *pFVar11;
  FVectorVMState *pFVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  <unnamed_type_RandState> *p<Var23;
  longlong lVar24;
  LARGE_INTEGER local_28;
  LARGE_INTEGER local_20;
  
  pFVar12 = param_1->VVMState;
  if ((param_1->ExtFunctionTable).ArrayNum == pFVar12->NumExtFunctions) {
    uVar20 = 0;
    uVar19 = uVar20;
    if (pFVar12->NumExtFunctions != 0) {
      do {
        uVar7 = (uint)uVar19;
        uVar17 = 0;
        if ((int)uVar7 < (param_1->ExtFunctionTable).ArrayNum) {
          uVar17 = ~uVar7 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        param_1->VVMState->ExtFunctionTable[uVar19].Function =
             (param_1->ExtFunctionTable).DataPtr[(int)uVar7];
        pFVar12 = param_1->VVMState;
        uVar19 = (ulonglong)(uVar7 + 1);
      } while (uVar7 + 1 < pFVar12->NumExtFunctions);
    }
    uVar19 = uVar20;
    if (pFVar12->MaxOutputDataSet != 0) {
      do {
        uVar17 = (int)uVar19 + 1;
        pFVar12->NumOutputPerDataSet[uVar19] = 0;
        pFVar12 = param_1->VVMState;
        uVar19 = (ulonglong)uVar17;
      } while (uVar17 < pFVar12->MaxOutputDataSet);
    }
    if ((pFVar12->Flags & 0x10) == 0) {
      VVMBuildMapTableCaches(param_1);
      puVar1 = &param_1->VVMState->Flags;
      *puVar1 = *puVar1 | 0x10;
    }
    pFVar12 = param_1->VVMState;
    uVar19 = uVar20;
    if (pFVar12->NumConstBuffers != 0) {
      do {
        uVar17 = (int)uVar19 + 1;
        uVar3 = *(undefined4 *)
                 (param_1->ConstantTableData[pFVar12->ConstMapCacheIdx[uVar19]] +
                 (ulonglong)pFVar12->ConstMapCacheSrc[uVar19] * 4);
        pFVar2 = pFVar12->ConstantBuffers + uVar19;
        *(undefined4 *)pFVar2 = uVar3;
        *(undefined4 *)((longlong)pFVar2 + 4) = uVar3;
        *(undefined4 *)((longlong)pFVar2 + 8) = uVar3;
        *(undefined4 *)((longlong)pFVar2 + 0xc) = uVar3;
        pFVar12 = param_1->VVMState;
        uVar19 = (ulonglong)uVar17;
      } while (uVar17 < pFVar12->NumConstBuffers);
    }
    if (param_1->NumInstances == pFVar12->NumInstancesExecCached) {
      (param_1->Internal).NumBytesRequiredPerBatch =
           (pFVar12->ExecCtxCache).NumBytesRequiredPerBatch;
      (param_1->Internal).PerBatchRegisterDataBytesRequired =
           (pFVar12->ExecCtxCache).PerBatchRegisterDataBytesRequired;
      (param_1->Internal).MaxChunksPerBatch = (pFVar12->ExecCtxCache).MaxChunksPerBatch;
      (param_1->Internal).MaxInstancesPerChunk = (pFVar12->ExecCtxCache).MaxInstancesPerChunk;
    }
    else {
      uVar8 = 1;
      uVar17 = pFVar12->BatchOverheadSize;
      uVar19 = 1;
      uVar7 = param_1->NumInstances + 3U >> 2;
      if (1 < uVar7) {
        uVar19 = (ulonglong)uVar7;
      }
      iVar18 = (int)uVar19;
      uVar21 = (longlong)GVVMPageSizeInKB * 0x400 - (ulonglong)uVar17;
      lVar24 = (ulonglong)pFVar12->NumTempRegisters * 0x10 + (ulonglong)pFVar12->MaxOutputDataSet;
      uVar19 = (uVar19 + 3 & 0xfffffffc) * lVar24;
      if (uVar21 < uVar19) {
        iVar10 = (int)uVar21;
        uVar19 = (longlong)((int)uVar19 + -1 + iVar10) / (longlong)iVar10;
        uVar8 = (uint)uVar19;
        iVar18 = (int)((ulonglong)(iVar18 + -1 + uVar8) / (uVar19 & 0xffffffff));
      }
      (param_1->Internal).MaxChunksPerBatch = uVar8;
      (param_1->Internal).MaxInstancesPerChunk = iVar18 * 4;
      uVar7 = (int)lVar24 * iVar18;
      uVar17 = uVar17 + uVar7;
      (param_1->Internal).PerBatchRegisterDataBytesRequired = uVar7;
      (param_1->Internal).NumBytesRequiredPerBatch = uVar17;
      (pFVar12->ExecCtxCache).NumBytesRequiredPerBatch = uVar17;
      (param_1->VVMState->ExecCtxCache).PerBatchRegisterDataBytesRequired =
           (param_1->Internal).PerBatchRegisterDataBytesRequired;
      (param_1->VVMState->ExecCtxCache).MaxChunksPerBatch = (param_1->Internal).MaxChunksPerBatch;
      (param_1->VVMState->ExecCtxCache).MaxInstancesPerChunk =
           (param_1->Internal).MaxInstancesPerChunk;
      param_1->VVMState->NumInstancesExecCached = param_1->NumInstances;
    }
    if (param_1->VVMState->Bytecode != (uchar *)0x0) {
      pFVar11 = FMemory::Malloc((ulonglong)
                                (param_1->VVMState->BatchOverheadSize +
                                (param_1->Internal).PerBatchRegisterDataBytesRequired),0);
      SetupBatchStatePtrs(param_1,pFVar11);
      if ((param_1->VVMState->Flags & 8) != 0) {
        QueryPerformanceCounter(&local_20);
        uVar19 = (longlong)pFVar11 << 0x20 ^ 0xcafef00dd15ea5e5U | 1;
        QueryPerformanceCounter(&local_28);
        uVar21 = local_28.QuadPart << 0x20 ^ local_20.QuadPart;
        lVar24 = 5;
        p<Var23 = &pFVar11->RandState;
        do {
          uVar17 = (uint)(uVar21 >> 0x2d) ^ (uint)(uVar21 >> 0x1b);
          bVar13 = (byte)(uVar21 >> 0x3b);
          uVar21 = uVar21 * 0x5851f42d4c957f2d + uVar19;
          uVar7 = (uint)(uVar21 >> 0x2d) ^ (uint)(uVar21 >> 0x1b);
          bVar14 = (byte)(uVar21 >> 0x3b);
          uVar21 = uVar21 * 0x5851f42d4c957f2d + uVar19;
          uVar22 = uVar21 * 0x5851f42d4c957f2d + uVar19;
          uVar8 = (uint)(uVar21 >> 0x2d) ^ (uint)(uVar21 >> 0x1b);
          bVar15 = (byte)(uVar21 >> 0x3b);
          uVar9 = (uint)(uVar22 >> 0x2d) ^ (uint)(uVar22 >> 0x1b);
          bVar16 = (byte)(uVar22 >> 0x3b);
          uVar21 = uVar22 * 0x5851f42d4c957f2d + uVar19;
          *(ulonglong *)p<Var23 =
               CONCAT44(uVar7 >> bVar14 | uVar7 << 0x20 - bVar14,
                        uVar17 >> bVar13 | uVar17 << 0x20 - bVar13);
          *(ulonglong *)((longlong)p<Var23 + 8) =
               CONCAT44(uVar9 >> bVar16 | uVar9 << 0x20 - bVar16,
                        uVar8 >> bVar15 | uVar8 << 0x20 - bVar15);
          lVar24 = lVar24 + -1;
          p<Var23 = (<unnamed_type_RandState> *)((longlong)p<Var23 + 0x10);
        } while (lVar24 != 0);
        *(ulonglong *)((longlong)&pFVar11->RandState + 0x50) = uVar19;
        *(ulonglong *)((longlong)&pFVar11->RandState + 0x58) = uVar21;
        uVar17 = rand();
        (pFVar11->RandStream).InitialSeed = uVar17;
        (pFVar11->RandStream).Seed = uVar17;
      }
      uVar17 = (param_1->Internal).MaxInstancesPerChunk;
      uVar7 = (param_1->NumInstances + -1 + uVar17) / uVar17;
      uVar19 = uVar20;
      uVar21 = uVar20;
      if (0 < (int)uVar7) {
        do {
          iVar18 = (int)uVar19;
          uVar8 = param_1->NumInstances - iVar18;
          (pFVar11->ChunkLocalData).ChunkIdx = (int)uVar21;
          (pFVar11->ChunkLocalData).StartInstanceThisChunk = iVar18;
          if ((int)uVar8 <= (int)uVar17) {
            uVar17 = uVar8;
          }
          (pFVar11->ChunkLocalData).NumInstancesThisChunk = uVar17;
          iVar10 = (int)(uVar17 + 3) >> 2;
          if (iVar10 == 1) {
            ExecChunkSingleLoop(param_1,pFVar11);
          }
          else if (0 < iVar10) {
            ExecChunkMultipleLoops(param_1,pFVar11,iVar10);
          }
          uVar17 = (param_1->Internal).MaxInstancesPerChunk;
          uVar8 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar8;
          uVar19 = (ulonglong)(iVar18 + uVar17);
        } while ((int)uVar8 < (int)uVar7);
      }
      piVar4 = (pFVar11->ChunkLocalData).RandCounters;
      if (piVar4 != (int *)0x0) {
        FMemory::Free(piVar4);
        (pFVar11->ChunkLocalData).RandCounters = (int *)0x0;
      }
      FMemory::Free(pFVar11);
      pFVar12 = param_1->VVMState;
      if (pFVar12->MaxOutputDataSet != 0) {
        do {
          uVar7 = (uint)uVar20;
          iVar18 = pFVar12->NumOutputPerDataSet[uVar20];
          uVar17 = 0;
          if ((int)uVar7 < (param_1->DataSets).ArrayNum) {
            uVar17 = ~uVar7 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar20 = (ulonglong)(uVar7 + 1);
          (param_1->DataSets).DataPtr[(int)uVar7].DataSetAccessIndex = iVar18 + -1;
          pFVar12 = param_1->VVMState;
        } while (uVar7 + 1 < pFVar12->MaxOutputDataSet);
      }
    }
  }
  return;
}

// FreeVectorVMState @ 148dc4d90

void __cdecl VectorVM::Runtime::FreeVectorVMState(FVectorVMState *param_1)

{
  FLowLevelMemTracker *this;
  
  if (param_1 == (FVectorVMState *)0x0) {
    return;
  }
  if (param_1 != (FVectorVMState *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  }
  return;
}

// GetNumOpCodes @ 148dc4da0

uchar __cdecl VectorVM::GetNumOpCodes(void)

{
  return 0xb3;
}

// Init @ 148dc4db0

void __cdecl VectorVM::Init(void)

{
  if (!Inited) {
    Inited = true;
  }
  return;
}

// SetBatchPointersForCorrectChunkOffsets @ 148dc4dd0

void __cdecl
VectorVM::Runtime::SetBatchPointersForCorrectChunkOffsets
          (FVectorVMExecContext *param_1,FVectorVMBatchState *param_2)

{
  longlong *plVar1;
  int iVar2;
  FVectorVMState *pFVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar7;
  
  pFVar3 = param_1->VVMState;
  uVar7 = 0;
  iVar2 = pFVar3->NumConstBuffers + pFVar3->NumTempRegisters;
  uVar6 = pFVar3->NumInputBuffers;
  if (0 < (int)uVar6) {
    lVar11 = (longlong)iVar2;
    lVar8 = lVar11 * 8;
    uVar10 = uVar7;
    do {
      if (param_2->RegIncTable[uVar10 + lVar11] != '\0') {
        iVar4 = 4;
        if ((pFVar3->InputMapCacheSrc[uVar10] & 0x4000) != 0) {
          iVar4 = 2;
        }
        *(ulonglong *)(lVar8 + (longlong)param_2->RegPtrTable) =
             (ulonglong)(uint)(iVar4 * (param_2->ChunkLocalData).StartInstanceThisChunk) +
             *(longlong *)
              (((int)(iVar2 + uVar6) - lVar11) * 8 + lVar8 + (longlong)param_2->RegPtrTable);
      }
      pFVar3 = param_1->VVMState;
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar5 < (int)pFVar3->NumInputBuffers);
  }
  uVar7 = 0;
  if (((param_2->ChunkLocalData).StartInstanceThisChunk != 0) && (0 < (int)pFVar3->NumOutputBuffers)
     ) {
    uVar10 = uVar7;
    uVar9 = uVar7;
    lVar8 = (longlong)
            (int)(pFVar3->NumConstBuffers + pFVar3->NumInputBuffers * 2 + pFVar3->NumTempRegisters)
            << 3;
    do {
      iVar2 = 4;
      if (*(short *)(uVar9 + (longlong)pFVar3->OutputRemapDataType) == 2) {
        iVar2 = 2;
      }
      uVar6 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar6;
      plVar1 = (longlong *)((longlong)param_2->RegPtrTable + lVar8);
      *plVar1 = *plVar1 + (ulonglong)(iVar2 * *(param_2->ChunkLocalData).NumOutputPerDataSet);
      pFVar3 = param_1->VVMState;
      uVar9 = uVar9 + 2;
      lVar8 = lVar8 + 8;
    } while ((int)uVar6 < (int)pFVar3->NumOutputBuffers);
  }
  if (pFVar3->MaxOutputDataSet != 0) {
    do {
      uVar6 = (int)uVar7 + 1;
      (param_2->ChunkLocalData).StartingOutputIdxPerDataSet[uVar7] = 0;
      (param_2->ChunkLocalData).NumOutputPerDataSet[uVar7] = 0;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < param_1->VVMState->MaxOutputDataSet);
  }
  return;
}

// SetupBatchStatePtrs @ 148dc4fb0

void __cdecl
VectorVM::Runtime::SetupBatchStatePtrs(FVectorVMExecContext *param_1,FVectorVMBatchState *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  uchar **ppuVar6;
  FDataSetMeta *pFVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  ulonglong uVar11;
  byte bVar12;
  uchar **ppuVar13;
  FVectorVMState *pFVar14;
  uchar *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint **ppuVar22;
  FVecReg *pFVar23;
  longlong lVar24;
  int iVar25;
  float fVar26;
  int local_res10;
  
  pFVar14 = param_1->VVMState;
  uVar16 = (param_1->Internal).MaxInstancesPerChunk >> 2;
  pFVar23 = (FVecReg *)
            ((ulonglong)((longlong)&param_2[1].ChunkLocalData.RandCounters + 7U) &
            0xffffffffffffffc0);
  uVar21 = (ulonglong)
           (pFVar14->NumOutputBuffers + pFVar14->NumInputBuffers * 2 + pFVar14->NumConstBuffers +
           pFVar14->NumTempRegisters);
  param_2->RegisterData = pFVar23;
  pFVar23 = pFVar23 + (ulonglong)uVar16 * (ulonglong)param_1->VVMState->NumTempRegisters;
  param_2->RegPtrTable = (uchar **)pFVar23;
  puVar15 = (uchar *)((longlong)pFVar23 + uVar21 * 8);
  param_2->RegIncTable = puVar15;
  puVar15 = puVar15 + uVar21;
  param_2->OutputMaskIdx = puVar15;
  uVar17 = param_1->VVMState->MaxOutputDataSet;
  (param_2->ChunkLocalData).StartingOutputIdxPerDataSet = (uint *)(puVar15 + uVar16 * uVar17);
  puVar20 = (uint *)((longlong)(puVar15 + uVar16 * uVar17) +
                    (ulonglong)param_1->VVMState->ChunkLocalDataOutputIdxNumBytes);
  (param_2->ChunkLocalData).NumOutputPerDataSet = puVar20;
  ppuVar13 = (uchar **)
             ((ulonglong)param_1->VVMState->ChunkLocalNumOutputNumBytes + (longlong)puVar20);
  uVar11 = 0;
  (param_2->ChunkLocalData).OutputMaskIdx = ppuVar13;
  uVar17 = param_1->VVMState->ChunkLocalOutputMaskIdxNumBytes;
  (param_2->ChunkLocalData).RandCounters = (int *)0x0;
  ppuVar22 = (uint **)((ulonglong)uVar17 + (longlong)ppuVar13);
  if (param_1->VVMState->MaxOutputDataSet != 0) {
    do {
      (param_2->ChunkLocalData).OutputMaskIdx[uVar11] =
           param_2->OutputMaskIdx + (int)uVar11 * uVar16;
      uVar17 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar17;
    } while (uVar17 < param_1->VVMState->MaxOutputDataSet);
  }
  (param_2->ChunkLocalData).ExtFnDecodedReg.RegData = ppuVar22;
  ppuVar22 = ppuVar22 + param_1->VVMState->MaxExtFnRegisters;
  (param_2->ChunkLocalData).ExtFnDecodedReg.RegInc = (uchar *)ppuVar22;
  pFVar23 = (FVecReg *)
            ((ulonglong)((longlong)ppuVar22 + (ulonglong)param_1->VVMState->MaxExtFnRegisters + 0xf)
            & 0xfffffffffffffff0);
  (param_2->ChunkLocalData).ExtFnDecodedReg.DummyRegs = pFVar23;
  if (((ulonglong)
       (param_1->VVMState->BatchOverheadSize + (param_1->Internal).PerBatchRegisterDataBytesRequired
       ) < ((ulonglong)param_1->VVMState->NumDummyRegsRequired * 0x10 - (longlong)param_2) +
           (longlong)pFVar23) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PtrAfterExtFnDecodeReg - PtrStart <= ExecCtx->VVMState->BatchOverheadSize + ExecCtx->Internal.PerBatchRegisterDataBytesRequired"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                          ,0x157,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar14 = param_1->VVMState;
  ppuVar13 = param_2->RegPtrTable;
  uVar17 = pFVar14->NumTempRegisters;
  uVar11 = (ulonglong)pFVar14->NumConstBuffers;
  uVar4 = pFVar14->NumInputBuffers;
  memset(param_2->RegIncTable,0x10,uVar21);
  pFVar14 = param_1->VVMState;
  uVar21 = 0;
  if (pFVar14->NumTempRegisters != 0) {
    do {
      ppuVar13[uVar21] = (uchar *)(param_2->RegisterData + (int)uVar21 * uVar16);
      uVar18 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar18;
      pFVar14 = param_1->VVMState;
    } while (uVar18 < pFVar14->NumTempRegisters);
  }
  uVar21 = 0;
  if (pFVar14->NumConstBuffers != 0) {
    do {
      iVar19 = (int)uVar21;
      ppuVar13[uVar17 + uVar21] = (uchar *)(pFVar14->ConstantBuffers + uVar21);
      uVar16 = iVar19 + 1;
      uVar21 = (ulonglong)uVar16;
      param_2->RegIncTable[param_1->VVMState->NumTempRegisters + iVar19] = '\0';
      pFVar14 = param_1->VVMState;
    } while (uVar16 < pFVar14->NumConstBuffers);
  }
  fVar9 = __real_b8800000;
  uVar21 = 0;
  local_res10 = 0;
  if (pFVar14->NumInputBuffers != 0) {
    do {
      uVar2 = pFVar14->InputMapCacheSrc[uVar21];
      bVar1 = pFVar14->InputMapCacheIdx[uVar21];
      if (((param_1->DataSets).ArrayNum <= (int)(uint)bVar1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      ppuVar6 = (param_1->DataSets).DataPtr[bVar1].InputRegisters.DataPtr;
      if (((param_1->DataSets).ArrayNum <= (int)(uint)bVar1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar14 = param_1->VVMState;
      bVar12 = (byte)(uVar2 >> 0xe) & 1;
      iVar19 = (param_1->DataSets).DataPtr[bVar1].InstanceOffset;
      uVar16 = pFVar14->NumConstBuffers;
      uVar18 = pFVar14->NumTempRegisters;
      iVar25 = (int)uVar21;
      if ((short)uVar2 < 0) {
        lVar24 = (longlong)local_res10;
        local_res10 = local_res10 + 1;
        ppuVar13[(ulonglong)uVar17 + uVar11 + uVar21] =
             (uchar *)(pFVar14->ConstantBuffers + (ulonglong)uVar16 + lVar24);
        param_2->RegIncTable[(int)(uVar18 + uVar16 + iVar25)] = '\0';
        puVar15 = ppuVar6[uVar2 & 0x3fff];
        if (bVar12 == 0) {
          uVar5 = *(undefined4 *)(puVar15 + (longlong)iVar19 * 4);
          puVar15 = ppuVar13[(ulonglong)uVar17 + uVar11 + uVar21];
          *(undefined4 *)puVar15 = uVar5;
          *(undefined4 *)(puVar15 + 4) = uVar5;
          *(undefined4 *)(puVar15 + 8) = uVar5;
          *(undefined4 *)(puVar15 + 0xc) = uVar5;
        }
        else {
          uVar2 = *(ushort *)(puVar15 + (longlong)iVar19 * 2);
          uVar16 = (uVar2 & 0x7fff) * 0x2000;
          fVar26 = (float)(uVar16 + 0x38000000);
          if ((uVar16 & 0xf800000) == 0xf800000) {
            fVar26 = (float)(uVar16 + 0x70000000);
          }
          else if ((uVar16 & 0xf800000) == 0) {
            fVar26 = (float)(uVar16 + 0x38800000) + fVar9;
          }
          uVar16 = (uVar2 & 0x8000) << 0x10 | (uint)fVar26;
          puVar20 = (uint *)ppuVar13[(ulonglong)uVar17 + uVar11 + uVar21];
          *puVar20 = uVar16;
          puVar20[1] = uVar16;
          puVar20[2] = uVar16;
          puVar20[3] = uVar16;
        }
      }
      else {
        ppuVar13[(ulonglong)uVar17 + uVar11 + uVar21] =
             ppuVar6[uVar2 & 0x3fff] + ((bVar12 ^ 1) + 1) * iVar19 * 2;
      }
      lVar24 = uVar11 + uVar21;
      uVar21 = (ulonglong)(iVar25 + 1U);
      ppuVar13[(ulonglong)uVar17 + uVar11 + (param_1->VVMState->NumInputBuffers + iVar25)] =
           ppuVar13[(ulonglong)uVar17 + lVar24];
      pFVar14 = param_1->VVMState;
    } while (iVar25 + 1U < pFVar14->NumInputBuffers);
  }
  uVar21 = 0;
  if (pFVar14->NumOutputBuffers != 0) {
    do {
      bVar1 = pFVar14->OutputRemapDataSetIdx[uVar21];
      if (((param_1->DataSets).ArrayNum <= (int)(uint)bVar1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("DataSetIdx < ExecCtx->DataSets.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                              ,0x1a5,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar2 = param_1->VVMState->OutputRemapDataType[uVar21];
      if ((2 < uVar2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutputDataType < (sizeof(UEArrayCountHelper(FDataSetMeta::OutputRegisterTypeOffsets)) - 1)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                              ,0x1a8,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar3 = param_1->VVMState->OutputRemapDst[uVar21];
      if (uVar3 == 0xffff) {
        puVar15 = (uchar *)0x0;
      }
      else {
        if (((param_1->DataSets).ArrayNum <= (int)(uint)bVar1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar16 = (param_1->DataSets).DataPtr[bVar1].OutputRegisterTypeOffsets[uVar2] + (uint)uVar3;
        iVar19 = 4;
        if (uVar2 == 2) {
          iVar19 = 2;
        }
        if (((param_1->DataSets).ArrayNum <= (int)(uint)bVar1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar25 = (param_1->DataSets).DataPtr[bVar1].InstanceOffset;
        if (((param_1->DataSets).ArrayNum <= (int)(uint)bVar1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (param_1->DataSets).DataPtr;
        uVar18 = 0;
        if ((int)uVar16 < pFVar7[bVar1].OutputRegisters.ArrayNum) {
          uVar18 = ~uVar16 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        puVar15 = pFVar7[bVar1].OutputRegisters.DataPtr[(int)uVar16] + (uint)(iVar19 * iVar25);
      }
      ppuVar13[(ulonglong)uVar17 + uVar11 + uVar4 * 2 + uVar21] = puVar15;
      uVar16 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar16;
      pFVar14 = param_1->VVMState;
    } while (uVar16 < pFVar14->NumOutputBuffers);
  }
  return;
}

// ThawRuntimeContext @ 148dc5640

void __cdecl
VectorVM::Bridge::ThawRuntimeContext
          (TArrayView<unsigned_char_const_,int> *param_1,FVectorVMRuntimeContext *param_2)

{
  uchar *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  FRuntimeContextData local_118;
  FArchiveState local_d8;
  undefined8 local_48;
  uchar *local_40;
  longlong local_38;
  undefined8 local_30;
  
  param_2->OutputBytecode = (uchar *)0x0;
  param_2->ConstRemap[0] = (ushort *)0x0;
  param_2->ConstRemap[1] = (ushort *)0x0;
  param_2->InputRemapTable = (ushort *)0x0;
  param_2->InputDataSetOffsets = (ushort *)0x0;
  param_2->OutputRemapDataSetIdx = (uchar *)0x0;
  param_2->OutputRemapDataType = (ushort *)0x0;
  param_2->OutputRemapDst = (ushort *)0x0;
  param_2->ExtFnTable = (FVectorVMExtFunctionData *)0x0;
  param_2->NumBytecodeBytes = 0;
  param_2->MaxOutputDataSet = 0;
  param_2->NumConstsAlloced = 0;
  *(undefined2 *)&param_2->field_0x52 = 0;
  param_2->NumTempRegisters = 0;
  param_2->NumConstsRemapped = 0;
  param_2->NumInputsRemapped = 0;
  param_2->NumNoAdvanceInputs = 0;
  param_2->NumInputDataSets = 0;
  param_2->NumOutputsRemapped = 0;
  param_2->NumOutputInstructions = 0;
  param_2->NumExtFns = 0;
  param_2->MaxExtFnRegisters = 0;
  param_2->NumDummyRegsReq = 0;
  param_2->MaxExtFnUsed = 0;
  param_2->Flags = 0;
  param_2->HashId = 0;
  local_d8._padding_ = 0;
  local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_d8._40_8_ = 0;
  local_d8.ArSerializingDefaults = 0;
  local_d8.ArPortFlags = 0;
  local_d8.ArMaxSerializeSize = 0;
  local_d8.ArUEVer.FileVersionUE4 = 0;
  local_d8.ArUEVer.FileVersionUE5 = 0;
  local_d8.ArLicenseeUEVer = 0;
  local_d8.ArEngineVer.Major = 0;
  local_d8.ArEngineVer.Minor = 0;
  local_d8.ArEngineVer.Patch = 0;
  local_d8.ArEngineVer._6_2_ = 0;
  local_d8.ArEngineVer.Changelist = 0;
  local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_d8.SerializedProperty = (FProperty *)0x0;
  local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_d8.bCustomVersionsAreReset = false;
  local_d8._129_7_ = 0;
  local_d8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_d8);
  local_40 = param_1->DataPtr;
  local_38 = (longlong)(int)*(undefined8 *)&param_1->ArrayNum;
  local_48 = 0;
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_30 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
  local_d8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  operator<<((FArchive *)&local_d8,&local_118);
  FArchive::~FArchive((FArchive *)&local_d8);
  uVar5 = (ulonglong)local_118.NumBytecodeBytes + 0x4f & 0xfffffffffffffff0;
  uVar7 = (ulonglong)((uint)local_118.NumConstsRemapped + (uint)local_118.NumConstsRemapped) + 0xf +
          uVar5 & 0xfffffffffffffff0;
  uVar6 = (ulonglong)((uint)local_118.NumInputsRemapped + (uint)local_118.NumInputsRemapped) + 0xf +
          uVar7 & 0xfffffffffffffff0;
  lVar4 = (ulonglong)local_118.NumInputDataSets * 0x10 + uVar6;
  param_2->NumBytecodeBytes = local_118.NumBytecodeBytes;
  uVar2 = (ulonglong)local_118.NumOutputsRemapped + 0xf + lVar4 & 0xfffffffffffffff0;
  uVar3 = (ulonglong)((uint)local_118.NumOutputsRemapped + (uint)local_118.NumOutputsRemapped) + 0xf
          + uVar2 & 0xfffffffffffffff0;
  param_2->MaxOutputDataSet = local_118.MaxOutputDataSet;
  param_2->NumConstsAlloced = local_118.NumConstsAlloced;
  param_2->NumTempRegisters = local_118.NumTempRegisters;
  param_2->NumNoAdvanceInputs = local_118.NumNoAdvanceInputs;
  param_2->NumOutputInstructions = local_118.NumOutputInstructions;
  param_2->NumExtFns = local_118.NumExtFns;
  param_2->MaxExtFnRegisters = local_118.MaxExtFnRegisters;
  param_2->NumDummyRegsReq = local_118.NumDummyRegsReq;
  param_2->MaxExtFnUsed = local_118.MaxExtFnUsed;
  param_2->Flags = local_118.Flags;
  param_2->HashId = local_118.HashId;
  param_2->NumInputDataSets = local_118.NumInputDataSets;
  puVar1 = param_1->DataPtr;
  param_2->NumOutputsRemapped = local_118.NumOutputsRemapped;
  param_2->NumConstsRemapped = local_118.NumConstsRemapped;
  param_2->NumInputsRemapped = local_118.NumInputsRemapped;
  param_2->OutputBytecode = puVar1 + 0x40;
  param_2->ConstRemap[1] = (ushort *)(puVar1 + uVar5);
  param_2->InputRemapTable = (ushort *)(puVar1 + uVar7);
  param_2->InputDataSetOffsets = (ushort *)(puVar1 + uVar6);
  param_2->OutputRemapDataSetIdx = puVar1 + lVar4;
  param_2->OutputRemapDataType = (ushort *)(puVar1 + uVar2);
  param_2->OutputRemapDst = (ushort *)(puVar1 + uVar3);
  param_2->ExtFnTable =
       (FVectorVMExtFunctionData *)
       (puVar1 + ((ulonglong)
                  ((uint)local_118.NumOutputsRemapped + (uint)local_118.NumOutputsRemapped) + 0xf +
                  uVar3 & 0xfffffffffffffff0));
  return;
}

// VVMBuildMapTableCaches @ 148dc5890

void __cdecl VectorVM::Runtime::VVMBuildMapTableCaches(FVectorVMExecContext *param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FVectorVMState *pFVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  uint local_res8;
  longlong local_68;
  longlong local_60;
  
  if ((0xff < param_1->ConstantTableCount) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecCtx->ConstantTableCount <= 0xFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x1e8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((0xffff < param_1->VVMState->NumConstBuffers) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecCtx->VVMState->NumConstBuffers <= 0xFFFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x1e9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = param_1->VVMState;
  uVar9 = 0;
  if (pFVar6->NumConstBuffers != 0) {
    do {
      uVar13 = 0;
      if (0 < param_1->ConstantTableCount) {
        uVar8 = 0;
        do {
          uVar5 = ((uint)param_1->ConstantTableNumBytes[uVar13] >> 2) + uVar8;
          if (pFVar6->ConstRemapTable[uVar9] < uVar5) {
            uVar8 = pFVar6->ConstRemapTable[uVar9] - uVar8;
            if ((0xfffe < uVar8) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Idx < 0xFFFF",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                                   ,0x1f5,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            param_1->VVMState->ConstMapCacheIdx[uVar9] = (uchar)uVar13;
            param_1->VVMState->ConstMapCacheSrc[uVar9] = (ushort)uVar8;
            break;
          }
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          uVar8 = uVar5;
        } while ((int)uVar12 < param_1->ConstantTableCount);
      }
      pFVar6 = param_1->VVMState;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < pFVar6->NumConstBuffers);
  }
  uVar8 = pFVar6->NumInputDataSets;
  if (uVar8 != 0) {
    uVar5 = (param_1->DataSets).ArrayNum;
    local_res8 = 0;
    if (uVar8 < uVar5) {
      uVar5 = uVar8;
    }
    uVar12 = 0;
    uVar8 = 0;
    if (0 < (int)uVar5) {
      lVar14 = 0;
      local_68 = 0x20;
      local_60 = 6;
      do {
        uVar7 = ~uVar12 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar12 < (param_1->DataSets).ArrayNum) {
          uVar8 = uVar7;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar18 = 0;
        lVar10 = local_60 + -6;
        lVar17 = local_68;
        do {
          puVar2 = param_1->VVMState->InputDataSetOffsets;
          iVar11 = (uint)*(ushort *)((longlong)puVar2 + lVar10 + 2) -
                   (uint)*(ushort *)((longlong)puVar2 + lVar10);
          uVar8 = 0;
          if ((int)uVar12 < (param_1->DataSets).ArrayNum) {
            uVar8 = uVar7;
          }
          if ((uVar8 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar16 = 0;
          uVar1 = *(undefined4 *)
                   ((longlong)((param_1->DataSets).DataPtr)->InputRegisterTypeOffsets +
                   lVar17 + -0x20);
          if (0 < iVar11) {
            local_res8 = local_res8 + iVar11;
            do {
              iVar15 = (uint)*(ushort *)((longlong)param_1->VVMState->InputDataSetOffsets + lVar10)
                       + iVar16;
              iVar16 = iVar16 + 1;
              param_1->VVMState->InputMapCacheIdx[lVar14] = (uchar)uVar12;
              param_1->VVMState->InputMapCacheSrc[lVar14] =
                   (short)uVar1 + param_1->VVMState->InputRemapTable[iVar15] |
                   ((ushort)iVar18 & 2) << 0xd;
              lVar14 = lVar14 + 1;
            } while (iVar16 < iVar11);
          }
          iVar18 = iVar18 + 1;
          lVar17 = lVar17 + 4;
          lVar10 = lVar10 + 2;
        } while (iVar18 < 3);
        if (*(short *)((longlong)param_1->VVMState->InputDataSetOffsets + local_60 + 8) != 0) {
          iVar18 = 0;
          lVar10 = local_60;
          lVar17 = local_68;
          do {
            puVar2 = param_1->VVMState->InputDataSetOffsets;
            iVar11 = (uint)*(ushort *)((longlong)puVar2 + lVar10 + 2) -
                     (uint)*(ushort *)((longlong)puVar2 + lVar10);
            uVar8 = 0;
            if ((int)uVar12 < (param_1->DataSets).ArrayNum) {
              uVar8 = uVar7;
            }
            if ((uVar8 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar16 = 0;
            uVar1 = *(undefined4 *)
                     ((longlong)((param_1->DataSets).DataPtr)->InputRegisterTypeOffsets +
                     lVar17 + -0x20);
            if (0 < iVar11) {
              local_res8 = local_res8 + iVar11;
              do {
                iVar15 = (uint)*(ushort *)
                                ((longlong)param_1->VVMState->InputDataSetOffsets + lVar10) + iVar16
                ;
                iVar16 = iVar16 + 1;
                param_1->VVMState->InputMapCacheIdx[lVar14] = (uchar)uVar12;
                param_1->VVMState->InputMapCacheSrc[lVar14] =
                     (short)uVar1 + param_1->VVMState->InputRemapTable[iVar15] |
                     ((ushort)iVar18 & 0xfffe | 0xfffc) << 0xd;
                lVar14 = lVar14 + 1;
              } while (iVar16 < iVar11);
            }
            iVar18 = iVar18 + 1;
            lVar17 = lVar17 + 4;
            lVar10 = lVar10 + 2;
          } while (iVar18 < 3);
        }
        local_60 = local_60 + 0x10;
        local_68 = local_68 + 0x78;
        uVar12 = uVar12 + 1;
        uVar8 = local_res8;
      } while ((int)uVar12 < (int)uVar5);
    }
    if ((uVar8 != param_1->VVMState->NumInputBuffers) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InputCounter == ExecCtx->VVMState->NumInputBuffers",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                           ,0x227,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// VVMDefaultFree @ 148dc5d60

void __cdecl VectorVM::Optimizer::VVMDefaultFree(void *param_1,char *param_2,int param_3)

{
  FLowLevelMemTracker *this;
  
  if (param_1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  }
  return;
}

// VVMDefaultFree @ 148dc5d70

void __cdecl VectorVM::Runtime::VVMDefaultFree(void *param_1,char *param_2,int param_3)

{
  FLowLevelMemTracker *this;
  
  if (param_1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  }
  return;
}

// VVMDefaultRealloc @ 148dc5d80

void * __cdecl
VectorVM::Optimizer::VVMDefaultRealloc(void *param_1,ulong64 param_2,char *param_3,int param_4)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Realloc(param_1,param_2,0);
  return pvVar1;
}

// VVMDefaultRealloc @ 148dc5d90

void * __cdecl
VectorVM::Runtime::VVMDefaultRealloc(void *param_1,ulong64 param_2,char *param_3,int param_4)

{
  void *pvVar1;
  
  pvVar1 = FMemory::Realloc(param_1,param_2,0);
  return pvVar1;
}

// VVMMemCpy @ 148dc5da0

void __cdecl VectorVM::Runtime::VVMMemCpy(void *param_1,void *param_2,ulong64 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  puVar1 = (undefined1 *)((longlong)param_2 + param_3);
  lVar4 = (longlong)param_1 - (longlong)param_2;
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      do {
        *(undefined1 *)((longlong)param_2 + lVar4) = *(undefined1 *)param_2;
        param_2 = (void *)((longlong)param_2 + 1);
      } while (param_2 < puVar1);
      return;
    }
  }
  else {
    uVar2 = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)param_1 + 8) = uVar2;
    for (puVar3 = (undefined1 *)((longlong)param_2 + (0x20 - (ulonglong)((uint)param_1 & 0xf)));
        puVar3 <= puVar1; puVar3 = puVar3 + 0x10) {
      uVar2 = *(undefined8 *)(puVar3 + -8);
      *(undefined8 *)(puVar3 + lVar4 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
      *(undefined8 *)((longlong)(puVar3 + lVar4 + -0x10) + 8) = uVar2;
    }
    uVar2 = *(undefined8 *)(puVar1 + -8);
    *(undefined8 *)(puVar1 + lVar4 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
    *(undefined8 *)((longlong)(puVar1 + lVar4 + -0x10) + 8) = uVar2;
  }
  return;
}

// VVMMemSet16 @ 148dc5e20

void __cdecl VectorVM::Runtime::VVMMemSet16(void *param_1,ushort param_2,ulong64 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = CONCAT22(param_2,param_2);
  if (param_3 < 9) {
    switch(param_3) {
    case 3:
      *(ushort *)((longlong)param_1 + 4) = param_2;
    case 2:
      *(ushort *)((longlong)param_1 + 2) = param_2;
    case 1:
      *(ushort *)param_1 = param_2;
      return;
    case 4:
      *(undefined4 *)param_1 = uVar2;
      *(undefined4 *)((longlong)param_1 + 4) = uVar2;
      return;
    case 5:
      *(undefined4 *)param_1 = uVar2;
      *(undefined4 *)((longlong)param_1 + 4) = uVar2;
      *(undefined4 *)((longlong)param_1 + 2) = uVar2;
      *(undefined4 *)((longlong)param_1 + 6) = uVar2;
      return;
    case 6:
      *(undefined4 *)param_1 = uVar2;
      *(undefined4 *)((longlong)param_1 + 4) = uVar2;
      *(undefined4 *)((longlong)param_1 + 4) = uVar2;
      *(undefined4 *)((longlong)param_1 + 8) = uVar2;
      return;
    case 7:
      *(undefined4 *)param_1 = uVar2;
      *(undefined4 *)((longlong)param_1 + 4) = uVar2;
      *(undefined4 *)((longlong)param_1 + 6) = uVar2;
      *(undefined4 *)((longlong)param_1 + 10) = uVar2;
      return;
    case 8:
      *(undefined4 *)param_1 = uVar2;
      *(undefined4 *)((longlong)param_1 + 4) = uVar2;
      *(undefined4 *)((longlong)param_1 + 8) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
      return;
    }
  }
  else {
    puVar1 = (undefined4 *)((longlong)param_1 + (param_3 - 8) * 2);
    for (; param_1 < puVar1; param_1 = (void *)((longlong)param_1 + 0x10)) {
      *(undefined4 *)param_1 = uVar2;
      *(undefined4 *)((longlong)param_1 + 4) = uVar2;
      *(undefined4 *)((longlong)param_1 + 8) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
    }
    *puVar1 = uVar2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar2;
    puVar1[3] = uVar2;
  }
  return;
}

// VVMMemSet32 @ 148dc5ee0

void __cdecl VectorVM::Runtime::VVMMemSet32(void *param_1,uint param_2,ulong64 param_3)

{
  uint *puVar1;
  
  if (4 < param_3) {
    puVar1 = (uint *)((longlong)param_1 + (param_3 - 4) * 4);
    for (; param_1 < puVar1; param_1 = (void *)((longlong)param_1 + 0x10)) {
      *(uint *)param_1 = param_2;
      *(uint *)((longlong)param_1 + 4) = param_2;
      *(uint *)((longlong)param_1 + 8) = param_2;
      *(uint *)((longlong)param_1 + 0xc) = param_2;
    }
    *puVar1 = param_2;
    puVar1[1] = param_2;
    puVar1[2] = param_2;
    puVar1[3] = param_2;
    return;
  }
  if (param_3 != 1) {
    if (param_3 != 2) {
      if (param_3 != 3) {
        if (param_3 != 4) {
          return;
        }
        *(uint *)param_1 = param_2;
        *(uint *)((longlong)param_1 + 4) = param_2;
        *(uint *)((longlong)param_1 + 8) = param_2;
        *(uint *)((longlong)param_1 + 0xc) = param_2;
        return;
      }
      *(uint *)((longlong)param_1 + 8) = param_2;
    }
    *(uint *)((longlong)param_1 + 4) = param_2;
  }
  *(uint *)param_1 = param_2;
  return;
}

// VVM_Exec0null_exit_stat_scope @ 148dc5f50

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_exit_stat_scope
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  return param_2;
}

// VVM_Exec0null_external_func_call @ 148dc5f60

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_external_func_call
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *this;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uchar *puVar5;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar6;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar7;
  uint uVar8;
  longlong *plVar9;
  FVectorVMExtFunctionData *pFVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  FReadAccessScope *pFStack_a0;
  FReadAccessScope FStack_98;
  uint **ppuStack_80;
  uchar *puStack_78;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  void **ppvStack_58;
  int iStack_50;
  FRandomStream *pFStack_48;
  int **ppiStack_40;
  FDataSetMeta *pFStack_38;
  undefined8 uStack_30;
  
  pFVar10 = param_4->VVMState->ExtFunctionTable + *(ushort *)param_2;
  if ((param_4->VVMState->NumExtFunctions <= (*(ushort *)param_2 & 0xff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("*InsPtr < ExecCtx->VVMState->NumExtFunctions",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x5a8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar5 = (uchar *)(*pcVar2)();
    return puVar5;
  }
  if ((param_4->VVMState->MaxExtFnRegisters < (uint)(pFVar10->NumOutputs + pFVar10->NumInputs)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)(ExtFnData->NumInputs + ExtFnData->NumOutputs) <= ExecCtx->VVMState->MaxExtFnRegisters"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x5a9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar5 = (uchar *)(*pcVar2)();
    return puVar5;
  }
  plVar9 = (longlong *)0x0;
  uVar8 = 0;
  plVar11 = plVar9;
  plVar13 = plVar9;
  plVar14 = plVar9;
  if (0 < pFVar10->NumOutputs + pFVar10->NumInputs) {
    do {
      if (*(ushort *)(param_2 + (longlong)plVar11 * 2 + 2) == 0xffff) {
        (param_3->ChunkLocalData).ExtFnDecodedReg.RegData[(longlong)plVar11] =
             (uint *)((param_3->ChunkLocalData).ExtFnDecodedReg.DummyRegs + (longlong)plVar14);
        plVar14 = (longlong *)(ulonglong)((int)plVar14 + 1);
        (param_3->ChunkLocalData).ExtFnDecodedReg.RegInc[(longlong)plVar11] = '\0';
      }
      else {
        (param_3->ChunkLocalData).ExtFnDecodedReg.RegData[(longlong)plVar11] =
             (uint *)param_3->RegPtrTable[*(ushort *)(param_2 + (longlong)plVar11 * 2 + 2)];
        (param_3->ChunkLocalData).ExtFnDecodedReg.RegInc[(longlong)plVar11] =
             param_3->RegIncTable[*(ushort *)(param_2 + (longlong)plVar11 * 2 + 2)] >> 4;
      }
      uVar8 = (uint)plVar14;
      uVar12 = (int)plVar13 + 1;
      plVar11 = (longlong *)((longlong)plVar11 + 1);
      plVar13 = (longlong *)(ulonglong)uVar12;
    } while ((int)uVar12 < pFVar10->NumOutputs + pFVar10->NumInputs);
  }
  if ((param_4->VVMState->NumDummyRegsRequired < uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DummyRegCount <= ExecCtx->VVMState->NumDummyRegsRequired",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x5b9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar5 = (uchar *)(*pcVar2)();
    return puVar5;
  }
  ppuStack_80 = (param_3->ChunkLocalData).ExtFnDecodedReg.RegData;
  pFStack_38 = (param_4->DataSets).DataPtr;
  uStack_30 = *(undefined8 *)&(param_4->DataSets).ArrayNum;
  puStack_78 = (param_3->ChunkLocalData).ExtFnDecodedReg.RegInc;
  iStack_6c = pFVar10->NumOutputs + pFVar10->NumInputs;
  iStack_68 = (param_3->ChunkLocalData).StartInstanceThisChunk;
  iStack_64 = (param_3->ChunkLocalData).NumInstancesThisChunk;
  iStack_60 = param_5;
  ppvStack_58 = (param_4->UserPtrTable).DataPtr;
  iStack_50 = (param_4->UserPtrTable).ArrayNum;
  this = pFVar10->Function;
  pFStack_48 = &param_3->RandStream;
  ppiStack_40 = &(param_3->ChunkLocalData).RandCounters;
  uStack_70 = 0;
  uStack_5c = 0;
  FStack_98.DestructionSentinel.AccessType = Reader;
  FStack_98.DestructionSentinel.bDestroyed = false;
  FStack_98.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)this;
  FVar6 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
          FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
  pFStack_a0 = &FStack_98;
  FVar1 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
           ((longlong)FVar6 + 0x20);
  FVar7 = FVar6;
  if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    FVar7 = FVar1;
  }
  if ((ulonglong)FVar7 <= &pFStack_a0) {
    FVar7 = FVar6;
    if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
      FVar7 = FVar1;
    }
    if ((&pFStack_a0 < (ulonglong)((longlong)FVar7 + (longlong)*(int *)((longlong)FVar6 + 0x2c) * 8)
        ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar2)();
      return puVar5;
    }
  }
  iVar4 = *(int *)((longlong)FVar6 + 0x28);
  if (iVar4 == *(int *)((longlong)FVar6 + 0x2c)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
                      (0x808,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *
                             )FVar6,(int *)((longlong)FVar6 + 0x2c));
  }
  *(int *)((longlong)FVar6 + 0x28) = iVar4 + 1;
  if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
       ((longlong)FVar6 + 0x20) !=
      (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    FVar6 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
             ((longlong)FVar6 + 0x20);
  }
  *(FReadAccessScope **)((longlong)FVar6 + (longlong)iVar4 * 8) = pFStack_a0;
  FMRSWRecursiveAccessDetector::AcquireReadAccess((FMRSWRecursiveAccessDetector *)this);
  if (*(int *)&this->field_0x10 != 0) {
    plVar9 = *(longlong **)&this->field_0x8;
  }
  (**(code **)(*plVar9 + 0x60))(plVar9,&ppuStack_80);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_98);
  return param_2 + (longlong)((pFVar10->NumOutputs + pFVar10->NumInputs) * 2) + 3;
}

// VVM_Exec0null_inputdata_float @ 148dc5f70

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_inputdata_float
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  return param_2;
}

// VVM_Exec0null_inputdata_half @ 148dc5f80

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_inputdata_half
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  return param_2;
}

// VVM_Exec0null_inputdata_int32 @ 148dc5f90

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_inputdata_int32
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  return param_2;
}

// VVM_Exec0null_inputdata_noadvance_float @ 148dc5fa0

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_inputdata_noadvance_float
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  return param_2;
}

// VVM_Exec0null_inputdata_noadvance_half @ 148dc5fb0

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_inputdata_noadvance_half
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  return param_2;
}

// VVM_Exec0null_inputdata_noadvance_int32 @ 148dc5fc0

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_inputdata_noadvance_int32
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  return param_2;
}

// VVM_Exec0null_noise2D @ 148dc5fd0

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_noise2D
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  return param_2;
}

// VVM_Exec0null_noise3D @ 148dc5fe0

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_noise3D
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  return param_2;
}

// VVM_Exec0null_noise @ 148dc5ff0

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_noise
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  return param_2;
}

// VVM_Exec0null_outputdata_float @ 148dc6000

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_outputdata_float
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uchar **ppuVar7;
  uchar **ppuVar8;
  uchar *puVar9;
  undefined1 (*pauVar10) [16];
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  bool bVar15;
  uchar *puVar16;
  uchar *puVar17;
  undefined1 (*pauVar18) [16];
  ushort *puVar19;
  ushort *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  ushort *puVar23;
  ulonglong uVar24;
  byte *pbVar25;
  byte *pbVar26;
  undefined1 auVar27 [16];
  
  puVar16 = param_3->RegIncTable;
  bVar1 = *param_2;
  uVar24 = (ulonglong)bVar1;
  bVar2 = param_2[1];
  ppuVar7 = param_3->RegPtrTable;
  ppuVar8 = (param_3->ChunkLocalData).OutputMaskIdx;
  uVar5 = (param_3->ChunkLocalData).NumOutputPerDataSet[bVar2];
  if (((param_4->DataSets).ArrayNum <= (int)(uint)bVar2) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar15)) {
    pcVar11 = (code *)swi(3);
    puVar16 = (uchar *)(*pcVar11)();
    return puVar16;
  }
  puVar23 = (ushort *)(param_2 + 2);
  puVar19 = puVar23 + uVar24;
  if (param_1) {
    uVar21 = (ulonglong)uVar5;
    if (uVar5 == (param_3->ChunkLocalData).NumInstancesThisChunk) {
      if (uVar24 != 0) {
        lVar22 = (longlong)puVar23 - (longlong)puVar19;
        do {
          uVar4 = *(ushort *)(lVar22 + (longlong)puVar19);
          puVar9 = ppuVar7[uVar4];
          puVar17 = ppuVar7[*puVar19];
          if (puVar9 != puVar17) {
            if (puVar16[uVar4] == '\0') {
              uVar6 = *(undefined4 *)puVar9;
              if (uVar21 < 5) {
                if (uVar21 != 1) {
                  if (uVar21 != 2) {
                    if (uVar21 != 3) {
                      if (uVar21 == 4) {
                        *(undefined4 *)puVar17 = uVar6;
                        *(undefined4 *)(puVar17 + 4) = uVar6;
                        *(undefined4 *)(puVar17 + 8) = uVar6;
                        *(undefined4 *)(puVar17 + 0xc) = uVar6;
                      }
                      goto LAB_148dc8df0;
                    }
                    *(undefined4 *)(puVar17 + 8) = uVar6;
                  }
                  *(undefined4 *)(puVar17 + 4) = uVar6;
                }
                *(undefined4 *)puVar17 = uVar6;
              }
              else {
                puVar9 = puVar17 + (uVar21 - 4) * 4;
                for (; puVar17 < puVar9; puVar17 = puVar17 + 0x10) {
                  *(undefined4 *)puVar17 = uVar6;
                  *(undefined4 *)(puVar17 + 4) = uVar6;
                  *(undefined4 *)(puVar17 + 8) = uVar6;
                  *(undefined4 *)(puVar17 + 0xc) = uVar6;
                }
                *(undefined4 *)puVar9 = uVar6;
                *(undefined4 *)(puVar9 + 4) = uVar6;
                *(undefined4 *)(puVar9 + 8) = uVar6;
                *(undefined4 *)(puVar9 + 0xc) = uVar6;
              }
            }
            else {
              VVMMemCpy(puVar17,puVar9,uVar21 * 4);
            }
          }
LAB_148dc8df0:
          puVar19 = puVar19 + 1;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
    }
    else {
      uVar14 = uVar24;
      if (uVar5 != 0) {
        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
          pauVar18 = (undefined1 (*) [16])ppuVar7[puVar23[uVar24]];
          pauVar10 = (undefined1 (*) [16])ppuVar7[*puVar23];
          if (puVar16[*puVar23] == '\0') {
            uVar12 = *(undefined8 *)*pauVar10;
            uVar13 = *(undefined8 *)(*pauVar10 + 8);
            puVar9 = *pauVar18;
            for (; pauVar18 < (undefined1 (*) [16])(puVar9 + uVar21 * 4); pauVar18 = pauVar18 + 1) {
              *(undefined8 *)*pauVar18 = uVar12;
              *(undefined8 *)(*pauVar18 + 8) = uVar13;
            }
          }
          else {
            pbVar25 = ppuVar8[bVar2];
            pbVar26 = pbVar25 + ((longlong)((param_3->ChunkLocalData).NumInstancesThisChunk + 3) >>
                                2);
            while (pbVar25 < pbVar26) {
              bVar3 = *pbVar25;
              pbVar25 = pbVar25 + 1;
              auVar27 = *pauVar10;
              pauVar10 = pauVar10 + 1;
              auVar27 = pshufb(auVar27,*(undefined1 (*) [16])
                                        (VVM_PSHUFB_OUTPUT_TABLE + (ulonglong)bVar3 * 0x10));
              bVar3 = ""[bVar3];
              *pauVar18 = auVar27;
              pauVar18 = (undefined1 (*) [16])(*pauVar18 + bVar3);
            }
          }
          puVar23 = puVar23 + 1;
        }
      }
    }
  }
  else if (bVar1 != 0) {
    bVar2 = *ppuVar8[bVar2];
    puVar20 = puVar19;
    do {
      auVar27 = pshufb(*(undefined1 (*) [16])
                        ppuVar7[*(ushort *)
                                 (((longlong)puVar23 - (longlong)puVar19) + (longlong)puVar20)],
                       *(undefined1 (*) [16])(VVM_PSHUFB_OUTPUT_TABLE + (ulonglong)bVar2 * 0x10));
      *(undefined1 (*) [16])ppuVar7[*puVar20] = auVar27;
      uVar24 = uVar24 - 1;
      puVar20 = puVar20 + 1;
    } while (uVar24 != 0);
  }
  return param_2 + ((uint)bVar1 * 4 + 3);
}

// VVM_Exec0null_outputdata_float_from_half @ 148dc6010

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_outputdata_float_from_half
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  
  bVar1 = *param_2;
  if ((param_4->DataSets).ArrayNum <= (int)(uint)param_2[1]) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar2)();
      return puVar4;
    }
  }
  return param_2 + (ulonglong)bVar1 * 4 + 3;
}

// VVM_Exec0null_outputdata_half @ 148dc6080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_outputdata_half
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  uchar uVar4;
  byte bVar5;
  ushort uVar6;
  uchar **ppuVar7;
  uchar **ppuVar8;
  code *pcVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uchar *puVar18;
  byte *pbVar19;
  uint *puVar20;
  longlong lVar21;
  ushort *puVar22;
  ushort *puVar23;
  uint *puVar24;
  byte *pbVar25;
  uchar *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  float fVar34;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint uVar44;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  uint uVar52;
  uint uVar57;
  uint uVar58;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  uint uVar59;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  int iVar72;
  int iVar74;
  int iVar75;
  int iVar76;
  undefined1 auVar73 [16];
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  ushort uStack_118;
  ushort uStack_108;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  
  puVar18 = param_3->RegIncTable;
  ppuVar7 = (param_3->ChunkLocalData).OutputMaskIdx;
  ppuVar8 = param_3->RegPtrTable;
  bVar2 = param_2[1];
  bVar3 = *param_2;
  uVar27 = (ulonglong)bVar3;
  uVar29 = (param_3->ChunkLocalData).NumOutputPerDataSet[bVar2];
  if (((param_4->DataSets).ArrayNum <= (int)(uint)bVar2) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar17)) {
    pcVar9 = (code *)swi(3);
    puVar18 = (uchar *)(*pcVar9)();
    return puVar18;
  }
  iVar88 = _UNK_1508be50c;
  iVar87 = _UNK_1508be508;
  iVar86 = _UNK_1508be504;
  iVar85 = ___xmm_c8000fffc8000fffc8000fffc8000fff;
  iVar80 = _UNK_1508be4ec;
  iVar79 = _UNK_1508be4e8;
  iVar78 = _UNK_1508be4e4;
  iVar77 = ___xmm_47800000478000004780000047800000;
  iVar76 = _UNK_1508be4bc;
  iVar75 = _UNK_1508be4b8;
  iVar74 = _UNK_1508be4b4;
  iVar72 = ___xmm_38800000388000003880000038800000;
  uVar16 = _UNK_1508be48c;
  uVar15 = _UNK_1508be488;
  uVar14 = _UNK_1508be484;
  uVar66 = ___xmm_00000200000002000000020000000200;
  uVar64 = _UNK_1508be47c;
  uVar62 = _UNK_1508be478;
  uVar60 = _UNK_1508be474;
  uVar10 = ___xmm_000001ff000001ff000001ff000001ff;
  fVar71 = _UNK_15068962c;
  fVar70 = _UNK_150689628;
  fVar69 = _UNK_150689624;
  fVar68 = ___xmm_3f0000003f0000003f0000003f000000;
  uVar84 = _UNK_15068959c;
  uVar83 = _UNK_150689598;
  uVar82 = _UNK_150689594;
  uVar81 = ___xmm_00007c0000007c0000007c0000007c00;
  uVar51 = _UNK_15065157c;
  uVar50 = _UNK_150651578;
  uVar49 = _UNK_150651574;
  uVar44 = __xmm_80000000800000008000000080000000;
  puVar22 = (ushort *)(param_2 + 2);
  puVar23 = puVar22 + uVar27;
  if (param_1) {
    if (uVar29 == (param_3->ChunkLocalData).NumInstancesThisChunk) {
      if (bVar3 != 0) {
        lVar21 = (longlong)puVar22 - (longlong)puVar23;
        auVar32 = _DAT_151cefd70;
        fVar68 = _DAT_151cefd90;
        fVar69 = _UNK_151cefd94;
        fVar70 = _UNK_151cefd98;
        fVar71 = _UNK_151cefd9c;
        iVar72 = _DAT_151cefd50;
        iVar74 = _UNK_151cefd54;
        iVar75 = _UNK_151cefd58;
        iVar76 = _UNK_151cefd5c;
        iVar77 = _DAT_151cefd80;
        iVar78 = _UNK_151cefd84;
        iVar79 = _UNK_151cefd88;
        iVar80 = _UNK_151cefd8c;
        uVar44 = _DAT_151cefd40;
        uVar49 = _UNK_151cefd44;
        uVar50 = _UNK_151cefd48;
        uVar51 = _UNK_151cefd4c;
        uVar81 = _DAT_151cefd60;
        uVar82 = _UNK_151cefd64;
        uVar83 = _UNK_151cefd68;
        uVar84 = _UNK_151cefd6c;
        iVar85 = _DAT_151cefda0;
        iVar86 = _UNK_151cefda4;
        iVar87 = _UNK_151cefda8;
        iVar88 = _UNK_151cefdac;
        do {
          uVar6 = *(ushort *)((longlong)puVar23 + lVar21);
          puVar24 = (uint *)ppuVar8[uVar6];
          uVar4 = puVar18[uVar6];
          puVar20 = (uint *)ppuVar8[*puVar23];
          if ((puVar24 == puVar20) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void *)SrcReg != (void *)DstReg",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                                  ,0x2a0,L""), auVar32 = _DAT_151cefd70, fVar68 = _DAT_151cefd90,
             fVar69 = _UNK_151cefd94, fVar70 = _UNK_151cefd98, fVar71 = _UNK_151cefd9c,
             iVar72 = _DAT_151cefd50, iVar74 = _UNK_151cefd54, iVar75 = _UNK_151cefd58,
             iVar76 = _UNK_151cefd5c, iVar77 = _DAT_151cefd80, iVar78 = _UNK_151cefd84,
             iVar79 = _UNK_151cefd88, iVar80 = _UNK_151cefd8c, uVar44 = _DAT_151cefd40,
             uVar49 = _UNK_151cefd44, uVar50 = _UNK_151cefd48, uVar51 = _UNK_151cefd4c,
             uVar81 = _DAT_151cefd60, uVar82 = _UNK_151cefd64, uVar83 = _UNK_151cefd68,
             uVar84 = _UNK_151cefd6c, iVar85 = _DAT_151cefda0, iVar86 = _UNK_151cefda4,
             iVar87 = _UNK_151cefda8, iVar88 = _UNK_151cefdac, bVar17)) {
            pcVar9 = (code *)swi(3);
            puVar18 = (uchar *)(*pcVar9)();
            return puVar18;
          }
          if (uVar4 == '\0') {
            uVar44 = *puVar24 & uVar44;
            uVar49 = puVar24[1] & uVar49;
            uVar50 = puVar24[2] & uVar50;
            uVar51 = puVar24[3] & uVar51;
            auVar31._0_4_ = (int)uVar44 >> 0x10;
            auVar31._4_4_ = (int)uVar49 >> 0x10;
            auVar31._8_4_ = (int)uVar50 >> 0x10;
            auVar31._12_4_ = (int)uVar51 >> 0x10;
            fVar34 = (float)(uVar44 ^ *puVar24);
            fVar41 = (float)(uVar49 ^ puVar24[1]);
            fVar42 = (float)(uVar50 ^ puVar24[2]);
            fVar43 = (float)(uVar51 ^ puVar24[3]);
            auVar35._0_4_ = -(uint)NAN(fVar34) & uVar81;
            auVar35._4_4_ = -(uint)NAN(fVar41) & uVar82;
            auVar35._8_4_ = -(uint)NAN(fVar42) & uVar83;
            auVar35._12_4_ = -(uint)NAN(fVar43) & uVar84;
            auVar35 = auVar35 | auVar32;
            auVar30._0_4_ =
                 (~-(uint)((int)fVar34 < iVar77) &
                  (uint)(((int)fVar34 + iVar85) - (((int)fVar34 << 0x12) >> 0x1f)) >> 0xd |
                 (int)(fVar34 + fVar68) - (int)fVar68 & -(uint)((int)fVar34 < iVar77)) &
                 -(uint)((int)fVar34 < iVar72);
            auVar30._4_4_ =
                 (~-(uint)((int)fVar41 < iVar78) &
                  (uint)(((int)fVar41 + iVar86) - (((int)fVar41 << 0x12) >> 0x1f)) >> 0xd |
                 (int)(fVar41 + fVar69) - (int)fVar69 & -(uint)((int)fVar41 < iVar78)) &
                 -(uint)((int)fVar41 < iVar74);
            auVar30._8_4_ =
                 (~-(uint)((int)fVar42 < iVar79) &
                  (uint)(((int)fVar42 + iVar87) - (((int)fVar42 << 0x12) >> 0x1f)) >> 0xd |
                 (int)(fVar42 + fVar70) - (int)fVar70 & -(uint)((int)fVar42 < iVar79)) &
                 -(uint)((int)fVar42 < iVar75);
            auVar30._12_4_ =
                 (~-(uint)((int)fVar43 < iVar80) &
                  (uint)(((int)fVar43 + iVar88) - (((int)fVar43 << 0x12) >> 0x1f)) >> 0xd |
                 (int)(fVar43 + fVar71) - (int)fVar71 & -(uint)((int)fVar43 < iVar80)) &
                 -(uint)((int)fVar43 < iVar76);
            auVar73._0_4_ = ~-(uint)((int)fVar34 < iVar72) & auVar35._0_4_;
            auVar73._4_4_ = ~-(uint)((int)fVar41 < iVar74) & auVar35._4_4_;
            auVar73._8_4_ = ~-(uint)((int)fVar42 < iVar75) & auVar35._8_4_;
            auVar73._12_4_ = ~-(uint)((int)fVar43 < iVar76) & auVar35._12_4_;
            auVar31 = auVar30 | auVar73 | auVar31;
            auVar32 = packssdw(auVar31,auVar31);
            uStack_118 = auVar32._0_2_;
            VVMMemSet16(puVar20,uStack_118,(ulonglong)uVar29);
            auVar32 = _DAT_151cefd70;
            fVar68 = _DAT_151cefd90;
            fVar69 = _UNK_151cefd94;
            fVar70 = _UNK_151cefd98;
            fVar71 = _UNK_151cefd9c;
            iVar72 = _DAT_151cefd50;
            iVar74 = _UNK_151cefd54;
            iVar75 = _UNK_151cefd58;
            iVar76 = _UNK_151cefd5c;
            iVar77 = _DAT_151cefd80;
            iVar78 = _UNK_151cefd84;
            iVar79 = _UNK_151cefd88;
            iVar80 = _UNK_151cefd8c;
            uVar44 = _DAT_151cefd40;
            uVar49 = _UNK_151cefd44;
            uVar50 = _UNK_151cefd48;
            uVar51 = _UNK_151cefd4c;
            uVar81 = _DAT_151cefd60;
            uVar82 = _UNK_151cefd64;
            uVar83 = _UNK_151cefd68;
            uVar84 = _UNK_151cefd6c;
            iVar85 = _DAT_151cefda0;
            iVar86 = _UNK_151cefda4;
            iVar87 = _UNK_151cefda8;
            iVar88 = _UNK_151cefdac;
          }
          else {
            puVar1 = (uint *)((longlong)puVar20 + (ulonglong)uVar29 * 2);
            for (; puVar20 < puVar1; puVar20 = puVar20 + 2) {
              uVar10 = *puVar24;
              puVar11 = puVar24 + 1;
              puVar12 = puVar24 + 2;
              puVar13 = puVar24 + 3;
              puVar24 = puVar24 + 4;
              uVar60 = uVar10 & uVar44;
              uVar62 = *puVar11 & uVar49;
              uVar64 = *puVar12 & uVar50;
              uVar66 = *puVar13 & uVar51;
              fVar34 = (float)(uVar60 ^ uVar10);
              fVar41 = (float)(uVar62 ^ *puVar11);
              fVar42 = (float)(uVar64 ^ *puVar12);
              fVar43 = (float)(uVar66 ^ *puVar13);
              auVar53._0_4_ = -(uint)NAN(fVar34) & uVar81;
              auVar53._4_4_ = -(uint)NAN(fVar41) & uVar82;
              auVar53._8_4_ = -(uint)NAN(fVar42) & uVar83;
              auVar53._12_4_ = -(uint)NAN(fVar43) & uVar84;
              auVar53 = auVar53 | auVar32;
              auVar36._0_4_ =
                   (~-(uint)((int)fVar34 < iVar77) &
                    (uint)(((int)fVar34 + iVar85) - (((int)fVar34 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar34 + fVar68) - (int)fVar68 & -(uint)((int)fVar34 < iVar77)) &
                   -(uint)((int)fVar34 < iVar72);
              auVar36._4_4_ =
                   (~-(uint)((int)fVar41 < iVar78) &
                    (uint)(((int)fVar41 + iVar86) - (((int)fVar41 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar41 + fVar69) - (int)fVar69 & -(uint)((int)fVar41 < iVar78)) &
                   -(uint)((int)fVar41 < iVar74);
              auVar36._8_4_ =
                   (~-(uint)((int)fVar42 < iVar79) &
                    (uint)(((int)fVar42 + iVar87) - (((int)fVar42 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar42 + fVar70) - (int)fVar70 & -(uint)((int)fVar42 < iVar79)) &
                   -(uint)((int)fVar42 < iVar75);
              auVar36._12_4_ =
                   (~-(uint)((int)fVar43 < iVar80) &
                    (uint)(((int)fVar43 + iVar88) - (((int)fVar43 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar43 + fVar71) - (int)fVar71 & -(uint)((int)fVar43 < iVar80)) &
                   -(uint)((int)fVar43 < iVar76);
              auVar45._0_4_ = ~-(uint)((int)fVar34 < iVar72) & auVar53._0_4_;
              auVar45._4_4_ = ~-(uint)((int)fVar41 < iVar74) & auVar53._4_4_;
              auVar45._8_4_ = ~-(uint)((int)fVar42 < iVar75) & auVar53._8_4_;
              auVar45._12_4_ = ~-(uint)((int)fVar43 < iVar76) & auVar53._12_4_;
              auVar37._4_4_ = (int)uVar62 >> 0x10;
              auVar37._0_4_ = (int)uVar60 >> 0x10;
              auVar37._8_4_ = (int)uVar64 >> 0x10;
              auVar37._12_4_ = (int)uVar66 >> 0x10;
              auVar37 = auVar36 | auVar45 | auVar37;
              auVar38 = packssdw(auVar37,auVar37);
              *(longlong *)puVar20 = auVar38._0_8_;
            }
          }
          puVar23 = puVar23 + 1;
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
      }
    }
    else if ((uVar29 != 0) && (uVar28 = uVar27, bVar3 != 0)) {
      do {
        puVar26 = ppuVar8[puVar22[uVar27]];
        puVar24 = (uint *)ppuVar8[*puVar22];
        if (puVar18[*puVar22] == '\0') {
          uVar61 = *puVar24 & _DAT_151cefd40;
          uVar63 = puVar24[1] & _UNK_151cefd44;
          uVar65 = puVar24[2] & _UNK_151cefd48;
          uVar67 = puVar24[3] & _UNK_151cefd4c;
          fVar34 = (float)(*puVar24 ^ uVar61);
          fVar41 = (float)(puVar24[1] ^ uVar63);
          fVar42 = (float)(puVar24[2] ^ uVar65);
          fVar43 = (float)(puVar24[3] ^ uVar67);
          auVar54._0_4_ = -(uint)NAN(fVar34) & _DAT_151cefd60;
          auVar54._4_4_ = -(uint)NAN(fVar41) & _UNK_151cefd64;
          auVar54._8_4_ = -(uint)NAN(fVar42) & _UNK_151cefd68;
          auVar54._12_4_ = -(uint)NAN(fVar43) & _UNK_151cefd6c;
          auVar54 = auVar54 | _DAT_151cefd70;
          auVar39._0_4_ =
               (~-(uint)((int)fVar34 < _DAT_151cefd80) &
                (uint)(((int)fVar34 + _DAT_151cefda0) - (((int)fVar34 << 0x12) >> 0x1f)) >> 0xd |
               (int)(fVar34 + _DAT_151cefd90) - (int)_DAT_151cefd90 &
               -(uint)((int)fVar34 < _DAT_151cefd80)) & -(uint)((int)fVar34 < _DAT_151cefd50);
          auVar39._4_4_ =
               (~-(uint)((int)fVar41 < _UNK_151cefd84) &
                (uint)(((int)fVar41 + _UNK_151cefda4) - (((int)fVar41 << 0x12) >> 0x1f)) >> 0xd |
               (int)(fVar41 + _UNK_151cefd94) - (int)_UNK_151cefd94 &
               -(uint)((int)fVar41 < _UNK_151cefd84)) & -(uint)((int)fVar41 < _UNK_151cefd54);
          auVar39._8_4_ =
               (~-(uint)((int)fVar42 < _UNK_151cefd88) &
                (uint)(((int)fVar42 + _UNK_151cefda8) - (((int)fVar42 << 0x12) >> 0x1f)) >> 0xd |
               (int)(fVar42 + _UNK_151cefd98) - (int)_UNK_151cefd98 &
               -(uint)((int)fVar42 < _UNK_151cefd88)) & -(uint)((int)fVar42 < _UNK_151cefd58);
          auVar39._12_4_ =
               (~-(uint)((int)fVar43 < _UNK_151cefd8c) &
                (uint)(((int)fVar43 + _UNK_151cefdac) - (((int)fVar43 << 0x12) >> 0x1f)) >> 0xd |
               (int)(fVar43 + _UNK_151cefd9c) - (int)_UNK_151cefd9c &
               -(uint)((int)fVar43 < _UNK_151cefd8c)) & -(uint)((int)fVar43 < _UNK_151cefd5c);
          auVar46._0_4_ = ~-(uint)((int)fVar34 < _DAT_151cefd50) & auVar54._0_4_;
          auVar46._4_4_ = ~-(uint)((int)fVar41 < _UNK_151cefd54) & auVar54._4_4_;
          auVar46._8_4_ = ~-(uint)((int)fVar42 < _UNK_151cefd58) & auVar54._8_4_;
          auVar46._12_4_ = ~-(uint)((int)fVar43 < _UNK_151cefd5c) & auVar54._12_4_;
          auVar40._4_4_ = (int)uVar63 >> 0x10;
          auVar40._0_4_ = (int)uVar61 >> 0x10;
          auVar40._8_4_ = (int)uVar65 >> 0x10;
          auVar40._12_4_ = (int)uVar67 >> 0x10;
          auVar40 = auVar39 | auVar46 | auVar40;
          auVar32 = packssdw(auVar40,auVar40);
          uStack_108 = auVar32._0_2_;
          VVMMemSet16(puVar26,uStack_108,(ulonglong)uVar29);
        }
        else {
          pbVar25 = ppuVar7[bVar2];
          pbVar19 = pbVar25 + ((longlong)((param_3->ChunkLocalData).NumInstancesThisChunk + 3) >> 2)
          ;
          while (pbVar25 < pbVar19) {
            uVar61 = *puVar24;
            puVar20 = puVar24 + 1;
            puVar1 = puVar24 + 2;
            puVar11 = puVar24 + 3;
            bVar5 = *pbVar25;
            puVar24 = puVar24 + 4;
            fVar34 = (float)(~uVar44 & uVar61);
            fVar41 = (float)(~uVar49 & *puVar20);
            fVar42 = (float)(~uVar50 & *puVar1);
            fVar43 = (float)(~uVar51 & *puVar11);
            uVar63 = -(uint)((int)fVar34 < iVar72);
            uVar65 = -(uint)((int)fVar41 < iVar74);
            uVar67 = -(uint)((int)fVar42 < iVar75);
            uVar33 = -(uint)((int)fVar43 < iVar76);
            uVar52 = -(uint)((int)fVar34 < iVar77);
            uVar57 = -(uint)((int)fVar41 < iVar78);
            uVar58 = -(uint)((int)fVar42 < iVar79);
            uVar59 = -(uint)((int)fVar43 < iVar80);
            pbVar25 = pbVar25 + 1;
            auVar47._0_4_ =
                 (~uVar63 & (uint)((iVar85 + (int)fVar34) - (((int)fVar34 << 0x12) >> 0x1f)) >> 0xd
                 | (int)(fVar34 + fVar68) - (int)fVar68 & uVar63) & uVar52;
            auVar47._4_4_ =
                 (~uVar65 & (uint)((iVar86 + (int)fVar41) - (((int)fVar41 << 0x12) >> 0x1f)) >> 0xd
                 | (int)(fVar41 + fVar69) - (int)fVar69 & uVar65) & uVar57;
            auVar47._8_4_ =
                 (~uVar67 & (uint)((iVar87 + (int)fVar42) - (((int)fVar42 << 0x12) >> 0x1f)) >> 0xd
                 | (int)(fVar42 + fVar70) - (int)fVar70 & uVar67) & uVar58;
            auVar47._12_4_ =
                 (~uVar33 & (uint)((iVar88 + (int)fVar43) - (((int)fVar43 << 0x12) >> 0x1f)) >> 0xd
                 | (int)(fVar43 + fVar71) - (int)fVar71 & uVar33) & uVar59;
            auVar55._0_4_ =
                 ~uVar52 & (((uint)fVar34 >> 0xd & uVar10 | uVar66) & -(uint)NAN(fVar34) | uVar81);
            auVar55._4_4_ =
                 ~uVar57 & (((uint)fVar41 >> 0xd & uVar60 | uVar14) & -(uint)NAN(fVar41) | uVar82);
            auVar55._8_4_ =
                 ~uVar58 & (((uint)fVar42 >> 0xd & uVar62 | uVar15) & -(uint)NAN(fVar42) | uVar83);
            auVar55._12_4_ =
                 ~uVar59 & (((uint)fVar43 >> 0xd & uVar64 | uVar16) & -(uint)NAN(fVar43) | uVar84);
            auVar48._4_4_ = (int)(*puVar20 & uVar49) >> 0x10;
            auVar48._0_4_ = (int)(uVar61 & uVar44) >> 0x10;
            auVar48._8_4_ = (int)(*puVar1 & uVar50) >> 0x10;
            auVar48._12_4_ = (int)(*puVar11 & uVar51) >> 0x10;
            auVar48 = auVar47 | auVar55 | auVar48;
            auVar32 = packssdw(auVar48,auVar48);
            auStack_f8._0_8_ = auVar32._0_8_;
            auVar32 = pshufb(auStack_f8,
                             *(undefined1 (*) [16])
                              (VVM_PSHUFB_OUTPUT_TABLE16 + (ulonglong)bVar5 * 0x10));
            bVar5 = ""[bVar5];
            *(longlong *)puVar26 = auVar32._0_8_;
            puVar26 = puVar26 + bVar5;
          }
        }
        puVar22 = puVar22 + 1;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
  }
  else if (bVar3 != 0) {
    bVar2 = *ppuVar7[bVar2];
    lVar21 = (longlong)puVar22 - (longlong)puVar23;
    do {
      puVar24 = (uint *)ppuVar8[*(ushort *)((longlong)puVar23 + lVar21)];
      uVar6 = *puVar23;
      puVar23 = puVar23 + 1;
      fVar34 = (float)(~uVar44 & *puVar24);
      fVar41 = (float)(~uVar49 & puVar24[1]);
      fVar42 = (float)(~uVar50 & puVar24[2]);
      fVar43 = (float)(~uVar51 & puVar24[3]);
      uVar29 = -(uint)((int)fVar34 < iVar72);
      uVar61 = -(uint)((int)fVar41 < iVar74);
      uVar63 = -(uint)((int)fVar42 < iVar75);
      uVar65 = -(uint)((int)fVar43 < iVar76);
      uVar67 = -(uint)((int)fVar34 < iVar77);
      uVar33 = -(uint)((int)fVar41 < iVar78);
      uVar52 = -(uint)((int)fVar42 < iVar79);
      uVar57 = -(uint)((int)fVar43 < iVar80);
      auVar38._0_4_ =
           (~uVar29 & (uint)(((int)fVar34 + iVar85) - (((int)fVar34 << 0x12) >> 0x1f)) >> 0xd |
           (int)(fVar34 + fVar68) - (int)fVar68 & uVar29) & uVar67;
      auVar38._4_4_ =
           (~uVar61 & (uint)(((int)fVar41 + iVar86) - (((int)fVar41 << 0x12) >> 0x1f)) >> 0xd |
           (int)(fVar41 + fVar69) - (int)fVar69 & uVar61) & uVar33;
      auVar38._8_4_ =
           (~uVar63 & (uint)(((int)fVar42 + iVar87) - (((int)fVar42 << 0x12) >> 0x1f)) >> 0xd |
           (int)(fVar42 + fVar70) - (int)fVar70 & uVar63) & uVar52;
      auVar38._12_4_ =
           (~uVar65 & (uint)(((int)fVar43 + iVar88) - (((int)fVar43 << 0x12) >> 0x1f)) >> 0xd |
           (int)(fVar43 + fVar71) - (int)fVar71 & uVar65) & uVar57;
      auVar56._0_4_ =
           ~uVar67 & (((uint)fVar34 >> 0xd & uVar10 | uVar66) & -(uint)NAN(fVar34) | uVar81);
      auVar56._4_4_ =
           ~uVar33 & (((uint)fVar41 >> 0xd & uVar60 | uVar14) & -(uint)NAN(fVar41) | uVar82);
      auVar56._8_4_ =
           ~uVar52 & (((uint)fVar42 >> 0xd & uVar62 | uVar15) & -(uint)NAN(fVar42) | uVar83);
      auVar56._12_4_ =
           ~uVar57 & (((uint)fVar43 >> 0xd & uVar64 | uVar16) & -(uint)NAN(fVar43) | uVar84);
      auVar32._0_4_ = (int)(uVar44 & *puVar24) >> 0x10;
      auVar32._4_4_ = (int)(uVar49 & puVar24[1]) >> 0x10;
      auVar32._8_4_ = (int)(uVar50 & puVar24[2]) >> 0x10;
      auVar32._12_4_ = (int)(uVar51 & puVar24[3]) >> 0x10;
      auVar32 = auVar38 | auVar56 | auVar32;
      auVar32 = packssdw(auVar32,auVar32);
      auStack_e8._0_8_ = auVar32._0_8_;
      auVar32 = pshufb(auStack_e8,
                       *(undefined1 (*) [16])(VVM_PSHUFB_OUTPUT_TABLE16 + (ulonglong)bVar2 * 0x10));
      *(longlong *)ppuVar8[uVar6] = auVar32._0_8_;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  return param_2 + ((uint)bVar3 * 4 + 3);
}

// VVM_Exec0null_outputdata_half_from_half @ 148dc6090

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_outputdata_half_from_half
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uchar **ppuVar6;
  uchar **ppuVar7;
  ushort *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  code *pcVar11;
  bool bVar12;
  uchar *puVar13;
  ulonglong uVar14;
  byte *pbVar15;
  longlong lVar16;
  ushort *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ushort *puVar21;
  ulonglong *puVar22;
  byte *pbVar23;
  undefined1 auVar24 [16];
  
  puVar13 = param_3->RegIncTable;
  bVar1 = *param_2;
  uVar18 = (ulonglong)bVar1;
  bVar2 = param_2[1];
  ppuVar6 = (param_3->ChunkLocalData).OutputMaskIdx;
  ppuVar7 = param_3->RegPtrTable;
  uVar5 = (param_3->ChunkLocalData).NumOutputPerDataSet[bVar2];
  uVar20 = (ulonglong)uVar5;
  if (((param_4->DataSets).ArrayNum <= (int)(uint)bVar2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    puVar13 = (uchar *)(*pcVar11)();
    return puVar13;
  }
  puVar17 = (ushort *)(param_2 + 2);
  puVar21 = puVar17 + uVar18;
  if (param_1) {
    if (uVar5 == (param_3->ChunkLocalData).NumInstancesThisChunk) {
      if (bVar1 != 0) {
        lVar16 = (longlong)puVar17 - (longlong)puVar21;
        do {
          uVar4 = *(ushort *)((longlong)puVar21 + lVar16);
          puVar17 = (ushort *)ppuVar7[uVar4];
          puVar8 = (ushort *)ppuVar7[*puVar21];
          if (puVar17 != puVar8) {
            if (puVar13[uVar4] == '\0') {
              VVMMemSet16(puVar8,*puVar17,uVar20);
            }
            else {
              VVMMemCpy(puVar8,puVar17,uVar20 * 2);
            }
          }
          puVar21 = puVar21 + 1;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
    }
    else if ((uVar5 != 0) && (bVar1 != 0)) {
      uVar19 = uVar18;
      do {
        puVar22 = (ulonglong *)ppuVar7[puVar17[uVar18]];
        puVar9 = (ulonglong *)ppuVar7[*puVar17];
        if (puVar13[*puVar17] == '\0') {
          uVar14 = uVar20;
          if (puVar22 + uVar20 < puVar22) {
            uVar14 = 0;
          }
          if (uVar14 != 0) {
            uVar10 = *puVar9;
            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
              *puVar22 = uVar10;
              puVar22 = puVar22 + 1;
            }
          }
        }
        else {
          pbVar15 = ppuVar6[bVar2];
          pbVar23 = pbVar15 + ((longlong)((param_3->ChunkLocalData).NumInstancesThisChunk + 3) >> 2)
          ;
          while (pbVar15 < pbVar23) {
            bVar3 = *pbVar15;
            pbVar15 = pbVar15 + 1;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = *puVar9;
            puVar9 = puVar9 + 1;
            auVar24 = pshufb(auVar24,*(undefined1 (*) [16])
                                      (VVM_PSHUFB_OUTPUT_TABLE16 + (ulonglong)bVar3 * 0x10));
            bVar3 = ""[bVar3];
            *puVar22 = auVar24._0_8_;
            puVar22 = (ulonglong *)((longlong)puVar22 + (ulonglong)bVar3);
          }
        }
        puVar17 = puVar17 + 1;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  else if (bVar1 != 0) {
    bVar2 = *ppuVar6[bVar2];
    uVar20 = uVar18;
    do {
      uVar4 = *puVar17;
      puVar21 = puVar17 + uVar18;
      puVar17 = puVar17 + 1;
      auVar24 = pshufb(*(undefined1 (*) [16])ppuVar7[uVar4],
                       *(undefined1 (*) [16])(VVM_PSHUFB_OUTPUT_TABLE16 + (ulonglong)bVar2 * 0x10));
      *(longlong *)ppuVar7[*puVar21] = auVar24._0_8_;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  return param_2 + ((uint)bVar1 * 4 + 3);
}

// VVM_Exec0null_outputdata_int32 @ 148dc60a0

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_outputdata_int32
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uchar **ppuVar7;
  uchar **ppuVar8;
  uchar *puVar9;
  undefined1 (*pauVar10) [16];
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  bool bVar15;
  uchar *puVar16;
  uchar *puVar17;
  undefined1 (*pauVar18) [16];
  ushort *puVar19;
  ushort *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  ushort *puVar23;
  ulonglong uVar24;
  byte *pbVar25;
  byte *pbVar26;
  undefined1 auVar27 [16];
  
  puVar16 = param_3->RegIncTable;
  bVar1 = *param_2;
  uVar24 = (ulonglong)bVar1;
  bVar2 = param_2[1];
  ppuVar7 = param_3->RegPtrTable;
  ppuVar8 = (param_3->ChunkLocalData).OutputMaskIdx;
  uVar5 = (param_3->ChunkLocalData).NumOutputPerDataSet[bVar2];
  if (((param_4->DataSets).ArrayNum <= (int)(uint)bVar2) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar15)) {
    pcVar11 = (code *)swi(3);
    puVar16 = (uchar *)(*pcVar11)();
    return puVar16;
  }
  puVar23 = (ushort *)(param_2 + 2);
  puVar19 = puVar23 + uVar24;
  if (param_1) {
    uVar21 = (ulonglong)uVar5;
    if (uVar5 == (param_3->ChunkLocalData).NumInstancesThisChunk) {
      if (uVar24 != 0) {
        lVar22 = (longlong)puVar23 - (longlong)puVar19;
        do {
          uVar4 = *(ushort *)(lVar22 + (longlong)puVar19);
          puVar9 = ppuVar7[uVar4];
          puVar17 = ppuVar7[*puVar19];
          if (puVar9 != puVar17) {
            if (puVar16[uVar4] == '\0') {
              uVar6 = *(undefined4 *)puVar9;
              if (uVar21 < 5) {
                if (uVar21 != 1) {
                  if (uVar21 != 2) {
                    if (uVar21 != 3) {
                      if (uVar21 == 4) {
                        *(undefined4 *)puVar17 = uVar6;
                        *(undefined4 *)(puVar17 + 4) = uVar6;
                        *(undefined4 *)(puVar17 + 8) = uVar6;
                        *(undefined4 *)(puVar17 + 0xc) = uVar6;
                      }
                      goto LAB_148dc8df0;
                    }
                    *(undefined4 *)(puVar17 + 8) = uVar6;
                  }
                  *(undefined4 *)(puVar17 + 4) = uVar6;
                }
                *(undefined4 *)puVar17 = uVar6;
              }
              else {
                puVar9 = puVar17 + (uVar21 - 4) * 4;
                for (; puVar17 < puVar9; puVar17 = puVar17 + 0x10) {
                  *(undefined4 *)puVar17 = uVar6;
                  *(undefined4 *)(puVar17 + 4) = uVar6;
                  *(undefined4 *)(puVar17 + 8) = uVar6;
                  *(undefined4 *)(puVar17 + 0xc) = uVar6;
                }
                *(undefined4 *)puVar9 = uVar6;
                *(undefined4 *)(puVar9 + 4) = uVar6;
                *(undefined4 *)(puVar9 + 8) = uVar6;
                *(undefined4 *)(puVar9 + 0xc) = uVar6;
              }
            }
            else {
              VVMMemCpy(puVar17,puVar9,uVar21 * 4);
            }
          }
LAB_148dc8df0:
          puVar19 = puVar19 + 1;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
    }
    else {
      uVar14 = uVar24;
      if (uVar5 != 0) {
        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
          pauVar18 = (undefined1 (*) [16])ppuVar7[puVar23[uVar24]];
          pauVar10 = (undefined1 (*) [16])ppuVar7[*puVar23];
          if (puVar16[*puVar23] == '\0') {
            uVar12 = *(undefined8 *)*pauVar10;
            uVar13 = *(undefined8 *)(*pauVar10 + 8);
            puVar9 = *pauVar18;
            for (; pauVar18 < (undefined1 (*) [16])(puVar9 + uVar21 * 4); pauVar18 = pauVar18 + 1) {
              *(undefined8 *)*pauVar18 = uVar12;
              *(undefined8 *)(*pauVar18 + 8) = uVar13;
            }
          }
          else {
            pbVar25 = ppuVar8[bVar2];
            pbVar26 = pbVar25 + ((longlong)((param_3->ChunkLocalData).NumInstancesThisChunk + 3) >>
                                2);
            while (pbVar25 < pbVar26) {
              bVar3 = *pbVar25;
              pbVar25 = pbVar25 + 1;
              auVar27 = *pauVar10;
              pauVar10 = pauVar10 + 1;
              auVar27 = pshufb(auVar27,*(undefined1 (*) [16])
                                        (VVM_PSHUFB_OUTPUT_TABLE + (ulonglong)bVar3 * 0x10));
              bVar3 = ""[bVar3];
              *pauVar18 = auVar27;
              pauVar18 = (undefined1 (*) [16])(*pauVar18 + bVar3);
            }
          }
          puVar23 = puVar23 + 1;
        }
      }
    }
  }
  else if (bVar1 != 0) {
    bVar2 = *ppuVar8[bVar2];
    puVar20 = puVar19;
    do {
      auVar27 = pshufb(*(undefined1 (*) [16])
                        ppuVar7[*(ushort *)
                                 (((longlong)puVar23 - (longlong)puVar19) + (longlong)puVar20)],
                       *(undefined1 (*) [16])(VVM_PSHUFB_OUTPUT_TABLE + (ulonglong)bVar2 * 0x10));
      *(undefined1 (*) [16])ppuVar7[*puVar20] = auVar27;
      uVar24 = uVar24 - 1;
      puVar20 = puVar20 + 1;
    } while (uVar24 != 0);
  }
  return param_2 + ((uint)bVar1 * 4 + 3);
}

// VVM_Exec0null_update_id @ 148dc60b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar * __cdecl
VectorVM::Runtime::VVM_Exec0null_update_id
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FDataSetMeta *pFVar8;
  uchar *puVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uStackX_20;
  
  bVar1 = param_2[4];
  piVar2 = (int *)param_3->RegPtrTable[*(ushort *)param_2];
  pFVar8 = TArrayView<FDataSetMeta,int>::operator[](&param_4->DataSets,(uint)bVar1);
  if (((uint)(param_4->DataSets).ArrayNum <= (uint)bVar1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataSetIdx < (uint32)ExecCtx->DataSets.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x470,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    puVar9 = (uchar *)(*pcVar6)();
    return puVar9;
  }
  if ((pFVar8->IDTable == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataSet->IDTable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x471,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    puVar9 = (uchar *)(*pcVar6)();
    return puVar9;
  }
  if ((pFVar8->IDTable->ArrayNum <
       pFVar8->InstanceOffset + (param_3->ChunkLocalData).StartInstanceThisChunk +
       (param_3->ChunkLocalData).NumInstancesThisChunk) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataSet->IDTable->Num() >= DataSet->InstanceOffset + BatchState->ChunkLocalData.StartInstanceThisChunk + BatchState->ChunkLocalData.NumInstancesThisChunk"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x472,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    puVar9 = (uchar *)(*pcVar6)();
    return puVar9;
  }
  uVar12 = 0;
  uStackX_20 = 0xffffffff;
  uVar23 = (param_3->ChunkLocalData).NumOutputPerDataSet[bVar1];
  uVar13 = 0;
  if ((int)uVar23 < 5) {
    uVar27 = uVar13;
    if (((0 < (int)uVar23) && (7 < uVar23)) && (1 < __isa_available)) {
      uVar29 = uVar23 & 0x80000007;
      if ((int)uVar29 < 0) {
        uVar29 = (uVar29 - 1 | 0xfffffff8) + 1;
      }
      uVar11 = uVar12;
      uVar21 = uVar12;
      uVar31 = ___xmm_ffffffffffffffffffffffffffffffff;
      uVar33 = _UNK_15060db24;
      uVar25 = _UNK_15060db28;
      uVar26 = _UNK_15060db2c;
      uVar28 = ___xmm_ffffffffffffffffffffffffffffffff;
      uVar30 = _UNK_15060db24;
      uVar32 = _UNK_15060db28;
      uVar34 = _UNK_15060db2c;
      do {
        piVar3 = piVar2 + uVar11;
        iVar16 = *piVar3;
        iVar17 = piVar3[1];
        iVar14 = piVar3[2];
        iVar18 = piVar3[3];
        uVar27 = (int)uVar21 + 8;
        uVar21 = (ulonglong)uVar27;
        uVar31 = (uint)((int)uVar31 < iVar16) * iVar16 | ((int)uVar31 >= iVar16) * uVar31;
        uVar33 = (uint)((int)uVar33 < iVar17) * iVar17 | ((int)uVar33 >= iVar17) * uVar33;
        uVar25 = (uint)((int)uVar25 < iVar14) * iVar14 | ((int)uVar25 >= iVar14) * uVar25;
        uVar26 = (uint)((int)uVar26 < iVar18) * iVar18 | ((int)uVar26 >= iVar18) * uVar26;
        piVar3 = piVar2 + uVar11 + 4;
        iVar16 = *piVar3;
        iVar17 = piVar3[1];
        iVar14 = piVar3[2];
        iVar18 = piVar3[3];
        uVar11 = uVar11 + 8;
        uVar28 = (uint)((int)uVar28 < iVar16) * iVar16 | ((int)uVar28 >= iVar16) * uVar28;
        uVar30 = (uint)((int)uVar30 < iVar17) * iVar17 | ((int)uVar30 >= iVar17) * uVar30;
        uVar32 = (uint)((int)uVar32 < iVar14) * iVar14 | ((int)uVar32 >= iVar14) * uVar32;
        uVar34 = (uint)((int)uVar34 < iVar18) * iVar18 | ((int)uVar34 >= iVar18) * uVar34;
      } while ((longlong)uVar11 < (longlong)(int)(uVar23 - uVar29));
      uVar29 = ((int)uVar31 < (int)uVar28) * uVar28 | ((int)uVar31 >= (int)uVar28) * uVar31;
      uVar31 = ((int)uVar33 < (int)uVar30) * uVar30 | ((int)uVar33 >= (int)uVar30) * uVar33;
      uVar33 = ((int)uVar25 < (int)uVar32) * uVar32 | ((int)uVar25 >= (int)uVar32) * uVar25;
      uVar25 = ((int)uVar26 < (int)uVar34) * uVar34 | ((int)uVar26 >= (int)uVar34) * uVar26;
      uVar29 = ((int)uVar29 < (int)uVar33) * uVar33 | ((int)uVar29 >= (int)uVar33) * uVar29;
      uVar31 = ((int)uVar31 < (int)uVar25) * uVar25 | ((int)uVar31 >= (int)uVar25) * uVar31;
      uStackX_20 = ((int)uVar29 < (int)uVar31) * uVar31 | ((int)uVar29 >= (int)uVar31) * uVar29;
    }
    for (lVar22 = (longlong)(int)uVar27; lVar22 < (int)uVar23; lVar22 = lVar22 + 1) {
      uVar27 = piVar2[lVar22];
      if (piVar2[lVar22] <= (int)uStackX_20) {
        uVar27 = uStackX_20;
      }
      uStackX_20 = uVar27;
    }
  }
  else {
    piVar3 = piVar2;
    uVar27 = ___xmm_ffffffffffffffffffffffffffffffff;
    uVar29 = _UNK_15060db24;
    uVar31 = _UNK_15060db28;
    uVar33 = _UNK_15060db2c;
    for (uVar11 = (ulonglong)((uVar23 + 3 & 0xfffffffc) - 1 >> 2); uVar11 != 0; uVar11 = uVar11 - 1)
    {
      iVar16 = *piVar3;
      iVar17 = piVar3[1];
      iVar14 = piVar3[2];
      iVar18 = piVar3[3];
      piVar3 = piVar3 + 4;
      uVar27 = (uint)((int)uVar27 < iVar16) * iVar16 | ((int)uVar27 >= iVar16) * uVar27;
      uVar29 = (uint)((int)uVar29 < iVar17) * iVar17 | ((int)uVar29 >= iVar17) * uVar29;
      uVar31 = (uint)((int)uVar31 < iVar14) * iVar14 | ((int)uVar31 >= iVar14) * uVar31;
      uVar33 = (uint)((int)uVar33 < iVar18) * iVar18 | ((int)uVar33 >= iVar18) * uVar33;
    }
    piVar3 = piVar2 + (longlong)(int)uVar23 + -4;
    iVar16 = *piVar3;
    iVar17 = piVar3[1];
    iVar14 = piVar3[2];
    iVar18 = piVar3[3];
    uVar25 = (iVar16 < (int)uVar27) * uVar27 | (uint)(iVar16 >= (int)uVar27) * iVar16;
    uVar27 = (iVar17 < (int)uVar29) * uVar29 | (uint)(iVar17 >= (int)uVar29) * iVar17;
    uVar31 = (iVar14 < (int)uVar31) * uVar31 | (uint)(iVar14 >= (int)uVar31) * iVar14;
    uVar29 = (iVar18 < (int)uVar33) * uVar33 | (uint)(iVar18 >= (int)uVar33) * iVar18;
    if ((int)uVar27 < (int)uVar25) {
      uVar27 = uVar25;
    }
    if ((int)uVar29 < (int)uVar31) {
      uVar29 = uVar31;
    }
    if ((int)uVar29 < (int)uVar27) {
      uVar29 = uVar27;
    }
    if (-1 < (int)uVar29) {
      uStackX_20 = uVar29;
    }
  }
  piVar3 = pFVar8->NumFreeIDs;
  LOCK();
  iVar17 = *piVar3;
  *piVar3 = *piVar3 + ((param_3->ChunkLocalData).NumInstancesThisChunk - uVar23);
  UNLOCK();
  iVar14 = (param_3->ChunkLocalData).NumInstancesThisChunk;
  iVar18 = iVar14 >> 2;
  puVar9 = (param_3->ChunkLocalData).OutputMaskIdx[bVar1];
  iVar16 = iVar18 * 4;
  iVar14 = iVar14 + iVar18 * -4;
  pFVar4 = (pFVar8->IDTable->AllocatorInstance).Data;
  pFVar5 = (pFVar8->FreeIDTable->AllocatorInstance).Data;
  uVar11 = uVar12;
  uVar21 = uVar12;
  uVar24 = uVar12;
  if (0 < iVar18) {
    do {
      iVar20 = (int)uVar12;
      lVar22 = (longlong)iVar20;
      uVar13 = iVar20 + (4 - (uint)(""[puVar9[uVar24]] >> 2));
      uVar12 = (ulonglong)uVar13;
      iVar19 = (param_3->ChunkLocalData).StartingOutputIdxPerDataSet[bVar1] + (int)uVar21;
      uVar23 = (int)uVar21 + (uint)(""[puVar9[uVar24]] >> 2);
      iVar15 = (int)uVar11;
      switch(puVar9[uVar24]) {
      case '\0':
        lVar22 = (longlong)iVar20;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar15];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 1];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 8) = piVar2[(longlong)iVar15 + 2];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 0xc) = piVar2[(longlong)iVar15 + 3];
        break;
      case '\x01':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        iVar20 = piVar2[(longlong)iVar15 + 1];
        goto LAB_148dc9b08;
      case '\x02':
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19;
        iVar20 = piVar2[iVar15];
LAB_148dc9b08:
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = iVar20;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 2];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 8) = piVar2[(longlong)iVar15 + 3];
        break;
      case '\x03':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19 + 1;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[(longlong)iVar15 + 2];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 3];
        break;
      case '\x04':
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar15];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 1];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 8) = piVar2[(longlong)iVar15 + 3];
        break;
      case '\x05':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19 + 1;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[(longlong)iVar15 + 1];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 3];
        break;
      case '\x06':
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19 + 1;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar15];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 3];
        break;
      case '\a':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19 + 1;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19 + 2;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[(longlong)iVar15 + 3];
        break;
      case '\b':
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar15];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 1];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 8) = piVar2[(longlong)iVar15 + 2];
        break;
      case '\t':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19 + 1;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[(longlong)iVar15 + 1];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 2];
        break;
      case '\n':
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19 + 1;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar15];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 2];
        break;
      case '\v':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19 + 1;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19 + 2;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[(longlong)iVar15 + 2];
        break;
      case '\f':
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19 + 1;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar15];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 1];
        break;
      case '\r':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19 + 1;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19 + 2;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[(longlong)iVar15 + 1];
        break;
      case '\x0e':
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19 + 1;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19 + 2;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar15];
        break;
      case '\x0f':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19 + 1;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19 + 2;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19 + 3;
      }
      uVar24 = uVar24 + 1;
      uVar11 = (ulonglong)(iVar15 + 4);
      uVar21 = (ulonglong)uVar23;
    } while ((longlong)uVar24 < (longlong)iVar18);
    uVar12 = (ulonglong)uVar23;
  }
  iVar20 = (int)uVar12 + (param_3->ChunkLocalData).StartingOutputIdxPerDataSet[bVar1];
  bVar1 = puVar9[iVar18];
  if (iVar14 == 1) {
    if ((bVar1 & 1) == 0) {
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) = piVar2[iVar16];
    }
    else {
      *(int *)(pFVar4 + (longlong)piVar2[iVar16] * 4) = iVar20;
    }
  }
  else if (iVar14 == 2) {
    bVar10 = bVar1 & 3;
    if ((bVar1 & 3) == 0) {
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) = piVar2[iVar16];
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4 + 4) =
           piVar2[(longlong)iVar16 + 1];
    }
    else if (bVar10 == 1) {
      *(int *)(pFVar4 + (longlong)piVar2[iVar16] * 4) = iVar20;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) =
           piVar2[(longlong)iVar16 + 1];
    }
    else if (bVar10 == 2) {
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 1] * 4) = iVar20;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) = piVar2[iVar16];
    }
    else if (bVar10 == 3) {
      *(int *)(pFVar4 + (longlong)piVar2[iVar16] * 4) = iVar20;
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 1] * 4) = iVar20 + 1;
    }
  }
  else if (iVar14 == 3) {
    switch(bVar1 & 7) {
    case 0:
      lVar22 = (longlong)(int)uVar13;
      *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar16];
      *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar16 + 1];
      *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 8) = piVar2[(longlong)iVar16 + 2];
      break;
    case 1:
      *(int *)(pFVar4 + (longlong)piVar2[iVar16] * 4) = iVar20;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) =
           piVar2[(longlong)iVar16 + 1];
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4 + 4) =
           piVar2[(longlong)iVar16 + 2];
      break;
    case 2:
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 1] * 4) = iVar20;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) = piVar2[iVar16];
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4 + 4) =
           piVar2[(longlong)iVar16 + 2];
      break;
    case 3:
      *(int *)(pFVar4 + (longlong)piVar2[iVar16] * 4) = iVar20;
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 1] * 4) = iVar20 + 1;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) =
           piVar2[(longlong)iVar16 + 2];
      break;
    case 4:
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 2] * 4) = iVar20;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) = piVar2[iVar16];
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4 + 4) =
           piVar2[(longlong)iVar16 + 1];
      break;
    case 5:
      *(int *)(pFVar4 + (longlong)piVar2[iVar16] * 4) = iVar20;
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 2] * 4) = iVar20 + 1;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) =
           piVar2[(longlong)iVar16 + 1];
      break;
    case 6:
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 1] * 4) = iVar20;
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 2] * 4) = iVar20 + 1;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) = piVar2[iVar16];
      break;
    case 7:
      *(int *)(pFVar4 + (longlong)piVar2[iVar16] * 4) = iVar20;
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 1] * 4) = iVar20 + 1;
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 2] * 4) = iVar20 + 2;
    }
  }
  iVar16 = 0;
  if (uStackX_20 != 0xffffffff) {
    while (uVar23 = *pFVar8->MaxUsedID, iVar17 = iVar16, (int)uVar23 < (int)uStackX_20) {
      LOCK();
      bVar7 = uVar23 == *pFVar8->MaxUsedID;
      if (bVar7) {
        *pFVar8->MaxUsedID = uStackX_20;
      }
      UNLOCK();
      if ((bVar7) || (iVar17 = iVar16 + 1, bVar7 = 0x3fffffff < iVar16, iVar16 = iVar17, bVar7))
      break;
    }
    if (0x3fffffff < iVar17) {
      pcVar6 = (code *)swi(3);
      puVar9 = (uchar *)(*pcVar6)();
      return puVar9;
    }
  }
  return param_2 + 6;
}

// VVM_Exec1f_abs @ 148dc60c0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_abs
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec1f_acos @ 148dc60e0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_acos
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  __m128 *extraout_RAX;
  undefined1 in_XMM2 [16];
  
  fVar2 = *(float *)((longlong)&param_1->RegisterData + 4);
  fVar3 = *(float *)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  fVar4 = *(float *)((longlong)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet + 4);
  auVar1._4_4_ = (VVMConstVec4_One4[1] - fVar2) * (fVar2 + VVMConstVec4_One4[1]);
  auVar1._0_4_ = (VVMConstVec4_One4[0] - *(float *)&param_1->RegisterData) *
                 (*(float *)&param_1->RegisterData + VVMConstVec4_One4[0]);
  auVar1._8_4_ = (VVMConstVec4_One4[2] - fVar3) * (fVar3 + VVMConstVec4_One4[2]);
  auVar1._12_4_ = (VVMConstVec4_One4[3] - fVar4) * (fVar4 + VVMConstVec4_One4[3]);
  sqrtps(in_XMM2,auVar1);
  __vdecl_atan2f4();
  return extraout_RAX;
}

// VVM_Exec1f_asin @ 148dc6120

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_asin
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  __m128 *extraout_RAX;
  undefined1 in_XMM2 [16];
  
  fVar2 = *(float *)((longlong)&param_1->RegisterData + 4);
  fVar3 = *(float *)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  fVar4 = *(float *)((longlong)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet + 4);
  auVar1._4_4_ = (VVMConstVec4_One4[1] - fVar2) * (fVar2 + VVMConstVec4_One4[1]);
  auVar1._0_4_ = (VVMConstVec4_One4[0] - *(float *)&param_1->RegisterData) *
                 (*(float *)&param_1->RegisterData + VVMConstVec4_One4[0]);
  auVar1._8_4_ = (VVMConstVec4_One4[2] - fVar3) * (fVar3 + VVMConstVec4_One4[2]);
  auVar1._12_4_ = (VVMConstVec4_One4[3] - fVar4) * (fVar4 + VVMConstVec4_One4[3]);
  sqrtps(in_XMM2,auVar1);
  __vdecl_atan2f4();
  return extraout_RAX;
}

// VVM_Exec1f_atan @ 148dc6170

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_atan
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  __m128 *extraout_RAX;
  
  __vdecl_atanf4();
  return extraout_RAX;
}

// VVM_Exec1f_b2f @ 148dc6180

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_b2f
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec1f_ceil @ 148dc61a0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_ceil
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  undefined1 in_XMM0 [16];
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  roundps(in_XMM0,auVar1,2);
  return in_RAX;
}

// VVM_Exec1f_cos @ 148dc61b0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_cos
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  __m128 *extraout_RAX;
  
  __vdecl_cosf4();
  return extraout_RAX;
}

// VVM_Exec1f_exp2 @ 148dc61c0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_exp2
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  __m128 *extraout_RAX;
  
  __vdecl_exp2f4();
  return extraout_RAX;
}

// VVM_Exec1f_exp @ 148dc61d0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_exp
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  __m128 *extraout_RAX;
  
  __vdecl_expf4();
  return extraout_RAX;
}

// VVM_Exec1f_f2b @ 148dc61e0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_f2b
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec1f_floor @ 148dc61f0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_floor
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  undefined1 in_XMM0 [16];
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  roundps(in_XMM0,auVar1,1);
  return in_RAX;
}

// VVM_Exec1f_frac @ 148dc6200

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_frac
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  undefined1 in_XMM1 [16];
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  roundps(in_XMM1,auVar1,3);
  return in_RAX;
}

// VVM_Exec1f_i2f @ 148dc6220

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_i2f
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec1f_log2 @ 148dc6230

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_log2
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  __m128 *extraout_RAX;
  
  __vdecl_log2f4();
  return extraout_RAX;
}

// VVM_Exec1f_log @ 148dc6240

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_log
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  __m128 *extraout_RAX;
  
  __vdecl_logf4();
  return extraout_RAX;
}

// VVM_Exec1f_neg @ 148dc6270

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_neg
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec1f_rcp @ 148dc6280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_rcp
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  undefined1 auVar2 [16];
  
  auVar2._0_4_ = __xmm_7fffffff7fffffff7fffffff7fffffff & *(uint *)&param_1->RegisterData;
  auVar2._4_4_ = _UNK_15061cc74 & *(uint *)((longlong)&param_1->RegisterData + 4);
  auVar2._8_4_ = _UNK_15061cc78 & *(uint *)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  auVar2._12_4_ =
       _UNK_15061cc7c &
       *(uint *)((longlong)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet + 4);
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  rcpps(auVar2,auVar1);
  return in_RAX;
}

// VVM_Exec1f_round @ 148dc62b0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_round
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  undefined1 in_XMM0 [16];
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  roundps(in_XMM0,auVar1,8);
  return in_RAX;
}

// VVM_Exec1f_rsq @ 148dc62c0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_rsq
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  __m128 *in_RAX;
  undefined1 in_XMM1 [16];
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  auVar1 = sqrtps(in_XMM1,auVar1);
  divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar1);
  return in_RAX;
}

// VVM_Exec1f_sign @ 148dc62f0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_sign
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec1f_sin @ 148dc6320

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_sin
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  __m128 *extraout_RAX;
  
  __vdecl_sinf4();
  return extraout_RAX;
}

// VVM_Exec1f_sqrt @ 148dc6330

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_sqrt
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  undefined1 in_XMM1 [16];
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  sqrtps(in_XMM1,auVar1);
  return in_RAX;
}

// VVM_Exec1f_tan @ 148dc6350

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_tan
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  __m128 *extraout_RAX;
  
  __vdecl_tanf4();
  return extraout_RAX;
}

// VVM_Exec1f_trunc @ 148dc6360

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec1f_trunc
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  undefined1 in_XMM0 [16];
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  roundps(in_XMM0,auVar1,3);
  return in_RAX;
}

// VVM_Exec1i_absi @ 148dc6370

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec1i_absi
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2)

{
  undefined1 auVar1 [16];
  __m128i *in_RAX;
  undefined1 in_XMM0 [16];
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  pabsd(in_XMM0,auVar1);
  return in_RAX;
}

// VVM_Exec1i_b2i @ 148dc6380

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec1i_b2i
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec1i_b2i_2x @ 148dc63a0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec1i_b2i_2x
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec1i_bit_not @ 148dc63c0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec1i_bit_not
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec1i_f2i @ 148dc63e0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec1i_f2i
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec1i_i2b @ 148dc63f0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec1i_i2b
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec1i_logic_not @ 148dc6410

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec1i_logic_not
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec1i_negi @ 148dc6430

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec1i_negi
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec1i_signi @ 148dc6450

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec1i_signi
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec1null_acquire_id @ 148dc6480

uchar * __cdecl
VectorVM::Runtime::VVM_Exec1null_acquire_id
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  int *piVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uchar *puVar7;
  FDataSetMeta *pFVar8;
  uchar *puVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  
  bVar2 = param_2[4];
  if (((uint)(param_4->DataSets).ArrayNum <= (uint)bVar2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataSetIdx < (uint32)ExecCtx->DataSets.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x57f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar4)();
    return puVar7;
  }
  pFVar8 = TArrayView<FDataSetMeta,int>::operator[](&param_4->DataSets,(uint)bVar2);
  iVar14 = 0;
  do {
    iVar13 = *pFVar8->NumFreeIDs;
    if ((iVar13 < (param_3->ChunkLocalData).NumInstancesThisChunk) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OldNumFreeIDs >= BatchState->ChunkLocalData.NumInstancesThisChunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                           ,0x587,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      puVar7 = (uchar *)(*pcVar4)();
      return puVar7;
    }
    uVar16 = (param_3->ChunkLocalData).NumInstancesThisChunk;
    uVar17 = (ulonglong)(int)uVar16;
    lVar11 = (longlong)iVar13 - uVar17;
    puVar7 = param_3->RegPtrTable[*(ushort *)param_2];
    pFVar3 = (pFVar8->FreeIDTable->AllocatorInstance).Data;
    iVar10 = 0;
    if (0 < (int)uVar16) {
      do {
        iVar15 = (int)uVar17 - iVar10;
        iVar10 = iVar10 + 1;
        *(undefined4 *)puVar7 = *(undefined4 *)(pFVar3 + (longlong)iVar15 * 4 + lVar11 * 4 + -4);
        uVar16 = (param_3->ChunkLocalData).NumInstancesThisChunk;
        uVar17 = (ulonglong)uVar16;
        puVar7 = puVar7 + 4;
      } while (iVar10 < (int)uVar16);
    }
    LOCK();
    bVar6 = iVar13 == *pFVar8->NumFreeIDs;
    if (bVar6) {
      *pFVar8->NumFreeIDs = iVar13 - uVar16;
    }
    UNLOCK();
    iVar13 = iVar14;
  } while ((!bVar6) && (iVar13 = iVar14 + 1, bVar6 = iVar14 < 0x40000000, iVar14 = iVar13, bVar6));
  if (0x3ffffffe < iVar13) {
    pcVar4 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar4)();
    return puVar7;
  }
  piVar12 = pFVar8->NumSpawnedIDs;
  LOCK();
  iVar14 = *piVar12;
  *piVar12 = *piVar12 + (param_3->ChunkLocalData).NumInstancesThisChunk;
  UNLOCK();
  iVar14 = (param_3->ChunkLocalData).NumInstancesThisChunk + iVar14;
  if ((pFVar8->FreeIDTable->ArrayMax < iVar14) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartNumSpawned <= DataSet->FreeIDTable->Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x59a,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar4)();
    return puVar7;
  }
  uVar17 = (longlong)(param_3->ChunkLocalData).NumInstancesThisChunk * 4;
  pFVar3 = (pFVar8->FreeIDTable->AllocatorInstance).Data +
           ((longlong)pFVar8->FreeIDTable->ArrayMax - (longlong)iVar14) * 4;
  puVar9 = param_3->RegPtrTable[*(ushort *)param_2];
  lVar11 = (longlong)pFVar3 - (longlong)puVar9;
  puVar7 = puVar9 + uVar17;
  if (uVar17 < 0x10) {
    if (uVar17 != 0) {
      do {
        puVar9[lVar11] = *puVar9;
        puVar9 = puVar9 + 1;
      } while (puVar9 < puVar7);
    }
  }
  else {
    uVar5 = *(undefined8 *)(puVar9 + 8);
    *(undefined8 *)pFVar3 = *(undefined8 *)puVar9;
    *(undefined8 *)(pFVar3 + 8) = uVar5;
    for (puVar9 = puVar9 + (0x20 - (ulonglong)((uint)pFVar3 & 0xf)); puVar9 <= puVar7;
        puVar9 = puVar9 + 0x10) {
      uVar5 = *(undefined8 *)(puVar9 + -8);
      *(undefined8 *)(puVar9 + lVar11 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
      *(undefined8 *)(puVar9 + lVar11 + -0x10 + 8) = uVar5;
    }
    uVar5 = *(undefined8 *)(puVar7 + -8);
    *(undefined8 *)(puVar7 + lVar11 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + lVar11 + -0x10 + 8) = uVar5;
  }
  uVar17 = (ulonglong)(param_3->ChunkLocalData).NumInstancesThisChunk;
  iVar14 = pFVar8->IDAcquireTag;
  piVar12 = (int *)param_3->RegPtrTable[*(ushort *)(param_2 + 2)];
  if (uVar17 < 5) {
    if (uVar17 != 1) {
      if (uVar17 != 2) {
        if (uVar17 != 3) {
          if (uVar17 == 4) {
            *piVar12 = iVar14;
            piVar12[1] = iVar14;
            piVar12[2] = iVar14;
            piVar12[3] = iVar14;
          }
          goto LAB_148dc9235;
        }
        piVar12[2] = iVar14;
      }
      piVar12[1] = iVar14;
    }
    *piVar12 = iVar14;
  }
  else {
    piVar1 = piVar12 + (uVar17 - 4);
    for (; piVar12 < piVar1; piVar12 = piVar12 + 4) {
      *piVar12 = iVar14;
      piVar12[1] = iVar14;
      piVar12[2] = iVar14;
      piVar12[3] = iVar14;
    }
    *piVar1 = iVar14;
    piVar1[1] = iVar14;
    piVar1[2] = iVar14;
    piVar1[3] = iVar14;
  }
LAB_148dc9235:
  return param_2 + 6;
}

// VVM_Exec1null_acquireindex @ 148dc6490

uchar * __cdecl
VectorVM::Runtime::VVM_Exec1null_acquireindex
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  uchar *puVar4;
  FDataSetMeta *pFVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  
  bVar2 = param_2[2];
  iVar8 = (param_3->ChunkLocalData).NumInstancesThisChunk;
  puVar12 = (uint *)param_3->RegPtrTable[*(ushort *)param_2];
  bVar3 = param_3->RegIncTable[*(ushort *)param_2];
  uVar10 = 0;
  uVar9 = 0;
  puVar4 = (param_3->ChunkLocalData).OutputMaskIdx[bVar2];
  if (param_1) {
    iVar6 = iVar8 >> 2;
    iVar8 = iVar8 + iVar6 * -4;
    if (0 < iVar6) {
      lVar11 = 0;
      do {
        uVar7 = ((puVar12[1] & 0xbfffffff | *puVar12 >> 1) >> 1 | puVar12[2] & 0x9fffffff) >> 1 |
                puVar12[3] & 0x8fffffff;
        puVar12 = (uint *)((longlong)puVar12 + ((ulonglong)bVar3 & 0xfffffffffffffffc));
        puVar4[lVar11] = (byte)(uVar7 >> 0x1c);
        lVar11 = lVar11 + 1;
        uVar9 = uVar9 + ""[uVar7 >> 0x1c];
      } while (lVar11 < iVar6);
    }
    if (0 < iVar8) {
      if (iVar8 == 1) {
        uVar10 = *puVar12 >> 0x1f;
      }
      else if (iVar8 == 2) {
        uVar10 = (puVar12[1] & 0xbfffffff | *puVar12 >> 1) >> 0x1e;
      }
      else if (iVar8 == 3) {
        uVar10 = ((puVar12[1] & 0xbfffffff | *puVar12 >> 1) >> 1 | puVar12[2] & 0x9fffffff) >> 0x1d;
      }
      puVar4[iVar6] = (uchar)uVar10;
      uVar9 = uVar9 + ""[uVar10];
    }
  }
  else {
    if (iVar8 == 1) {
      uVar10 = *puVar12 >> 0x1f;
    }
    else if (iVar8 == 2) {
      uVar10 = (puVar12[1] & 0xbfffffff | *puVar12 >> 1) >> 0x1e;
    }
    else if (iVar8 == 3) {
      uVar10 = ((puVar12[1] & 0xbfffffff | *puVar12 >> 1) >> 1 | puVar12[2] & 0x9fffffff) >> 0x1d;
    }
    else if (iVar8 == 4) {
      uVar10 = (((puVar12[1] & 0xbfffffff | *puVar12 >> 1) >> 1 | puVar12[2] & 0x9fffffff) >> 1 |
               puVar12[3] & 0x8fffffff) >> 0x1c;
    }
    *puVar4 = (uchar)uVar10;
    uVar9 = (uint)""[uVar10];
  }
  LOCK();
  piVar1 = param_4->VVMState->NumOutputPerDataSet + bVar2;
  iVar8 = *piVar1;
  *piVar1 = *piVar1 + (uVar9 >> 2);
  UNLOCK();
  pFVar5 = TArrayView<FDataSetMeta,int>::operator[](&param_4->DataSets,(uint)bVar2);
  (param_3->ChunkLocalData).StartingOutputIdxPerDataSet[bVar2] = pFVar5->InstanceOffset + iVar8;
  puVar12 = (param_3->ChunkLocalData).NumOutputPerDataSet + bVar2;
  *puVar12 = *puVar12 + (uVar9 >> 2);
  return param_2 + 4;
}

// VVM_Exec1null_enter_stat_scope @ 148dc64a0

uchar * __cdecl
VectorVM::Runtime::VVM_Exec1null_enter_stat_scope
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  return param_2 + 2;
}

// VVM_Exec1null_exec_index @ 148dc64b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar * __cdecl
VectorVM::Runtime::VVM_Exec1null_exec_index
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar5 = _UNK_150b50ddc;
  iVar4 = _UNK_150b50dd8;
  iVar3 = _UNK_150b50dd4;
  iVar2 = ___xmm_00000004000000040000000400000004;
  piVar6 = (int *)param_3->RegPtrTable[*(ushort *)param_2];
  if (param_1) {
    iVar11 = (param_3->ChunkLocalData).StartInstanceThisChunk;
    iVar8 = iVar11 + VVMConstVec4_ZeroOneTwoThree4i[0];
    iVar9 = iVar11 + VVMConstVec4_ZeroOneTwoThree4i[1];
    iVar10 = iVar11 + VVMConstVec4_ZeroOneTwoThree4i[2];
    iVar11 = iVar11 + VVMConstVec4_ZeroOneTwoThree4i[3];
    piVar7 = piVar6 + (longlong)param_5 * 4;
    do {
      *piVar6 = iVar8;
      piVar6[1] = iVar9;
      piVar6[2] = iVar10;
      piVar6[3] = iVar11;
      piVar6 = piVar6 + 4;
      iVar8 = iVar8 + iVar2;
      iVar9 = iVar9 + iVar3;
      iVar10 = iVar10 + iVar4;
      iVar11 = iVar11 + iVar5;
    } while (piVar6 < piVar7);
    return param_2 + 3;
  }
  uVar1 = CONCAT44(VVMConstVec4_ZeroOneTwoThree4i[3],VVMConstVec4_ZeroOneTwoThree4i[2]);
  *(ulonglong *)piVar6 =
       CONCAT44(VVMConstVec4_ZeroOneTwoThree4i[1],VVMConstVec4_ZeroOneTwoThree4i[0]);
  *(undefined8 *)(piVar6 + 2) = uVar1;
  return param_2 + 3;
}

// VVM_Exec1null_exec_index_addi @ 148dc6520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar * __cdecl
VectorVM::Runtime::VVM_Exec1null_exec_index_addi
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  byte bVar1;
  ushort uVar2;
  uchar **ppuVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  iVar7 = _UNK_150b50ddc;
  iVar17 = _UNK_150b50dd8;
  iVar15 = _UNK_150b50dd4;
  iVar13 = ___xmm_00000004000000040000000400000004;
  uVar2 = *(ushort *)param_2;
  ppuVar3 = param_3->RegPtrTable;
  if (param_1) {
    iVar21 = (param_3->ChunkLocalData).StartInstanceThisChunk;
    piVar10 = (int *)ppuVar3[uVar2];
    piVar8 = (int *)ppuVar3[*(ushort *)(param_2 + 2)];
    bVar1 = param_3->RegIncTable[uVar2];
    iVar18 = iVar21 + VVMConstVec4_ZeroOneTwoThree4i[0];
    iVar19 = iVar21 + VVMConstVec4_ZeroOneTwoThree4i[1];
    iVar20 = iVar21 + VVMConstVec4_ZeroOneTwoThree4i[2];
    iVar21 = iVar21 + VVMConstVec4_ZeroOneTwoThree4i[3];
    piVar9 = piVar8 + (longlong)param_5 * 4;
    do {
      iVar11 = *piVar10;
      piVar4 = piVar10 + 1;
      piVar5 = piVar10 + 2;
      piVar6 = piVar10 + 3;
      piVar10 = (int *)((longlong)piVar10 + (ulonglong)bVar1);
      iVar11 = iVar11 + iVar18;
      iVar12 = *piVar4 + iVar19;
      iVar14 = *piVar5 + iVar20;
      iVar16 = *piVar6 + iVar21;
      iVar18 = iVar18 + iVar13;
      iVar19 = iVar19 + iVar15;
      iVar20 = iVar20 + iVar17;
      iVar21 = iVar21 + iVar7;
      *piVar8 = iVar11;
      piVar8[1] = iVar12;
      piVar8[2] = iVar14;
      piVar8[3] = iVar16;
      piVar8 = piVar8 + 4;
    } while (piVar8 < piVar9);
    return param_2 + 5;
  }
  piVar10 = (int *)ppuVar3[uVar2];
  iVar13 = piVar10[1] + VVMConstVec4_ZeroOneTwoThree4i[1];
  iVar15 = piVar10[2] + VVMConstVec4_ZeroOneTwoThree4i[2];
  iVar17 = piVar10[3] + VVMConstVec4_ZeroOneTwoThree4i[3];
  piVar8 = (int *)ppuVar3[*(ushort *)(param_2 + 2)];
  *piVar8 = *piVar10 + VVMConstVec4_ZeroOneTwoThree4i[0];
  piVar8[1] = iVar13;
  piVar8[2] = iVar15;
  piVar8[3] = iVar17;
  return param_2 + 5;
}

// VVM_Exec1null_exec_indexf @ 148dc65d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar * __cdecl
VectorVM::Runtime::VVM_Exec1null_exec_indexf
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  uVar5 = VVMConstVec4_ZeroOneTwoThree4._8_8_;
  iVar4 = _UNK_150b50ddc;
  iVar3 = _UNK_150b50dd8;
  iVar2 = _UNK_150b50dd4;
  iVar1 = ___xmm_00000004000000040000000400000004;
  pfVar6 = (float *)param_3->RegPtrTable[*(ushort *)param_2];
  if (param_1) {
    iVar15 = (param_3->ChunkLocalData).StartInstanceThisChunk;
    iVar12 = iVar15 + VVMConstVec4_ZeroOneTwoThree4i[0];
    iVar13 = iVar15 + VVMConstVec4_ZeroOneTwoThree4i[1];
    iVar14 = iVar15 + VVMConstVec4_ZeroOneTwoThree4i[2];
    iVar15 = iVar15 + VVMConstVec4_ZeroOneTwoThree4i[3];
    pfVar7 = pfVar6 + (longlong)param_5 * 4;
    do {
      fVar8 = (float)iVar12;
      fVar9 = (float)iVar13;
      fVar10 = (float)iVar14;
      fVar11 = (float)iVar15;
      iVar12 = iVar12 + iVar1;
      iVar13 = iVar13 + iVar2;
      iVar14 = iVar14 + iVar3;
      iVar15 = iVar15 + iVar4;
      *pfVar6 = fVar8;
      pfVar6[1] = fVar9;
      pfVar6[2] = fVar10;
      pfVar6[3] = fVar11;
      pfVar6 = pfVar6 + 4;
    } while (pfVar6 < pfVar7);
    return param_2 + 3;
  }
  *(undefined8 *)pfVar6 = VVMConstVec4_ZeroOneTwoThree4._0_8_;
  *(undefined8 *)(pfVar6 + 2) = uVar5;
  return param_2 + 3;
}

// VVM_Exec1null_fasi @ 148dc6640

uchar * __cdecl
VectorVM::Runtime::VVM_Exec1null_fasi
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  return param_2;
}

// VVM_Exec1null_half_to_float @ 148dc6650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar * __cdecl
VectorVM::Runtime::VVM_Exec1null_half_to_float
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  ulonglong uVar1;
  byte bVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  uint uVar5;
  undefined1 auVar6 [14];
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  uint *puVar32;
  ulonglong *puVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  
  uVar30 = _UNK_1506896ec;
  uVar29 = _UNK_1506896e8;
  uVar28 = _UNK_1506896e4;
  uVar27 = __xmm_7f8000007f8000007f8000007f800000;
  fVar26 = _UNK_1506896dc;
  fVar25 = _UNK_1506896d8;
  fVar24 = _UNK_1506896d4;
  fVar23 = ___xmm_77800000778000007780000077800000;
  uVar22 = _UNK_1506895bc;
  uVar21 = _UNK_1506895b8;
  uVar20 = _UNK_1506895b4;
  uVar19 = ___xmm_00400000004000000040000000400000;
  uVar18 = _UNK_1506895ac;
  uVar17 = _UNK_1506895a8;
  uVar16 = _UNK_1506895a4;
  uVar15 = ___xmm_00007fff00007fff00007fff00007fff;
  iVar14 = _UNK_15068959c;
  iVar13 = _UNK_150689598;
  iVar12 = _UNK_150689594;
  iVar11 = ___xmm_00007c0000007c0000007c0000007c00;
  iVar10 = _UNK_15068958c;
  iVar9 = _UNK_150689588;
  iVar8 = _UNK_150689584;
  iVar7 = ___xmm_00007bff00007bff00007bff00007bff;
  puVar32 = (uint *)param_3->RegPtrTable[*(ushort *)(param_2 + 2)];
  puVar33 = (ulonglong *)param_3->RegPtrTable[*(ushort *)param_2];
  bVar2 = param_3->RegIncTable[*(ushort *)param_2];
  puVar31 = puVar32 + (longlong)param_5 * 4;
  do {
    uVar1 = *puVar33;
    auVar3._8_4_ = 0;
    auVar3._0_8_ = uVar1;
    auVar3._12_2_ = (short)(uVar1 >> 0x30);
    auVar4._8_2_ = (short)(uVar1 >> 0x20);
    auVar4._0_8_ = uVar1;
    auVar4._10_4_ = auVar3._10_4_;
    auVar6._6_8_ = 0;
    auVar6._0_6_ = auVar4._8_6_;
    puVar33 = (ulonglong *)((longlong)puVar33 + (ulonglong)(bVar2 >> 1));
    uVar35 = uVar15 & (ushort)uVar1;
    uVar34 = (uint)CONCAT82(SUB148(auVar6 << 0x40,6),(short)(uVar1 >> 0x10));
    uVar36 = uVar16 & uVar34;
    uVar37 = uVar17 & auVar4._8_4_;
    uVar5 = auVar3._10_4_ >> 0x10;
    uVar38 = uVar18 & uVar5;
    *puVar32 = -(uint)(iVar11 < (int)uVar35) & uVar19 | -(uint)(iVar7 < (int)uVar35) & uVar27 |
               (uVar35 ^ (ushort)uVar1) << 0x10 | (uint)((float)(uVar35 << 0xd) * fVar23);
    puVar32[1] = -(uint)(iVar12 < (int)uVar36) & uVar20 | -(uint)(iVar8 < (int)uVar36) & uVar28 |
                 (uVar36 ^ uVar34) << 0x10 | (uint)((float)(uVar36 << 0xd) * fVar24);
    puVar32[2] = -(uint)(iVar13 < (int)uVar37) & uVar21 | -(uint)(iVar9 < (int)uVar37) & uVar29 |
                 (uVar37 ^ auVar4._8_4_) << 0x10 | (uint)((float)(uVar37 << 0xd) * fVar25);
    puVar32[3] = -(uint)(iVar14 < (int)uVar38) & uVar22 | -(uint)(iVar10 < (int)uVar38) & uVar30 |
                 (uVar38 ^ uVar5) << 0x10 | (uint)((float)(uVar38 << 0xd) * fVar26);
    puVar32 = puVar32 + 4;
  } while (puVar32 < puVar31);
  return param_2 + 5;
}

// VVM_Exec1null_iasf @ 148dc6770

uchar * __cdecl
VectorVM::Runtime::VVM_Exec1null_iasf
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  return param_2;
}

// VVM_Exec1null_random @ 148dc6780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar * __cdecl
VectorVM::Runtime::VVM_Exec1null_random
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  float fVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  float fVar33;
  
  iVar13 = _UNK_151cf02dc;
  iVar12 = _UNK_151cf02d8;
  iVar11 = _UNK_151cf02d4;
  iVar10 = ___xmm_000587c5000587c5000587c5000587c5;
  fVar5 = VVMConstVec4_One4[3];
  fVar4 = VVMConstVec4_One4[2];
  fVar3 = VVMConstVec4_One4[1];
  fVar2 = VVMConstVec4_One4[0];
  uVar32 = _UNK_15076b1fc;
  uVar28 = _UNK_15076b1f8;
  uVar24 = _UNK_15076b1f4;
  uVar21 = ___xmm_3f8000003f8000003f8000003f800000;
  pfVar18 = (float *)param_3->RegPtrTable[*(ushort *)(param_2 + 2)];
  pfVar17 = (float *)param_3->RegPtrTable[*(ushort *)param_2];
  bVar1 = param_3->RegIncTable[*(ushort *)param_2];
  if (param_1) {
    pfVar16 = pfVar18 + (longlong)param_5 * 4;
    do {
      fVar9 = VVMConstVec4_One4[3];
      fVar8 = VVMConstVec4_One4[2];
      fVar7 = VVMConstVec4_One4[1];
      fVar6 = VVMConstVec4_One4[0];
      fVar2 = *pfVar17;
      fVar3 = pfVar17[1];
      fVar4 = pfVar17[2];
      fVar5 = pfVar17[3];
      pfVar17 = (float *)((longlong)pfVar17 + (ulonglong)bVar1);
      uVar19 = *(uint *)((longlong)&param_3->RandState + 0x40);
      uVar22 = *(uint *)((longlong)&param_3->RandState + 0x44);
      uVar26 = *(uint *)((longlong)&param_3->RandState + 0x48);
      uVar30 = *(uint *)((longlong)&param_3->RandState + 0x4c);
      uVar14 = *(undefined8 *)((longlong)&param_3->RandState + 0x20);
      uVar15 = *(undefined8 *)((longlong)&param_3->RandState + 0x28);
      iVar20 = *(int *)&param_3->RandState;
      iVar23 = *(int *)((longlong)&param_3->RandState + 4);
      iVar27 = *(int *)((longlong)&param_3->RandState + 8);
      iVar31 = *(int *)((longlong)&param_3->RandState + 0xc);
      *(undefined8 *)((longlong)&param_3->RandState + 0x40) =
           *(undefined8 *)((longlong)&param_3->RandState + 0x30);
      *(undefined8 *)((longlong)&param_3->RandState + 0x48) =
           *(undefined8 *)((longlong)&param_3->RandState + 0x38);
      *(undefined8 *)((longlong)&param_3->RandState + 0x20) =
           *(undefined8 *)((longlong)&param_3->RandState + 0x10);
      *(undefined8 *)((longlong)&param_3->RandState + 0x28) =
           *(undefined8 *)((longlong)&param_3->RandState + 0x18);
      uVar19 = uVar19 >> 2 ^ uVar19;
      uVar22 = uVar22 >> 2 ^ uVar22;
      uVar26 = uVar26 >> 2 ^ uVar26;
      uVar30 = uVar30 >> 2 ^ uVar30;
      *(undefined8 *)((longlong)&param_3->RandState + 0x30) = uVar14;
      *(undefined8 *)((longlong)&param_3->RandState + 0x38) = uVar15;
      *(int *)((longlong)&param_3->RandState + 0x10) = iVar20;
      *(int *)((longlong)&param_3->RandState + 0x14) = iVar23;
      *(int *)((longlong)&param_3->RandState + 0x18) = iVar27;
      *(int *)((longlong)&param_3->RandState + 0x1c) = iVar31;
      uVar19 = uVar19 << 1 ^ uVar19 ^ iVar20 << 4;
      uVar22 = uVar22 << 1 ^ uVar22 ^ iVar23 << 4;
      uVar26 = uVar26 << 1 ^ uVar26 ^ iVar27 << 4;
      uVar30 = uVar30 << 1 ^ uVar30 ^ iVar31 << 4;
      *(uint *)&param_3->RandState = uVar19;
      *(uint *)((longlong)&param_3->RandState + 4) = uVar22;
      *(uint *)((longlong)&param_3->RandState + 8) = uVar26;
      *(uint *)((longlong)&param_3->RandState + 0xc) = uVar30;
      iVar20 = iVar10 + *(int *)((longlong)&param_3->RandState + 0x50);
      iVar23 = iVar11 + *(int *)((longlong)&param_3->RandState + 0x54);
      iVar27 = iVar12 + *(int *)((longlong)&param_3->RandState + 0x58);
      iVar31 = iVar13 + *(int *)((longlong)&param_3->RandState + 0x5c);
      *(int *)((longlong)&param_3->RandState + 0x50) = iVar20;
      *(int *)((longlong)&param_3->RandState + 0x54) = iVar23;
      *(int *)((longlong)&param_3->RandState + 0x58) = iVar27;
      *(int *)((longlong)&param_3->RandState + 0x5c) = iVar31;
      *pfVar18 = ((float)(iVar20 + uVar19 >> 9 | uVar21) - fVar6) * fVar2;
      pfVar18[1] = ((float)(iVar23 + uVar22 >> 9 | uVar24) - fVar7) * fVar3;
      pfVar18[2] = ((float)(iVar27 + uVar26 >> 9 | uVar28) - fVar8) * fVar4;
      pfVar18[3] = ((float)(iVar31 + uVar30 >> 9 | uVar32) - fVar9) * fVar5;
      pfVar18 = pfVar18 + 4;
    } while (pfVar18 < pfVar16);
    return param_2 + 5;
  }
  fVar6 = *pfVar17;
  fVar7 = pfVar17[1];
  fVar8 = pfVar17[2];
  fVar9 = pfVar17[3];
  uVar21 = *(uint *)((longlong)&param_3->RandState + 0x40);
  uVar24 = *(uint *)((longlong)&param_3->RandState + 0x44);
  uVar28 = *(uint *)((longlong)&param_3->RandState + 0x48);
  uVar32 = *(uint *)((longlong)&param_3->RandState + 0x4c);
  uVar14 = *(undefined8 *)((longlong)&param_3->RandState + 0x20);
  uVar15 = *(undefined8 *)((longlong)&param_3->RandState + 0x28);
  iVar10 = *(int *)&param_3->RandState;
  iVar11 = *(int *)((longlong)&param_3->RandState + 4);
  iVar12 = *(int *)((longlong)&param_3->RandState + 8);
  iVar13 = *(int *)((longlong)&param_3->RandState + 0xc);
  *(undefined8 *)((longlong)&param_3->RandState + 0x40) =
       *(undefined8 *)((longlong)&param_3->RandState + 0x30);
  *(undefined8 *)((longlong)&param_3->RandState + 0x48) =
       *(undefined8 *)((longlong)&param_3->RandState + 0x38);
  *(undefined8 *)((longlong)&param_3->RandState + 0x20) =
       *(undefined8 *)((longlong)&param_3->RandState + 0x10);
  *(undefined8 *)((longlong)&param_3->RandState + 0x28) =
       *(undefined8 *)((longlong)&param_3->RandState + 0x18);
  uVar21 = uVar21 >> 2 ^ uVar21;
  uVar24 = uVar24 >> 2 ^ uVar24;
  uVar28 = uVar28 >> 2 ^ uVar28;
  uVar32 = uVar32 >> 2 ^ uVar32;
  *(undefined8 *)((longlong)&param_3->RandState + 0x30) = uVar14;
  *(undefined8 *)((longlong)&param_3->RandState + 0x38) = uVar15;
  *(int *)((longlong)&param_3->RandState + 0x10) = iVar10;
  *(int *)((longlong)&param_3->RandState + 0x14) = iVar11;
  *(int *)((longlong)&param_3->RandState + 0x18) = iVar12;
  *(int *)((longlong)&param_3->RandState + 0x1c) = iVar13;
  iVar31 = _UNK_151cf02dc;
  iVar27 = _UNK_151cf02d8;
  iVar23 = _UNK_151cf02d4;
  iVar20 = ___xmm_000587c5000587c5000587c5000587c5;
  uVar21 = uVar21 << 1 ^ uVar21 ^ iVar10 << 4;
  uVar24 = uVar24 << 1 ^ uVar24 ^ iVar11 << 4;
  uVar28 = uVar28 << 1 ^ uVar28 ^ iVar12 << 4;
  uVar32 = uVar32 << 1 ^ uVar32 ^ iVar13 << 4;
  *(uint *)&param_3->RandState = uVar21;
  *(uint *)((longlong)&param_3->RandState + 4) = uVar24;
  *(uint *)((longlong)&param_3->RandState + 8) = uVar28;
  *(uint *)((longlong)&param_3->RandState + 0xc) = uVar32;
  iVar20 = iVar20 + *(int *)((longlong)&param_3->RandState + 0x50);
  iVar23 = iVar23 + *(int *)((longlong)&param_3->RandState + 0x54);
  iVar27 = iVar27 + *(int *)((longlong)&param_3->RandState + 0x58);
  iVar31 = iVar31 + *(int *)((longlong)&param_3->RandState + 0x5c);
  *(int *)((longlong)&param_3->RandState + 0x50) = iVar20;
  *(int *)((longlong)&param_3->RandState + 0x54) = iVar23;
  *(int *)((longlong)&param_3->RandState + 0x58) = iVar27;
  *(int *)((longlong)&param_3->RandState + 0x5c) = iVar31;
  fVar25 = (float)(iVar23 + uVar24 >> 9 | _UNK_15076b1f4);
  fVar29 = (float)(iVar27 + uVar28 >> 9 | _UNK_15076b1f8);
  fVar33 = (float)(iVar31 + uVar32 >> 9 | _UNK_15076b1fc);
  *pfVar18 = ((float)(iVar20 + uVar21 >> 9 | ___xmm_3f8000003f8000003f8000003f800000) - fVar2) *
             fVar6;
  pfVar18[1] = (fVar25 - fVar3) * fVar7;
  pfVar18[2] = (fVar29 - fVar4) * fVar8;
  pfVar18[3] = (fVar33 - fVar5) * fVar9;
  return param_2 + 5;
}

// VVM_Exec1null_random_2x @ 148dc6960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar * __cdecl
VectorVM::Runtime::VVM_Exec1null_random_2x
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  byte bVar1;
  uchar **ppuVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  float fVar52;
  int iVar53;
  float fVar54;
  int iVar55;
  float fVar56;
  int iVar57;
  float fVar58;
  
  iVar57 = _UNK_151cf02dc;
  iVar55 = _UNK_151cf02d8;
  iVar53 = _UNK_151cf02d4;
  iVar51 = ___xmm_000587c5000587c5000587c5000587c5;
  fVar6 = VVMConstVec4_One4[3];
  fVar5 = VVMConstVec4_One4[2];
  fVar4 = VVMConstVec4_One4[1];
  fVar3 = VVMConstVec4_One4[0];
  uVar38 = _UNK_15076b1fc;
  uVar35 = _UNK_15076b1f8;
  uVar32 = _UNK_15076b1f4;
  uVar29 = ___xmm_3f8000003f8000003f8000003f800000;
  ppuVar2 = param_3->RegPtrTable;
  pfVar24 = (float *)ppuVar2[*(ushort *)param_2];
  pfVar26 = (float *)ppuVar2[*(ushort *)(param_2 + 2)];
  pfVar25 = (float *)ppuVar2[*(ushort *)(param_2 + 4)];
  bVar1 = param_3->RegIncTable[*(ushort *)param_2];
  if (param_1) {
    pfVar23 = pfVar26 + (longlong)param_5 * 4;
    do {
      fVar21 = VVMConstVec4_One4[3];
      fVar19 = VVMConstVec4_One4[2];
      fVar13 = VVMConstVec4_One4[1];
      fVar11 = VVMConstVec4_One4[0];
      fVar3 = *pfVar24;
      fVar4 = pfVar24[1];
      fVar5 = pfVar24[2];
      fVar6 = pfVar24[3];
      pfVar24 = (float *)((longlong)pfVar24 + (ulonglong)bVar1);
      uVar27 = *(uint *)((longlong)&param_3->RandState + 0x40);
      uVar30 = *(uint *)((longlong)&param_3->RandState + 0x44);
      uVar33 = *(uint *)((longlong)&param_3->RandState + 0x48);
      uVar36 = *(uint *)((longlong)&param_3->RandState + 0x4c);
      iVar7 = *(int *)&param_3->RandState;
      iVar8 = *(int *)((longlong)&param_3->RandState + 4);
      iVar9 = *(int *)((longlong)&param_3->RandState + 8);
      iVar10 = *(int *)((longlong)&param_3->RandState + 0xc);
      uVar28 = *(uint *)((longlong)&param_3->RandState + 0x30);
      uVar31 = *(uint *)((longlong)&param_3->RandState + 0x34);
      uVar34 = *(uint *)((longlong)&param_3->RandState + 0x38);
      uVar37 = *(uint *)((longlong)&param_3->RandState + 0x3c);
      uVar15 = *(undefined8 *)((longlong)&param_3->RandState + 0x20);
      uVar16 = *(undefined8 *)((longlong)&param_3->RandState + 0x28);
      uVar17 = *(undefined8 *)((longlong)&param_3->RandState + 0x10);
      uVar18 = *(undefined8 *)((longlong)&param_3->RandState + 0x18);
      *(uint *)((longlong)&param_3->RandState + 0x40) = uVar28;
      *(uint *)((longlong)&param_3->RandState + 0x44) = uVar31;
      *(uint *)((longlong)&param_3->RandState + 0x48) = uVar34;
      *(uint *)((longlong)&param_3->RandState + 0x4c) = uVar37;
      *(undefined8 *)((longlong)&param_3->RandState + 0x30) = uVar15;
      *(undefined8 *)((longlong)&param_3->RandState + 0x38) = uVar16;
      *(undefined8 *)((longlong)&param_3->RandState + 0x20) = uVar17;
      *(undefined8 *)((longlong)&param_3->RandState + 0x28) = uVar18;
      *(int *)((longlong)&param_3->RandState + 0x10) = iVar7;
      *(int *)((longlong)&param_3->RandState + 0x14) = iVar8;
      *(int *)((longlong)&param_3->RandState + 0x18) = iVar9;
      *(int *)((longlong)&param_3->RandState + 0x1c) = iVar10;
      uVar27 = uVar27 >> 2 ^ uVar27;
      uVar30 = uVar30 >> 2 ^ uVar30;
      uVar33 = uVar33 >> 2 ^ uVar33;
      uVar36 = uVar36 >> 2 ^ uVar36;
      uVar39 = uVar27 << 1 ^ uVar27 ^ iVar7 << 4;
      uVar40 = uVar30 << 1 ^ uVar30 ^ iVar8 << 4;
      uVar41 = uVar33 << 1 ^ uVar33 ^ iVar9 << 4;
      uVar42 = uVar36 << 1 ^ uVar36 ^ iVar10 << 4;
      *(uint *)&param_3->RandState = uVar39;
      *(uint *)((longlong)&param_3->RandState + 4) = uVar40;
      *(uint *)((longlong)&param_3->RandState + 8) = uVar41;
      *(uint *)((longlong)&param_3->RandState + 0xc) = uVar42;
      iVar47 = iVar51 + *(int *)((longlong)&param_3->RandState + 0x50);
      iVar48 = iVar53 + *(int *)((longlong)&param_3->RandState + 0x54);
      iVar49 = iVar55 + *(int *)((longlong)&param_3->RandState + 0x58);
      iVar50 = iVar57 + *(int *)((longlong)&param_3->RandState + 0x5c);
      *(int *)((longlong)&param_3->RandState + 0x50) = iVar47;
      *(int *)((longlong)&param_3->RandState + 0x54) = iVar48;
      *(int *)((longlong)&param_3->RandState + 0x58) = iVar49;
      *(int *)((longlong)&param_3->RandState + 0x5c) = iVar50;
      fVar22 = VVMConstVec4_One4[3];
      fVar20 = VVMConstVec4_One4[2];
      fVar14 = VVMConstVec4_One4[1];
      fVar12 = VVMConstVec4_One4[0];
      *(uint *)((longlong)&param_3->RandState + 0x10) = uVar39;
      *(uint *)((longlong)&param_3->RandState + 0x14) = uVar40;
      *(uint *)((longlong)&param_3->RandState + 0x18) = uVar41;
      *(uint *)((longlong)&param_3->RandState + 0x1c) = uVar42;
      *(undefined8 *)((longlong)&param_3->RandState + 0x40) = uVar15;
      *(undefined8 *)((longlong)&param_3->RandState + 0x48) = uVar16;
      *(undefined8 *)((longlong)&param_3->RandState + 0x30) = uVar17;
      *(undefined8 *)((longlong)&param_3->RandState + 0x38) = uVar18;
      *(int *)((longlong)&param_3->RandState + 0x20) = iVar7;
      *(int *)((longlong)&param_3->RandState + 0x24) = iVar8;
      *(int *)((longlong)&param_3->RandState + 0x28) = iVar9;
      *(int *)((longlong)&param_3->RandState + 0x2c) = iVar10;
      uVar28 = uVar28 >> 2 ^ uVar28;
      uVar31 = uVar31 >> 2 ^ uVar31;
      uVar34 = uVar34 >> 2 ^ uVar34;
      uVar37 = uVar37 >> 2 ^ uVar37;
      uVar27 = uVar28 << 1 ^ uVar28 ^ uVar39 << 4;
      uVar30 = uVar31 << 1 ^ uVar31 ^ uVar40 << 4;
      uVar33 = uVar34 << 1 ^ uVar34 ^ uVar41 << 4;
      uVar36 = uVar37 << 1 ^ uVar37 ^ uVar42 << 4;
      *(uint *)&param_3->RandState = uVar27;
      *(uint *)((longlong)&param_3->RandState + 4) = uVar30;
      *(uint *)((longlong)&param_3->RandState + 8) = uVar33;
      *(uint *)((longlong)&param_3->RandState + 0xc) = uVar36;
      *(int *)((longlong)&param_3->RandState + 0x50) = iVar47 + iVar51;
      *(int *)((longlong)&param_3->RandState + 0x54) = iVar48 + iVar53;
      *(int *)((longlong)&param_3->RandState + 0x58) = iVar49 + iVar55;
      *(int *)((longlong)&param_3->RandState + 0x5c) = iVar50 + iVar57;
      *pfVar26 = ((float)(iVar47 + uVar39 >> 9 | uVar29) - fVar11) * fVar3;
      pfVar26[1] = ((float)(iVar48 + uVar40 >> 9 | uVar32) - fVar13) * fVar4;
      pfVar26[2] = ((float)(iVar49 + uVar41 >> 9 | uVar35) - fVar19) * fVar5;
      pfVar26[3] = ((float)(iVar50 + uVar42 >> 9 | uVar38) - fVar21) * fVar6;
      pfVar26 = pfVar26 + 4;
      *pfVar25 = ((float)(iVar47 + iVar51 + uVar27 >> 9 | uVar29) - fVar12) * fVar3;
      pfVar25[1] = ((float)(iVar48 + iVar53 + uVar30 >> 9 | uVar32) - fVar14) * fVar4;
      pfVar25[2] = ((float)(iVar49 + iVar55 + uVar33 >> 9 | uVar35) - fVar20) * fVar5;
      pfVar25[3] = ((float)(iVar50 + iVar57 + uVar36 >> 9 | uVar38) - fVar22) * fVar6;
      pfVar25 = pfVar25 + 4;
    } while (pfVar26 < pfVar23);
  }
  else {
    fVar11 = *pfVar24;
    fVar12 = pfVar24[1];
    fVar13 = pfVar24[2];
    fVar14 = pfVar24[3];
    uVar29 = *(uint *)((longlong)&param_3->RandState + 0x40);
    uVar32 = *(uint *)((longlong)&param_3->RandState + 0x44);
    uVar35 = *(uint *)((longlong)&param_3->RandState + 0x48);
    uVar38 = *(uint *)((longlong)&param_3->RandState + 0x4c);
    iVar7 = *(int *)&param_3->RandState;
    iVar8 = *(int *)((longlong)&param_3->RandState + 4);
    iVar9 = *(int *)((longlong)&param_3->RandState + 8);
    iVar10 = *(int *)((longlong)&param_3->RandState + 0xc);
    uVar27 = *(uint *)((longlong)&param_3->RandState + 0x30);
    uVar30 = *(uint *)((longlong)&param_3->RandState + 0x34);
    uVar33 = *(uint *)((longlong)&param_3->RandState + 0x38);
    uVar36 = *(uint *)((longlong)&param_3->RandState + 0x3c);
    uVar15 = *(undefined8 *)((longlong)&param_3->RandState + 0x20);
    uVar16 = *(undefined8 *)((longlong)&param_3->RandState + 0x28);
    uVar17 = *(undefined8 *)((longlong)&param_3->RandState + 0x10);
    uVar18 = *(undefined8 *)((longlong)&param_3->RandState + 0x18);
    *(uint *)((longlong)&param_3->RandState + 0x40) = uVar27;
    *(uint *)((longlong)&param_3->RandState + 0x44) = uVar30;
    *(uint *)((longlong)&param_3->RandState + 0x48) = uVar33;
    *(uint *)((longlong)&param_3->RandState + 0x4c) = uVar36;
    *(undefined8 *)((longlong)&param_3->RandState + 0x30) = uVar15;
    *(undefined8 *)((longlong)&param_3->RandState + 0x38) = uVar16;
    *(undefined8 *)((longlong)&param_3->RandState + 0x20) = uVar17;
    *(undefined8 *)((longlong)&param_3->RandState + 0x28) = uVar18;
    *(int *)((longlong)&param_3->RandState + 0x10) = iVar7;
    *(int *)((longlong)&param_3->RandState + 0x14) = iVar8;
    *(int *)((longlong)&param_3->RandState + 0x18) = iVar9;
    *(int *)((longlong)&param_3->RandState + 0x1c) = iVar10;
    uVar29 = uVar29 >> 2 ^ uVar29;
    uVar32 = uVar32 >> 2 ^ uVar32;
    uVar35 = uVar35 >> 2 ^ uVar35;
    uVar38 = uVar38 >> 2 ^ uVar38;
    uVar29 = uVar29 << 1 ^ uVar29 ^ iVar7 << 4;
    uVar32 = uVar32 << 1 ^ uVar32 ^ iVar8 << 4;
    uVar35 = uVar35 << 1 ^ uVar35 ^ iVar9 << 4;
    uVar38 = uVar38 << 1 ^ uVar38 ^ iVar10 << 4;
    *(uint *)&param_3->RandState = uVar29;
    *(uint *)((longlong)&param_3->RandState + 4) = uVar32;
    *(uint *)((longlong)&param_3->RandState + 8) = uVar35;
    *(uint *)((longlong)&param_3->RandState + 0xc) = uVar38;
    iVar51 = iVar51 + *(int *)((longlong)&param_3->RandState + 0x50);
    iVar53 = iVar53 + *(int *)((longlong)&param_3->RandState + 0x54);
    iVar55 = iVar55 + *(int *)((longlong)&param_3->RandState + 0x58);
    iVar57 = iVar57 + *(int *)((longlong)&param_3->RandState + 0x5c);
    *(int *)((longlong)&param_3->RandState + 0x50) = iVar51;
    *(int *)((longlong)&param_3->RandState + 0x54) = iVar53;
    *(int *)((longlong)&param_3->RandState + 0x58) = iVar55;
    *(int *)((longlong)&param_3->RandState + 0x5c) = iVar57;
    fVar22 = VVMConstVec4_One4[3];
    fVar21 = VVMConstVec4_One4[2];
    fVar20 = VVMConstVec4_One4[1];
    fVar19 = VVMConstVec4_One4[0];
    iVar47 = iVar51 + ___xmm_000587c5000587c5000587c5000587c5;
    iVar48 = iVar53 + _UNK_151cf02d4;
    iVar49 = iVar55 + _UNK_151cf02d8;
    iVar50 = iVar57 + _UNK_151cf02dc;
    *(uint *)((longlong)&param_3->RandState + 0x10) = uVar29;
    *(uint *)((longlong)&param_3->RandState + 0x14) = uVar32;
    *(uint *)((longlong)&param_3->RandState + 0x18) = uVar35;
    *(uint *)((longlong)&param_3->RandState + 0x1c) = uVar38;
    *(undefined8 *)((longlong)&param_3->RandState + 0x40) = uVar15;
    *(undefined8 *)((longlong)&param_3->RandState + 0x48) = uVar16;
    *(undefined8 *)((longlong)&param_3->RandState + 0x30) = uVar17;
    *(undefined8 *)((longlong)&param_3->RandState + 0x38) = uVar18;
    *(int *)((longlong)&param_3->RandState + 0x20) = iVar7;
    *(int *)((longlong)&param_3->RandState + 0x24) = iVar8;
    *(int *)((longlong)&param_3->RandState + 0x28) = iVar9;
    *(int *)((longlong)&param_3->RandState + 0x2c) = iVar10;
    fVar43 = (float)(iVar51 + uVar29 >> 9 | ___xmm_3f8000003f8000003f8000003f800000);
    fVar44 = (float)(iVar53 + uVar32 >> 9 | _UNK_15076b1f4);
    fVar45 = (float)(iVar55 + uVar35 >> 9 | _UNK_15076b1f8);
    fVar46 = (float)(iVar57 + uVar38 >> 9 | _UNK_15076b1fc);
    uVar27 = uVar27 >> 2 ^ uVar27;
    uVar30 = uVar30 >> 2 ^ uVar30;
    uVar33 = uVar33 >> 2 ^ uVar33;
    uVar36 = uVar36 >> 2 ^ uVar36;
    uVar29 = uVar27 << 1 ^ uVar27 ^ uVar29 << 4;
    uVar32 = uVar30 << 1 ^ uVar30 ^ uVar32 << 4;
    uVar35 = uVar33 << 1 ^ uVar33 ^ uVar35 << 4;
    uVar38 = uVar36 << 1 ^ uVar36 ^ uVar38 << 4;
    *(uint *)&param_3->RandState = uVar29;
    *(uint *)((longlong)&param_3->RandState + 4) = uVar32;
    *(uint *)((longlong)&param_3->RandState + 8) = uVar35;
    *(uint *)((longlong)&param_3->RandState + 0xc) = uVar38;
    *(int *)((longlong)&param_3->RandState + 0x50) = iVar47;
    *(int *)((longlong)&param_3->RandState + 0x54) = iVar48;
    *(int *)((longlong)&param_3->RandState + 0x58) = iVar49;
    *(int *)((longlong)&param_3->RandState + 0x5c) = iVar50;
    fVar52 = (float)(iVar47 + uVar29 >> 9 | ___xmm_3f8000003f8000003f8000003f800000);
    fVar54 = (float)(iVar48 + uVar32 >> 9 | _UNK_15076b1f4);
    fVar56 = (float)(iVar49 + uVar35 >> 9 | _UNK_15076b1f8);
    fVar58 = (float)(iVar50 + uVar38 >> 9 | _UNK_15076b1fc);
    *pfVar26 = (fVar43 - fVar3) * fVar11;
    pfVar26[1] = (fVar44 - fVar4) * fVar12;
    pfVar26[2] = (fVar45 - fVar5) * fVar13;
    pfVar26[3] = (fVar46 - fVar6) * fVar14;
    *pfVar25 = (fVar52 - fVar19) * fVar11;
    pfVar25[1] = (fVar54 - fVar20) * fVar12;
    pfVar25[2] = (fVar56 - fVar21) * fVar13;
    pfVar25[3] = (fVar58 - fVar22) * fVar14;
  }
  return param_2 + 7;
}

// VVM_Exec1null_randomi @ 148dc6cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar * __cdecl
VectorVM::Runtime::VVM_Exec1null_randomi
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uchar *puVar16;
  float *pfVar17;
  uchar *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  float fVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  float fVar33;
  
  iVar13 = _UNK_151cf02dc;
  iVar12 = _UNK_151cf02d8;
  iVar11 = _UNK_151cf02d4;
  iVar10 = ___xmm_000587c5000587c5000587c5000587c5;
  fVar5 = VVMConstVec4_One4[3];
  fVar4 = VVMConstVec4_One4[2];
  fVar3 = VVMConstVec4_One4[1];
  fVar2 = VVMConstVec4_One4[0];
  uVar32 = _UNK_15076b1fc;
  uVar28 = _UNK_15076b1f8;
  uVar24 = _UNK_15076b1f4;
  uVar21 = ___xmm_3f8000003f8000003f8000003f800000;
  puVar18 = param_3->RegPtrTable[*(ushort *)(param_2 + 2)];
  pfVar17 = (float *)param_3->RegPtrTable[*(ushort *)param_2];
  bVar1 = param_3->RegIncTable[*(ushort *)param_2];
  if (param_1) {
    puVar16 = puVar18 + (longlong)param_5 * 0x10;
    do {
      fVar9 = VVMConstVec4_One4[3];
      fVar8 = VVMConstVec4_One4[2];
      fVar7 = VVMConstVec4_One4[1];
      fVar6 = VVMConstVec4_One4[0];
      fVar2 = *pfVar17;
      fVar3 = pfVar17[1];
      fVar4 = pfVar17[2];
      fVar5 = pfVar17[3];
      pfVar17 = (float *)((longlong)pfVar17 + (ulonglong)bVar1);
      puVar18 = puVar18 + 0x10;
      uVar19 = *(uint *)((longlong)&param_3->RandState + 0x40);
      uVar22 = *(uint *)((longlong)&param_3->RandState + 0x44);
      uVar26 = *(uint *)((longlong)&param_3->RandState + 0x48);
      uVar30 = *(uint *)((longlong)&param_3->RandState + 0x4c);
      uVar14 = *(undefined8 *)((longlong)&param_3->RandState + 0x20);
      uVar15 = *(undefined8 *)((longlong)&param_3->RandState + 0x28);
      iVar20 = *(int *)&param_3->RandState;
      iVar23 = *(int *)((longlong)&param_3->RandState + 4);
      iVar27 = *(int *)((longlong)&param_3->RandState + 8);
      iVar31 = *(int *)((longlong)&param_3->RandState + 0xc);
      *(undefined8 *)((longlong)&param_3->RandState + 0x40) =
           *(undefined8 *)((longlong)&param_3->RandState + 0x30);
      *(undefined8 *)((longlong)&param_3->RandState + 0x48) =
           *(undefined8 *)((longlong)&param_3->RandState + 0x38);
      *(undefined8 *)((longlong)&param_3->RandState + 0x20) =
           *(undefined8 *)((longlong)&param_3->RandState + 0x10);
      *(undefined8 *)((longlong)&param_3->RandState + 0x28) =
           *(undefined8 *)((longlong)&param_3->RandState + 0x18);
      *(undefined8 *)((longlong)&param_3->RandState + 0x30) = uVar14;
      *(undefined8 *)((longlong)&param_3->RandState + 0x38) = uVar15;
      uVar19 = uVar19 >> 2 ^ uVar19;
      uVar22 = uVar22 >> 2 ^ uVar22;
      uVar26 = uVar26 >> 2 ^ uVar26;
      uVar30 = uVar30 >> 2 ^ uVar30;
      *(int *)((longlong)&param_3->RandState + 0x10) = iVar20;
      *(int *)((longlong)&param_3->RandState + 0x14) = iVar23;
      *(int *)((longlong)&param_3->RandState + 0x18) = iVar27;
      *(int *)((longlong)&param_3->RandState + 0x1c) = iVar31;
      uVar19 = uVar19 << 1 ^ uVar19 ^ iVar20 << 4;
      uVar22 = uVar22 << 1 ^ uVar22 ^ iVar23 << 4;
      uVar26 = uVar26 << 1 ^ uVar26 ^ iVar27 << 4;
      uVar30 = uVar30 << 1 ^ uVar30 ^ iVar31 << 4;
      *(uint *)&param_3->RandState = uVar19;
      *(uint *)((longlong)&param_3->RandState + 4) = uVar22;
      *(uint *)((longlong)&param_3->RandState + 8) = uVar26;
      *(uint *)((longlong)&param_3->RandState + 0xc) = uVar30;
      iVar20 = *(int *)((longlong)&param_3->RandState + 0x50) + iVar10;
      iVar23 = *(int *)((longlong)&param_3->RandState + 0x54) + iVar11;
      iVar27 = *(int *)((longlong)&param_3->RandState + 0x58) + iVar12;
      iVar31 = *(int *)((longlong)&param_3->RandState + 0x5c) + iVar13;
      *(int *)((longlong)&param_3->RandState + 0x50) = iVar20;
      *(int *)((longlong)&param_3->RandState + 0x54) = iVar23;
      *(int *)((longlong)&param_3->RandState + 0x58) = iVar27;
      *(int *)((longlong)&param_3->RandState + 0x5c) = iVar31;
      *pfVar17 = (float)(int)(((float)(iVar20 + uVar19 >> 9 | uVar21) - fVar6) * fVar2);
      pfVar17[1] = (float)(int)(((float)(iVar23 + uVar22 >> 9 | uVar24) - fVar7) * fVar3);
      pfVar17[2] = (float)(int)(((float)(iVar27 + uVar26 >> 9 | uVar28) - fVar8) * fVar4);
      pfVar17[3] = (float)(int)(((float)(iVar31 + uVar30 >> 9 | uVar32) - fVar9) * fVar5);
    } while (puVar18 < puVar16);
    return param_2 + 5;
  }
  fVar6 = *pfVar17;
  fVar7 = pfVar17[1];
  fVar8 = pfVar17[2];
  fVar9 = pfVar17[3];
  uVar21 = *(uint *)((longlong)&param_3->RandState + 0x40);
  uVar24 = *(uint *)((longlong)&param_3->RandState + 0x44);
  uVar28 = *(uint *)((longlong)&param_3->RandState + 0x48);
  uVar32 = *(uint *)((longlong)&param_3->RandState + 0x4c);
  uVar14 = *(undefined8 *)((longlong)&param_3->RandState + 0x20);
  uVar15 = *(undefined8 *)((longlong)&param_3->RandState + 0x28);
  iVar10 = *(int *)&param_3->RandState;
  iVar11 = *(int *)((longlong)&param_3->RandState + 4);
  iVar12 = *(int *)((longlong)&param_3->RandState + 8);
  iVar13 = *(int *)((longlong)&param_3->RandState + 0xc);
  *(undefined8 *)((longlong)&param_3->RandState + 0x40) =
       *(undefined8 *)((longlong)&param_3->RandState + 0x30);
  *(undefined8 *)((longlong)&param_3->RandState + 0x48) =
       *(undefined8 *)((longlong)&param_3->RandState + 0x38);
  *(undefined8 *)((longlong)&param_3->RandState + 0x20) =
       *(undefined8 *)((longlong)&param_3->RandState + 0x10);
  *(undefined8 *)((longlong)&param_3->RandState + 0x28) =
       *(undefined8 *)((longlong)&param_3->RandState + 0x18);
  uVar21 = uVar21 >> 2 ^ uVar21;
  uVar24 = uVar24 >> 2 ^ uVar24;
  uVar28 = uVar28 >> 2 ^ uVar28;
  uVar32 = uVar32 >> 2 ^ uVar32;
  *(undefined8 *)((longlong)&param_3->RandState + 0x30) = uVar14;
  *(undefined8 *)((longlong)&param_3->RandState + 0x38) = uVar15;
  *(int *)((longlong)&param_3->RandState + 0x10) = iVar10;
  *(int *)((longlong)&param_3->RandState + 0x14) = iVar11;
  *(int *)((longlong)&param_3->RandState + 0x18) = iVar12;
  *(int *)((longlong)&param_3->RandState + 0x1c) = iVar13;
  iVar31 = _UNK_151cf02dc;
  iVar27 = _UNK_151cf02d8;
  iVar23 = _UNK_151cf02d4;
  iVar20 = ___xmm_000587c5000587c5000587c5000587c5;
  uVar21 = uVar21 << 1 ^ uVar21 ^ iVar10 << 4;
  uVar24 = uVar24 << 1 ^ uVar24 ^ iVar11 << 4;
  uVar28 = uVar28 << 1 ^ uVar28 ^ iVar12 << 4;
  uVar32 = uVar32 << 1 ^ uVar32 ^ iVar13 << 4;
  *(uint *)&param_3->RandState = uVar21;
  *(uint *)((longlong)&param_3->RandState + 4) = uVar24;
  *(uint *)((longlong)&param_3->RandState + 8) = uVar28;
  *(uint *)((longlong)&param_3->RandState + 0xc) = uVar32;
  iVar20 = iVar20 + *(int *)((longlong)&param_3->RandState + 0x50);
  iVar23 = iVar23 + *(int *)((longlong)&param_3->RandState + 0x54);
  iVar27 = iVar27 + *(int *)((longlong)&param_3->RandState + 0x58);
  iVar31 = iVar31 + *(int *)((longlong)&param_3->RandState + 0x5c);
  *(int *)((longlong)&param_3->RandState + 0x50) = iVar20;
  *(int *)((longlong)&param_3->RandState + 0x54) = iVar23;
  *(int *)((longlong)&param_3->RandState + 0x58) = iVar27;
  *(int *)((longlong)&param_3->RandState + 0x5c) = iVar31;
  fVar25 = (float)(iVar23 + uVar24 >> 9 | _UNK_15076b1f4);
  fVar29 = (float)(iVar27 + uVar28 >> 9 | _UNK_15076b1f8);
  fVar33 = (float)(iVar31 + uVar32 >> 9 | _UNK_15076b1fc);
  *pfVar17 = (float)(int)(((float)(iVar20 + uVar21 >> 9 | ___xmm_3f8000003f8000003f8000003f800000) -
                          fVar2) * fVar6);
  pfVar17[1] = (float)(int)((fVar25 - fVar3) * fVar7);
  pfVar17[2] = (float)(int)((fVar29 - fVar4) * fVar8);
  pfVar17[3] = (float)(int)((fVar33 - fVar5) * fVar9);
  return param_2 + 5;
}

// VVM_Exec1null_sin_cos @ 148dc6eb0

uchar * __cdecl
VectorVM::Runtime::VVM_Exec1null_sin_cos
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  uchar **ppuVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar *puVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM1_Qb;
  
  ppuVar1 = param_3->RegPtrTable;
  if (param_1) {
    puVar2 = ppuVar1[*(ushort *)(param_2 + 2)];
    puVar4 = ppuVar1[*(ushort *)(param_2 + 4)];
    puVar3 = puVar2 + (longlong)param_5 * 0x10;
    do {
      __vdecl_sincosf4();
      *(undefined8 *)puVar4 = in_XMM1_Qa;
      *(undefined8 *)(puVar4 + 8) = in_XMM1_Qb;
      puVar4 = puVar4 + 0x10;
      *(undefined4 *)puVar2 = extraout_XMM0_Da;
      *(undefined4 *)(puVar2 + 4) = extraout_XMM0_Db;
      *(undefined4 *)(puVar2 + 8) = extraout_XMM0_Dc;
      *(undefined4 *)(puVar2 + 0xc) = extraout_XMM0_Dd;
      puVar2 = puVar2 + 0x10;
    } while (puVar2 < puVar3);
    return param_2 + 7;
  }
  puVar4 = ppuVar1[*(ushort *)(param_2 + 2)];
  puVar2 = ppuVar1[*(ushort *)(param_2 + 4)];
  __vdecl_sincosf4();
  *(undefined8 *)puVar2 = in_XMM1_Qa;
  *(undefined8 *)(puVar2 + 8) = in_XMM1_Qb;
  *(undefined4 *)puVar4 = extraout_XMM0_Da_00;
  *(undefined4 *)(puVar4 + 4) = extraout_XMM0_Db_00;
  *(undefined4 *)(puVar4 + 8) = extraout_XMM0_Dc_00;
  *(undefined4 *)(puVar4 + 0xc) = extraout_XMM0_Dd_00;
  return param_2 + 7;
}

// VVM_Exec2f_add @ 148dc6f80

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_add
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2f_atan2 @ 148dc6f90

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_atan2
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *extraout_RAX;
  
  __vdecl_atan2f4();
  return extraout_RAX;
}

// VVM_Exec2f_bit_and_i2f @ 148dc6fb0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_bit_and_i2f
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2f_cmpeq @ 148dc6fd0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_cmpeq
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2f_cmpge @ 148dc6fe0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_cmpge
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2f_cmpgt @ 148dc6ff0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_cmpgt
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2f_cmple @ 148dc7000

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_cmple
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2f_cmplt @ 148dc7010

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_cmplt
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2f_cmpneq @ 148dc7020

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_cmpneq
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2f_div @ 148dc7030

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_div
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  divps(auVar1,(undefined1  [16])*param_2);
  return in_RAX;
}

// VVM_Exec2f_fmod @ 148dc7060

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_fmod
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *extraout_RAX;
  
  __vdecl_fmodf4();
  return extraout_RAX;
}

// VVM_Exec2f_i2f_div0 @ 148dc70b0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_i2f_div0
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = (float)*(int *)&param_1->RegisterData;
  auVar1._4_4_ = (float)*(int *)((longlong)&param_1->RegisterData + 4);
  auVar1._8_4_ = (float)*(int *)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  auVar1._12_4_ =
       (float)*(int *)((longlong)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet + 4);
  divps(auVar1,(undefined1  [16])*param_2);
  return in_RAX;
}

// VVM_Exec2f_i2f_div1 @ 148dc70e0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_i2f_div1
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  
  auVar1._4_4_ = (float)*(int *)((longlong)&param_1->RegisterData + 4);
  auVar1._0_4_ = (float)*(int *)&param_1->RegisterData;
  auVar1._8_4_ = (float)*(int *)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  auVar1._12_4_ =
       (float)*(int *)((longlong)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet + 4);
  divps((undefined1  [16])*param_2,auVar1);
  return in_RAX;
}

// VVM_Exec2f_i2f_mul @ 148dc7110

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_i2f_mul
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2f_max @ 148dc7120

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_max
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  maxps(auVar1,(undefined1  [16])*param_2);
  return in_RAX;
}

// VVM_Exec2f_min @ 148dc7130

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_min
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  minps(auVar1,(undefined1  [16])*param_2);
  return in_RAX;
}

// VVM_Exec2f_mul @ 148dc7140

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_mul
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2f_mul_2x @ 148dc7150

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_mul_2x
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2f_neg_cmplt @ 148dc7160

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_neg_cmplt
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2f_pow @ 148dc7180

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_pow
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *extraout_RAX;
  
  __vdecl_powf4();
  return extraout_RAX;
}

// VVM_Exec2f_step @ 148dc71c0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_step
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2f_sub @ 148dc71f0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_sub
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2f_sub_neg @ 148dc7200

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec2f_sub_neg
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_addi @ 148dc7220

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_addi
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_bit_and @ 148dc7230

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_bit_and
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_bit_lshift @ 148dc7240

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_bit_lshift
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *p_Var1;
  int local_38 [4];
  __m128i local_28;
  undefined1 local_18 [16];
  
  local_18._0_8_ = param_1->RegisterData;
  local_18._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  local_28 = *param_2;
  if (4 < __isa_available) {
    vpsllvd_avx2(local_18,(undefined1  [16])*param_2);
    return (__m128i *)0x0;
  }
  p_Var1 = (__m128i *)0x0;
  do {
    *(int *)((longlong)local_38 + (longlong)p_Var1) =
         *(int *)(local_18 + (longlong)p_Var1) <<
         ((byte)*(undefined4 *)(local_28.m128i_i8 + (longlong)p_Var1) & 0x1f);
    p_Var1 = (__m128i *)(p_Var1->m128i_i8 + 4);
  } while ((longlong)p_Var1 < 0x10);
  return p_Var1;
}

// VVM_Exec2i_bit_or @ 148dc72b0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_bit_or
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_bit_rshift @ 148dc72c0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_bit_rshift
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *p_Var1;
  uint local_38 [4];
  undefined1 local_28 [16];
  __m128i local_18;
  
  local_28._0_8_ = param_1->RegisterData;
  local_28._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  local_18 = *param_2;
  if (4 < __isa_available) {
    vpsrlvd_avx2(local_28,(undefined1  [16])*param_2);
    return (__m128i *)0x0;
  }
  p_Var1 = (__m128i *)0x0;
  do {
    *(uint *)((longlong)local_38 + (longlong)p_Var1) =
         *(uint *)(local_28 + (longlong)p_Var1) >>
         ((byte)*(undefined4 *)(local_18.m128i_i8 + (longlong)p_Var1) & 0x1f);
    p_Var1 = (__m128i *)(p_Var1->m128i_i8 + 4);
  } while ((longlong)p_Var1 < 0x10);
  return p_Var1;
}

// VVM_Exec2i_bit_xor @ 148dc7330

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_bit_xor
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_cmpeqi @ 148dc7340

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_cmpeqi
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_cmpgei @ 148dc7350

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_cmpgei
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_cmpgti @ 148dc7370

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_cmpgti
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_cmplei @ 148dc7380

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_cmplei
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_cmplti @ 148dc73a0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_cmplti
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_cmpneqi @ 148dc73b0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_cmpneqi
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_div_f2i @ 148dc73d0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_div_f2i
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  undefined1 auVar1 [16];
  __m128i *in_RAX;
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  divps(auVar1,(undefined1  [16])*param_2);
  return in_RAX;
}

// VVM_Exec2i_divi @ 148dc7400

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_divi
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  __m128i *p_Var4;
  int iStack_10;
  int iStack_c;
  
  iVar1 = param_2->m128i_i32[2];
  iVar2 = param_2->m128i_i32[3];
  puVar3 = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  if (iVar1 == 0) {
    p_Var4 = (__m128i *)0x0;
  }
  else {
    iStack_10 = (int)puVar3;
    if ((iVar1 == -1) && (iStack_10 == -0x80000000)) {
      p_Var4 = (__m128i *)0x7fffffff;
    }
    else {
      p_Var4 = (__m128i *)((longlong)iStack_10 / (longlong)iVar1 & 0xffffffff);
    }
  }
  if (iVar2 == 0) {
    return p_Var4;
  }
  iStack_c = (int)((ulonglong)puVar3 >> 0x20);
  if ((iVar2 == -1) && (iStack_c == -0x80000000)) {
    return (__m128i *)0x80000000;
  }
  return (__m128i *)((longlong)iStack_c / (longlong)iVar2 & 0xffffffff);
}

// VVM_Exec2i_f2i_addi @ 148dc7500

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_f2i_addi
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_f2i_maxi @ 148dc7510

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_f2i_maxi
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_logic_and @ 148dc7530

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_logic_and
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_logic_or @ 148dc7540

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_logic_or
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_logic_xor @ 148dc7550

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_logic_xor
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_max_f2i @ 148dc7560

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_max_f2i
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  undefined1 auVar1 [16];
  __m128i *in_RAX;
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  maxps(auVar1,(undefined1  [16])*param_2);
  return in_RAX;
}

// VVM_Exec2i_maxi @ 148dc7580

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_maxi
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_mini @ 148dc75a0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_mini
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2i_muli @ 148dc75c0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_muli
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  undefined1 auVar1 [16];
  __m128i *in_RAX;
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  pmulld(auVar1,(undefined1  [16])*param_2);
  return in_RAX;
}

// VVM_Exec2i_subi @ 148dc75e0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec2i_subi
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec2null_random_add @ 148dc75f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar * __cdecl
VectorVM::Runtime::VVM_Exec2null_random_add
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  byte bVar1;
  byte bVar2;
  uchar **ppuVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  float fVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  float fVar36;
  uint uVar37;
  int iVar38;
  uint uVar39;
  float fVar40;
  
  iVar19 = _UNK_151cf02dc;
  iVar18 = _UNK_151cf02d8;
  iVar17 = _UNK_151cf02d4;
  iVar16 = ___xmm_000587c5000587c5000587c5000587c5;
  fVar7 = VVMConstVec4_One4[3];
  fVar6 = VVMConstVec4_One4[2];
  fVar5 = VVMConstVec4_One4[1];
  fVar4 = VVMConstVec4_One4[0];
  uVar39 = _UNK_15076b1fc;
  uVar35 = _UNK_15076b1f8;
  uVar31 = _UNK_15076b1f4;
  uVar28 = ___xmm_3f8000003f8000003f8000003f800000;
  ppuVar3 = param_3->RegPtrTable;
  pfVar23 = (float *)ppuVar3[*(ushort *)param_2];
  pfVar24 = (float *)ppuVar3[*(ushort *)(param_2 + 2)];
  pfVar25 = (float *)ppuVar3[*(ushort *)(param_2 + 4)];
  bVar1 = param_3->RegIncTable[*(ushort *)param_2];
  bVar2 = param_3->RegIncTable[*(ushort *)(param_2 + 2)];
  if (param_1) {
    pfVar22 = pfVar25 + (longlong)param_5 * 4;
    do {
      fVar15 = VVMConstVec4_One4[3];
      fVar14 = VVMConstVec4_One4[2];
      fVar13 = VVMConstVec4_One4[1];
      fVar12 = VVMConstVec4_One4[0];
      fVar4 = *pfVar23;
      fVar5 = pfVar23[1];
      fVar6 = pfVar23[2];
      fVar7 = pfVar23[3];
      pfVar23 = (float *)((longlong)pfVar23 + (ulonglong)bVar1);
      fVar8 = *pfVar24;
      fVar9 = pfVar24[1];
      fVar10 = pfVar24[2];
      fVar11 = pfVar24[3];
      pfVar24 = (float *)((longlong)pfVar24 + (ulonglong)bVar2);
      uVar26 = *(uint *)((longlong)&param_3->RandState + 0x40);
      uVar29 = *(uint *)((longlong)&param_3->RandState + 0x44);
      uVar33 = *(uint *)((longlong)&param_3->RandState + 0x48);
      uVar37 = *(uint *)((longlong)&param_3->RandState + 0x4c);
      uVar20 = *(undefined8 *)((longlong)&param_3->RandState + 0x20);
      uVar21 = *(undefined8 *)((longlong)&param_3->RandState + 0x28);
      iVar27 = *(int *)&param_3->RandState;
      iVar30 = *(int *)((longlong)&param_3->RandState + 4);
      iVar34 = *(int *)((longlong)&param_3->RandState + 8);
      iVar38 = *(int *)((longlong)&param_3->RandState + 0xc);
      *(undefined8 *)((longlong)&param_3->RandState + 0x40) =
           *(undefined8 *)((longlong)&param_3->RandState + 0x30);
      *(undefined8 *)((longlong)&param_3->RandState + 0x48) =
           *(undefined8 *)((longlong)&param_3->RandState + 0x38);
      *(undefined8 *)((longlong)&param_3->RandState + 0x20) =
           *(undefined8 *)((longlong)&param_3->RandState + 0x10);
      *(undefined8 *)((longlong)&param_3->RandState + 0x28) =
           *(undefined8 *)((longlong)&param_3->RandState + 0x18);
      uVar26 = uVar26 >> 2 ^ uVar26;
      uVar29 = uVar29 >> 2 ^ uVar29;
      uVar33 = uVar33 >> 2 ^ uVar33;
      uVar37 = uVar37 >> 2 ^ uVar37;
      *(undefined8 *)((longlong)&param_3->RandState + 0x30) = uVar20;
      *(undefined8 *)((longlong)&param_3->RandState + 0x38) = uVar21;
      *(int *)((longlong)&param_3->RandState + 0x10) = iVar27;
      *(int *)((longlong)&param_3->RandState + 0x14) = iVar30;
      *(int *)((longlong)&param_3->RandState + 0x18) = iVar34;
      *(int *)((longlong)&param_3->RandState + 0x1c) = iVar38;
      uVar26 = uVar26 << 1 ^ uVar26 ^ iVar27 << 4;
      uVar29 = uVar29 << 1 ^ uVar29 ^ iVar30 << 4;
      uVar33 = uVar33 << 1 ^ uVar33 ^ iVar34 << 4;
      uVar37 = uVar37 << 1 ^ uVar37 ^ iVar38 << 4;
      *(uint *)&param_3->RandState = uVar26;
      *(uint *)((longlong)&param_3->RandState + 4) = uVar29;
      *(uint *)((longlong)&param_3->RandState + 8) = uVar33;
      *(uint *)((longlong)&param_3->RandState + 0xc) = uVar37;
      iVar27 = iVar16 + *(int *)((longlong)&param_3->RandState + 0x50);
      iVar30 = iVar17 + *(int *)((longlong)&param_3->RandState + 0x54);
      iVar34 = iVar18 + *(int *)((longlong)&param_3->RandState + 0x58);
      iVar38 = iVar19 + *(int *)((longlong)&param_3->RandState + 0x5c);
      *(int *)((longlong)&param_3->RandState + 0x50) = iVar27;
      *(int *)((longlong)&param_3->RandState + 0x54) = iVar30;
      *(int *)((longlong)&param_3->RandState + 0x58) = iVar34;
      *(int *)((longlong)&param_3->RandState + 0x5c) = iVar38;
      *pfVar25 = ((float)(iVar27 + uVar26 >> 9 | uVar28) - fVar12) * fVar4 + fVar8;
      pfVar25[1] = ((float)(iVar30 + uVar29 >> 9 | uVar31) - fVar13) * fVar5 + fVar9;
      pfVar25[2] = ((float)(iVar34 + uVar33 >> 9 | uVar35) - fVar14) * fVar6 + fVar10;
      pfVar25[3] = ((float)(iVar38 + uVar37 >> 9 | uVar39) - fVar15) * fVar7 + fVar11;
      pfVar25 = pfVar25 + 4;
    } while (pfVar25 < pfVar22);
  }
  else {
    fVar8 = *pfVar24;
    fVar9 = pfVar24[1];
    fVar10 = pfVar24[2];
    fVar11 = pfVar24[3];
    fVar12 = *pfVar23;
    fVar13 = pfVar23[1];
    fVar14 = pfVar23[2];
    fVar15 = pfVar23[3];
    uVar28 = *(uint *)((longlong)&param_3->RandState + 0x40);
    uVar31 = *(uint *)((longlong)&param_3->RandState + 0x44);
    uVar35 = *(uint *)((longlong)&param_3->RandState + 0x48);
    uVar39 = *(uint *)((longlong)&param_3->RandState + 0x4c);
    uVar20 = *(undefined8 *)((longlong)&param_3->RandState + 0x20);
    uVar21 = *(undefined8 *)((longlong)&param_3->RandState + 0x28);
    iVar16 = *(int *)&param_3->RandState;
    iVar17 = *(int *)((longlong)&param_3->RandState + 4);
    iVar18 = *(int *)((longlong)&param_3->RandState + 8);
    iVar19 = *(int *)((longlong)&param_3->RandState + 0xc);
    *(undefined8 *)((longlong)&param_3->RandState + 0x40) =
         *(undefined8 *)((longlong)&param_3->RandState + 0x30);
    *(undefined8 *)((longlong)&param_3->RandState + 0x48) =
         *(undefined8 *)((longlong)&param_3->RandState + 0x38);
    *(undefined8 *)((longlong)&param_3->RandState + 0x20) =
         *(undefined8 *)((longlong)&param_3->RandState + 0x10);
    *(undefined8 *)((longlong)&param_3->RandState + 0x28) =
         *(undefined8 *)((longlong)&param_3->RandState + 0x18);
    uVar28 = uVar28 >> 2 ^ uVar28;
    uVar31 = uVar31 >> 2 ^ uVar31;
    uVar35 = uVar35 >> 2 ^ uVar35;
    uVar39 = uVar39 >> 2 ^ uVar39;
    *(undefined8 *)((longlong)&param_3->RandState + 0x30) = uVar20;
    *(undefined8 *)((longlong)&param_3->RandState + 0x38) = uVar21;
    *(int *)((longlong)&param_3->RandState + 0x10) = iVar16;
    *(int *)((longlong)&param_3->RandState + 0x14) = iVar17;
    *(int *)((longlong)&param_3->RandState + 0x18) = iVar18;
    *(int *)((longlong)&param_3->RandState + 0x1c) = iVar19;
    iVar38 = _UNK_151cf02dc;
    iVar34 = _UNK_151cf02d8;
    iVar30 = _UNK_151cf02d4;
    iVar27 = ___xmm_000587c5000587c5000587c5000587c5;
    uVar28 = uVar28 << 1 ^ uVar28 ^ iVar16 << 4;
    uVar31 = uVar31 << 1 ^ uVar31 ^ iVar17 << 4;
    uVar35 = uVar35 << 1 ^ uVar35 ^ iVar18 << 4;
    uVar39 = uVar39 << 1 ^ uVar39 ^ iVar19 << 4;
    *(uint *)&param_3->RandState = uVar28;
    *(uint *)((longlong)&param_3->RandState + 4) = uVar31;
    *(uint *)((longlong)&param_3->RandState + 8) = uVar35;
    *(uint *)((longlong)&param_3->RandState + 0xc) = uVar39;
    iVar27 = iVar27 + *(int *)((longlong)&param_3->RandState + 0x50);
    iVar30 = iVar30 + *(int *)((longlong)&param_3->RandState + 0x54);
    iVar34 = iVar34 + *(int *)((longlong)&param_3->RandState + 0x58);
    iVar38 = iVar38 + *(int *)((longlong)&param_3->RandState + 0x5c);
    *(int *)((longlong)&param_3->RandState + 0x50) = iVar27;
    *(int *)((longlong)&param_3->RandState + 0x54) = iVar30;
    *(int *)((longlong)&param_3->RandState + 0x58) = iVar34;
    *(int *)((longlong)&param_3->RandState + 0x5c) = iVar38;
    fVar32 = (float)(iVar30 + uVar31 >> 9 | _UNK_15076b1f4);
    fVar36 = (float)(iVar34 + uVar35 >> 9 | _UNK_15076b1f8);
    fVar40 = (float)(iVar38 + uVar39 >> 9 | _UNK_15076b1fc);
    *pfVar25 = ((float)(iVar27 + uVar28 >> 9 | ___xmm_3f8000003f8000003f8000003f800000) - fVar4) *
               fVar12 + fVar8;
    pfVar25[1] = (fVar32 - fVar5) * fVar13 + fVar9;
    pfVar25[2] = (fVar36 - fVar6) * fVar14 + fVar10;
    pfVar25[3] = (fVar40 - fVar7) * fVar15 + fVar11;
  }
  return param_2 + 7;
}

// VVM_Exec3f_add_add @ 148dc7810

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_add_add
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_clamp @ 148dc7830

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_clamp
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  auVar1 = maxps(auVar1,(undefined1  [16])*param_2);
  minps(auVar1,(undefined1  [16])*param_3);
  return in_RAX;
}

// VVM_Exec3f_cmpeq_logic_and @ 148dc7850

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_cmpeq_logic_and
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_cmpeq_logic_or @ 148dc7870

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_cmpeq_logic_or
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_cmpge_logic_and @ 148dc7890

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_cmpge_logic_and
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_cmpge_logic_or @ 148dc78b0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_cmpge_logic_or
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_cmpgt_logic_and @ 148dc78d0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_cmpgt_logic_and
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_cmpgt_logic_or @ 148dc78f0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_cmpgt_logic_or
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_cmple_logic_and @ 148dc7910

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_cmple_logic_and
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_cmple_logic_or @ 148dc7930

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_cmple_logic_or
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_cmplt_logic_and @ 148dc7950

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_cmplt_logic_and
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_cmplt_logic_or @ 148dc7970

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_cmplt_logic_or
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_cmpne_logic_and @ 148dc7990

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_cmpne_logic_and
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_cmpne_logic_or @ 148dc79b0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_cmpne_logic_or
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_div_mul @ 148dc79d0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_div_mul
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  undefined1 auVar1 [16];
  __m128 *in_RAX;
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  divps(auVar1,(undefined1  [16])*param_2);
  return in_RAX;
}

// VVM_Exec3f_fmod_add @ 148dc7a00

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_fmod_add
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *extraout_RAX;
  
  __vdecl_fmodf4();
  return extraout_RAX;
}

// VVM_Exec3f_i2f_mad0 @ 148dc7a60

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_i2f_mad0
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_i2f_mad1 @ 148dc7a80

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_i2f_mad1
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_lerp @ 148dc7aa0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_lerp
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_mad @ 148dc7ac0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_mad
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_mad_sqrt @ 148dc7ae0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_mad_sqrt
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = *(float *)&param_1->RegisterData * param_2->m128_f32[0] + param_3->m128_f32[0];
  auVar1._4_4_ = *(float *)((longlong)&param_1->RegisterData + 4) * param_2->m128_f32[1] +
                 param_3->m128_f32[1];
  auVar1._8_4_ = *(float *)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet *
                 param_2->m128_f32[2] + param_3->m128_f32[2];
  auVar1._12_4_ =
       *(float *)((longlong)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet + 4) *
       param_2->m128_f32[3] + param_3->m128_f32[3];
  sqrtps(auVar1,auVar1);
  return in_RAX;
}

// VVM_Exec3f_mul_add @ 148dc7b00

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_mul_add
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_mul_max @ 148dc7b20

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_mul_max
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = *(float *)&param_1->RegisterData * param_2->m128_f32[0];
  auVar1._4_4_ = *(float *)((longlong)&param_1->RegisterData + 4) * param_2->m128_f32[1];
  auVar1._8_4_ = *(float *)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet *
                 param_2->m128_f32[2];
  auVar1._12_4_ =
       *(float *)((longlong)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet + 4) *
       param_2->m128_f32[3];
  maxps(auVar1,(undefined1  [16])*param_3);
  return in_RAX;
}

// VVM_Exec3f_mul_mul @ 148dc7b40

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_mul_mul
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_mul_sub0 @ 148dc7b60

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_mul_sub0
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_mul_sub1 @ 148dc7b80

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_mul_sub1
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_select @ 148dc7ba0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_select
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_sub_cmplt1 @ 148dc7bc0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_sub_cmplt1
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3f_sub_mul @ 148dc7be0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec3f_sub_mul
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4)

{
  __m128 *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3i_addi_bit_rshift @ 148dc7c00

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_addi_bit_rshift
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *p_Var1;
  uint local_38 [4];
  undefined1 local_28 [16];
  __m128i local_18;
  
  local_28._0_4_ = *(int *)&param_1->RegisterData + param_2->m128i_i32[0];
  local_28._4_4_ = *(int *)((longlong)&param_1->RegisterData + 4) + param_2->m128i_i32[1];
  local_28._8_4_ =
       *(int *)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet + param_2->m128i_i32[2];
  local_28._12_4_ =
       *(int *)((longlong)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet + 4) +
       param_2->m128i_i32[3];
  local_18 = *param_3;
  if (4 < __isa_available) {
    vpsrlvd_avx2(local_28,(undefined1  [16])*param_3);
    return (__m128i *)0x0;
  }
  p_Var1 = (__m128i *)0x0;
  do {
    *(uint *)((longlong)local_38 + (longlong)p_Var1) =
         *(uint *)(local_28 + (longlong)p_Var1) >>
         ((byte)*(undefined4 *)(local_18.m128i_i8 + (longlong)p_Var1) & 0x1f);
    p_Var1 = (__m128i *)(p_Var1->m128i_i8 + 4);
  } while ((longlong)p_Var1 < 0x10);
  return p_Var1;
}

// VVM_Exec3i_addi_muli @ 148dc7c70

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_addi_muli
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *in_RAX;
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = *(int *)&param_1->RegisterData + param_2->m128i_i32[0];
  auVar1._4_4_ = *(int *)((longlong)&param_1->RegisterData + 4) + param_2->m128i_i32[1];
  auVar1._8_4_ = *(int *)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet +
                 param_2->m128i_i32[2];
  auVar1._12_4_ =
       *(int *)((longlong)&(param_1->ChunkLocalData).StartingOutputIdxPerDataSet + 4) +
       param_2->m128i_i32[3];
  pmulld(auVar1,(undefined1  [16])*param_3);
  return in_RAX;
}

// VVM_Exec3i_bit_lshift_bit_or @ 148dc7c90

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_bit_lshift_bit_or
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *p_Var1;
  int local_38 [4];
  __m128i local_28;
  undefined1 local_18 [16];
  
  local_18._0_8_ = param_1->RegisterData;
  local_18._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  local_28 = *param_2;
  if (4 < __isa_available) {
    vpsllvd_avx2(local_18,(undefined1  [16])*param_2);
    return (__m128i *)0x0;
  }
  p_Var1 = (__m128i *)0x0;
  do {
    *(int *)((longlong)local_38 + (longlong)p_Var1) =
         *(int *)(local_18 + (longlong)p_Var1) <<
         ((byte)*(undefined4 *)(local_28.m128i_i8 + (longlong)p_Var1) & 0x1f);
    p_Var1 = (__m128i *)(p_Var1->m128i_i8 + 4);
  } while ((longlong)p_Var1 < 0x10);
  return p_Var1;
}

// VVM_Exec3i_bit_or_muli @ 148dc7d00

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_bit_or_muli
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  undefined1 auVar1 [16];
  __m128i *in_RAX;
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  pmulld(auVar1 | (undefined1  [16])*param_2,(undefined1  [16])*param_3);
  return in_RAX;
}

// VVM_Exec3i_bit_rshift_bit_and @ 148dc7d20

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_bit_rshift_bit_and
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *p_Var1;
  uint local_38 [4];
  undefined1 local_28 [16];
  __m128i local_18;
  
  local_28._0_8_ = param_1->RegisterData;
  local_28._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  local_18 = *param_2;
  if (4 < __isa_available) {
    vpsrlvd_avx2(local_28,(undefined1  [16])*param_2);
    return (__m128i *)0x0;
  }
  p_Var1 = (__m128i *)0x0;
  do {
    *(uint *)((longlong)local_38 + (longlong)p_Var1) =
         *(uint *)(local_28 + (longlong)p_Var1) >>
         ((byte)*(undefined4 *)(local_18.m128i_i8 + (longlong)p_Var1) & 0x1f);
    p_Var1 = (__m128i *)(p_Var1->m128i_i8 + 4);
  } while ((longlong)p_Var1 < 0x10);
  return p_Var1;
}

// VVM_Exec3i_clampi @ 148dc7d90

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_clampi
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3i_cmpeqi_logic_and @ 148dc7db0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_cmpeqi_logic_and
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3i_cmpeqi_logic_or @ 148dc7dd0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_cmpeqi_logic_or
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3i_cmpgei_logic_and @ 148dc7df0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_cmpgei_logic_and
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3i_cmpgei_logic_or @ 148dc7e10

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_cmpgei_logic_or
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3i_cmpgti_logic_and @ 148dc7e30

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_cmpgti_logic_and
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3i_cmpgti_logic_or @ 148dc7e50

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_cmpgti_logic_or
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3i_cmplei_logic_and @ 148dc7e70

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_cmplei_logic_and
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3i_cmplei_logic_or @ 148dc7e90

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_cmplei_logic_or
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3i_cmplti_logic_and @ 148dc7eb0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_cmplti_logic_and
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3i_cmplti_logic_or @ 148dc7ed0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_cmplti_logic_or
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3i_cmpnei_logic_and @ 148dc7ef0

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_cmpnei_logic_and
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3i_cmpnei_logic_or @ 148dc7f10

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_cmpnei_logic_or
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3i_f2i_select1 @ 148dc7f30

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_f2i_select1
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// VVM_Exec3i_muli_addi @ 148dc7f50

__m128i * __cdecl
VectorVM::Runtime::VVM_Exec3i_muli_addi
          (__m128i *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128i *param_2,
          __m128i *param_3,__m128i *param_4)

{
  undefined1 auVar1 [16];
  __m128i *in_RAX;
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  pmulld(auVar1,(undefined1  [16])*param_2);
  return in_RAX;
}

// VVM_Exec4f_add_mad1 @ 148dc7f70

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_add_mad1
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  return param_4;
}

// VVM_Exec4f_cmpeq_select @ 148dc7f90

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_cmpeq_select
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  return param_4;
}

// VVM_Exec4f_cmpeqi_select @ 148dc7fc0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_cmpeqi_select
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  return param_4;
}

// VVM_Exec4f_cmple_select @ 148dc7ff0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_cmple_select
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  return param_4;
}

// VVM_Exec4f_cmplei_select @ 148dc8020

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_cmplei_select
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  return param_4;
}

// VVM_Exec4f_cmplt_select @ 148dc8050

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_cmplt_select
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  return param_4;
}

// VVM_Exec4f_cmplti_select @ 148dc8080

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_cmplti_select
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  return param_4;
}

// VVM_Exec4f_div_mad0 @ 148dc80b0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_div_mad0
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1->RegisterData;
  auVar1._8_8_ = (param_1->ChunkLocalData).StartingOutputIdxPerDataSet;
  divps(auVar1,(undefined1  [16])*param_2);
  return param_4;
}

// VVM_Exec4f_mad_add @ 148dc80f0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_mad_add
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  return param_4;
}

// VVM_Exec4f_mad_mul @ 148dc8110

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_mad_mul
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  return param_4;
}

// VVM_Exec4f_mad_sub0 @ 148dc8130

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_mad_sub0
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  return param_4;
}

// VVM_Exec4f_mad_sub1 @ 148dc8150

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_mad_sub1
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  return param_4;
}

// VVM_Exec4f_mul_mad0 @ 148dc8170

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_mul_mad0
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  return param_4;
}

// VVM_Exec4f_mul_mad1 @ 148dc8190

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_mul_mad1
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  return param_4;
}

// VVM_Exec4f_select_add @ 148dc81b0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_select_add
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  return param_4;
}

// VVM_Exec4f_select_mul @ 148dc81d0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec4f_select_mul
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5)

{
  return param_4;
}

// VVM_Exec5f_mad_mad0 @ 148dc81f0

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec5f_mad_mad0
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5,__m128 *param_6)

{
  return param_5;
}

// VVM_Exec5f_mad_mad1 @ 148dc8220

__m128 * __cdecl
VectorVM::Runtime::VVM_Exec5f_mad_mad1
          (__m128 *__return_storage_ptr__,FVectorVMBatchState *param_1,__m128 *param_2,
          __m128 *param_3,__m128 *param_4,__m128 *param_5,__m128 *param_6)

{
  return param_5;
}

// VVM_Output16 @ 148dc8250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar * __cdecl
VectorVM::Runtime::VVM_Output16
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  uchar uVar4;
  byte bVar5;
  ushort uVar6;
  uchar **ppuVar7;
  uchar **ppuVar8;
  code *pcVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uchar *puVar18;
  byte *pbVar19;
  uint *puVar20;
  longlong lVar21;
  ushort *puVar22;
  ushort *puVar23;
  uint *puVar24;
  byte *pbVar25;
  uchar *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  float fVar34;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint uVar44;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  uint uVar52;
  uint uVar57;
  uint uVar58;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  uint uVar59;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  int iVar72;
  int iVar74;
  int iVar75;
  int iVar76;
  undefined1 auVar73 [16];
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  int iVar85;
  int iVar86;
  int iVar87;
  int iVar88;
  ushort local_118;
  ushort local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  
  puVar18 = param_3->RegIncTable;
  ppuVar7 = (param_3->ChunkLocalData).OutputMaskIdx;
  ppuVar8 = param_3->RegPtrTable;
  bVar2 = param_2[1];
  bVar3 = *param_2;
  uVar27 = (ulonglong)bVar3;
  uVar29 = (param_3->ChunkLocalData).NumOutputPerDataSet[bVar2];
  if (((param_4->DataSets).ArrayNum <= (int)(uint)bVar2) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar17)) {
    pcVar9 = (code *)swi(3);
    puVar18 = (uchar *)(*pcVar9)();
    return puVar18;
  }
  iVar88 = _UNK_1508be50c;
  iVar87 = _UNK_1508be508;
  iVar86 = _UNK_1508be504;
  iVar85 = ___xmm_c8000fffc8000fffc8000fffc8000fff;
  iVar80 = _UNK_1508be4ec;
  iVar79 = _UNK_1508be4e8;
  iVar78 = _UNK_1508be4e4;
  iVar77 = ___xmm_47800000478000004780000047800000;
  iVar76 = _UNK_1508be4bc;
  iVar75 = _UNK_1508be4b8;
  iVar74 = _UNK_1508be4b4;
  iVar72 = ___xmm_38800000388000003880000038800000;
  uVar16 = _UNK_1508be48c;
  uVar15 = _UNK_1508be488;
  uVar14 = _UNK_1508be484;
  uVar66 = ___xmm_00000200000002000000020000000200;
  uVar64 = _UNK_1508be47c;
  uVar62 = _UNK_1508be478;
  uVar60 = _UNK_1508be474;
  uVar10 = ___xmm_000001ff000001ff000001ff000001ff;
  fVar71 = _UNK_15068962c;
  fVar70 = _UNK_150689628;
  fVar69 = _UNK_150689624;
  fVar68 = ___xmm_3f0000003f0000003f0000003f000000;
  uVar84 = _UNK_15068959c;
  uVar83 = _UNK_150689598;
  uVar82 = _UNK_150689594;
  uVar81 = ___xmm_00007c0000007c0000007c0000007c00;
  uVar51 = _UNK_15065157c;
  uVar50 = _UNK_150651578;
  uVar49 = _UNK_150651574;
  uVar44 = __xmm_80000000800000008000000080000000;
  puVar22 = (ushort *)(param_2 + 2);
  puVar23 = puVar22 + uVar27;
  if (param_1) {
    if (uVar29 == (param_3->ChunkLocalData).NumInstancesThisChunk) {
      if (bVar3 != 0) {
        lVar21 = (longlong)puVar22 - (longlong)puVar23;
        auVar32 = _DAT_151cefd70;
        fVar68 = _DAT_151cefd90;
        fVar69 = _UNK_151cefd94;
        fVar70 = _UNK_151cefd98;
        fVar71 = _UNK_151cefd9c;
        iVar72 = _DAT_151cefd50;
        iVar74 = _UNK_151cefd54;
        iVar75 = _UNK_151cefd58;
        iVar76 = _UNK_151cefd5c;
        iVar77 = _DAT_151cefd80;
        iVar78 = _UNK_151cefd84;
        iVar79 = _UNK_151cefd88;
        iVar80 = _UNK_151cefd8c;
        uVar44 = _DAT_151cefd40;
        uVar49 = _UNK_151cefd44;
        uVar50 = _UNK_151cefd48;
        uVar51 = _UNK_151cefd4c;
        uVar81 = _DAT_151cefd60;
        uVar82 = _UNK_151cefd64;
        uVar83 = _UNK_151cefd68;
        uVar84 = _UNK_151cefd6c;
        iVar85 = _DAT_151cefda0;
        iVar86 = _UNK_151cefda4;
        iVar87 = _UNK_151cefda8;
        iVar88 = _UNK_151cefdac;
        do {
          uVar6 = *(ushort *)((longlong)puVar23 + lVar21);
          puVar24 = (uint *)ppuVar8[uVar6];
          uVar4 = puVar18[uVar6];
          puVar20 = (uint *)ppuVar8[*puVar23];
          if ((puVar24 == puVar20) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void *)SrcReg != (void *)DstReg",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                                  ,0x2a0,L""), auVar32 = _DAT_151cefd70, fVar68 = _DAT_151cefd90,
             fVar69 = _UNK_151cefd94, fVar70 = _UNK_151cefd98, fVar71 = _UNK_151cefd9c,
             iVar72 = _DAT_151cefd50, iVar74 = _UNK_151cefd54, iVar75 = _UNK_151cefd58,
             iVar76 = _UNK_151cefd5c, iVar77 = _DAT_151cefd80, iVar78 = _UNK_151cefd84,
             iVar79 = _UNK_151cefd88, iVar80 = _UNK_151cefd8c, uVar44 = _DAT_151cefd40,
             uVar49 = _UNK_151cefd44, uVar50 = _UNK_151cefd48, uVar51 = _UNK_151cefd4c,
             uVar81 = _DAT_151cefd60, uVar82 = _UNK_151cefd64, uVar83 = _UNK_151cefd68,
             uVar84 = _UNK_151cefd6c, iVar85 = _DAT_151cefda0, iVar86 = _UNK_151cefda4,
             iVar87 = _UNK_151cefda8, iVar88 = _UNK_151cefdac, bVar17)) {
            pcVar9 = (code *)swi(3);
            puVar18 = (uchar *)(*pcVar9)();
            return puVar18;
          }
          if (uVar4 == '\0') {
            uVar44 = *puVar24 & uVar44;
            uVar49 = puVar24[1] & uVar49;
            uVar50 = puVar24[2] & uVar50;
            uVar51 = puVar24[3] & uVar51;
            auVar31._0_4_ = (int)uVar44 >> 0x10;
            auVar31._4_4_ = (int)uVar49 >> 0x10;
            auVar31._8_4_ = (int)uVar50 >> 0x10;
            auVar31._12_4_ = (int)uVar51 >> 0x10;
            fVar34 = (float)(uVar44 ^ *puVar24);
            fVar41 = (float)(uVar49 ^ puVar24[1]);
            fVar42 = (float)(uVar50 ^ puVar24[2]);
            fVar43 = (float)(uVar51 ^ puVar24[3]);
            auVar35._0_4_ = -(uint)NAN(fVar34) & uVar81;
            auVar35._4_4_ = -(uint)NAN(fVar41) & uVar82;
            auVar35._8_4_ = -(uint)NAN(fVar42) & uVar83;
            auVar35._12_4_ = -(uint)NAN(fVar43) & uVar84;
            auVar35 = auVar35 | auVar32;
            auVar30._0_4_ =
                 (~-(uint)((int)fVar34 < iVar77) &
                  (uint)(((int)fVar34 + iVar85) - (((int)fVar34 << 0x12) >> 0x1f)) >> 0xd |
                 (int)(fVar34 + fVar68) - (int)fVar68 & -(uint)((int)fVar34 < iVar77)) &
                 -(uint)((int)fVar34 < iVar72);
            auVar30._4_4_ =
                 (~-(uint)((int)fVar41 < iVar78) &
                  (uint)(((int)fVar41 + iVar86) - (((int)fVar41 << 0x12) >> 0x1f)) >> 0xd |
                 (int)(fVar41 + fVar69) - (int)fVar69 & -(uint)((int)fVar41 < iVar78)) &
                 -(uint)((int)fVar41 < iVar74);
            auVar30._8_4_ =
                 (~-(uint)((int)fVar42 < iVar79) &
                  (uint)(((int)fVar42 + iVar87) - (((int)fVar42 << 0x12) >> 0x1f)) >> 0xd |
                 (int)(fVar42 + fVar70) - (int)fVar70 & -(uint)((int)fVar42 < iVar79)) &
                 -(uint)((int)fVar42 < iVar75);
            auVar30._12_4_ =
                 (~-(uint)((int)fVar43 < iVar80) &
                  (uint)(((int)fVar43 + iVar88) - (((int)fVar43 << 0x12) >> 0x1f)) >> 0xd |
                 (int)(fVar43 + fVar71) - (int)fVar71 & -(uint)((int)fVar43 < iVar80)) &
                 -(uint)((int)fVar43 < iVar76);
            auVar73._0_4_ = ~-(uint)((int)fVar34 < iVar72) & auVar35._0_4_;
            auVar73._4_4_ = ~-(uint)((int)fVar41 < iVar74) & auVar35._4_4_;
            auVar73._8_4_ = ~-(uint)((int)fVar42 < iVar75) & auVar35._8_4_;
            auVar73._12_4_ = ~-(uint)((int)fVar43 < iVar76) & auVar35._12_4_;
            auVar31 = auVar30 | auVar73 | auVar31;
            auVar32 = packssdw(auVar31,auVar31);
            local_118 = auVar32._0_2_;
            VVMMemSet16(puVar20,local_118,(ulonglong)uVar29);
            auVar32 = _DAT_151cefd70;
            fVar68 = _DAT_151cefd90;
            fVar69 = _UNK_151cefd94;
            fVar70 = _UNK_151cefd98;
            fVar71 = _UNK_151cefd9c;
            iVar72 = _DAT_151cefd50;
            iVar74 = _UNK_151cefd54;
            iVar75 = _UNK_151cefd58;
            iVar76 = _UNK_151cefd5c;
            iVar77 = _DAT_151cefd80;
            iVar78 = _UNK_151cefd84;
            iVar79 = _UNK_151cefd88;
            iVar80 = _UNK_151cefd8c;
            uVar44 = _DAT_151cefd40;
            uVar49 = _UNK_151cefd44;
            uVar50 = _UNK_151cefd48;
            uVar51 = _UNK_151cefd4c;
            uVar81 = _DAT_151cefd60;
            uVar82 = _UNK_151cefd64;
            uVar83 = _UNK_151cefd68;
            uVar84 = _UNK_151cefd6c;
            iVar85 = _DAT_151cefda0;
            iVar86 = _UNK_151cefda4;
            iVar87 = _UNK_151cefda8;
            iVar88 = _UNK_151cefdac;
          }
          else {
            puVar1 = (uint *)((longlong)puVar20 + (ulonglong)uVar29 * 2);
            for (; puVar20 < puVar1; puVar20 = puVar20 + 2) {
              uVar10 = *puVar24;
              puVar11 = puVar24 + 1;
              puVar12 = puVar24 + 2;
              puVar13 = puVar24 + 3;
              puVar24 = puVar24 + 4;
              uVar60 = uVar10 & uVar44;
              uVar62 = *puVar11 & uVar49;
              uVar64 = *puVar12 & uVar50;
              uVar66 = *puVar13 & uVar51;
              fVar34 = (float)(uVar60 ^ uVar10);
              fVar41 = (float)(uVar62 ^ *puVar11);
              fVar42 = (float)(uVar64 ^ *puVar12);
              fVar43 = (float)(uVar66 ^ *puVar13);
              auVar53._0_4_ = -(uint)NAN(fVar34) & uVar81;
              auVar53._4_4_ = -(uint)NAN(fVar41) & uVar82;
              auVar53._8_4_ = -(uint)NAN(fVar42) & uVar83;
              auVar53._12_4_ = -(uint)NAN(fVar43) & uVar84;
              auVar53 = auVar53 | auVar32;
              auVar36._0_4_ =
                   (~-(uint)((int)fVar34 < iVar77) &
                    (uint)(((int)fVar34 + iVar85) - (((int)fVar34 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar34 + fVar68) - (int)fVar68 & -(uint)((int)fVar34 < iVar77)) &
                   -(uint)((int)fVar34 < iVar72);
              auVar36._4_4_ =
                   (~-(uint)((int)fVar41 < iVar78) &
                    (uint)(((int)fVar41 + iVar86) - (((int)fVar41 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar41 + fVar69) - (int)fVar69 & -(uint)((int)fVar41 < iVar78)) &
                   -(uint)((int)fVar41 < iVar74);
              auVar36._8_4_ =
                   (~-(uint)((int)fVar42 < iVar79) &
                    (uint)(((int)fVar42 + iVar87) - (((int)fVar42 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar42 + fVar70) - (int)fVar70 & -(uint)((int)fVar42 < iVar79)) &
                   -(uint)((int)fVar42 < iVar75);
              auVar36._12_4_ =
                   (~-(uint)((int)fVar43 < iVar80) &
                    (uint)(((int)fVar43 + iVar88) - (((int)fVar43 << 0x12) >> 0x1f)) >> 0xd |
                   (int)(fVar43 + fVar71) - (int)fVar71 & -(uint)((int)fVar43 < iVar80)) &
                   -(uint)((int)fVar43 < iVar76);
              auVar45._0_4_ = ~-(uint)((int)fVar34 < iVar72) & auVar53._0_4_;
              auVar45._4_4_ = ~-(uint)((int)fVar41 < iVar74) & auVar53._4_4_;
              auVar45._8_4_ = ~-(uint)((int)fVar42 < iVar75) & auVar53._8_4_;
              auVar45._12_4_ = ~-(uint)((int)fVar43 < iVar76) & auVar53._12_4_;
              auVar37._4_4_ = (int)uVar62 >> 0x10;
              auVar37._0_4_ = (int)uVar60 >> 0x10;
              auVar37._8_4_ = (int)uVar64 >> 0x10;
              auVar37._12_4_ = (int)uVar66 >> 0x10;
              auVar37 = auVar36 | auVar45 | auVar37;
              auVar38 = packssdw(auVar37,auVar37);
              *(longlong *)puVar20 = auVar38._0_8_;
            }
          }
          puVar23 = puVar23 + 1;
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
      }
    }
    else if ((uVar29 != 0) && (uVar28 = uVar27, bVar3 != 0)) {
      do {
        puVar26 = ppuVar8[puVar22[uVar27]];
        puVar24 = (uint *)ppuVar8[*puVar22];
        if (puVar18[*puVar22] == '\0') {
          uVar61 = *puVar24 & _DAT_151cefd40;
          uVar63 = puVar24[1] & _UNK_151cefd44;
          uVar65 = puVar24[2] & _UNK_151cefd48;
          uVar67 = puVar24[3] & _UNK_151cefd4c;
          fVar34 = (float)(*puVar24 ^ uVar61);
          fVar41 = (float)(puVar24[1] ^ uVar63);
          fVar42 = (float)(puVar24[2] ^ uVar65);
          fVar43 = (float)(puVar24[3] ^ uVar67);
          auVar54._0_4_ = -(uint)NAN(fVar34) & _DAT_151cefd60;
          auVar54._4_4_ = -(uint)NAN(fVar41) & _UNK_151cefd64;
          auVar54._8_4_ = -(uint)NAN(fVar42) & _UNK_151cefd68;
          auVar54._12_4_ = -(uint)NAN(fVar43) & _UNK_151cefd6c;
          auVar54 = auVar54 | _DAT_151cefd70;
          auVar39._0_4_ =
               (~-(uint)((int)fVar34 < _DAT_151cefd80) &
                (uint)(((int)fVar34 + _DAT_151cefda0) - (((int)fVar34 << 0x12) >> 0x1f)) >> 0xd |
               (int)(fVar34 + _DAT_151cefd90) - (int)_DAT_151cefd90 &
               -(uint)((int)fVar34 < _DAT_151cefd80)) & -(uint)((int)fVar34 < _DAT_151cefd50);
          auVar39._4_4_ =
               (~-(uint)((int)fVar41 < _UNK_151cefd84) &
                (uint)(((int)fVar41 + _UNK_151cefda4) - (((int)fVar41 << 0x12) >> 0x1f)) >> 0xd |
               (int)(fVar41 + _UNK_151cefd94) - (int)_UNK_151cefd94 &
               -(uint)((int)fVar41 < _UNK_151cefd84)) & -(uint)((int)fVar41 < _UNK_151cefd54);
          auVar39._8_4_ =
               (~-(uint)((int)fVar42 < _UNK_151cefd88) &
                (uint)(((int)fVar42 + _UNK_151cefda8) - (((int)fVar42 << 0x12) >> 0x1f)) >> 0xd |
               (int)(fVar42 + _UNK_151cefd98) - (int)_UNK_151cefd98 &
               -(uint)((int)fVar42 < _UNK_151cefd88)) & -(uint)((int)fVar42 < _UNK_151cefd58);
          auVar39._12_4_ =
               (~-(uint)((int)fVar43 < _UNK_151cefd8c) &
                (uint)(((int)fVar43 + _UNK_151cefdac) - (((int)fVar43 << 0x12) >> 0x1f)) >> 0xd |
               (int)(fVar43 + _UNK_151cefd9c) - (int)_UNK_151cefd9c &
               -(uint)((int)fVar43 < _UNK_151cefd8c)) & -(uint)((int)fVar43 < _UNK_151cefd5c);
          auVar46._0_4_ = ~-(uint)((int)fVar34 < _DAT_151cefd50) & auVar54._0_4_;
          auVar46._4_4_ = ~-(uint)((int)fVar41 < _UNK_151cefd54) & auVar54._4_4_;
          auVar46._8_4_ = ~-(uint)((int)fVar42 < _UNK_151cefd58) & auVar54._8_4_;
          auVar46._12_4_ = ~-(uint)((int)fVar43 < _UNK_151cefd5c) & auVar54._12_4_;
          auVar40._4_4_ = (int)uVar63 >> 0x10;
          auVar40._0_4_ = (int)uVar61 >> 0x10;
          auVar40._8_4_ = (int)uVar65 >> 0x10;
          auVar40._12_4_ = (int)uVar67 >> 0x10;
          auVar40 = auVar39 | auVar46 | auVar40;
          auVar32 = packssdw(auVar40,auVar40);
          local_108 = auVar32._0_2_;
          VVMMemSet16(puVar26,local_108,(ulonglong)uVar29);
        }
        else {
          pbVar25 = ppuVar7[bVar2];
          pbVar19 = pbVar25 + ((longlong)((param_3->ChunkLocalData).NumInstancesThisChunk + 3) >> 2)
          ;
          while (pbVar25 < pbVar19) {
            uVar61 = *puVar24;
            puVar20 = puVar24 + 1;
            puVar1 = puVar24 + 2;
            puVar11 = puVar24 + 3;
            bVar5 = *pbVar25;
            puVar24 = puVar24 + 4;
            fVar34 = (float)(~uVar44 & uVar61);
            fVar41 = (float)(~uVar49 & *puVar20);
            fVar42 = (float)(~uVar50 & *puVar1);
            fVar43 = (float)(~uVar51 & *puVar11);
            uVar63 = -(uint)((int)fVar34 < iVar72);
            uVar65 = -(uint)((int)fVar41 < iVar74);
            uVar67 = -(uint)((int)fVar42 < iVar75);
            uVar33 = -(uint)((int)fVar43 < iVar76);
            uVar52 = -(uint)((int)fVar34 < iVar77);
            uVar57 = -(uint)((int)fVar41 < iVar78);
            uVar58 = -(uint)((int)fVar42 < iVar79);
            uVar59 = -(uint)((int)fVar43 < iVar80);
            pbVar25 = pbVar25 + 1;
            auVar47._0_4_ =
                 (~uVar63 & (uint)((iVar85 + (int)fVar34) - (((int)fVar34 << 0x12) >> 0x1f)) >> 0xd
                 | (int)(fVar34 + fVar68) - (int)fVar68 & uVar63) & uVar52;
            auVar47._4_4_ =
                 (~uVar65 & (uint)((iVar86 + (int)fVar41) - (((int)fVar41 << 0x12) >> 0x1f)) >> 0xd
                 | (int)(fVar41 + fVar69) - (int)fVar69 & uVar65) & uVar57;
            auVar47._8_4_ =
                 (~uVar67 & (uint)((iVar87 + (int)fVar42) - (((int)fVar42 << 0x12) >> 0x1f)) >> 0xd
                 | (int)(fVar42 + fVar70) - (int)fVar70 & uVar67) & uVar58;
            auVar47._12_4_ =
                 (~uVar33 & (uint)((iVar88 + (int)fVar43) - (((int)fVar43 << 0x12) >> 0x1f)) >> 0xd
                 | (int)(fVar43 + fVar71) - (int)fVar71 & uVar33) & uVar59;
            auVar55._0_4_ =
                 ~uVar52 & (((uint)fVar34 >> 0xd & uVar10 | uVar66) & -(uint)NAN(fVar34) | uVar81);
            auVar55._4_4_ =
                 ~uVar57 & (((uint)fVar41 >> 0xd & uVar60 | uVar14) & -(uint)NAN(fVar41) | uVar82);
            auVar55._8_4_ =
                 ~uVar58 & (((uint)fVar42 >> 0xd & uVar62 | uVar15) & -(uint)NAN(fVar42) | uVar83);
            auVar55._12_4_ =
                 ~uVar59 & (((uint)fVar43 >> 0xd & uVar64 | uVar16) & -(uint)NAN(fVar43) | uVar84);
            auVar48._4_4_ = (int)(*puVar20 & uVar49) >> 0x10;
            auVar48._0_4_ = (int)(uVar61 & uVar44) >> 0x10;
            auVar48._8_4_ = (int)(*puVar1 & uVar50) >> 0x10;
            auVar48._12_4_ = (int)(*puVar11 & uVar51) >> 0x10;
            auVar48 = auVar47 | auVar55 | auVar48;
            auVar32 = packssdw(auVar48,auVar48);
            local_f8._0_8_ = auVar32._0_8_;
            auVar32 = pshufb(local_f8,*(undefined1 (*) [16])
                                       (VVM_PSHUFB_OUTPUT_TABLE16 + (ulonglong)bVar5 * 0x10));
            bVar5 = ""[bVar5];
            *(longlong *)puVar26 = auVar32._0_8_;
            puVar26 = puVar26 + bVar5;
          }
        }
        puVar22 = puVar22 + 1;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
    }
  }
  else if (bVar3 != 0) {
    bVar2 = *ppuVar7[bVar2];
    lVar21 = (longlong)puVar22 - (longlong)puVar23;
    do {
      puVar24 = (uint *)ppuVar8[*(ushort *)((longlong)puVar23 + lVar21)];
      uVar6 = *puVar23;
      puVar23 = puVar23 + 1;
      fVar34 = (float)(~uVar44 & *puVar24);
      fVar41 = (float)(~uVar49 & puVar24[1]);
      fVar42 = (float)(~uVar50 & puVar24[2]);
      fVar43 = (float)(~uVar51 & puVar24[3]);
      uVar29 = -(uint)((int)fVar34 < iVar72);
      uVar61 = -(uint)((int)fVar41 < iVar74);
      uVar63 = -(uint)((int)fVar42 < iVar75);
      uVar65 = -(uint)((int)fVar43 < iVar76);
      uVar67 = -(uint)((int)fVar34 < iVar77);
      uVar33 = -(uint)((int)fVar41 < iVar78);
      uVar52 = -(uint)((int)fVar42 < iVar79);
      uVar57 = -(uint)((int)fVar43 < iVar80);
      auVar38._0_4_ =
           (~uVar29 & (uint)(((int)fVar34 + iVar85) - (((int)fVar34 << 0x12) >> 0x1f)) >> 0xd |
           (int)(fVar34 + fVar68) - (int)fVar68 & uVar29) & uVar67;
      auVar38._4_4_ =
           (~uVar61 & (uint)(((int)fVar41 + iVar86) - (((int)fVar41 << 0x12) >> 0x1f)) >> 0xd |
           (int)(fVar41 + fVar69) - (int)fVar69 & uVar61) & uVar33;
      auVar38._8_4_ =
           (~uVar63 & (uint)(((int)fVar42 + iVar87) - (((int)fVar42 << 0x12) >> 0x1f)) >> 0xd |
           (int)(fVar42 + fVar70) - (int)fVar70 & uVar63) & uVar52;
      auVar38._12_4_ =
           (~uVar65 & (uint)(((int)fVar43 + iVar88) - (((int)fVar43 << 0x12) >> 0x1f)) >> 0xd |
           (int)(fVar43 + fVar71) - (int)fVar71 & uVar65) & uVar57;
      auVar56._0_4_ =
           ~uVar67 & (((uint)fVar34 >> 0xd & uVar10 | uVar66) & -(uint)NAN(fVar34) | uVar81);
      auVar56._4_4_ =
           ~uVar33 & (((uint)fVar41 >> 0xd & uVar60 | uVar14) & -(uint)NAN(fVar41) | uVar82);
      auVar56._8_4_ =
           ~uVar52 & (((uint)fVar42 >> 0xd & uVar62 | uVar15) & -(uint)NAN(fVar42) | uVar83);
      auVar56._12_4_ =
           ~uVar57 & (((uint)fVar43 >> 0xd & uVar64 | uVar16) & -(uint)NAN(fVar43) | uVar84);
      auVar32._0_4_ = (int)(uVar44 & *puVar24) >> 0x10;
      auVar32._4_4_ = (int)(uVar49 & puVar24[1]) >> 0x10;
      auVar32._8_4_ = (int)(uVar50 & puVar24[2]) >> 0x10;
      auVar32._12_4_ = (int)(uVar51 & puVar24[3]) >> 0x10;
      auVar32 = auVar38 | auVar56 | auVar32;
      auVar32 = packssdw(auVar32,auVar32);
      local_e8._0_8_ = auVar32._0_8_;
      auVar32 = pshufb(local_e8,*(undefined1 (*) [16])
                                 (VVM_PSHUFB_OUTPUT_TABLE16 + (ulonglong)bVar2 * 0x10));
      *(longlong *)ppuVar8[uVar6] = auVar32._0_8_;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  return param_2 + ((uint)bVar3 * 4 + 3);
}

// VVM_Output16_from_16 @ 148dc89e0

uchar * __cdecl
VectorVM::Runtime::VVM_Output16_from_16
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uchar **ppuVar6;
  uchar **ppuVar7;
  ushort *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  code *pcVar11;
  bool bVar12;
  uchar *puVar13;
  ulonglong uVar14;
  byte *pbVar15;
  longlong lVar16;
  ushort *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ushort *puVar21;
  ulonglong *puVar22;
  byte *pbVar23;
  undefined1 auVar24 [16];
  
  puVar13 = param_3->RegIncTable;
  bVar1 = *param_2;
  uVar18 = (ulonglong)bVar1;
  bVar2 = param_2[1];
  ppuVar6 = (param_3->ChunkLocalData).OutputMaskIdx;
  ppuVar7 = param_3->RegPtrTable;
  uVar5 = (param_3->ChunkLocalData).NumOutputPerDataSet[bVar2];
  uVar20 = (ulonglong)uVar5;
  if (((param_4->DataSets).ArrayNum <= (int)(uint)bVar2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    puVar13 = (uchar *)(*pcVar11)();
    return puVar13;
  }
  puVar17 = (ushort *)(param_2 + 2);
  puVar21 = puVar17 + uVar18;
  if (param_1) {
    if (uVar5 == (param_3->ChunkLocalData).NumInstancesThisChunk) {
      if (bVar1 != 0) {
        lVar16 = (longlong)puVar17 - (longlong)puVar21;
        do {
          uVar4 = *(ushort *)((longlong)puVar21 + lVar16);
          puVar17 = (ushort *)ppuVar7[uVar4];
          puVar8 = (ushort *)ppuVar7[*puVar21];
          if (puVar17 != puVar8) {
            if (puVar13[uVar4] == '\0') {
              VVMMemSet16(puVar8,*puVar17,uVar20);
            }
            else {
              VVMMemCpy(puVar8,puVar17,uVar20 * 2);
            }
          }
          puVar21 = puVar21 + 1;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
    }
    else if ((uVar5 != 0) && (bVar1 != 0)) {
      uVar19 = uVar18;
      do {
        puVar22 = (ulonglong *)ppuVar7[puVar17[uVar18]];
        puVar9 = (ulonglong *)ppuVar7[*puVar17];
        if (puVar13[*puVar17] == '\0') {
          uVar14 = uVar20;
          if (puVar22 + uVar20 < puVar22) {
            uVar14 = 0;
          }
          if (uVar14 != 0) {
            uVar10 = *puVar9;
            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
              *puVar22 = uVar10;
              puVar22 = puVar22 + 1;
            }
          }
        }
        else {
          pbVar15 = ppuVar6[bVar2];
          pbVar23 = pbVar15 + ((longlong)((param_3->ChunkLocalData).NumInstancesThisChunk + 3) >> 2)
          ;
          while (pbVar15 < pbVar23) {
            bVar3 = *pbVar15;
            pbVar15 = pbVar15 + 1;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = *puVar9;
            puVar9 = puVar9 + 1;
            auVar24 = pshufb(auVar24,*(undefined1 (*) [16])
                                      (VVM_PSHUFB_OUTPUT_TABLE16 + (ulonglong)bVar3 * 0x10));
            bVar3 = ""[bVar3];
            *puVar22 = auVar24._0_8_;
            puVar22 = (ulonglong *)((longlong)puVar22 + (ulonglong)bVar3);
          }
        }
        puVar17 = puVar17 + 1;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  else if (bVar1 != 0) {
    bVar2 = *ppuVar6[bVar2];
    uVar20 = uVar18;
    do {
      uVar4 = *puVar17;
      puVar21 = puVar17 + uVar18;
      puVar17 = puVar17 + 1;
      auVar24 = pshufb(*(undefined1 (*) [16])ppuVar7[uVar4],
                       *(undefined1 (*) [16])(VVM_PSHUFB_OUTPUT_TABLE16 + (ulonglong)bVar2 * 0x10));
      *(longlong *)ppuVar7[*puVar21] = auVar24._0_8_;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  return param_2 + ((uint)bVar1 * 4 + 3);
}

// VVM_Output32 @ 148dc8c60

uchar * __cdecl
VectorVM::Runtime::VVM_Output32
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uchar **ppuVar7;
  uchar **ppuVar8;
  uchar *puVar9;
  undefined1 (*pauVar10) [16];
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  bool bVar15;
  uchar *puVar16;
  uchar *puVar17;
  undefined1 (*pauVar18) [16];
  ushort *puVar19;
  ushort *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  ushort *puVar23;
  ulonglong uVar24;
  byte *pbVar25;
  byte *pbVar26;
  undefined1 auVar27 [16];
  
  puVar16 = param_3->RegIncTable;
  bVar1 = *param_2;
  uVar24 = (ulonglong)bVar1;
  bVar2 = param_2[1];
  ppuVar7 = param_3->RegPtrTable;
  ppuVar8 = (param_3->ChunkLocalData).OutputMaskIdx;
  uVar5 = (param_3->ChunkLocalData).NumOutputPerDataSet[bVar2];
  if (((param_4->DataSets).ArrayNum <= (int)(uint)bVar2) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar15)) {
    pcVar11 = (code *)swi(3);
    puVar16 = (uchar *)(*pcVar11)();
    return puVar16;
  }
  puVar23 = (ushort *)(param_2 + 2);
  puVar19 = puVar23 + uVar24;
  if (param_1) {
    uVar21 = (ulonglong)uVar5;
    if (uVar5 == (param_3->ChunkLocalData).NumInstancesThisChunk) {
      if (uVar24 != 0) {
        lVar22 = (longlong)puVar23 - (longlong)puVar19;
        do {
          uVar4 = *(ushort *)(lVar22 + (longlong)puVar19);
          puVar9 = ppuVar7[uVar4];
          puVar17 = ppuVar7[*puVar19];
          if (puVar9 != puVar17) {
            if (puVar16[uVar4] == '\0') {
              uVar6 = *(undefined4 *)puVar9;
              if (uVar21 < 5) {
                if (uVar21 != 1) {
                  if (uVar21 != 2) {
                    if (uVar21 != 3) {
                      if (uVar21 == 4) {
                        *(undefined4 *)puVar17 = uVar6;
                        *(undefined4 *)(puVar17 + 4) = uVar6;
                        *(undefined4 *)(puVar17 + 8) = uVar6;
                        *(undefined4 *)(puVar17 + 0xc) = uVar6;
                      }
                      goto LAB_148dc8df0;
                    }
                    *(undefined4 *)(puVar17 + 8) = uVar6;
                  }
                  *(undefined4 *)(puVar17 + 4) = uVar6;
                }
                *(undefined4 *)puVar17 = uVar6;
              }
              else {
                puVar9 = puVar17 + (uVar21 - 4) * 4;
                for (; puVar17 < puVar9; puVar17 = puVar17 + 0x10) {
                  *(undefined4 *)puVar17 = uVar6;
                  *(undefined4 *)(puVar17 + 4) = uVar6;
                  *(undefined4 *)(puVar17 + 8) = uVar6;
                  *(undefined4 *)(puVar17 + 0xc) = uVar6;
                }
                *(undefined4 *)puVar9 = uVar6;
                *(undefined4 *)(puVar9 + 4) = uVar6;
                *(undefined4 *)(puVar9 + 8) = uVar6;
                *(undefined4 *)(puVar9 + 0xc) = uVar6;
              }
            }
            else {
              VVMMemCpy(puVar17,puVar9,uVar21 * 4);
            }
          }
LAB_148dc8df0:
          puVar19 = puVar19 + 1;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
    }
    else {
      uVar14 = uVar24;
      if (uVar5 != 0) {
        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
          pauVar18 = (undefined1 (*) [16])ppuVar7[puVar23[uVar24]];
          pauVar10 = (undefined1 (*) [16])ppuVar7[*puVar23];
          if (puVar16[*puVar23] == '\0') {
            uVar12 = *(undefined8 *)*pauVar10;
            uVar13 = *(undefined8 *)(*pauVar10 + 8);
            puVar9 = *pauVar18;
            for (; pauVar18 < (undefined1 (*) [16])(puVar9 + uVar21 * 4); pauVar18 = pauVar18 + 1) {
              *(undefined8 *)*pauVar18 = uVar12;
              *(undefined8 *)(*pauVar18 + 8) = uVar13;
            }
          }
          else {
            pbVar25 = ppuVar8[bVar2];
            pbVar26 = pbVar25 + ((longlong)((param_3->ChunkLocalData).NumInstancesThisChunk + 3) >>
                                2);
            while (pbVar25 < pbVar26) {
              bVar3 = *pbVar25;
              pbVar25 = pbVar25 + 1;
              auVar27 = *pauVar10;
              pauVar10 = pauVar10 + 1;
              auVar27 = pshufb(auVar27,*(undefined1 (*) [16])
                                        (VVM_PSHUFB_OUTPUT_TABLE + (ulonglong)bVar3 * 0x10));
              bVar3 = ""[bVar3];
              *pauVar18 = auVar27;
              pauVar18 = (undefined1 (*) [16])(*pauVar18 + bVar3);
            }
          }
          puVar23 = puVar23 + 1;
        }
      }
    }
  }
  else if (bVar1 != 0) {
    bVar2 = *ppuVar8[bVar2];
    puVar20 = puVar19;
    do {
      auVar27 = pshufb(*(undefined1 (*) [16])
                        ppuVar7[*(ushort *)
                                 (((longlong)puVar23 - (longlong)puVar19) + (longlong)puVar20)],
                       *(undefined1 (*) [16])(VVM_PSHUFB_OUTPUT_TABLE + (ulonglong)bVar2 * 0x10));
      *(undefined1 (*) [16])ppuVar7[*puVar20] = auVar27;
      uVar24 = uVar24 - 1;
      puVar20 = puVar20 + 1;
    } while (uVar24 != 0);
  }
  return param_2 + ((uint)bVar1 * 4 + 3);
}

// VVM_Output32_from_16 @ 148dc8f60

uchar * __cdecl
VectorVM::Runtime::VVM_Output32_from_16
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  
  bVar1 = *param_2;
  if ((param_4->DataSets).ArrayNum <= (int)(uint)param_2[1]) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar2)();
      return puVar4;
    }
  }
  return param_2 + (ulonglong)bVar1 * 4 + 3;
}

// VVM_acquire_id @ 148dc8fd0

uchar * __cdecl
VectorVM::Runtime::VVM_acquire_id
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  int *piVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uchar *puVar7;
  FDataSetMeta *pFVar8;
  uchar *puVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  
  bVar2 = param_2[4];
  if (((uint)(param_4->DataSets).ArrayNum <= (uint)bVar2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataSetIdx < (uint32)ExecCtx->DataSets.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x57f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar4)();
    return puVar7;
  }
  pFVar8 = TArrayView<FDataSetMeta,int>::operator[](&param_4->DataSets,(uint)bVar2);
  iVar14 = 0;
  do {
    iVar13 = *pFVar8->NumFreeIDs;
    if ((iVar13 < (param_3->ChunkLocalData).NumInstancesThisChunk) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OldNumFreeIDs >= BatchState->ChunkLocalData.NumInstancesThisChunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                           ,0x587,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      puVar7 = (uchar *)(*pcVar4)();
      return puVar7;
    }
    uVar16 = (param_3->ChunkLocalData).NumInstancesThisChunk;
    uVar17 = (ulonglong)(int)uVar16;
    lVar11 = (longlong)iVar13 - uVar17;
    puVar7 = param_3->RegPtrTable[*(ushort *)param_2];
    pFVar3 = (pFVar8->FreeIDTable->AllocatorInstance).Data;
    iVar10 = 0;
    if (0 < (int)uVar16) {
      do {
        iVar15 = (int)uVar17 - iVar10;
        iVar10 = iVar10 + 1;
        *(undefined4 *)puVar7 = *(undefined4 *)(pFVar3 + (longlong)iVar15 * 4 + lVar11 * 4 + -4);
        uVar16 = (param_3->ChunkLocalData).NumInstancesThisChunk;
        uVar17 = (ulonglong)uVar16;
        puVar7 = puVar7 + 4;
      } while (iVar10 < (int)uVar16);
    }
    LOCK();
    bVar6 = iVar13 == *pFVar8->NumFreeIDs;
    if (bVar6) {
      *pFVar8->NumFreeIDs = iVar13 - uVar16;
    }
    UNLOCK();
    iVar13 = iVar14;
  } while ((!bVar6) && (iVar13 = iVar14 + 1, bVar6 = iVar14 < 0x40000000, iVar14 = iVar13, bVar6));
  if (0x3ffffffe < iVar13) {
    pcVar4 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar4)();
    return puVar7;
  }
  piVar12 = pFVar8->NumSpawnedIDs;
  LOCK();
  iVar14 = *piVar12;
  *piVar12 = *piVar12 + (param_3->ChunkLocalData).NumInstancesThisChunk;
  UNLOCK();
  iVar14 = (param_3->ChunkLocalData).NumInstancesThisChunk + iVar14;
  if ((pFVar8->FreeIDTable->ArrayMax < iVar14) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartNumSpawned <= DataSet->FreeIDTable->Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x59a,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar4)();
    return puVar7;
  }
  uVar17 = (longlong)(param_3->ChunkLocalData).NumInstancesThisChunk * 4;
  pFVar3 = (pFVar8->FreeIDTable->AllocatorInstance).Data +
           ((longlong)pFVar8->FreeIDTable->ArrayMax - (longlong)iVar14) * 4;
  puVar9 = param_3->RegPtrTable[*(ushort *)param_2];
  lVar11 = (longlong)pFVar3 - (longlong)puVar9;
  puVar7 = puVar9 + uVar17;
  if (uVar17 < 0x10) {
    if (uVar17 != 0) {
      do {
        puVar9[lVar11] = *puVar9;
        puVar9 = puVar9 + 1;
      } while (puVar9 < puVar7);
    }
  }
  else {
    uVar5 = *(undefined8 *)(puVar9 + 8);
    *(undefined8 *)pFVar3 = *(undefined8 *)puVar9;
    *(undefined8 *)(pFVar3 + 8) = uVar5;
    for (puVar9 = puVar9 + (0x20 - (ulonglong)((uint)pFVar3 & 0xf)); puVar9 <= puVar7;
        puVar9 = puVar9 + 0x10) {
      uVar5 = *(undefined8 *)(puVar9 + -8);
      *(undefined8 *)(puVar9 + lVar11 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
      *(undefined8 *)(puVar9 + lVar11 + -0x10 + 8) = uVar5;
    }
    uVar5 = *(undefined8 *)(puVar7 + -8);
    *(undefined8 *)(puVar7 + lVar11 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + lVar11 + -0x10 + 8) = uVar5;
  }
  uVar17 = (ulonglong)(param_3->ChunkLocalData).NumInstancesThisChunk;
  iVar14 = pFVar8->IDAcquireTag;
  piVar12 = (int *)param_3->RegPtrTable[*(ushort *)(param_2 + 2)];
  if (uVar17 < 5) {
    if (uVar17 != 1) {
      if (uVar17 != 2) {
        if (uVar17 != 3) {
          if (uVar17 == 4) {
            *piVar12 = iVar14;
            piVar12[1] = iVar14;
            piVar12[2] = iVar14;
            piVar12[3] = iVar14;
          }
          goto LAB_148dc9235;
        }
        piVar12[2] = iVar14;
      }
      piVar12[1] = iVar14;
    }
    *piVar12 = iVar14;
  }
  else {
    piVar1 = piVar12 + (uVar17 - 4);
    for (; piVar12 < piVar1; piVar12 = piVar12 + 4) {
      *piVar12 = iVar14;
      piVar12[1] = iVar14;
      piVar12[2] = iVar14;
      piVar12[3] = iVar14;
    }
    *piVar1 = iVar14;
    piVar1[1] = iVar14;
    piVar1[2] = iVar14;
    piVar1[3] = iVar14;
  }
LAB_148dc9235:
  return param_2 + 6;
}

// VVM_acquireindex @ 148dc9250

uchar * __cdecl
VectorVM::Runtime::VVM_acquireindex
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  uchar *puVar4;
  FDataSetMeta *pFVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  
  bVar2 = param_2[2];
  iVar8 = (param_3->ChunkLocalData).NumInstancesThisChunk;
  puVar12 = (uint *)param_3->RegPtrTable[*(ushort *)param_2];
  bVar3 = param_3->RegIncTable[*(ushort *)param_2];
  uVar10 = 0;
  uVar9 = 0;
  puVar4 = (param_3->ChunkLocalData).OutputMaskIdx[bVar2];
  if (param_1) {
    iVar6 = iVar8 >> 2;
    iVar8 = iVar8 + iVar6 * -4;
    if (0 < iVar6) {
      lVar11 = 0;
      do {
        uVar7 = ((puVar12[1] & 0xbfffffff | *puVar12 >> 1) >> 1 | puVar12[2] & 0x9fffffff) >> 1 |
                puVar12[3] & 0x8fffffff;
        puVar12 = (uint *)((longlong)puVar12 + ((ulonglong)bVar3 & 0xfffffffffffffffc));
        puVar4[lVar11] = (byte)(uVar7 >> 0x1c);
        lVar11 = lVar11 + 1;
        uVar9 = uVar9 + ""[uVar7 >> 0x1c];
      } while (lVar11 < iVar6);
    }
    if (0 < iVar8) {
      if (iVar8 == 1) {
        uVar10 = *puVar12 >> 0x1f;
      }
      else if (iVar8 == 2) {
        uVar10 = (puVar12[1] & 0xbfffffff | *puVar12 >> 1) >> 0x1e;
      }
      else if (iVar8 == 3) {
        uVar10 = ((puVar12[1] & 0xbfffffff | *puVar12 >> 1) >> 1 | puVar12[2] & 0x9fffffff) >> 0x1d;
      }
      puVar4[iVar6] = (uchar)uVar10;
      uVar9 = uVar9 + ""[uVar10];
    }
  }
  else {
    if (iVar8 == 1) {
      uVar10 = *puVar12 >> 0x1f;
    }
    else if (iVar8 == 2) {
      uVar10 = (puVar12[1] & 0xbfffffff | *puVar12 >> 1) >> 0x1e;
    }
    else if (iVar8 == 3) {
      uVar10 = ((puVar12[1] & 0xbfffffff | *puVar12 >> 1) >> 1 | puVar12[2] & 0x9fffffff) >> 0x1d;
    }
    else if (iVar8 == 4) {
      uVar10 = (((puVar12[1] & 0xbfffffff | *puVar12 >> 1) >> 1 | puVar12[2] & 0x9fffffff) >> 1 |
               puVar12[3] & 0x8fffffff) >> 0x1c;
    }
    *puVar4 = (uchar)uVar10;
    uVar9 = (uint)""[uVar10];
  }
  LOCK();
  piVar1 = param_4->VVMState->NumOutputPerDataSet + bVar2;
  iVar8 = *piVar1;
  *piVar1 = *piVar1 + (uVar9 >> 2);
  UNLOCK();
  pFVar5 = TArrayView<FDataSetMeta,int>::operator[](&param_4->DataSets,(uint)bVar2);
  (param_3->ChunkLocalData).StartingOutputIdxPerDataSet[bVar2] = pFVar5->InstanceOffset + iVar8;
  puVar12 = (param_3->ChunkLocalData).NumOutputPerDataSet + bVar2;
  *puVar12 = *puVar12 + (uVar9 >> 2);
  return param_2 + 4;
}

// VVM_external_func_call @ 148dc9480

uchar * __cdecl
VectorVM::Runtime::VVM_external_func_call
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy> *this;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uchar *puVar5;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar6;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar7;
  uint uVar8;
  longlong *plVar9;
  FVectorVMExtFunctionData *pFVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  FReadAccessScope *local_a0;
  FReadAccessScope local_98;
  uint **local_80;
  uchar *local_78;
  undefined4 local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  void **local_58;
  int local_50;
  FRandomStream *local_48;
  int **local_40;
  FDataSetMeta *local_38;
  undefined8 uStack_30;
  
  pFVar10 = param_4->VVMState->ExtFunctionTable + *(ushort *)param_2;
  if ((param_4->VVMState->NumExtFunctions <= (*(ushort *)param_2 & 0xff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("*InsPtr < ExecCtx->VVMState->NumExtFunctions",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x5a8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar5 = (uchar *)(*pcVar2)();
    return puVar5;
  }
  if ((param_4->VVMState->MaxExtFnRegisters < (uint)(pFVar10->NumOutputs + pFVar10->NumInputs)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)(ExtFnData->NumInputs + ExtFnData->NumOutputs) <= ExecCtx->VVMState->MaxExtFnRegisters"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x5a9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar5 = (uchar *)(*pcVar2)();
    return puVar5;
  }
  plVar9 = (longlong *)0x0;
  uVar8 = 0;
  plVar11 = plVar9;
  plVar13 = plVar9;
  plVar14 = plVar9;
  if (0 < pFVar10->NumOutputs + pFVar10->NumInputs) {
    do {
      if (*(ushort *)(param_2 + (longlong)plVar11 * 2 + 2) == 0xffff) {
        (param_3->ChunkLocalData).ExtFnDecodedReg.RegData[(longlong)plVar11] =
             (uint *)((param_3->ChunkLocalData).ExtFnDecodedReg.DummyRegs + (longlong)plVar14);
        plVar14 = (longlong *)(ulonglong)((int)plVar14 + 1);
        (param_3->ChunkLocalData).ExtFnDecodedReg.RegInc[(longlong)plVar11] = '\0';
      }
      else {
        (param_3->ChunkLocalData).ExtFnDecodedReg.RegData[(longlong)plVar11] =
             (uint *)param_3->RegPtrTable[*(ushort *)(param_2 + (longlong)plVar11 * 2 + 2)];
        (param_3->ChunkLocalData).ExtFnDecodedReg.RegInc[(longlong)plVar11] =
             param_3->RegIncTable[*(ushort *)(param_2 + (longlong)plVar11 * 2 + 2)] >> 4;
      }
      uVar8 = (uint)plVar14;
      uVar12 = (int)plVar13 + 1;
      plVar11 = (longlong *)((longlong)plVar11 + 1);
      plVar13 = (longlong *)(ulonglong)uVar12;
    } while ((int)uVar12 < pFVar10->NumOutputs + pFVar10->NumInputs);
  }
  if ((param_4->VVMState->NumDummyRegsRequired < uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DummyRegCount <= ExecCtx->VVMState->NumDummyRegsRequired",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x5b9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    puVar5 = (uchar *)(*pcVar2)();
    return puVar5;
  }
  local_80 = (param_3->ChunkLocalData).ExtFnDecodedReg.RegData;
  local_38 = (param_4->DataSets).DataPtr;
  uStack_30 = *(undefined8 *)&(param_4->DataSets).ArrayNum;
  local_78 = (param_3->ChunkLocalData).ExtFnDecodedReg.RegInc;
  local_6c = pFVar10->NumOutputs + pFVar10->NumInputs;
  local_68 = (param_3->ChunkLocalData).StartInstanceThisChunk;
  local_64 = (param_3->ChunkLocalData).NumInstancesThisChunk;
  local_60 = param_5;
  local_58 = (param_4->UserPtrTable).DataPtr;
  local_50 = (param_4->UserPtrTable).ArrayNum;
  this = pFVar10->Function;
  local_48 = &param_3->RandStream;
  local_40 = &(param_3->ChunkLocalData).RandCounters;
  local_70 = 0;
  local_5c = 0;
  local_98.DestructionSentinel.AccessType = Reader;
  local_98.DestructionSentinel.bDestroyed = false;
  local_98.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)this;
  FVar6 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
          FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
  local_a0 = &local_98;
  FVar1 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
           ((longlong)FVar6 + 0x20);
  FVar7 = FVar6;
  if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    FVar7 = FVar1;
  }
  if ((ulonglong)FVar7 <= &local_a0) {
    FVar7 = FVar6;
    if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
      FVar7 = FVar1;
    }
    if ((&local_a0 < (ulonglong)((longlong)FVar7 + (longlong)*(int *)((longlong)FVar6 + 0x2c) * 8))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      puVar5 = (uchar *)(*pcVar2)();
      return puVar5;
    }
  }
  iVar4 = *(int *)((longlong)FVar6 + 0x28);
  if (iVar4 == *(int *)((longlong)FVar6 + 0x2c)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
                      (0x808,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *
                             )FVar6,(int *)((longlong)FVar6 + 0x2c));
  }
  *(int *)((longlong)FVar6 + 0x28) = iVar4 + 1;
  if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
       ((longlong)FVar6 + 0x20) !=
      (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    FVar6 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
             ((longlong)FVar6 + 0x20);
  }
  *(FReadAccessScope **)((longlong)FVar6 + (longlong)iVar4 * 8) = local_a0;
  FMRSWRecursiveAccessDetector::AcquireReadAccess((FMRSWRecursiveAccessDetector *)this);
  if (*(int *)&this->field_0x10 != 0) {
    plVar9 = *(longlong **)&this->field_0x8;
  }
  (**(code **)(*plVar9 + 0x60))(plVar9,&local_80);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_98);
  return param_2 + (longlong)((pFVar10->NumOutputs + pFVar10->NumInputs) * 2) + 3;
}

// VVM_update_id @ 148dc9790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uchar * __cdecl
VectorVM::Runtime::VVM_update_id
          (bool param_1,uchar *param_2,FVectorVMBatchState *param_3,FVectorVMExecContext *param_4,
          int param_5)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FDataSetMeta *pFVar8;
  uchar *puVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint local_res20;
  
  bVar1 = param_2[4];
  piVar2 = (int *)param_3->RegPtrTable[*(ushort *)param_2];
  pFVar8 = TArrayView<FDataSetMeta,int>::operator[](&param_4->DataSets,(uint)bVar1);
  if (((uint)(param_4->DataSets).ArrayNum <= (uint)bVar1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataSetIdx < (uint32)ExecCtx->DataSets.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x470,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    puVar9 = (uchar *)(*pcVar6)();
    return puVar9;
  }
  if ((pFVar8->IDTable == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataSet->IDTable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x471,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    puVar9 = (uchar *)(*pcVar6)();
    return puVar9;
  }
  if ((pFVar8->IDTable->ArrayNum <
       pFVar8->InstanceOffset + (param_3->ChunkLocalData).StartInstanceThisChunk +
       (param_3->ChunkLocalData).NumInstancesThisChunk) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataSet->IDTable->Num() >= DataSet->InstanceOffset + BatchState->ChunkLocalData.StartInstanceThisChunk + BatchState->ChunkLocalData.NumInstancesThisChunk"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VectorVM\\Private\\VectorVMRuntime.cpp"
                         ,0x472,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    puVar9 = (uchar *)(*pcVar6)();
    return puVar9;
  }
  uVar12 = 0;
  local_res20 = 0xffffffff;
  uVar23 = (param_3->ChunkLocalData).NumOutputPerDataSet[bVar1];
  uVar13 = 0;
  if ((int)uVar23 < 5) {
    uVar27 = uVar13;
    if (((0 < (int)uVar23) && (7 < uVar23)) && (1 < __isa_available)) {
      uVar29 = uVar23 & 0x80000007;
      if ((int)uVar29 < 0) {
        uVar29 = (uVar29 - 1 | 0xfffffff8) + 1;
      }
      uVar11 = uVar12;
      uVar21 = uVar12;
      uVar31 = ___xmm_ffffffffffffffffffffffffffffffff;
      uVar33 = _UNK_15060db24;
      uVar25 = _UNK_15060db28;
      uVar26 = _UNK_15060db2c;
      uVar28 = ___xmm_ffffffffffffffffffffffffffffffff;
      uVar30 = _UNK_15060db24;
      uVar32 = _UNK_15060db28;
      uVar34 = _UNK_15060db2c;
      do {
        piVar3 = piVar2 + uVar11;
        iVar16 = *piVar3;
        iVar17 = piVar3[1];
        iVar14 = piVar3[2];
        iVar18 = piVar3[3];
        uVar27 = (int)uVar21 + 8;
        uVar21 = (ulonglong)uVar27;
        uVar31 = (uint)((int)uVar31 < iVar16) * iVar16 | ((int)uVar31 >= iVar16) * uVar31;
        uVar33 = (uint)((int)uVar33 < iVar17) * iVar17 | ((int)uVar33 >= iVar17) * uVar33;
        uVar25 = (uint)((int)uVar25 < iVar14) * iVar14 | ((int)uVar25 >= iVar14) * uVar25;
        uVar26 = (uint)((int)uVar26 < iVar18) * iVar18 | ((int)uVar26 >= iVar18) * uVar26;
        piVar3 = piVar2 + uVar11 + 4;
        iVar16 = *piVar3;
        iVar17 = piVar3[1];
        iVar14 = piVar3[2];
        iVar18 = piVar3[3];
        uVar11 = uVar11 + 8;
        uVar28 = (uint)((int)uVar28 < iVar16) * iVar16 | ((int)uVar28 >= iVar16) * uVar28;
        uVar30 = (uint)((int)uVar30 < iVar17) * iVar17 | ((int)uVar30 >= iVar17) * uVar30;
        uVar32 = (uint)((int)uVar32 < iVar14) * iVar14 | ((int)uVar32 >= iVar14) * uVar32;
        uVar34 = (uint)((int)uVar34 < iVar18) * iVar18 | ((int)uVar34 >= iVar18) * uVar34;
      } while ((longlong)uVar11 < (longlong)(int)(uVar23 - uVar29));
      uVar29 = ((int)uVar31 < (int)uVar28) * uVar28 | ((int)uVar31 >= (int)uVar28) * uVar31;
      uVar31 = ((int)uVar33 < (int)uVar30) * uVar30 | ((int)uVar33 >= (int)uVar30) * uVar33;
      uVar33 = ((int)uVar25 < (int)uVar32) * uVar32 | ((int)uVar25 >= (int)uVar32) * uVar25;
      uVar25 = ((int)uVar26 < (int)uVar34) * uVar34 | ((int)uVar26 >= (int)uVar34) * uVar26;
      uVar29 = ((int)uVar29 < (int)uVar33) * uVar33 | ((int)uVar29 >= (int)uVar33) * uVar29;
      uVar31 = ((int)uVar31 < (int)uVar25) * uVar25 | ((int)uVar31 >= (int)uVar25) * uVar31;
      local_res20 = ((int)uVar29 < (int)uVar31) * uVar31 | ((int)uVar29 >= (int)uVar31) * uVar29;
    }
    for (lVar22 = (longlong)(int)uVar27; lVar22 < (int)uVar23; lVar22 = lVar22 + 1) {
      uVar27 = piVar2[lVar22];
      if (piVar2[lVar22] <= (int)local_res20) {
        uVar27 = local_res20;
      }
      local_res20 = uVar27;
    }
  }
  else {
    piVar3 = piVar2;
    uVar27 = ___xmm_ffffffffffffffffffffffffffffffff;
    uVar29 = _UNK_15060db24;
    uVar31 = _UNK_15060db28;
    uVar33 = _UNK_15060db2c;
    for (uVar11 = (ulonglong)((uVar23 + 3 & 0xfffffffc) - 1 >> 2); uVar11 != 0; uVar11 = uVar11 - 1)
    {
      iVar16 = *piVar3;
      iVar17 = piVar3[1];
      iVar14 = piVar3[2];
      iVar18 = piVar3[3];
      piVar3 = piVar3 + 4;
      uVar27 = (uint)((int)uVar27 < iVar16) * iVar16 | ((int)uVar27 >= iVar16) * uVar27;
      uVar29 = (uint)((int)uVar29 < iVar17) * iVar17 | ((int)uVar29 >= iVar17) * uVar29;
      uVar31 = (uint)((int)uVar31 < iVar14) * iVar14 | ((int)uVar31 >= iVar14) * uVar31;
      uVar33 = (uint)((int)uVar33 < iVar18) * iVar18 | ((int)uVar33 >= iVar18) * uVar33;
    }
    piVar3 = piVar2 + (longlong)(int)uVar23 + -4;
    iVar16 = *piVar3;
    iVar17 = piVar3[1];
    iVar14 = piVar3[2];
    iVar18 = piVar3[3];
    uVar25 = (iVar16 < (int)uVar27) * uVar27 | (uint)(iVar16 >= (int)uVar27) * iVar16;
    uVar27 = (iVar17 < (int)uVar29) * uVar29 | (uint)(iVar17 >= (int)uVar29) * iVar17;
    uVar31 = (iVar14 < (int)uVar31) * uVar31 | (uint)(iVar14 >= (int)uVar31) * iVar14;
    uVar29 = (iVar18 < (int)uVar33) * uVar33 | (uint)(iVar18 >= (int)uVar33) * iVar18;
    if ((int)uVar27 < (int)uVar25) {
      uVar27 = uVar25;
    }
    if ((int)uVar29 < (int)uVar31) {
      uVar29 = uVar31;
    }
    if ((int)uVar29 < (int)uVar27) {
      uVar29 = uVar27;
    }
    if (-1 < (int)uVar29) {
      local_res20 = uVar29;
    }
  }
  piVar3 = pFVar8->NumFreeIDs;
  LOCK();
  iVar17 = *piVar3;
  *piVar3 = *piVar3 + ((param_3->ChunkLocalData).NumInstancesThisChunk - uVar23);
  UNLOCK();
  iVar14 = (param_3->ChunkLocalData).NumInstancesThisChunk;
  iVar18 = iVar14 >> 2;
  puVar9 = (param_3->ChunkLocalData).OutputMaskIdx[bVar1];
  iVar16 = iVar18 * 4;
  iVar14 = iVar14 + iVar18 * -4;
  pFVar4 = (pFVar8->IDTable->AllocatorInstance).Data;
  pFVar5 = (pFVar8->FreeIDTable->AllocatorInstance).Data;
  uVar11 = uVar12;
  uVar21 = uVar12;
  uVar24 = uVar12;
  if (0 < iVar18) {
    do {
      iVar20 = (int)uVar12;
      lVar22 = (longlong)iVar20;
      uVar13 = iVar20 + (4 - (uint)(""[puVar9[uVar24]] >> 2));
      uVar12 = (ulonglong)uVar13;
      iVar19 = (param_3->ChunkLocalData).StartingOutputIdxPerDataSet[bVar1] + (int)uVar21;
      uVar23 = (int)uVar21 + (uint)(""[puVar9[uVar24]] >> 2);
      iVar15 = (int)uVar11;
      switch(puVar9[uVar24]) {
      case '\0':
        lVar22 = (longlong)iVar20;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar15];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 1];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 8) = piVar2[(longlong)iVar15 + 2];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 0xc) = piVar2[(longlong)iVar15 + 3];
        break;
      case '\x01':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        iVar20 = piVar2[(longlong)iVar15 + 1];
        goto LAB_148dc9b08;
      case '\x02':
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19;
        iVar20 = piVar2[iVar15];
LAB_148dc9b08:
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = iVar20;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 2];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 8) = piVar2[(longlong)iVar15 + 3];
        break;
      case '\x03':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19 + 1;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[(longlong)iVar15 + 2];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 3];
        break;
      case '\x04':
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar15];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 1];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 8) = piVar2[(longlong)iVar15 + 3];
        break;
      case '\x05':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19 + 1;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[(longlong)iVar15 + 1];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 3];
        break;
      case '\x06':
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19 + 1;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar15];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 3];
        break;
      case '\a':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19 + 1;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19 + 2;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[(longlong)iVar15 + 3];
        break;
      case '\b':
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar15];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 1];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 8) = piVar2[(longlong)iVar15 + 2];
        break;
      case '\t':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19 + 1;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[(longlong)iVar15 + 1];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 2];
        break;
      case '\n':
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19 + 1;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar15];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 2];
        break;
      case '\v':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19 + 1;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19 + 2;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[(longlong)iVar15 + 2];
        break;
      case '\f':
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19 + 1;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar15];
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar15 + 1];
        break;
      case '\r':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19 + 1;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19 + 2;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[(longlong)iVar15 + 1];
        break;
      case '\x0e':
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19 + 1;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19 + 2;
        *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar15];
        break;
      case '\x0f':
        *(int *)(pFVar4 + (longlong)piVar2[iVar15] * 4) = iVar19;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 1] * 4) = iVar19 + 1;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 2] * 4) = iVar19 + 2;
        *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar15 + 3] * 4) = iVar19 + 3;
      }
      uVar24 = uVar24 + 1;
      uVar11 = (ulonglong)(iVar15 + 4);
      uVar21 = (ulonglong)uVar23;
    } while ((longlong)uVar24 < (longlong)iVar18);
    uVar12 = (ulonglong)uVar23;
  }
  iVar20 = (int)uVar12 + (param_3->ChunkLocalData).StartingOutputIdxPerDataSet[bVar1];
  bVar1 = puVar9[iVar18];
  if (iVar14 == 1) {
    if ((bVar1 & 1) == 0) {
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) = piVar2[iVar16];
    }
    else {
      *(int *)(pFVar4 + (longlong)piVar2[iVar16] * 4) = iVar20;
    }
  }
  else if (iVar14 == 2) {
    bVar10 = bVar1 & 3;
    if ((bVar1 & 3) == 0) {
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) = piVar2[iVar16];
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4 + 4) =
           piVar2[(longlong)iVar16 + 1];
    }
    else if (bVar10 == 1) {
      *(int *)(pFVar4 + (longlong)piVar2[iVar16] * 4) = iVar20;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) =
           piVar2[(longlong)iVar16 + 1];
    }
    else if (bVar10 == 2) {
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 1] * 4) = iVar20;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) = piVar2[iVar16];
    }
    else if (bVar10 == 3) {
      *(int *)(pFVar4 + (longlong)piVar2[iVar16] * 4) = iVar20;
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 1] * 4) = iVar20 + 1;
    }
  }
  else if (iVar14 == 3) {
    switch(bVar1 & 7) {
    case 0:
      lVar22 = (longlong)(int)uVar13;
      *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4) = piVar2[iVar16];
      *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 4) = piVar2[(longlong)iVar16 + 1];
      *(int *)(pFVar5 + lVar22 * 4 + (longlong)iVar17 * 4 + 8) = piVar2[(longlong)iVar16 + 2];
      break;
    case 1:
      *(int *)(pFVar4 + (longlong)piVar2[iVar16] * 4) = iVar20;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) =
           piVar2[(longlong)iVar16 + 1];
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4 + 4) =
           piVar2[(longlong)iVar16 + 2];
      break;
    case 2:
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 1] * 4) = iVar20;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) = piVar2[iVar16];
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4 + 4) =
           piVar2[(longlong)iVar16 + 2];
      break;
    case 3:
      *(int *)(pFVar4 + (longlong)piVar2[iVar16] * 4) = iVar20;
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 1] * 4) = iVar20 + 1;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) =
           piVar2[(longlong)iVar16 + 2];
      break;
    case 4:
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 2] * 4) = iVar20;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) = piVar2[iVar16];
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4 + 4) =
           piVar2[(longlong)iVar16 + 1];
      break;
    case 5:
      *(int *)(pFVar4 + (longlong)piVar2[iVar16] * 4) = iVar20;
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 2] * 4) = iVar20 + 1;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) =
           piVar2[(longlong)iVar16 + 1];
      break;
    case 6:
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 1] * 4) = iVar20;
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 2] * 4) = iVar20 + 1;
      *(int *)(pFVar5 + (longlong)(int)uVar13 * 4 + (longlong)iVar17 * 4) = piVar2[iVar16];
      break;
    case 7:
      *(int *)(pFVar4 + (longlong)piVar2[iVar16] * 4) = iVar20;
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 1] * 4) = iVar20 + 1;
      *(int *)(pFVar4 + (longlong)piVar2[(longlong)iVar16 + 2] * 4) = iVar20 + 2;
    }
  }
  iVar16 = 0;
  if (local_res20 != 0xffffffff) {
    while (uVar23 = *pFVar8->MaxUsedID, iVar17 = iVar16, (int)uVar23 < (int)local_res20) {
      LOCK();
      bVar7 = uVar23 == *pFVar8->MaxUsedID;
      if (bVar7) {
        *pFVar8->MaxUsedID = local_res20;
      }
      UNLOCK();
      if ((bVar7) || (iVar17 = iVar16 + 1, bVar7 = 0x3fffffff < iVar16, iVar16 = iVar17, bVar7))
      break;
    }
    if (0x3fffffff < iVar17) {
      pcVar6 = (code *)swi(3);
      puVar9 = (uchar *)(*pcVar6)();
      return puVar9;
    }
  }
  return param_2 + 6;
}

// Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes @ 148dca0b0

UEnum * __cdecl Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes(void)

{
  if (Z_Registration_Info_UEnum_EVectorVMBaseTypes.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVectorVMBaseTypes.InnerSingleton,
               &Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVectorVMBaseTypes.InnerSingleton;
}

// Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation @ 148dca0f0

UEnum * __cdecl Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation(void)

{
  if (Z_Registration_Info_UEnum_EVectorVMOperandLocation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVectorVMOperandLocation.InnerSingleton,
               &Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVectorVMOperandLocation.InnerSingleton;
}

// IMPLEMENT_MODULE_VectorVM @ 148dca130

void __cdecl IMPLEMENT_MODULE_VectorVM(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarVVMPageSizeInKB'' @ 15040ce20

void __cdecl VectorVM::Runtime::_dynamic_atexit_destructor_for__CVarVVMPageSizeInKB__(void)

{
  CVarVVMPageSizeInKB._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVVMPageSizeInKB);
  return;
}

// `dynamic_atexit_destructor_for_'LogVectorVM'' @ 15040ce40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVectorVM__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVectorVM);
  return;
}

