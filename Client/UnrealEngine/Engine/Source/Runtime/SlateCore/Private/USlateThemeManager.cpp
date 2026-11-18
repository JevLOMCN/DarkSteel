// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// StaticClass @ 142524ea0

UClass * __cdecl USlateThemeManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateThemeManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"SlateThemeManager",
               &Z_Registration_Info_UClass_USlateThemeManager.InnerSingleton,
               StaticRegisterNativesUSlateThemeManager,0x7d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorSettings",InternalConstructor<USlateThemeManager>,
               InternalVTableHelperCtorCaller<USlateThemeManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateThemeManager.InnerSingleton;
}

// USlateThemeManager @ 142549df0

USlateThemeManager * __thiscall
USlateThemeManager::USlateThemeManager(USlateThemeManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USlateThemeManager__6B_;
  (this->CurrentThemeId).A = 0;
  (this->CurrentThemeId).B = 0;
  (this->CurrentThemeId).C = 0;
  (this->CurrentThemeId).D = 0;
  FStyleColorList::FStyleColorList(&this->ActiveColors);
  return this;
}

// USlateThemeManager @ 142549e30

USlateThemeManager * __thiscall USlateThemeManager::USlateThemeManager(USlateThemeManager *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7USlateThemeManager__6B_;
  (this->CurrentThemeId).A = 0;
  (this->CurrentThemeId).B = 0;
  (this->CurrentThemeId).C = 0;
  (this->CurrentThemeId).D = 0;
  FStyleColorList::FStyleColorList(&this->ActiveColors);
  InitalizeDefaults(this);
  return this;
}

// ~USlateThemeManager @ 14254c910

void __thiscall USlateThemeManager::~USlateThemeManager(USlateThemeManager *this)

{
  ITextData *pIVar1;
  longlong lVar2;
  USlateThemeManager *pUVar3;
  
  this->_padding_ = (longlong)&___7USlateThemeManager__6B_;
  pUVar3 = this + 1;
  lVar2 = 0x3d;
  do {
    pIVar1 = pUVar3[-1].ActiveColors.DisplayNames[0x3c].TextData.Reference;
    pUVar3 = (USlateThemeManager *)(pUVar3[-1].ActiveColors.DisplayNames + 0x3c);
    lVar2 = lVar2 + -1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
  } while (lVar2 != 0);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 142582470

UClass * __cdecl USlateThemeManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateThemeManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"SlateThemeManager",
               &Z_Registration_Info_UClass_USlateThemeManager.InnerSingleton,
               StaticRegisterNativesUSlateThemeManager,0x7d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorSettings",InternalConstructor<USlateThemeManager>,
               InternalVTableHelperCtorCaller<USlateThemeManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateThemeManager.InnerSingleton;
}

// InitalizeDefaults @ 14258a720

