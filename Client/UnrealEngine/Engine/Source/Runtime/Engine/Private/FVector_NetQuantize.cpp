// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1472ede10

UScriptStruct * __cdecl FVector_NetQuantize::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVector_NetQuantize.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FVector_NetQuantize.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVector_NetQuantize,(UObject *)pUVar1,
                         L"Vector_NetQuantize");
  }
  return Z_Registration_Info_UScriptStruct_FVector_NetQuantize.OuterSingleton;
}

// NetSerialize @ 147bf3f70

bool __thiscall
FVector_NetQuantize::NetSerialize
          (FVector_NetQuantize *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_res10 [4];
  int local_res20 [2];
  int local_38;
  int local_34 [3];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEngineNetworkCustomVersion::Guid);
  uVar4 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  if (0x16 < uVar4) {
    iVar5 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
    if (iVar5 != 0x1a) {
      if ((param_1->field_0x28 & 1) != 0) {
        bVar2 = UE::Net::ReadQuantizedVector(1,(TVector<double> *)this,param_1);
        *param_3 = bVar2;
        return true;
      }
      bVar2 = UE::Net::WriteQuantizedVector(1,(TVector<double> *)this,param_1);
      *param_3 = bVar2;
      return true;
    }
  }
  if ((param_1->field_0x28 & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsLoading()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\NetSerialization.h"
                       ,0x113,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_res10[0] = 0;
  (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res10,0x14);
  local_34[0] = 0;
  local_res20[0] = 0;
  local_38 = 0;
  iVar5 = 1 << ((char)local_res10[0] + 1U & 0x1f);
  iVar6 = 1 << ((char)local_res10[0] + 2U & 0x1f);
  (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_34,iVar6);
  (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res20,iVar6);
  (**(code **)(*(longlong *)param_1 + 0x198))(param_1,&local_38,iVar6);
  *(double *)this = (double)(local_34[0] - iVar5);
  *(double *)&this->field_0x8 = (double)(local_res20[0] - iVar5);
  *(double *)&this->field_0x10 = (double)(local_38 - iVar5);
  *param_3 = true;
  return true;
}

