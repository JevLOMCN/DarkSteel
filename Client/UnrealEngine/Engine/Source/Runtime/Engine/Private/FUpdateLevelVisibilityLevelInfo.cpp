// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147b9e540

UScriptStruct * __cdecl FUpdateLevelVisibilityLevelInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUpdateLevelVisibilityLevelInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FUpdateLevelVisibilityLevelInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo,(UObject *)pUVar1
                         ,L"UpdateLevelVisibilityLevelInfo");
  }
  return Z_Registration_Info_UScriptStruct_FUpdateLevelVisibilityLevelInfo.OuterSingleton;
}

// FUpdateLevelVisibilityLevelInfo @ 147bba6f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FUpdateLevelVisibilityLevelInfo * __thiscall
FUpdateLevelVisibilityLevelInfo::FUpdateLevelVisibilityLevelInfo
          (FUpdateLevelVisibilityLevelInfo *this,ULevel *param_1,bool param_2,bool param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  FUpdateLevelVisibilityLevelInfo *pFVar4;
  UPackage *this_00;
  FPackagePath *this_01;
  FName local_res8;
  
  (this->PackageName).ComparisonIndex = 0;
  (this->PackageName).Number = 0;
  (this->FileName).ComparisonIndex = 0;
  (this->FileName).Number = 0;
  (this->VisibilityRequestId).Data = 0;
  *(uint *)&this->field_0x14 =
       *(uint *)&this->field_0x14 & 0xfffffff8 | (uint)param_2 | (uint)param_3 * 2;
  if ((param_3 != 0) && ((uint)param_2 == (uint)param_3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bTryMakeVisible || (bIsVisible != bTryMakeVisible)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\UpdateLevelVisibilityLevelInfo.cpp"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FUpdateLevelVisibilityLevelInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  this_00 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  uVar2 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
  (this->PackageName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this_00->_padding_;
  (this->PackageName).Number = uVar2;
  this_01 = UPackage::GetLoadedPath(this_00);
  FPackagePath::GetPackageFName(this_01);
  pFVar4 = (FUpdateLevelVisibilityLevelInfo *)&local_res8;
  if (local_res8 == (FName)0x0) {
    pFVar4 = this;
  }
  this->FileName = pFVar4->PackageName;
  return this;
}

// NetSerialize @ 147bf3e50

bool __thiscall
FUpdateLevelVisibilityLevelInfo::NetSerialize
          (FUpdateLevelVisibilityLevelInfo *this,FArchive *param_1,UPackageMap *param_2,
          bool *param_3)

{
  uint uVar1;
  char local_res8 [8];
  byte local_res10 [16];
  byte local_res20 [8];
  
  if (((PlayerControllerCVars::LevelVisibilityDontSerializeFileName) ||
      (this->FileName == this->PackageName)) || (this->FileName == (FName)0x0)) {
    local_res8[0] = '\x01';
  }
  else {
    local_res8[0] = '\0';
  }
  local_res10[0] = this->bIsVisible;
  local_res20[0] = this->bTryMakeVisible;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res8,1);
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res20,1);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
  if (local_res8[0] == '\0') {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->FileName);
  }
  else if ((param_1->field_0x28 & 1) != 0) {
    this->FileName = this->PackageName;
  }
  FNetLevelVisibilityTransactionId::NetSerialize(&this->VisibilityRequestId,param_1,param_2,param_3)
  ;
  uVar1 = ((uint)local_res10[0] ^ this->bIsVisible) & 1 ^ *(uint *)&this->field_0x14;
  *(uint *)&this->field_0x14 = ((uint)local_res20[0] * 2 ^ uVar1) & 2 ^ uVar1;
  *param_3 = (bool)(~((byte)param_1->field_0x29 >> 1) & 1);
  return true;
}

