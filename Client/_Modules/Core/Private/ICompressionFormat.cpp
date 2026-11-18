// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// Compress @ 1415b1240

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

bool __thiscall
ICompressionFormat::Compress
          (ICompressionFormat *this,void *param_1,int *param_2,void *param_3,int param_4,int param_5
          ,ECompressionFlags param_6)

{
  return false;
}

// Compress @ 1415b1250

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

bool __thiscall
ICompressionFormat::Compress
          (ICompressionFormat *this,void *param_1,long64 *param_2,void *param_3,long64 param_4,
          ulong64 param_5,ECompressionFlags param_6)

{
  undefined1 uVar1;
  
  if ((((param_4 == (int)param_4) && (*param_2 == (longlong)(int)*param_2)) &&
      (param_5 == (longlong)(int)param_5)) && (-1 < (int)param_5)) {
                    /* WARNING: Could not recover jumptable at 0x0001415b1292. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*this + 0x50))(this,param_1);
    return (bool)uVar1;
  }
  return false;
}

// GetCompressedBufferSize @ 1415c5210

int __thiscall
ICompressionFormat::GetCompressedBufferSize(ICompressionFormat *this,int param_1,int param_2)

{
  return -1;
}

// GetCompressedBufferSize @ 1415c5220

bool __thiscall
ICompressionFormat::GetCompressedBufferSize
          (ICompressionFormat *this,long64 *param_1,long64 param_2,ulong64 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FName *this_00;
  undefined1 local_res18 [16];
  FString local_18;
  
  if (((param_2 == (int)param_2) && (param_3 == (longlong)(int)param_3)) && (-1 < (int)param_3)) {
    iVar4 = (**(code **)((longlong)*this + 0x70))(this,param_2 & 0xffffffff,param_3 & 0xffffffff);
    *param_1 = (longlong)iVar4;
    return true;
  }
  this_00 = (FName *)(**(code **)((longlong)*this + 0x40))(this,local_res18);
  ::FName::ToString(this_00,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ICompressionFormat.h"
                     ,0x3c,
                     L"%s::GetCompressedBufferSize can\'t handle 64 bits - format needs to upgrade to the new API."
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// Uncompress @ 141606a40

bool __thiscall
ICompressionFormat::Uncompress
          (ICompressionFormat *this,void *param_1,int *param_2,void *param_3,int param_4,int param_5
          )

{
  return false;
}

// Uncompress @ 141606a50

bool __thiscall
ICompressionFormat::Uncompress
          (ICompressionFormat *this,void *param_1,long64 param_2,void *param_3,long64 param_4,
          ulong64 param_5)

{
  undefined1 uVar1;
  int iVar2;
  long64 local_res18 [2];
  
  if ((((param_2 == (int)param_2) && (param_4 == (int)param_4)) &&
      (iVar2 = (int)param_5, param_5 == (longlong)iVar2)) && (-1 < iVar2)) {
    local_res18[0] = param_2;
    uVar1 = (**(code **)((longlong)*this + 0x60))
                      (this,param_1,local_res18,param_3,(int)param_4,iVar2);
    return (bool)uVar1;
  }
  return false;
}

