// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FPreshaderDataContext @ 1485a3e90

FPreshaderDataContext * __thiscall
UE::Shader::FPreshaderDataContext::FPreshaderDataContext
          (FPreshaderDataContext *this,FPreshaderDataContext *param_1,uint param_2,uint param_3)

{
  uchar *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = param_1->Ptr;
  this->Ptr = puVar1 + param_2;
  this->EndPtr = puVar1 + param_2 + param_3;
  iVar2 = (param_1->Names).ArrayNum;
  uVar3 = *(undefined4 *)&(param_1->Names).field_0xc;
  (this->Names).DataPtr = (param_1->Names).DataPtr;
  (this->Names).ArrayNum = iVar2;
  *(undefined4 *)&(this->Names).field_0xc = uVar3;
  iVar2 = (param_1->StructTypes).ArrayNum;
  uVar3 = *(undefined4 *)&(param_1->StructTypes).field_0xc;
  (this->StructTypes).DataPtr = (param_1->StructTypes).DataPtr;
  (this->StructTypes).ArrayNum = iVar2;
  *(undefined4 *)&(this->StructTypes).field_0xc = uVar3;
  iVar2 = (param_1->StructComponentTypes).ArrayNum;
  uVar3 = *(undefined4 *)&(param_1->StructComponentTypes).field_0xc;
  (this->StructComponentTypes).DataPtr = (param_1->StructComponentTypes).DataPtr;
  (this->StructComponentTypes).ArrayNum = iVar2;
  *(undefined4 *)&(this->StructComponentTypes).field_0xc = uVar3;
  return this;
}

// FPreshaderDataContext @ 1485a3ed0

FPreshaderDataContext * __thiscall
UE::Shader::FPreshaderDataContext::FPreshaderDataContext
          (FPreshaderDataContext *this,FPreshaderData *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPreshaderDataContext *pFVar4;
  ForAnyElementType FVar5;
  
  FVar5 = (param_1->Data).AllocatorInstance;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)&(param_1->Data).AllocatorInstance.field_0x0 + ((longlong)FVar5 >> 0x18));
  }
  this->Ptr = (uchar *)FVar5;
  this->EndPtr = (uchar *)((longlong)(param_1->Data).ArrayNum + (longlong)FVar5);
  FVar5 = (param_1->Names).AllocatorInstance;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)&(param_1->Names).AllocatorInstance.field_0x0 + ((longlong)FVar5 >> 0x18));
  }
  (this->Names).DataPtr = (FScriptName *)FVar5;
  iVar1 = (param_1->Names).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPreshaderDataContext *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->Names).ArrayNum = iVar1;
  FVar5 = (param_1->StructTypes).AllocatorInstance;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)&(param_1->StructTypes).AllocatorInstance.field_0x0 +
            ((longlong)FVar5 >> 0x18));
  }
  (this->StructTypes).DataPtr = (FPreshaderStructType *)FVar5;
  iVar1 = (param_1->StructTypes).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPreshaderDataContext *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->StructTypes).ArrayNum = iVar1;
  FVar5 = (param_1->StructComponentTypes).AllocatorInstance;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)&(param_1->StructComponentTypes).AllocatorInstance.field_0x0 +
            ((longlong)FVar5 >> 0x18));
  }
  (this->StructComponentTypes).DataPtr = (EValueComponentType *)FVar5;
  iVar1 = (param_1->StructComponentTypes).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPreshaderDataContext *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->StructComponentTypes).ArrayNum = iVar1;
  return this;
}