void __thiscall USlateThemeManager::InitalizeDefaults(USlateThemeManager *this)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined8 uVar4;
  float fVar5;
  FColor FVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  undefined4 extraout_var_10;
  undefined4 extraout_var_11;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  undefined4 extraout_var_14;
  undefined4 extraout_var_15;
  undefined4 extraout_var_16;
  undefined4 extraout_var_17;
  undefined4 extraout_var_18;
  undefined4 extraout_var_19;
  undefined4 extraout_var_20;
  undefined4 extraout_var_21;
  undefined4 extraout_var_22;
  undefined4 extraout_var_23;
  undefined4 extraout_var_24;
  undefined4 extraout_var_25;
  undefined4 extraout_var_26;
  undefined4 extraout_var_27;
  undefined4 extraout_var_28;
  undefined4 extraout_var_29;
  undefined4 extraout_var_30;
  undefined4 extraout_var_31;
  undefined4 extraout_var_32;
  undefined4 extraout_var_33;
  undefined4 extraout_var_34;
  undefined4 extraout_var_35;
  undefined4 extraout_var_36;
  undefined4 extraout_var_37;
  undefined4 extraout_var_38;
  undefined4 extraout_var_39;
  undefined4 extraout_var_40;
  FString local_28 [2];
  byte *pbVar7;
  
  ::FString::FString(local_28,"#000000FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  fVar5 = __real_3b808081;
  pbVar7 = (byte *)CONCAT44(extraout_var,FVar6.field0_0x0);
  bVar3 = pbVar7[3];
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  (this->ActiveColors).StyleColors[0].field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[pbVar7[2]]
  ;
  (this->ActiveColors).StyleColors[0].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#151515FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_00,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[2].field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[pbVar7[2]]
  ;
  (this->ActiveColors).StyleColors[2].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[2].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[2].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#151515FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_01,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[1].field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[pbVar7[2]]
  ;
  (this->ActiveColors).StyleColors[1].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[1].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[1].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"0F0F0FFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_02,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[3].field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[pbVar7[2]]
  ;
  (this->ActiveColors).StyleColors[3].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[3].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[3].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"0F0F0FFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_03,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[4].field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[pbVar7[2]]
  ;
  (this->ActiveColors).StyleColors[4].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[4].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[4].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"0F0F0FFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_04,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[5].field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[pbVar7[2]]
  ;
  (this->ActiveColors).StyleColors[5].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[5].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[5].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"383838FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_05,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[6].field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[pbVar7[2]]
  ;
  (this->ActiveColors).StyleColors[6].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[6].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[6].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#1A1A1AFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_06,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[7].field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[pbVar7[2]]
  ;
  (this->ActiveColors).StyleColors[7].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[7].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[7].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#242424FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_07,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[8].field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[pbVar7[2]]
  ;
  (this->ActiveColors).StyleColors[8].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[8].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[8].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#2F2F2FFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_08,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[9].field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[pbVar7[2]]
  ;
  (this->ActiveColors).StyleColors[9].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[9].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[9].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#383838FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_09,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[10].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[10].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[10].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[10].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#4C4C4CFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_10,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0xb].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0xb].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0xb].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0xb].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#575757FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_11,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0xc].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0xc].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0xc].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0xc].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#808080FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_12,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0xd].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0xd].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0xd].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0xd].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#FFFFFFFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_13,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0xe].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0xe].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0xe].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0xe].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#FFFFFF40");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_14,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0xf].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0xf].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0xf].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0xf].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#0070E0FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_15,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x10].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x10].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x10].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x10].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#0070E0FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_16,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x11].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x11].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x11].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x11].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#0E86FFFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_17,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x12].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x12].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x12].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x12].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#0050A0FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_18,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x13].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x13].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x13].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x13].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#383838FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_19,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x14].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x14].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x14].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x14].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#C0C0C0FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_20,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x15].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x15].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x15].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x15].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#FFFFFFFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_21,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x16].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x16].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x16].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x16].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  uVar4 = *(undefined8 *)((longlong)&(this->ActiveColors).StyleColors[5].field0_0x0 + 8);
  *(undefined8 *)&(this->ActiveColors).StyleColors[0x17].field0_0x0 =
       *(undefined8 *)&(this->ActiveColors).StyleColors[5].field0_0x0;
  *(undefined8 *)((longlong)&(this->ActiveColors).StyleColors[0x17].field0_0x0 + 8) = uVar4;
  ::FString::FString(local_28,"#C8C8C8FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_22,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x18].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x18].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x18].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x18].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  uVar4 = *(undefined8 *)((longlong)&(this->ActiveColors).StyleColors[0x11].field0_0x0 + 8);
  *(undefined8 *)&(this->ActiveColors).StyleColors[0x19].field0_0x0 =
       *(undefined8 *)&(this->ActiveColors).StyleColors[0x11].field0_0x0;
  *(undefined8 *)((longlong)&(this->ActiveColors).StyleColors[0x19].field0_0x0 + 8) = uVar4;
  ::FString::FString(local_28,"#40576F");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_23,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x1a].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x1a].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x1a].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x1a].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#2C323AFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_24,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x1b].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x1b].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x1b].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x1b].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  uVar4 = *(undefined8 *)((longlong)&(this->ActiveColors).StyleColors[8].field0_0x0 + 8);
  *(undefined8 *)&(this->ActiveColors).StyleColors[0x1c].field0_0x0 =
       *(undefined8 *)&(this->ActiveColors).StyleColors[8].field0_0x0;
  *(undefined8 *)((longlong)&(this->ActiveColors).StyleColors[0x1c].field0_0x0 + 8) = uVar4;
  ::FString::FString(local_28,"464B50FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_25,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x1d].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x1d].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x1d].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x1d].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#26BBFFFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_26,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x1e].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x1e].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x1e].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x1e].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#A139BFFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_27,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x1f].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x1f].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x1f].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x1f].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#FF729CFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_28,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x20].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x20].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x20].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x20].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#FF4040FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_29,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x21].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x21].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x21].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x21].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#FE9B07FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_30,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x22].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x22].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x22].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x22].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#FFDC1AFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_31,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x23].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x23].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x23].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x23].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#8BC24AFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_32,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x24].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x24].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x24].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x24].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#804D39FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_33,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x25].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x25].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x25].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x25].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#242424FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_34,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x26].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x26].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x26].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x26].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#808080FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_35,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x27].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x27].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x27].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x27].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#FFFFFFFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_36,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x28].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x28].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x28].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x28].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#B68F55FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_37,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x29].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x29].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x29].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x29].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#FFB800FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_38,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x2a].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x2a].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x2a].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x2a].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#EF3535FF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_39,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x2b].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x2b].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x2b].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x2b].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_28,"#1FE44BFF");
  FVar6 = FColor::FromHex((FString *)&stack0x00000008);
  pbVar7 = (byte *)CONCAT44(extraout_var_40,FVar6.field0_0x0);
  fVar1 = FLinearColor::sRGBToLinearTable[pbVar7[1]];
  fVar2 = FLinearColor::sRGBToLinearTable[*pbVar7];
  bVar3 = pbVar7[3];
  (this->ActiveColors).StyleColors[0x2c].field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[pbVar7[2]];
  (this->ActiveColors).StyleColors[0x2c].field0_0x0._s_0.G = fVar1;
  (this->ActiveColors).StyleColors[0x2c].field0_0x0._s_0.B = fVar2;
  (this->ActiveColors).StyleColors[0x2c].field0_0x0._s_0.A = (float)bVar3 * fVar5;
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUSlateThemeManager @ 1425a8760

void __cdecl USlateThemeManager::StaticRegisterNativesUSlateThemeManager(void)

{
  return;
}

