// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 69

// StaticStruct @ 14a06d380

UScriptStruct * __cdecl FRigVMByteCode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMByteCode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMByteCode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMByteCode,(UObject *)pUVar1,L"RigVMByteCode"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FRigVMByteCode.OuterSingleton;
}

// AddOp<FRigVMBaseOp> @ 14a0737e0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

int __thiscall FRigVMByteCode::AddOp<FRigVMBaseOp>(FRigVMByteCode *this,FRigVMBaseOp *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if ((param_1->OpCode < Zero) || (SetupTraits < param_1->OpCode)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InOp.OpCode > ERigVMOpCode::Execute_64_Operands) && (InOp.OpCode < ERigVMOpCode::Invalid)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x5d6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  piVar1 = &(this->ByteCode).ArrayNum;
  uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,1,(ForAnyElementType *)this,piVar1,&(this->ByteCode).ArrayMax);
  (this->ByteCode).AllocatorInstance.Data[(int)uVar5] = (FScriptContainerElement)0x0;
  uVar6 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  (this->ByteCode).AllocatorInstance.Data[(int)uVar5] = (FScriptContainerElement)param_1->OpCode;
  this->NumInstructions = this->NumInstructions + 1;
  return uVar5;
}

// AddOp<FRigVMBinaryOp> @ 14a0738e0

int __thiscall FRigVMByteCode::AddOp<FRigVMBinaryOp>(FRigVMByteCode *this,FRigVMBinaryOp *param_1)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  bVar2 = (byte)param_1->_padding_;
  if ((bVar2 < 0x41) || (0x67 < bVar2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InOp.OpCode > ERigVMOpCode::Execute_64_Operands) && (InOp.OpCode < ERigVMOpCode::Invalid)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x5d6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  piVar1 = &(this->ByteCode).ArrayNum;
  uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0xe,(ForAnyElementType *)this,piVar1,&(this->ByteCode).ArrayMax);
  pFVar8 = (this->ByteCode).AllocatorInstance.Data;
  *(undefined8 *)(pFVar8 + (int)uVar6) = 0;
  *(undefined4 *)(pFVar8 + (longlong)(int)uVar6 + 8) = 0;
  *(undefined2 *)(pFVar8 + (longlong)(int)uVar6 + 0xc) = 0;
  uVar7 = 0;
  if ((int)uVar6 < *piVar1) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pFVar8 = (this->ByteCode).AllocatorInstance.Data + (int)uVar6;
  *(undefined8 *)pFVar8 = *(undefined8 *)param_1;
  *(undefined4 *)(pFVar8 + 8) = *(undefined4 *)&param_1->ArgB;
  *(ushort *)(pFVar8 + 0xc) = (param_1->ArgB).RegisterOffset;
  if (pFVar8 + 1 < pFVar8 + 2) {
    pFVar8[1] = (FScriptContainerElement)0x0;
  }
  if (pFVar8 + 3 < pFVar8 + 4) {
    pFVar8[3] = (FScriptContainerElement)0x0;
  }
  if (pFVar8 + 9 < pFVar8 + 10) {
    pFVar8[9] = (FScriptContainerElement)0x0;
  }
  this->NumInstructions = this->NumInstructions + 1;
  return uVar6;
}

// AddOp<FRigVMComparisonOp> @ 14a073a30

int __thiscall
FRigVMByteCode::AddOp<FRigVMComparisonOp>(FRigVMByteCode *this,FRigVMComparisonOp *param_1)

{
  int *piVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  bVar2 = (byte)param_1->_padding_;
  if ((bVar2 < 0x41) || (0x67 < bVar2)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InOp.OpCode > ERigVMOpCode::Execute_64_Operands) && (InOp.OpCode < ERigVMOpCode::Invalid)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x5d6,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  piVar1 = &(this->ByteCode).ArrayNum;
  uVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x14,(ForAnyElementType *)this,piVar1,&(this->ByteCode).ArrayMax);
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  pFVar10 = pFVar3 + (int)uVar8;
  *(undefined8 *)pFVar10 = 0;
  *(undefined8 *)(pFVar10 + 8) = 0;
  *(undefined4 *)(pFVar3 + (longlong)(int)uVar8 + 0x10) = 0;
  uVar9 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  uVar5 = *(undefined8 *)&param_1->B;
  pFVar10 = (this->ByteCode).AllocatorInstance.Data + (int)uVar8;
  *(undefined8 *)pFVar10 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar10 + 8) = uVar5;
  *(undefined4 *)(pFVar10 + 0x10) = *(undefined4 *)&(param_1->Result).RegisterIndex;
  if (pFVar10 + 1 < pFVar10 + 2) {
    pFVar10[1] = (FScriptContainerElement)0x0;
  }
  if (pFVar10 + 3 < pFVar10 + 4) {
    pFVar10[3] = (FScriptContainerElement)0x0;
  }
  if (pFVar10 + 9 < pFVar10 + 10) {
    pFVar10[9] = (FScriptContainerElement)0x0;
  }
  if (pFVar10 + 0xf < pFVar10 + 0x10) {
    pFVar10[0xf] = (FScriptContainerElement)0x0;
  }
  this->NumInstructions = this->NumInstructions + 1;
  return uVar8;
}

// AddOp<FRigVMCopyOp> @ 14a073b80

int __thiscall FRigVMByteCode::AddOp<FRigVMCopyOp>(FRigVMByteCode *this,FRigVMCopyOp *param_1)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  bVar2 = (byte)param_1->_padding_;
  if ((bVar2 < 0x41) || (0x67 < bVar2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InOp.OpCode > ERigVMOpCode::Execute_64_Operands) && (InOp.OpCode < ERigVMOpCode::Invalid)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x5d6,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  piVar1 = &(this->ByteCode).ArrayNum;
  uVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x10,(ForAnyElementType *)this,piVar1,&(this->ByteCode).ArrayMax);
  pFVar9 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  *(undefined8 *)pFVar9 = 0;
  *(undefined8 *)(pFVar9 + 8) = 0;
  uVar8 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  uVar4 = *(undefined8 *)&param_1->Target;
  pFVar9 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  *(undefined8 *)pFVar9 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar9 + 8) = uVar4;
  if (pFVar9 + 1 < pFVar9 + 2) {
    pFVar9[1] = (FScriptContainerElement)0x0;
  }
  if (pFVar9 + 3 < pFVar9 + 4) {
    pFVar9[3] = (FScriptContainerElement)0x0;
  }
  if (pFVar9 + 9 < pFVar9 + 10) {
    pFVar9[9] = (FScriptContainerElement)0x0;
  }
  this->NumInstructions = this->NumInstructions + 1;
  return uVar7;
}

// AddOp<FRigVMInvokeEntryOp> @ 14a073cb0

int __thiscall
FRigVMByteCode::AddOp<FRigVMInvokeEntryOp>(FRigVMByteCode *this,FRigVMInvokeEntryOp *param_1)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  bVar2 = (byte)param_1->_padding_;
  if ((bVar2 < 0x41) || (0x67 < bVar2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InOp.OpCode > ERigVMOpCode::Execute_64_Operands) && (InOp.OpCode < ERigVMOpCode::Invalid)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x5d6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  piVar1 = &(this->ByteCode).ArrayNum;
  uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0xc,(ForAnyElementType *)this,piVar1,&(this->ByteCode).ArrayMax);
  pFVar8 = (this->ByteCode).AllocatorInstance.Data;
  *(undefined8 *)(pFVar8 + (int)uVar6) = 0;
  *(undefined4 *)(pFVar8 + (longlong)(int)uVar6 + 8) = 0;
  uVar7 = 0;
  if ((int)uVar6 < *piVar1) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pFVar8 = (this->ByteCode).AllocatorInstance.Data + (int)uVar6;
  *(undefined8 *)pFVar8 = *(undefined8 *)param_1;
  *(uint *)(pFVar8 + 8) = (param_1->EntryName).Number;
  if (pFVar8 + 1 < pFVar8 + 4) {
    *(undefined2 *)(pFVar8 + 1) = 0;
    pFVar8[3] = (FScriptContainerElement)0x0;
  }
  this->NumInstructions = this->NumInstructions + 1;
  return uVar6;
}

// AddOp<FRigVMJumpIfOp> @ 14a073dd0

int __thiscall FRigVMByteCode::AddOp<FRigVMJumpIfOp>(FRigVMByteCode *this,FRigVMJumpIfOp *param_1)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  bVar2 = (byte)param_1->_padding_;
  if ((bVar2 < 0x41) || (0x67 < bVar2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InOp.OpCode > ERigVMOpCode::Execute_64_Operands) && (InOp.OpCode < ERigVMOpCode::Invalid)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x5d6,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  piVar1 = &(this->ByteCode).ArrayNum;
  uVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x10,(ForAnyElementType *)this,piVar1,&(this->ByteCode).ArrayMax);
  pFVar9 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  *(undefined8 *)pFVar9 = 0;
  *(undefined8 *)(pFVar9 + 8) = 0;
  uVar8 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  uVar4 = *(undefined8 *)&param_1->InstructionIndex;
  pFVar9 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  *(longlong *)pFVar9 = param_1->_padding_;
  *(undefined8 *)(pFVar9 + 8) = uVar4;
  if (pFVar9 + 1 < pFVar9 + 2) {
    pFVar9[1] = (FScriptContainerElement)0x0;
  }
  if (pFVar9 + 3 < pFVar9 + 4) {
    pFVar9[3] = (FScriptContainerElement)0x0;
  }
  if (pFVar9 + 0xd < pFVar9 + 0x10) {
    *(undefined2 *)(pFVar9 + 0xd) = 0;
    pFVar9[0xf] = (FScriptContainerElement)0x0;
  }
  this->NumInstructions = this->NumInstructions + 1;
  return uVar7;
}

// AddOp<FRigVMJumpOp> @ 14a073f10

int __thiscall FRigVMByteCode::AddOp<FRigVMJumpOp>(FRigVMByteCode *this,FRigVMJumpOp *param_1)

{
  int *piVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  bVar2 = (byte)param_1->_padding_;
  if ((bVar2 < 0x41) || (0x67 < bVar2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InOp.OpCode > ERigVMOpCode::Execute_64_Operands) && (InOp.OpCode < ERigVMOpCode::Invalid)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x5d6,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  piVar1 = &(this->ByteCode).ArrayNum;
  uVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,8,(ForAnyElementType *)this,piVar1,&(this->ByteCode).ArrayMax);
  *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar7) = 0;
  uVar8 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  *(FRigVMJumpOp *)(pFVar3 + (int)uVar7) = *param_1;
  pFVar9 = pFVar3 + (longlong)(int)uVar7 + 1;
  if (pFVar9 < pFVar3 + (longlong)(int)uVar7 + 4) {
    *(undefined2 *)pFVar9 = 0;
    pFVar9[2] = (FScriptContainerElement)0x0;
  }
  this->NumInstructions = this->NumInstructions + 1;
  return uVar7;
}

// AddOp<FRigVMJumpToBranchOp> @ 14a074030

int __thiscall
FRigVMByteCode::AddOp<FRigVMJumpToBranchOp>(FRigVMByteCode *this,FRigVMJumpToBranchOp *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  if ((*(byte *)param_1 < 0x41) || (0x67 < *(byte *)param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InOp.OpCode > ERigVMOpCode::Execute_64_Operands) && (InOp.OpCode < ERigVMOpCode::Invalid)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x5d6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  piVar1 = &(this->ByteCode).ArrayNum;
  uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0xc,(ForAnyElementType *)this,piVar1,&(this->ByteCode).ArrayMax);
  pFVar7 = (this->ByteCode).AllocatorInstance.Data;
  *(undefined8 *)(pFVar7 + (int)uVar5) = 0;
  *(undefined4 *)(pFVar7 + (longlong)(int)uVar5 + 8) = 0;
  uVar6 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pFVar7 = (this->ByteCode).AllocatorInstance.Data + (int)uVar5;
  *(undefined8 *)pFVar7 = *(undefined8 *)param_1;
  *(int *)(pFVar7 + 8) = param_1->FirstBranchInfoIndex;
  if (pFVar7 + 1 < pFVar7 + 2) {
    pFVar7[1] = (FScriptContainerElement)0x0;
  }
  if (pFVar7 + 3 < pFVar7 + 4) {
    pFVar7[3] = (FScriptContainerElement)0x0;
  }
  this->NumInstructions = this->NumInstructions + 1;
  return uVar5;
}

// AddOp<FRigVMQuaternaryOp> @ 14a074160

int __thiscall
FRigVMByteCode::AddOp<FRigVMQuaternaryOp>(FRigVMByteCode *this,FRigVMQuaternaryOp *param_1)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  bVar2 = (byte)param_1->_padding_;
  if ((bVar2 < 0x41) || (0x67 < bVar2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InOp.OpCode > ERigVMOpCode::Execute_64_Operands) && (InOp.OpCode < ERigVMOpCode::Invalid)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x5d6,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  piVar1 = &(this->ByteCode).ArrayNum;
  uVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x1a,(ForAnyElementType *)this,piVar1,&(this->ByteCode).ArrayMax);
  pFVar9 = (this->ByteCode).AllocatorInstance.Data;
  *(undefined8 *)(pFVar9 + (int)uVar7) = 0;
  *(undefined8 *)(pFVar9 + (int)uVar7 + 8) = 0;
  *(undefined8 *)(pFVar9 + (longlong)(int)uVar7 + 0x10) = 0;
  *(undefined2 *)(pFVar9 + (longlong)(int)uVar7 + 0x18) = 0;
  uVar8 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  uVar4 = *(undefined8 *)&param_1->ArgB;
  pFVar9 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  *(undefined8 *)pFVar9 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar9 + 8) = uVar4;
  *(undefined8 *)(pFVar9 + 0x10) = *(undefined8 *)&(param_1->ArgC).RegisterIndex;
  *(ushort *)(pFVar9 + 0x18) = (param_1->ArgD).RegisterOffset;
  if (pFVar9 + 1 < pFVar9 + 2) {
    pFVar9[1] = (FScriptContainerElement)0x0;
  }
  if (pFVar9 + 3 < pFVar9 + 4) {
    pFVar9[3] = (FScriptContainerElement)0x0;
  }
  if (pFVar9 + 9 < pFVar9 + 10) {
    pFVar9[9] = (FScriptContainerElement)0x0;
  }
  if (pFVar9 + 0xf < pFVar9 + 0x10) {
    pFVar9[0xf] = (FScriptContainerElement)0x0;
  }
  if (pFVar9 + 0x15 < pFVar9 + 0x16) {
    pFVar9[0x15] = (FScriptContainerElement)0x0;
  }
  this->NumInstructions = this->NumInstructions + 1;
  return uVar7;
}

// AddOp<FRigVMRunInstructionsOp> @ 14a0742d0

int __thiscall
FRigVMByteCode::AddOp<FRigVMRunInstructionsOp>
          (FRigVMByteCode *this,FRigVMRunInstructionsOp *param_1)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  bVar2 = (byte)param_1->_padding_;
  if ((bVar2 < 0x41) || (0x67 < bVar2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InOp.OpCode > ERigVMOpCode::Execute_64_Operands) && (InOp.OpCode < ERigVMOpCode::Invalid)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x5d6,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  piVar1 = &(this->ByteCode).ArrayNum;
  uVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x10,(ForAnyElementType *)this,piVar1,&(this->ByteCode).ArrayMax);
  pFVar9 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  *(undefined8 *)pFVar9 = 0;
  *(undefined8 *)(pFVar9 + 8) = 0;
  uVar8 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  uVar4 = *(undefined8 *)&param_1->StartInstruction;
  pFVar9 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  *(longlong *)pFVar9 = param_1->_padding_;
  *(undefined8 *)(pFVar9 + 8) = uVar4;
  if (pFVar9 + 1 < pFVar9 + 2) {
    pFVar9[1] = (FScriptContainerElement)0x0;
  }
  if (pFVar9 + 3 < pFVar9 + 4) {
    pFVar9[3] = (FScriptContainerElement)0x0;
  }
  this->NumInstructions = this->NumInstructions + 1;
  return uVar7;
}

// AddOp<FRigVMSenaryOp> @ 14a0743f0

int __thiscall FRigVMByteCode::AddOp<FRigVMSenaryOp>(FRigVMByteCode *this,FRigVMSenaryOp *param_1)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  bVar2 = (byte)param_1->_padding_;
  if ((bVar2 < 0x41) || (0x67 < bVar2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InOp.OpCode > ERigVMOpCode::Execute_64_Operands) && (InOp.OpCode < ERigVMOpCode::Invalid)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x5d6,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  piVar1 = &(this->ByteCode).ArrayNum;
  uVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x26,(ForAnyElementType *)this,piVar1,&(this->ByteCode).ArrayMax);
  pFVar9 = (this->ByteCode).AllocatorInstance.Data;
  *(undefined8 *)(pFVar9 + (int)uVar7) = 0;
  *(undefined8 *)(pFVar9 + (int)uVar7 + 8) = 0;
  *(undefined8 *)(pFVar9 + (longlong)(int)uVar7 + 0x10) = 0;
  *(undefined8 *)(pFVar9 + (longlong)(int)uVar7 + 0x10 + 8) = 0;
  *(undefined4 *)(pFVar9 + (longlong)(int)uVar7 + 0x20) = 0;
  *(undefined2 *)(pFVar9 + (longlong)(int)uVar7 + 0x24) = 0;
  uVar8 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  uVar4 = *(undefined8 *)&param_1->ArgB;
  pFVar9 = (this->ByteCode).AllocatorInstance.Data + (int)uVar7;
  *(undefined8 *)pFVar9 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar9 + 8) = uVar4;
  uVar4 = *(undefined8 *)&(param_1->ArgD).RegisterOffset;
  *(undefined8 *)(pFVar9 + 0x10) = *(undefined8 *)&(param_1->ArgC).RegisterIndex;
  *(undefined8 *)(pFVar9 + 0x18) = uVar4;
  *(undefined4 *)(pFVar9 + 0x20) = *(undefined4 *)&param_1->ArgF;
  *(ushort *)(pFVar9 + 0x24) = (param_1->ArgF).RegisterOffset;
  if (pFVar9 + 1 < pFVar9 + 2) {
    pFVar9[1] = (FScriptContainerElement)0x0;
  }
  if (pFVar9 + 3 < pFVar9 + 4) {
    pFVar9[3] = (FScriptContainerElement)0x0;
  }
  if (pFVar9 + 9 < pFVar9 + 10) {
    pFVar9[9] = (FScriptContainerElement)0x0;
  }
  if (pFVar9 + 0xf < pFVar9 + 0x10) {
    pFVar9[0xf] = (FScriptContainerElement)0x0;
  }
  if (pFVar9 + 0x15 < pFVar9 + 0x16) {
    pFVar9[0x15] = (FScriptContainerElement)0x0;
  }
  if (pFVar9 + 0x1b < pFVar9 + 0x1c) {
    pFVar9[0x1b] = (FScriptContainerElement)0x0;
  }
  if (pFVar9 + 0x21 < pFVar9 + 0x22) {
    pFVar9[0x21] = (FScriptContainerElement)0x0;
  }
  this->NumInstructions = this->NumInstructions + 1;
  return uVar7;
}

// AddOp<FRigVMSetupTraitsOp> @ 14a074590

int __thiscall
FRigVMByteCode::AddOp<FRigVMSetupTraitsOp>(FRigVMByteCode *this,FRigVMSetupTraitsOp *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FRigVMSetupTraitsOp *pFVar7;
  
  if ((*(byte *)param_1 < 0x41) || (0x67 < *(byte *)param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InOp.OpCode > ERigVMOpCode::Execute_64_Operands) && (InOp.OpCode < ERigVMOpCode::Invalid)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x5d6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  piVar1 = &(this->ByteCode).ArrayNum;
  uVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,8,(ForAnyElementType *)this,piVar1,&(this->ByteCode).ArrayMax);
  *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar5) = 0;
  uVar6 = 0;
  if ((int)uVar5 < *piVar1) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pFVar7 = (FRigVMSetupTraitsOp *)((this->ByteCode).AllocatorInstance.Data + (int)uVar5);
  *pFVar7 = *param_1;
  if (&pFVar7->field_0x1 < &pFVar7->field_0x2) {
    pFVar7->field_0x1 = 0;
  }
  if (&pFVar7->field_0x3 < &pFVar7->field_0x4) {
    pFVar7->field_0x3 = 0;
  }
  this->NumInstructions = this->NumInstructions + 1;
  return uVar5;
}

// AddOp<FRigVMTernaryOp> @ 14a0746b0

int __thiscall FRigVMByteCode::AddOp<FRigVMTernaryOp>(FRigVMByteCode *this,FRigVMTernaryOp *param_1)

{
  int *piVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  bVar2 = (byte)param_1->_padding_;
  if ((bVar2 < 0x41) || (0x67 < bVar2)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InOp.OpCode > ERigVMOpCode::Execute_64_Operands) && (InOp.OpCode < ERigVMOpCode::Invalid)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x5d6,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  piVar1 = &(this->ByteCode).ArrayNum;
  uVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x14,(ForAnyElementType *)this,piVar1,&(this->ByteCode).ArrayMax);
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  pFVar10 = pFVar3 + (int)uVar8;
  *(undefined8 *)pFVar10 = 0;
  *(undefined8 *)(pFVar10 + 8) = 0;
  *(undefined4 *)(pFVar3 + (longlong)(int)uVar8 + 0x10) = 0;
  uVar9 = 0;
  if ((int)uVar8 < *piVar1) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  uVar5 = *(undefined8 *)&param_1->ArgB;
  pFVar10 = (this->ByteCode).AllocatorInstance.Data + (int)uVar8;
  *(undefined8 *)pFVar10 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar10 + 8) = uVar5;
  *(undefined4 *)(pFVar10 + 0x10) = *(undefined4 *)&(param_1->ArgC).RegisterIndex;
  if (pFVar10 + 1 < pFVar10 + 2) {
    pFVar10[1] = (FScriptContainerElement)0x0;
  }
  if (pFVar10 + 3 < pFVar10 + 4) {
    pFVar10[3] = (FScriptContainerElement)0x0;
  }
  if (pFVar10 + 9 < pFVar10 + 10) {
    pFVar10[9] = (FScriptContainerElement)0x0;
  }
  if (pFVar10 + 0xf < pFVar10 + 0x10) {
    pFVar10[0xf] = (FScriptContainerElement)0x0;
  }
  this->NumInstructions = this->NumInstructions + 1;
  return uVar8;
}

// AddOp<FRigVMUnaryOp> @ 14a074800

int __thiscall FRigVMByteCode::AddOp<FRigVMUnaryOp>(FRigVMByteCode *this,FRigVMUnaryOp *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FRigVMUnaryOp *pFVar9;
  
  bVar3 = (byte)param_1->_padding_;
  if ((bVar3 < 0x41) || (0x67 < bVar3)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InOp.OpCode > ERigVMOpCode::Execute_64_Operands) && (InOp.OpCode < ERigVMOpCode::Invalid)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x5d6,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  piVar1 = &(this->ByteCode).ArrayNum;
  uVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,8,(ForAnyElementType *)this,piVar1,&(this->ByteCode).ArrayMax);
  *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + (int)uVar7) = 0;
  uVar8 = 0;
  if ((int)uVar7 < *piVar1) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  pFVar9 = (FRigVMUnaryOp *)((this->ByteCode).AllocatorInstance.Data + (int)uVar7);
  *pFVar9 = *param_1;
  puVar2 = (undefined1 *)((longlong)&pFVar9->_padding_ + 1);
  if (puVar2 < &pFVar9->Arg) {
    *puVar2 = 0;
  }
  puVar2 = &(pFVar9->Arg).field_0x1;
  if (puVar2 < &(pFVar9->Arg).RegisterIndex) {
    *puVar2 = 0;
  }
  this->NumInstructions = this->NumInstructions + 1;
  return uVar7;
}

// FRigVMByteCode @ 14a079630

FRigVMByteCode * __thiscall FRigVMByteCode::FRigVMByteCode(FRigVMByteCode *this)

{
  (this->ByteCode).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteCode).ArrayNum = 0;
  (this->ByteCode).ArrayMax = 0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  (this->BranchInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BranchInfos).ArrayNum = 0;
  (this->BranchInfos).ArrayMax = 0;
  (this->PredicateBranches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PredicateBranches).ArrayNum = 0;
  (this->PredicateBranches).ArrayMax = 0;
  (this->PublicContextAssetPath).PackageName.ComparisonIndex = 0;
  (this->PublicContextAssetPath).PackageName.Number = 0;
  (this->PublicContextAssetPath).AssetName.ComparisonIndex = 0;
  (this->PublicContextAssetPath).AssetName.Number = 0;
  *(undefined8 *)&this->BranchInfoLookup = 0;
  *(undefined8 *)&(this->BranchInfoLookup).field_0x8 = 0;
  *(undefined8 *)&(this->BranchInfoLookup).field_0x20 = 0;
  this->NumInstructions = 0;
  *(undefined4 *)&(this->BranchInfoLookup).field_0x28 = 0;
  *(undefined4 *)&(this->BranchInfoLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->BranchInfoLookup).field_0x34 = 0;
  *(undefined4 *)&(this->BranchInfoLookup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BranchInfoLookup).field_0x40 = 0;
  *(undefined4 *)&(this->BranchInfoLookup).field_0x48 = 0;
  this->bByteCodeIsAligned = false;
  this->bHasPublicContextAssetPath = false;
  return this;
}

// ~FRigVMByteCode @ 14a07b8a0

void __thiscall FRigVMByteCode::~FRigVMByteCode(FRigVMByteCode *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->BranchInfoLookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BranchInfoLookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BranchInfoLookup);
  pFVar2 = (this->PredicateBranches).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BranchInfos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ByteCode).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 14a07d030

FRigVMByteCode * __thiscall FRigVMByteCode::operator=(FRigVMByteCode *this,FRigVMByteCode *param_1)

{
  int *piVar1;
  TArray<FRigVMByteCodeEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRigVMBranchInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRigVMPredicateBranch,TSizedDefaultAllocator<32>_> *pTVar4;
  TMap<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>_>
  *this_00;
  undefined1 *puVar5;
  undefined1 *this_01;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  
  if (this != param_1) {
    iVar6 = (param_1->ByteCode).ArrayNum;
    piVar1 = &(this->ByteCode).ArrayMax;
    pFVar7 = (param_1->ByteCode).AllocatorInstance.Data;
    (this->ByteCode).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar6,*piVar1,(ForAnyElementType *)this,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((this->ByteCode).AllocatorInstance.Data,pFVar7,(longlong)iVar6);
      }
    }
  }
  pTVar2 = &this->Entries;
  this->NumInstructions = param_1->NumInstructions;
  if (pTVar2 != &param_1->Entries) {
    iVar6 = (param_1->Entries).ArrayNum;
    piVar1 = &(this->Entries).ArrayMax;
    pFVar7 = (param_1->Entries).AllocatorInstance.Data;
    (this->Entries).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar6,*piVar1,&pTVar2->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0xc);
      }
    }
  }
  pTVar3 = &this->BranchInfos;
  if (pTVar3 != &param_1->BranchInfos) {
    iVar6 = (param_1->BranchInfos).ArrayNum;
    piVar1 = &(this->BranchInfos).ArrayMax;
    pFVar7 = (param_1->BranchInfos).AllocatorInstance.Data;
    (this->BranchInfos).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,iVar6,*piVar1,&pTVar3->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x1c);
      }
    }
  }
  pTVar4 = &this->PredicateBranches;
  if (pTVar4 != &param_1->PredicateBranches) {
    iVar6 = (param_1->PredicateBranches).ArrayNum;
    piVar1 = &(this->PredicateBranches).ArrayMax;
    pFVar7 = (param_1->PredicateBranches).AllocatorInstance.Data;
    (this->PredicateBranches).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar6,*piVar1,&pTVar4->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x38);
      }
    }
  }
  FVar8 = (param_1->PublicContextAssetPath).AssetName;
  this_00 = &this->BranchInfoLookup;
  (this->PublicContextAssetPath).PackageName = (param_1->PublicContextAssetPath).PackageName;
  (this->PublicContextAssetPath).AssetName = FVar8;
  if (this_00 != &param_1->BranchInfoLookup) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->BranchInfoLookup).field_0x38,
               (int *)&(this->BranchInfoLookup).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->BranchInfoLookup).field_0x38,
               *(int *)&(param_1->BranchInfoLookup).field_0x48);
    iVar6 = *(int *)&(param_1->BranchInfoLookup).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar6);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar6,(ForAnyElementType *)this_00,(int *)&(this->BranchInfoLookup).field_0x8,
               (int *)&(this->BranchInfoLookup).field_0xc);
    puVar5 = &(param_1->BranchInfoLookup).field_0x10;
    this_01 = &(this->BranchInfoLookup).field_0x10;
    *(undefined4 *)&(this->BranchInfoLookup).field_0x30 =
         *(undefined4 *)&(param_1->BranchInfoLookup).field_0x30;
    *(undefined4 *)&(this->BranchInfoLookup).field_0x34 =
         *(undefined4 *)&(param_1->BranchInfoLookup).field_0x34;
    if (this_01 != puVar5) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar5);
    }
    if (iVar6 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->BranchInfoLookup,(longlong)iVar6 << 5);
    }
  }
  this->bByteCodeIsAligned = param_1->bByteCodeIsAligned;
  this->bHasPublicContextAssetPath = param_1->bHasPublicContextAssetPath;
  return this;
}

// AddBeginBlockOp @ 14a07eb40

int __thiscall
FRigVMByteCode::AddBeginBlockOp(FRigVMByteCode *this,FRigVMOperand param_1,FRigVMOperand param_2)

{
  int iVar1;
  undefined2 in_register_00000016;
  undefined2 in_register_00000086;
  FRigVMBinaryOp local_18;
  
  local_18.ArgA._0_4_ = *(undefined4 *)CONCAT26(in_register_00000016,param_1);
  local_18.ArgA.RegisterOffset =
       *(ushort *)((undefined4 *)CONCAT26(in_register_00000016,param_1) + 1);
  local_18.ArgB._0_4_ = *(undefined4 *)CONCAT26(in_register_00000086,param_2);
  local_18.ArgB.RegisterOffset = *(ushort *)(CONCAT26(in_register_00000086,param_2) + 4);
  local_18._padding_._0_1_ = 0x51;
  iVar1 = AddOp<FRigVMBinaryOp>(this,&local_18);
  return iVar1;
}

// AddBranchInfo @ 14a07eb80

int __thiscall FRigVMByteCode::AddBranchInfo(FRigVMByteCode *this,FRigVMBranchInfo *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  int local_10;
  
  local_10 = param_1->LastInstruction;
  uVar3 = (param_1->Label).ComparisonIndex;
  uStack_20 = *(undefined8 *)&(param_1->Label).Number;
  local_18._0_4_ = param_1->ArgumentIndex;
  local_18._4_4_ = param_1->FirstInstruction;
  pFVar6 = (this->BranchInfos).AllocatorInstance.Data;
  local_28 = CONCAT44(uVar3,(this->BranchInfos).ArrayNum);
  if ((pFVar6 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar6 + (longlong)(this->BranchInfos).ArrayMax * 0x1c)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = (this->BranchInfos).ArrayNum;
  piVar1 = &(this->BranchInfos).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&(this->BranchInfos).AllocatorInstance,piVar1);
  }
  (this->BranchInfos).ArrayNum = iVar5 + 1;
  pFVar6 = (this->BranchInfos).AllocatorInstance.Data + (longlong)iVar5 * 0x1c;
  *(undefined8 *)pFVar6 = local_28;
  *(undefined8 *)(pFVar6 + 8) = uStack_20;
  *(undefined8 *)(pFVar6 + 0x10) = local_18;
  *(int *)(pFVar6 + 0x18) = local_10;
  TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
           *)&this->BranchInfoLookup);
  return (int)local_28;
}

// AddBranchInfo @ 14a07ec80

int __thiscall
FRigVMByteCode::AddBranchInfo
          (FRigVMByteCode *this,FName *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int local_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  int local_10;
  
  pFVar5 = (this->BranchInfos).AllocatorInstance.Data;
  uStack_24 = (uint)(*param_1).ComparisonIndex;
  uStack_20 = (*param_1).Number;
  local_28 = (this->BranchInfos).ArrayNum;
  iStack_14 = param_4;
  local_10 = param_5;
  iStack_1c = param_2;
  local_18 = param_3;
  if ((pFVar5 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar5 + (longlong)(this->BranchInfos).ArrayMax * 0x1c)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = (this->BranchInfos).ArrayNum;
  piVar1 = &(this->BranchInfos).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&(this->BranchInfos).AllocatorInstance,piVar1);
  }
  (this->BranchInfos).ArrayNum = iVar4 + 1;
  pFVar5 = (this->BranchInfos).AllocatorInstance.Data + (longlong)iVar4 * 0x1c;
  *(ulonglong *)pFVar5 = CONCAT44(uStack_24,local_28);
  *(ulonglong *)(pFVar5 + 8) = CONCAT44(iStack_1c,uStack_20);
  *(ulonglong *)(pFVar5 + 0x10) = CONCAT44(iStack_14,local_18);
  *(int *)(pFVar5 + 0x18) = local_10;
  TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
           *)&this->BranchInfoLookup);
  return local_28;
}

// AddCopyOp @ 14a07ed90

int __thiscall FRigVMByteCode::AddCopyOp(FRigVMByteCode *this,FRigVMCopyOp *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRigVMCopyOp local_18;
  
  if ((param_1->Target).MemoryType == Literal) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTarget.GetMemoryType() != ERigVMMemoryType::Literal",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                       ,0x462,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if ((((param_1->Source).MemoryType == (param_1->Target).MemoryType) &&
      ((param_1->Source).RegisterIndex == (param_1->Target).RegisterIndex)) &&
     ((param_1->Source).RegisterOffset == (param_1->Target).RegisterOffset)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSource != InTarget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                       ,0x463,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  local_18.Source.MemoryType = (param_1->Source).MemoryType;
  local_18.Source._1_1_ = (param_1->Source).field_0x1;
  local_18.Source.RegisterIndex = (param_1->Source).RegisterIndex;
  local_18.Source.RegisterOffset = (param_1->Source).RegisterOffset;
  local_18.Target.MemoryType = (param_1->Target).MemoryType;
  local_18.Target._1_1_ = (param_1->Target).field_0x1;
  local_18.Target.RegisterIndex = (param_1->Target).RegisterIndex;
  local_18.Target.RegisterOffset = (param_1->Target).RegisterOffset;
  local_18._padding_._0_1_ = 0x44;
  local_18.RegisterType = Invalid;
  local_18.CopyType = Default;
  iVar3 = AddOp<FRigVMCopyOp>(this,&local_18);
  return iVar3;
}

// AddCopyOp @ 14a07ee60

int __thiscall
FRigVMByteCode::AddCopyOp(FRigVMByteCode *this,FRigVMOperand *param_1,FRigVMOperand *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRigVMCopyOp local_18;
  
  if (param_2->MemoryType == Literal) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTarget.GetMemoryType() != ERigVMMemoryType::Literal",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                       ,0x462,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (((param_1->MemoryType == param_2->MemoryType) &&
      (param_1->RegisterIndex == param_2->RegisterIndex)) &&
     (param_1->RegisterOffset == param_2->RegisterOffset)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSource != InTarget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                       ,0x463,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  local_18.Source.MemoryType = param_1->MemoryType;
  local_18.Source._1_1_ = param_1->field_0x1;
  local_18.Source.RegisterIndex = param_1->RegisterIndex;
  local_18.Source.RegisterOffset = param_1->RegisterOffset;
  local_18.Target.MemoryType = param_2->MemoryType;
  local_18.Target._1_1_ = param_2->field_0x1;
  local_18.Target.RegisterIndex = param_2->RegisterIndex;
  local_18.Target.RegisterOffset = param_2->RegisterOffset;
  local_18._padding_._0_1_ = 0x44;
  local_18.RegisterType = Invalid;
  local_18.CopyType = Default;
  iVar3 = AddOp<FRigVMCopyOp>(this,&local_18);
  return iVar3;
}

// AddDecrementOp @ 14a07ef40

int __thiscall FRigVMByteCode::AddDecrementOp(FRigVMByteCode *this,FRigVMOperand *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRigVMUnaryOp local_res10 [3];
  
  if (param_1->MemoryType == Literal) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6769809472945650560>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                       ,0x480,"InArg.GetMemoryType() != ERigVMMemoryType::Literal");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  local_res10[0].Arg.MemoryType = param_1->MemoryType;
  local_res10[0].Arg._1_1_ = param_1->field_0x1;
  local_res10[0].Arg.RegisterIndex = param_1->RegisterIndex;
  local_res10[0].Arg.RegisterOffset = param_1->RegisterOffset;
  local_res10[0]._padding_._0_1_ = 0x46;
  iVar3 = AddOp<FRigVMUnaryOp>(this,local_res10);
  return iVar3;
}

// AddEndBlockOp @ 14a07efc0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

int __thiscall FRigVMByteCode::AddEndBlockOp(FRigVMByteCode *this)

{
  int iVar1;
  FRigVMBaseOp local_res10 [24];
  
  local_res10[0].OpCode = EndBlock;
  iVar1 = AddOp<FRigVMBaseOp>(this,local_res10);
  return iVar1;
}

// AddEqualsOp @ 14a07efe0

int __thiscall
FRigVMByteCode::AddEqualsOp
          (FRigVMByteCode *this,FRigVMOperand *param_1,FRigVMOperand *param_2,FRigVMOperand *param_3
          )

{
  int iVar1;
  FRigVMComparisonOp local_28 [2];
  
  local_28[0].A.MemoryType = param_1->MemoryType;
  local_28[0].A._1_1_ = param_1->field_0x1;
  local_28[0].A.RegisterIndex = param_1->RegisterIndex;
  local_28[0].A.RegisterOffset = param_1->RegisterOffset;
  local_28[0].B.MemoryType = param_2->MemoryType;
  local_28[0].B._1_1_ = param_2->field_0x1;
  local_28[0].B.RegisterIndex = param_2->RegisterIndex;
  local_28[0].B.RegisterOffset = param_2->RegisterOffset;
  local_28[0].Result.MemoryType = param_3->MemoryType;
  local_28[0].Result._1_1_ = param_3->field_0x1;
  local_28[0].Result.RegisterIndex = param_3->RegisterIndex;
  local_28[0].Result.RegisterOffset = param_3->RegisterOffset;
  local_28[0]._padding_._0_1_ = 0x47;
  iVar1 = AddOp<FRigVMComparisonOp>(this,local_28);
  return iVar1;
}

// AddExecuteOp @ 14a07f030

int __thiscall
FRigVMByteCode::AddExecuteOp
          (FRigVMByteCode *this,int param_1,TArrayView<FRigVMOperand_const_,int> *param_2,
          int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined1 uStack_37;
  undefined2 uStack_32;
  
  uVar4 = param_2->ArrayNum;
  if (((uVar4 != (uVar4 & 0xffff)) || ((int)uVar4 < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8)) {
    pcVar6 = (code *)swi(3);
    iVar9 = (*pcVar6)();
    return iVar9;
  }
  if (((param_1 != (param_1 & 0xffffU)) || (param_1 < 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8)) {
    pcVar6 = (code *)swi(3);
    iVar9 = (*pcVar6)();
    return iVar9;
  }
  iVar9 = 0;
  uVar13 = 0;
  uStack_32 = 0xffff;
  if (param_4 != 0) {
    if (((param_3 != (param_3 & 0xffffU)) || (param_3 < 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8))
    {
      pcVar6 = (code *)swi(3);
      iVar9 = (*pcVar6)();
      return iVar9;
    }
    uStack_32 = (undefined2)param_3;
    uVar13 = param_4 & 0xffff;
    if (((param_4 != uVar13) || (param_4 < 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8))
    {
      pcVar6 = (code *)swi(3);
      iVar9 = (*pcVar6)();
      return iVar9;
    }
  }
  piVar1 = &(this->ByteCode).ArrayMax;
  piVar2 = &(this->ByteCode).ArrayNum;
  uVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,10,(ForAnyElementType *)this,piVar2,piVar1);
  pFVar5 = (this->ByteCode).AllocatorInstance.Data;
  *(undefined8 *)(pFVar5 + (int)uVar10) = 0;
  *(undefined2 *)(pFVar5 + (longlong)(int)uVar10 + 8) = 0;
  uVar11 = 0;
  if ((int)uVar10 < *piVar2) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    iVar9 = (*pcVar6)();
    return iVar9;
  }
  pFVar5 = (this->ByteCode).AllocatorInstance.Data;
  *(ulonglong *)(pFVar5 + (int)uVar10) =
       CONCAT26(uStack_32,CONCAT24((short)uVar4,CONCAT22((short)param_1,CONCAT11(uStack_37,0x65))));
  *(short *)(pFVar5 + (longlong)(int)uVar10 + 8) = (short)uVar13;
  if (pFVar5 + (longlong)(int)uVar10 + 1 < pFVar5 + (longlong)(int)uVar10 + 2) {
    pFVar5[(longlong)(int)uVar10 + 1] = (FScriptContainerElement)0x0;
  }
  this->NumInstructions = this->NumInstructions + 1;
  iVar7 = param_2->ArrayNum * 6;
  iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,iVar7,(ForAnyElementType *)this,piVar2,piVar1);
  lVar15 = (longlong)iVar12;
  memset((this->ByteCode).AllocatorInstance.Data + lVar15,0,(longlong)iVar7);
  memcpy((this->ByteCode).AllocatorInstance.Data + lVar15,param_2->DataPtr,
         (longlong)param_2->ArrayNum * 6);
  if (0 < param_2->ArrayNum) {
    do {
      pFVar5 = (this->ByteCode).AllocatorInstance.Data;
      lVar3 = lVar15 + (longlong)iVar9 * 6;
      pFVar14 = pFVar5 + lVar3 + 1;
      if (pFVar14 < pFVar5 + lVar3 + 2) {
        *pFVar14 = (FScriptContainerElement)0x0;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < param_2->ArrayNum);
  }
  return uVar10;
}

// AddExitOp @ 14a07f2e0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

int __thiscall FRigVMByteCode::AddExitOp(FRigVMByteCode *this)

{
  int iVar1;
  FRigVMBaseOp local_res10 [24];
  
  local_res10[0].OpCode = Exit;
  iVar1 = AddOp<FRigVMBaseOp>(this,local_res10);
  return iVar1;
}

// AddFalseOp @ 14a07f300

int __thiscall FRigVMByteCode::AddFalseOp(FRigVMByteCode *this,FRigVMOperand *param_1)

{
  int iVar1;
  FRigVMUnaryOp local_res10 [3];
  
  local_res10[0].Arg.MemoryType = param_1->MemoryType;
  local_res10[0].Arg._1_1_ = param_1->field_0x1;
  local_res10[0].Arg.RegisterIndex = param_1->RegisterIndex;
  local_res10[0].Arg.RegisterOffset = param_1->RegisterOffset;
  local_res10[0]._padding_._0_1_ = 0x42;
  iVar1 = AddOp<FRigVMUnaryOp>(this,local_res10);
  return iVar1;
}

// AddIncrementOp @ 14a07f330

int __thiscall FRigVMByteCode::AddIncrementOp(FRigVMByteCode *this,FRigVMOperand *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRigVMUnaryOp local_res10 [3];
  
  if (param_1->MemoryType == Literal) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6769809472945650567>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                       ,0x479,"InArg.GetMemoryType() != ERigVMMemoryType::Literal");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  local_res10[0].Arg.MemoryType = param_1->MemoryType;
  local_res10[0].Arg._1_1_ = param_1->field_0x1;
  local_res10[0].Arg.RegisterIndex = param_1->RegisterIndex;
  local_res10[0].Arg.RegisterOffset = param_1->RegisterOffset;
  local_res10[0]._padding_._0_1_ = 0x45;
  iVar3 = AddOp<FRigVMUnaryOp>(this,local_res10);
  return iVar3;
}

// AddInvokeEntryOp @ 14a07f3b0

int __thiscall FRigVMByteCode::AddInvokeEntryOp(FRigVMByteCode *this,FName *param_1)

{
  int iVar1;
  FRigVMInvokeEntryOp local_18 [2];
  
  local_18[0].EntryName = *param_1;
  local_18[0]._padding_._0_1_ = 99;
  iVar1 = AddOp<FRigVMInvokeEntryOp>(this,local_18);
  return iVar1;
}

// AddJumpIfOp @ 14a07f3e0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

int __thiscall
FRigVMByteCode::AddJumpIfOp
          (FRigVMByteCode *this,ERigVMOpCode param_1,int param_2,FRigVMOperand *param_3,bool param_4
          )

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRigVMJumpIfOp local_18;
  
  local_18._padding_._2_1_ = param_3->MemoryType;
  local_18._padding_._3_1_ = param_3->field_0x1;
  local_18._padding_._4_2_ = param_3->RegisterIndex;
  local_18._padding_._6_2_ = param_3->RegisterOffset;
  local_18._padding_._0_1_ = param_1;
  if (((0x26 < (byte)(param_1 - 0x41)) ||
      ((0x6800007837U >> ((ulonglong)(param_1 - 0x41) & 0x3f) & 1) == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOpCode == ERigVMOpCode::Zero || InOpCode == ERigVMOpCode::BoolFalse || InOpCode == ERigVMOpCode::BoolTrue || InOpCode == ERigVMOpCode::Increment || InOpCode == ERigVMOpCode::Decrement || InOpCode == ERigVMOpCode::JumpAbsoluteIf || InOpCode == ERigVMOpCode::JumpForwardIf || InOpCode == ERigVMOpCode::JumpBackwardIf || InOpCode == ERigVMOpCode::ChangeType || InOpCode == ERigVMOpCode::JumpToBranch || InOpCode == ERigVMOpCode::RunInstructions || InOpCode == ERigVMOpCode::SetupTraits"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                         ,0x156,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  local_18.Condition = param_4;
  local_18.InstructionIndex = param_2;
  if (param_1 < JumpAbsoluteIf) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1010023956939275429>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x35b,"InOpCode >= ERigVMOpCode::JumpAbsoluteIf");
    if (bVar2) {
code_r0x00014a07f4ba:
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  else if ((JumpBackwardIf < param_1) &&
          (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1010023956939275428>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                              ,0x35c,"InOpCode <= ERigVMOpCode::JumpBackwardIf"), bVar2))
  goto code_r0x00014a07f4ba;
  iVar3 = AddOp<FRigVMJumpIfOp>(this,&local_18);
  return iVar3;
}

// AddJumpOp @ 14a07f4e0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

int __thiscall FRigVMByteCode::AddJumpOp(FRigVMByteCode *this,ERigVMOpCode param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRigVMJumpOp local_res20;
  
  local_res20._padding_._0_1_ = param_1;
  local_res20.InstructionIndex = param_2;
  if (param_1 < JumpAbsolute) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOpCode >= ERigVMOpCode::JumpAbsolute",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x32d,L"");
    if (!bVar2) {
      iVar3 = AddOp<FRigVMJumpOp>(this,&local_res20);
      return iVar3;
    }
code_r0x00014a07f558:
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (JumpBackward < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOpCode <= ERigVMOpCode::JumpBackward",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x32e,L"");
    if (bVar2) goto code_r0x00014a07f558;
  }
  iVar3 = AddOp<FRigVMJumpOp>(this,&local_res20);
  return iVar3;
}

// AddJumpToBranchOp @ 14a07f580

int __thiscall
FRigVMByteCode::AddJumpToBranchOp(FRigVMByteCode *this,FRigVMOperand param_1,int param_2)

{
  int iVar1;
  undefined2 in_register_00000016;
  FRigVMJumpToBranchOp local_18 [2];
  
  local_18[0]._2_4_ = *(undefined4 *)CONCAT26(in_register_00000016,param_1);
  local_18[0]._6_2_ = *(undefined2 *)((undefined4 *)CONCAT26(in_register_00000016,param_1) + 1);
  local_18[0]._0_1_ = 100;
  local_18[0].FirstBranchInfoIndex = param_2;
  iVar1 = AddOp<FRigVMJumpToBranchOp>(this,local_18);
  return iVar1;
}

// AddNotEqualsOp @ 14a07f5c0

int __thiscall
FRigVMByteCode::AddNotEqualsOp
          (FRigVMByteCode *this,FRigVMOperand *param_1,FRigVMOperand *param_2,FRigVMOperand *param_3
          )

{
  int iVar1;
  FRigVMComparisonOp local_28 [2];
  
  local_28[0].A.MemoryType = param_1->MemoryType;
  local_28[0].A._1_1_ = param_1->field_0x1;
  local_28[0].A.RegisterIndex = param_1->RegisterIndex;
  local_28[0].A.RegisterOffset = param_1->RegisterOffset;
  local_28[0].B.MemoryType = param_2->MemoryType;
  local_28[0].B._1_1_ = param_2->field_0x1;
  local_28[0].B.RegisterIndex = param_2->RegisterIndex;
  local_28[0].B.RegisterOffset = param_2->RegisterOffset;
  local_28[0].Result.MemoryType = param_3->MemoryType;
  local_28[0].Result._1_1_ = param_3->field_0x1;
  local_28[0].Result.RegisterIndex = param_3->RegisterIndex;
  local_28[0].Result.RegisterOffset = param_3->RegisterOffset;
  local_28[0]._padding_._0_1_ = 0x48;
  iVar1 = AddOp<FRigVMComparisonOp>(this,local_28);
  return iVar1;
}

// AddPredicateBranch @ 14a07f610

int __thiscall
FRigVMByteCode::AddPredicateBranch(FRigVMByteCode *this,FRigVMPredicateBranch *param_1)

{
  TArray<FRigVMPredicateBranch,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FRigVMPredicateBranch *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  
  pTVar1 = &this->PredicateBranches;
  pFVar3 = (FRigVMPredicateBranch *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->PredicateBranches).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  iVar8 = (this->PredicateBranches).ArrayNum;
  piVar2 = &(this->PredicateBranches).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->PredicateBranches).ArrayNum = iVar8 + 1;
  uVar6 = *(undefined8 *)&(param_1->BranchInfo).Label.Number;
  lVar9 = (longlong)iVar8 * 0x38;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar4 + lVar9) = *(undefined8 *)&param_1->BranchInfo;
  *(undefined8 *)(pFVar4 + lVar9 + 8) = uVar6;
  uVar6 = *(undefined8 *)&(param_1->BranchInfo).LastInstruction;
  *(undefined8 *)(pFVar4 + lVar9 + 0x10) = *(undefined8 *)&(param_1->BranchInfo).ArgumentIndex;
  *(undefined8 *)(pFVar4 + lVar9 + 0x10 + 8) = uVar6;
  uVar6 = *(undefined8 *)&(param_1->MemoryHandles).ArrayNum;
  *(FRigVMMemoryHandle **)(pFVar4 + lVar9 + 0x20) = (param_1->MemoryHandles).DataPtr;
  *(undefined8 *)(pFVar4 + lVar9 + 0x20 + 8) = uVar6;
  *(URigVM **)(pFVar4 + lVar9 + 0x30) = param_1->VM;
  return iVar8;
}

// AddRunInstructionsOp @ 14a07fe60

int __thiscall
FRigVMByteCode::AddRunInstructionsOp
          (FRigVMByteCode *this,FRigVMOperand param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 in_register_00000016;
  FRigVMRunInstructionsOp local_18;
  
  local_18._padding_._2_4_ = *(undefined4 *)CONCAT26(in_register_00000016,param_1);
  local_18._padding_._6_2_ =
       *(undefined2 *)((undefined4 *)CONCAT26(in_register_00000016,param_1) + 1);
  local_18._padding_._0_1_ = 0x66;
  local_18.StartInstruction = param_2;
  local_18.EndInstruction = param_3;
  iVar1 = AddOp<FRigVMRunInstructionsOp>(this,&local_18);
  return iVar1;
}

// AddSetupTraitsOp @ 14a07fea0

int __thiscall FRigVMByteCode::AddSetupTraitsOp(FRigVMByteCode *this,FRigVMOperand param_1)

{
  int iVar1;
  undefined2 in_register_00000016;
  FRigVMSetupTraitsOp local_res10 [3];
  
  local_res10[0]._2_4_ = *(undefined4 *)CONCAT26(in_register_00000016,param_1);
  local_res10[0]._6_2_ = *(undefined2 *)((undefined4 *)CONCAT26(in_register_00000016,param_1) + 1);
  local_res10[0]._0_1_ = 0x67;
  iVar1 = AddOp<FRigVMSetupTraitsOp>(this,local_res10);
  return iVar1;
}

// AddTrueOp @ 14a07fed0

int __thiscall FRigVMByteCode::AddTrueOp(FRigVMByteCode *this,FRigVMOperand *param_1)

{
  int iVar1;
  FRigVMUnaryOp local_res10 [3];
  
  local_res10[0].Arg.MemoryType = param_1->MemoryType;
  local_res10[0].Arg._1_1_ = param_1->field_0x1;
  local_res10[0].Arg.RegisterIndex = param_1->RegisterIndex;
  local_res10[0].Arg.RegisterOffset = param_1->RegisterOffset;
  local_res10[0]._padding_._0_1_ = 0x43;
  iVar1 = AddOp<FRigVMUnaryOp>(this,local_res10);
  return iVar1;
}

// AddZeroOp @ 14a07ff00

int __thiscall FRigVMByteCode::AddZeroOp(FRigVMByteCode *this,FRigVMOperand *param_1)

{
  int iVar1;
  FRigVMUnaryOp local_res10 [3];
  
  local_res10[0].Arg.MemoryType = param_1->MemoryType;
  local_res10[0].Arg._1_1_ = param_1->field_0x1;
  local_res10[0].Arg.RegisterIndex = param_1->RegisterIndex;
  local_res10[0].Arg.RegisterOffset = param_1->RegisterOffset;
  local_res10[0]._padding_._0_1_ = 0x41;
  iVar1 = AddOp<FRigVMUnaryOp>(this,local_res10);
  return iVar1;
}

// AlignByteCode @ 14a07ffa0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

void __thiscall FRigVMByteCode::AlignByteCode(FRigVMByteCode *this)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  UScriptStruct *this_00;
  ICppStructOps *pIVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  int *piVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint local_res18;
  uint local_94;
  longlong local_88;
  undefined1 local_78 [2];
  undefined4 local_76;
  undefined4 local_72;
  ForAnyElementType local_68;
  undefined8 uStack_60;
  FRigVMInstructionArray local_58;
  
  if ((this->bByteCodeIsAligned == false) && ((this->ByteCode).ArrayNum != 0)) {
    FRigVMInstructionArray::FRigVMInstructionArray(&local_58,this,false);
    uVar19 = 0;
    uVar13 = (this->ByteCode).ArrayNum;
    uVar17 = uVar19;
    uVar22 = uVar19;
    if (0 < local_58.Instructions.ArrayNum) {
      do {
        uVar16 = (uint)uVar17;
        uVar12 = 0;
        if ((int)uVar16 < local_58.Instructions.ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar5.Data = local_58.Instructions.AllocatorInstance.Data;
        iVar7 = GetOpAlignment((ERigVMOpCode)
                               local_58.Instructions.AllocatorInstance.Data[uVar22 + 8]);
        uVar13 = uVar13 + iVar7;
        if (FVar5.Data[uVar22 + 8] == (FScriptContainerElement)0x65) {
          iVar7 = GetOperandAlignment();
          uVar13 = uVar13 + iVar7;
        }
        uVar17 = (ulonglong)(uVar16 + 1);
        uVar22 = uVar22 + 0xc;
      } while ((int)(uVar16 + 1) < local_58.Instructions.ArrayNum);
    }
    local_68.Data = (FScriptContainerElement *)0x0;
    uStack_60 = 0;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    if (0 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar13,&local_68,0,(int *)((longlong)&uStack_60 + 4));
    }
    iVar7 = (this->ByteCode).ArrayNum;
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar7,&local_68,(int *)&uStack_60,(int *)((longlong)&uStack_60 + 4));
    memset(local_68.Data + iVar8,0,(longlong)iVar7);
    local_res18 = 0;
    local_94 = 0;
    if (0 < local_58.Instructions.ArrayNum) {
      local_88 = 0;
      uVar17 = uVar19;
      do {
        uVar13 = 0;
        if ((int)(uint)uVar19 < local_58.Instructions.ArrayNum) {
          uVar13 = ~(uint)uVar19 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar5.Data = local_58.Instructions.AllocatorInstance.Data;
        uVar13 = *(uint *)(local_58.Instructions.AllocatorInstance.Data + local_88 + 4);
        uVar12 = uVar13 + (int)uVar17;
        iVar7 = GetOpAlignment((ERigVMOpCode)
                               local_58.Instructions.AllocatorInstance.Data[local_88 + 8]);
        if (0 < iVar7) {
          lVar23 = (longlong)(int)uVar12;
          while( true ) {
            uVar16 = 0;
            if ((int)uVar12 < (int)uStack_60) {
              uVar16 = ~uVar12 >> 0x1f;
            }
            if (uVar16 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            local_res18 = (uint)uVar17;
            if (((longlong)iVar7 - 1U & (ulonglong)(local_68.Data + (int)uVar12)) == 0) break;
            FVar1 = FVar5.Data[local_88 + 8];
            uVar16 = 0;
            if ((int)uVar12 < (int)uStack_60) {
              uVar16 = ~uVar12 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar12 = uVar12 + 1;
            uVar17 = (ulonglong)(local_res18 + 1);
            local_68.Data[lVar23] = FVar1;
            lVar23 = lVar23 + 1;
            iVar8 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (1,1,1,&local_68,(int *)&uStack_60,(int *)((longlong)&uStack_60 + 4));
            local_68.Data[iVar8] = (FScriptContainerElement)0x0;
          }
        }
        iVar7 = GetOpNumBytesAt(this,uVar13,false);
        lVar23 = (longlong)iVar7;
        if (0 < iVar7) {
          lVar14 = (longlong)(int)uVar12;
          lVar20 = (int)uVar13 - lVar14;
          uVar16 = uVar12;
          do {
            uVar21 = (uVar13 - uVar12) + uVar16;
            uVar9 = 0;
            if ((int)uVar21 < (this->ByteCode).ArrayNum) {
              uVar9 = ~uVar21 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FVar1 = (this->ByteCode).AllocatorInstance.Data[lVar14 + lVar20];
            uVar21 = 0;
            if ((int)uVar16 < (int)uStack_60) {
              uVar21 = ~uVar16 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar16 = uVar16 + 1;
            local_68.Data[lVar14] = FVar1;
            lVar14 = lVar14 + 1;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
        }
        if (FVar5.Data[local_88 + 8] == (FScriptContainerElement)0x65) {
          uVar12 = uVar12 + iVar7;
          piVar18 = (int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c);
          if ((*piVar18 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            if ((*piVar18 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              this_00 = FRigVMOperand::StaticStruct();
              pIVar10 = UScriptStruct::GetCppStructOps(this_00);
              OperandAlignment = pIVar10->Alignment;
              _Init_thread_footer(&::_TSS0);
            }
            OperandAlignment = OperandAlignment;
            _Init_thread_footer(&::_TSS0);
          }
          if (0 < OperandAlignment) {
            while( true ) {
              lVar23 = (longlong)OperandAlignment;
              uVar16 = 0;
              if ((int)uVar12 < (int)uStack_60) {
                uVar16 = ~uVar12 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((lVar23 - 1U & (ulonglong)(local_68.Data + (int)uVar12)) == 0) break;
              uVar12 = uVar12 + 1;
              local_res18 = local_res18 + 1;
              iVar8 = UE::Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (1,1,1,&local_68,(int *)&uStack_60,(int *)((longlong)&uStack_60 + 4)
                                );
              local_68.Data[iVar8] = (FScriptContainerElement)0x0;
            }
          }
          local_78[0] = 0x68;
          uVar21 = 0;
          local_76 = 0xffff;
          local_72 = 0xffff;
          puVar15 = local_78;
          uVar16 = uVar13;
          do {
            uVar9 = 0;
            if ((int)uVar16 < (this->ByteCode).ArrayNum) {
              uVar9 = ~uVar16 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar21 = uVar21 + 1;
            *puVar15 = puVar15[(longlong)
                               ((this->ByteCode).AllocatorInstance.Data +
                               ((longlong)(int)uVar13 - (longlong)local_78))];
            puVar15 = puVar15 + 1;
            uVar16 = uVar16 + 1;
          } while (uVar21 < 10);
          iVar8 = (uint)local_76._2_2_ + (uint)local_76._2_2_ * 2;
          if (iVar8 != 0) {
            iVar11 = (uVar13 + iVar7) - uVar12;
            lVar14 = (longlong)(int)uVar12;
            lVar23 = lVar14;
            do {
              uVar21 = iVar11 + uVar12;
              uVar16 = 0;
              if ((int)uVar21 < (this->ByteCode).ArrayNum) {
                uVar16 = ~uVar21 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FVar1 = (this->ByteCode).AllocatorInstance.Data
                      [lVar23 + ((int)(uVar13 + iVar7) - lVar14)];
              uVar16 = 0;
              if ((int)uVar12 < (int)uStack_60) {
                uVar16 = ~uVar12 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar12 = uVar12 + 1;
              local_68.Data[lVar23] = FVar1;
              lVar23 = lVar23 + 1;
            } while (lVar23 - lVar14 < (longlong)(ulonglong)(uint)(iVar8 * 2));
          }
        }
        local_94 = local_94 + 1;
        uVar19 = (ulonglong)local_94;
        local_88 = local_88 + 0xc;
        uVar17 = (ulonglong)local_res18;
      } while ((int)local_94 < local_58.Instructions.ArrayNum);
    }
    pFVar3 = (this->ByteCode).AllocatorInstance.Data;
    uVar4._0_4_ = (this->ByteCode).ArrayNum;
    uVar4._4_4_ = (this->ByteCode).ArrayMax;
    (this->ByteCode).AllocatorInstance.Data = local_68.Data;
    (this->ByteCode).ArrayNum = (int)uStack_60;
    (this->ByteCode).ArrayMax = uStack_60._4_4_;
    this->bByteCodeIsAligned = true;
    local_68.Data = pFVar3;
    uStack_60 = uVar4;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    if (local_58.Instructions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Instructions.AllocatorInstance.Data);
    }
  }
  return;
}

// DumpToText @ 14a08f1a0

/* WARNING: Removing unreachable block (ram,0x00014a08f4bc) */
/* WARNING: Removing unreachable block (ram,0x00014a08fea0) */
/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

FString * __thiscall
FRigVMByteCode::DumpToText(FRigVMByteCode *this,FString *__return_storage_ptr__)

{
  FRigVMOperand *pFVar1;
  ERigVMOpCode EVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  UPackage *pUVar10;
  FName this_00;
  UScriptStruct *pUVar11;
  uint uVar12;
  FRigVMInstruction *pFVar13;
  FRigVMOperand *pFVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  FString *local_res10;
  FString local_2c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FRigVMInstructionArray local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TArrayView<FRigVMOperand_const_,int> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar18 = 0;
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.ArrayNum = 0;
  local_2b8.ArrayMax = 0;
  local_res10 = __return_storage_ptr__;
  FRigVMInstructionArray::FRigVMInstructionArray(&local_188,this,this->bByteCodeIsAligned);
  uVar15 = uVar18;
  if (0 < local_188.Instructions.ArrayNum) {
    do {
      uVar19 = (uint)uVar15;
      uVar12 = 0;
      uVar7 = uVar12;
      if ((int)uVar19 < local_188.Instructions.ArrayNum) {
        uVar7 = ~uVar19 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FString *)(*pcVar5)();
        return pFVar9;
      }
      pFVar13 = (FRigVMInstruction *)(local_188.Instructions.AllocatorInstance.Data + uVar18);
      EVar2 = pFVar13->OpCode;
      if (Z_Registration_Info_UEnum_ERigVMOpCode.OuterSingleton == (UEnum *)0x0) {
        pUVar10 = Z_Construct_UPackage__Script_RigVM();
        Z_Registration_Info_UEnum_ERigVMOpCode.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMOpCode,(UObject *)pUVar10,L"ERigVMOpCode");
      }
      this_00 = UEnum::GetNameByValue
                          (Z_Registration_Info_UEnum_ERigVMOpCode.OuterSingleton,(long64)local_res8)
      ;
      ::FName::ToString((FName *)this_00,&local_2c8);
      switch(EVar2) {
      case Zero:
      case BoolFalse:
      case BoolTrue:
      case Increment:
      case Decrement:
        iVar8 = pFVar13->ByteCodeIndex;
        pFVar16 = (this->ByteCode).AllocatorInstance.Data;
        local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_238.Data.ArrayNum = 0;
        local_238.Data.ArrayMax = 0;
        pUVar11 = FRigVMOperand::StaticStruct();
        pFVar16 = pFVar16 + (longlong)iVar8 + 2;
        UScriptStruct::ExportText
                  (pUVar11,&local_238,pFVar16,pFVar16,(UObject *)0x0,0,(UObject *)0x0,true);
        ::FString::PrintfImpl(&local_138,L", Source %s");
        uVar7 = local_138.Data.ArrayNum - 1;
        if (local_138.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_138.Data.AllocatorInstance.Data,uVar7);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_238.Data.AllocatorInstance.Data);
        }
        break;
      case Copy:
        iVar8 = pFVar13->ByteCodeIndex;
        pFVar4 = (this->ByteCode).AllocatorInstance.Data;
        local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_248.Data.ArrayNum = 0;
        local_248.Data.ArrayMax = 0;
        pUVar11 = FRigVMOperand::StaticStruct();
        pFVar16 = pFVar4 + (longlong)iVar8 + 2;
        UScriptStruct::ExportText
                  (pUVar11,&local_248,pFVar16,pFVar16,(UObject *)0x0,0,(UObject *)0x0,true);
        ::FString::PrintfImpl(&local_158,L", Source %s");
        uVar7 = local_158.Data.ArrayNum - 1;
        if (local_158.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_158.Data.AllocatorInstance.Data,uVar7);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_258.Data.ArrayNum = 0;
        local_258.Data.ArrayMax = 0;
        pUVar11 = FRigVMOperand::StaticStruct();
        pFVar4 = pFVar4 + (longlong)iVar8 + 8;
        UScriptStruct::ExportText
                  (pUVar11,&local_258,pFVar4,pFVar4,(UObject *)0x0,0,(UObject *)0x0,true);
        ::FString::PrintfImpl(&local_148,L", Target %s");
        uVar7 = local_148.Data.ArrayNum - 1;
        if (local_148.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_148.Data.AllocatorInstance.Data,uVar7);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
        if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_248.Data.AllocatorInstance.Data);
        }
        break;
      case Equals:
      case NotEquals:
        iVar8 = pFVar13->ByteCodeIndex;
        pFVar16 = (this->ByteCode).AllocatorInstance.Data;
        local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208.Data.ArrayNum = 0;
        local_208.Data.ArrayMax = 0;
        pUVar11 = FRigVMOperand::StaticStruct();
        UScriptStruct::ExportText
                  (pUVar11,&local_208,pFVar16 + (longlong)iVar8 + 2,pFVar16 + (longlong)iVar8 + 2,
                   (UObject *)0x0,0,(UObject *)0x0,true);
        ::FString::PrintfImpl(&local_128,L", A %s");
        uVar7 = local_128.Data.ArrayNum - 1;
        if (local_128.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_128.Data.AllocatorInstance.Data,uVar7);
        if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data.AllocatorInstance.Data);
        }
        local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_218.Data.ArrayNum = 0;
        local_218.Data.ArrayMax = 0;
        pUVar11 = FRigVMOperand::StaticStruct();
        UScriptStruct::ExportText
                  (pUVar11,&local_218,pFVar16 + (longlong)iVar8 + 8,pFVar16 + (longlong)iVar8 + 8,
                   (UObject *)0x0,0,(UObject *)0x0,true);
        ::FString::PrintfImpl(&local_118,L", B %s");
        uVar7 = local_118.Data.ArrayNum - 1;
        if (local_118.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_118.Data.AllocatorInstance.Data,uVar7);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_228.Data.ArrayNum = 0;
        local_228.Data.ArrayMax = 0;
        pUVar11 = FRigVMOperand::StaticStruct();
        UScriptStruct::ExportText
                  (pUVar11,&local_228,pFVar16 + (longlong)iVar8 + 0xe,
                   pFVar16 + (longlong)iVar8 + 0xe,(UObject *)0x0,0,(UObject *)0x0,true);
        ::FString::PrintfImpl(&local_108,L", Result %s");
        uVar7 = local_108.Data.ArrayNum - 1;
        if (local_108.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_108.Data.AllocatorInstance.Data,uVar7);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        break;
      case JumpAbsolute:
      case JumpForward:
      case JumpBackward:
        ::FString::PrintfImpl(&local_f8,L", InstructionIndex %d");
        uVar7 = local_f8.Data.ArrayNum - 1;
        if (local_f8.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_f8.Data.AllocatorInstance.Data,uVar7);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        break;
      case JumpAbsoluteIf:
      case JumpForwardIf:
      case JumpBackwardIf:
        iVar8 = pFVar13->ByteCodeIndex;
        pFVar16 = (this->ByteCode).AllocatorInstance.Data;
        ::FString::PrintfImpl(&local_e8,L", InstructionIndex %d");
        uVar7 = local_e8.Data.ArrayNum - 1;
        if (local_e8.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_e8.Data.AllocatorInstance.Data,uVar7);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1f8.Data.ArrayNum = 0;
        local_1f8.Data.ArrayMax = 0;
        pUVar11 = FRigVMOperand::StaticStruct();
        pFVar16 = pFVar16 + (longlong)iVar8 + 2;
        UScriptStruct::ExportText
                  (pUVar11,&local_1f8,pFVar16,pFVar16,(UObject *)0x0,0,(UObject *)0x0,true);
        ::FString::PrintfImpl(&local_d8,L", Source %s");
        uVar7 = local_d8.Data.ArrayNum - 1;
        if (local_d8.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_d8.Data.AllocatorInstance.Data,uVar7);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        ::FString::PrintfImpl(&local_c8,L", Condition %d");
        uVar7 = local_c8.Data.ArrayNum - 1;
        if (local_c8.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_c8.Data.AllocatorInstance.Data,uVar7);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
        break;
      case BeginBlock:
        iVar8 = pFVar13->ByteCodeIndex;
        pFVar4 = (this->ByteCode).AllocatorInstance.Data;
        local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.Data.ArrayNum = 0;
        local_1d8.Data.ArrayMax = 0;
        local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.Data.ArrayNum = 0;
        local_1e8.Data.ArrayMax = 0;
        pUVar11 = FRigVMOperand::StaticStruct();
        pFVar16 = pFVar4 + (longlong)iVar8 + 2;
        UScriptStruct::ExportText
                  (pUVar11,&local_1d8,pFVar16,pFVar16,(UObject *)0x0,0,(UObject *)0x0,true);
        pUVar11 = FRigVMOperand::StaticStruct();
        pFVar4 = pFVar4 + (longlong)iVar8 + 8;
        UScriptStruct::ExportText
                  (pUVar11,&local_1e8,pFVar4,pFVar4,(UObject *)0x0,0,(UObject *)0x0,true);
        ::FString::PrintfImpl(&local_b8,L", ArgA %s");
        uVar7 = local_b8.Data.ArrayNum - 1;
        if (local_b8.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_b8.Data.AllocatorInstance.Data,uVar7);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        ::FString::PrintfImpl(&local_a8,L", ArgB %s");
        uVar7 = local_a8.Data.ArrayNum - 1;
        if (local_a8.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_a8.Data.AllocatorInstance.Data,uVar7);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        break;
      case InvokeEntry:
        ::FName::ToString((FName *)((this->ByteCode).AllocatorInstance.Data +
                                   (longlong)pFVar13->ByteCodeIndex + 4),&local_68);
        ::FString::PrintfImpl(&local_98,L", Entry \'%s\'");
        uVar7 = local_98.Data.ArrayNum - 1;
        if (local_98.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_98.Data.AllocatorInstance.Data,uVar7);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        break;
      case JumpToBranch:
        iVar8 = pFVar13->ByteCodeIndex;
        pFVar4 = (this->ByteCode).AllocatorInstance.Data;
        local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8.Data.ArrayNum = 0;
        local_1c8.Data.ArrayMax = 0;
        pUVar11 = FRigVMOperand::StaticStruct();
        pFVar16 = pFVar4 + (longlong)iVar8 + 2;
        UScriptStruct::ExportText
                  (pUVar11,&local_1c8,pFVar16,pFVar16,(UObject *)0x0,0,(UObject *)0x0,true);
        ::FString::AppendChars(&local_2c8,L" BlockToRun ",0xc);
        uVar7 = local_1c8.Data.ArrayNum - 1;
        if (local_1c8.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_1c8.Data.AllocatorInstance.Data,uVar7);
        ::FString::AppendChars(&local_2c8,L" for branches ",0xe);
        local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_298.ArrayNum = 0;
        local_298.ArrayMax = 0;
        iVar8 = *(int *)(pFVar4 + (longlong)iVar8 + 8);
        uVar15 = (ulonglong)iVar8;
        if (iVar8 < (this->BranchInfos).ArrayNum) {
          lVar17 = uVar15 * 0x1c;
          do {
            uVar12 = (uint)uVar15;
            uVar7 = 0;
            if ((int)uVar12 < (this->BranchInfos).ArrayNum) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              pFVar9 = (FString *)(*pcVar5)();
              return pFVar9;
            }
            pFVar16 = (this->BranchInfos).AllocatorInstance.Data;
            if (*(uint *)(pFVar16 + lVar17 + 0xc) != uVar19) break;
            ::FName::ToString((FName *)(pFVar16 + lVar17 + 4),&local_58);
            ::FString::PrintfImpl(&local_278,L"%s (%d)");
            if (((local_298.AllocatorInstance.Data <= (FScriptContainerElement *)&local_278) &&
                ((FScriptContainerElement *)&local_278 <
                 local_298.AllocatorInstance.Data + (longlong)local_298.ArrayMax * 0x10)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pFVar9 = (FString *)(*pcVar5)();
              return pFVar9;
            }
            iVar8 = local_298.ArrayNum;
            if (local_298.ArrayNum == local_298.ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_298.AllocatorInstance,&local_298.ArrayMax);
            }
            local_298.ArrayNum = iVar8 + 1;
            pFVar16 = local_298.AllocatorInstance.Data + (longlong)iVar8 * 0x10;
            *(undefined8 *)pFVar16 = 0;
            *(FScriptContainerElement **)pFVar16 = local_278.Data.AllocatorInstance.Data;
            *(int *)(pFVar16 + 8) = local_278.Data.ArrayNum;
            *(int *)(pFVar16 + 0xc) = local_278.Data.ArrayMax;
            local_278.Data.ArrayNum = 0;
            local_278.Data.ArrayMax = 0;
            local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            uVar15 = (ulonglong)(uVar12 + 1);
            lVar17 = lVar17 + 0x1c;
          } while ((int)(uVar12 + 1) < (this->BranchInfos).ArrayNum);
        }
        pFVar9 = RigVMStringUtils::JoinStrings
                           (&local_48,&local_298,L", ",(wchar_t *)0x0,(wchar_t *)0x0);
        iVar3 = (pFVar9->Data).ArrayNum;
        iVar8 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar8 = 0;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,iVar8);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        DestructItems<FString,int>((FString *)local_298.AllocatorInstance.Data,local_298.ArrayNum);
        if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.AllocatorInstance.Data);
        }
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        break;
      case Execute:
        ::FString::PrintfImpl(&local_168,L", FunctionIndex %u");
        uVar7 = local_168.Data.ArrayNum - 1;
        if (local_168.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_168.Data.AllocatorInstance.Data,uVar7);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        GetOperandsForExecuteOp(this,&local_88,pFVar13);
        if (0 < local_88.ArrayNum) {
          local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2a8.ArrayNum = 0;
          local_2a8.ArrayMax = 0;
          pFVar1 = local_88.DataPtr + local_88.ArrayNum;
          for (pFVar14 = local_88.DataPtr; pFVar14 != pFVar1; pFVar14 = pFVar14 + 1) {
            local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_268.Data.ArrayNum = 0;
            local_268.Data.ArrayMax = 0;
            pUVar11 = FRigVMOperand::StaticStruct();
            UScriptStruct::ExportText
                      (pUVar11,&local_268,pFVar14,pFVar14,(UObject *)0x0,0,(UObject *)0x0,true);
            ::FString::PrintfImpl(&local_288,L"\t%s");
            if (((local_2a8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_288) &&
                ((FScriptContainerElement *)&local_288 <
                 local_2a8.AllocatorInstance.Data + (longlong)local_2a8.ArrayMax * 0x10)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pFVar9 = (FString *)(*pcVar5)();
              return pFVar9;
            }
            iVar8 = local_2a8.ArrayNum;
            if (local_2a8.ArrayNum == local_2a8.ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
            }
            local_2a8.ArrayNum = iVar8 + 1;
            pFVar16 = local_2a8.AllocatorInstance.Data + (longlong)iVar8 * 0x10;
            *(undefined8 *)pFVar16 = 0;
            *(FScriptContainerElement **)pFVar16 = local_288.Data.AllocatorInstance.Data;
            *(int *)(pFVar16 + 8) = local_288.Data.ArrayNum;
            *(int *)(pFVar16 + 0xc) = local_288.Data.ArrayMax;
            local_288.Data.ArrayNum = 0;
            local_288.Data.ArrayMax = 0;
            local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_268.Data.AllocatorInstance.Data);
            }
          }
          pFVar9 = RigVMStringUtils::JoinStrings(&local_78,&local_2a8,L"(\n",L"\n",L"\n)");
          iVar8 = (pFVar9->Data).ArrayNum;
          uVar7 = iVar8 - 1;
          if (iVar8 == 0) {
            uVar7 = uVar12;
          }
          ::FString::AppendChars(&local_2c8,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,uVar7);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          DestructItems<FString,int>((FString *)local_2a8.AllocatorInstance.Data,local_2a8.ArrayNum)
          ;
          if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a8.AllocatorInstance.Data);
          }
        }
        break;
      case RunInstructions:
        iVar8 = pFVar13->ByteCodeIndex;
        pFVar16 = (this->ByteCode).AllocatorInstance.Data;
        local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.Data.ArrayNum = 0;
        local_178.Data.ArrayMax = 0;
        pUVar11 = FRigVMOperand::StaticStruct();
        UScriptStruct::ExportText
                  (pUVar11,&local_178,pFVar16 + (longlong)iVar8 + 2,pFVar16 + (longlong)iVar8 + 2,
                   (UObject *)0x0,0,(UObject *)0x0,true);
        ::FString::AppendChars(&local_2c8,L" Instructions ",0xe);
        local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.Data.ArrayNum = 0;
        local_1b8.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_1b8,*(int *)(pFVar16 + (longlong)iVar8 + 8));
        uVar7 = local_1b8.Data.ArrayNum - 1;
        if (local_1b8.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_1b8.Data.AllocatorInstance.Data,uVar7);
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        ::FString::AppendChars(&local_2c8,L"-",1);
        local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.Data.ArrayNum = 0;
        local_1a8.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_1a8,*(int *)(pFVar16 + (longlong)iVar8 + 0xc));
        uVar7 = local_1a8.Data.ArrayNum - 1;
        if (local_1a8.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_1a8.Data.AllocatorInstance.Data,uVar7);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        break;
      case SetupTraits:
        iVar8 = pFVar13->ByteCodeIndex;
        pFVar16 = (this->ByteCode).AllocatorInstance.Data;
        local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.Data.ArrayNum = 0;
        local_198.Data.ArrayMax = 0;
        pUVar11 = FRigVMOperand::StaticStruct();
        pFVar16 = pFVar16 + (longlong)iVar8 + 2;
        UScriptStruct::ExportText
                  (pUVar11,&local_198,pFVar16,pFVar16,(UObject *)0x0,0,(UObject *)0x0,true);
        uVar7 = local_198.Data.ArrayNum - 1;
        if (local_198.Data.ArrayNum == 0) {
          uVar7 = uVar12;
        }
        ::FString::AppendChars(&local_2c8,(wchar_t *)local_198.Data.AllocatorInstance.Data,uVar7);
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        break;
      case Invalid:
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6769809472945650313>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                           ,0x577,"false");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar5)();
          return pFVar9;
        }
      }
      if (((local_2b8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2c8) &&
          ((FScriptContainerElement *)&local_2c8 <
           local_2b8.AllocatorInstance.Data + (longlong)local_2b8.ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FString *)(*pcVar5)();
        return pFVar9;
      }
      iVar8 = local_2b8.ArrayNum;
      if (local_2b8.ArrayNum == local_2b8.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_2b8.AllocatorInstance,&local_2b8.ArrayMax);
      }
      _Src.Data = local_2c8.Data.AllocatorInstance.Data;
      pFVar16 = local_2b8.AllocatorInstance.Data + (longlong)iVar8 * 0x10;
      local_2b8.ArrayNum = iVar8 + 1;
      *(FScriptContainerElement **)pFVar16 = (FScriptContainerElement *)0x0;
      iVar8 = local_2c8.Data.ArrayNum;
      *(int *)(pFVar16 + 8) = iVar8;
      if (iVar8 == 0) {
        *(int *)(pFVar16 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar8,0,(ForAnyElementType *)pFVar16,iVar8,(int *)(pFVar16 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar16,_Src.Data,(longlong)iVar8 * 2);
      }
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
      uVar18 = uVar18 + 0xc;
      __return_storage_ptr__ = local_res10;
      uVar15 = (ulonglong)(uVar19 + 1);
    } while ((int)(uVar19 + 1) < local_188.Instructions.ArrayNum);
  }
  if (local_2b8.ArrayNum == 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    iVar8 = 0;
    if (local_188.Instructions.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
    goto LAB_14a0902a4;
LAB_14a09029b:
    FMemory::Free(local_188.Instructions.AllocatorInstance.Data);
  }
  else {
    RigVMStringUtils::JoinStrings
              (__return_storage_ptr__,&local_2b8,L"\n",(wchar_t *)0x0,(wchar_t *)0x0);
    if (local_188.Instructions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    goto LAB_14a09029b;
  }
  iVar8 = local_2b8.ArrayNum;
LAB_14a0902a4:
  DestructItems<FString,int>((FString *)local_2b8.AllocatorInstance.Data,iVar8);
  if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Empty @ 14a0909c0

void __thiscall FRigVMByteCode::Empty(FRigVMByteCode *this)

{
  int *piVar1;
  
  piVar1 = &(this->ByteCode).ArrayMax;
  (this->ByteCode).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,piVar1);
  }
  this->bByteCodeIsAligned = false;
  this->NumInstructions = 0;
  piVar1 = &(this->Entries).ArrayMax;
  (this->Entries).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Entries).AllocatorInstance,0,piVar1);
  }
  (this->PublicContextAssetPath).AssetName.ComparisonIndex = 0;
  (this->PublicContextAssetPath).AssetName.Number = 0;
  (this->PublicContextAssetPath).PackageName.ComparisonIndex = 0;
  (this->PublicContextAssetPath).PackageName.Number = 0;
  return;
}

// FindEntryIndex @ 14a093e40

int __thiscall FRigVMByteCode::FindEntryIndex(FRigVMByteCode *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Entries).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Entries).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->Entries).AllocatorInstance.Data + lVar6) == *param_1) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0xc;
    } while ((int)uVar5 < (this->Entries).ArrayNum);
  }
  return -1;
}

// GetBranchInfo @ 14a094470

FRigVMBranchInfo * __thiscall
FRigVMByteCode::GetBranchInfo(FRigVMByteCode *this,FRigVMBranchInfoKey *param_1)

{
  TMap<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>_>
  *this_00;
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined1 *puVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  FRigVMBranchInfoKey *local_res8;
  int local_res18 [4];
  FRigVMBranchInfoKey local_48;
  
  iVar3 = (this->BranchInfos).ArrayNum;
  if (iVar3 != 0) {
    if (*(int *)&(this->BranchInfoLookup).field_0x8 == *(int *)&(this->BranchInfoLookup).field_0x34)
    {
      pFVar8 = (this->BranchInfos).AllocatorInstance.Data;
      pFVar10 = pFVar8 + (longlong)iVar3 * 0x1c;
      while( true ) {
        if ((this->BranchInfos).ArrayNum != iVar3) {
          `TCheckedPointerIterator<FRigVMBranchInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (pFVar8 == pFVar10) break;
        local_48.InstructionIndex = *(int *)(pFVar8 + 0xc);
        this_00 = &this->BranchInfoLookup;
        local_48.ArgumentIndex = *(int *)(pFVar8 + 0x10);
        local_48.Label = *(FName *)(pFVar8 + 4);
        uVar2 = ::GetTypeHash(&local_48);
        if (*(int *)&(this->BranchInfoLookup).field_0x8 !=
            *(int *)&(this->BranchInfoLookup).field_0x34) {
          puVar1 = *(undefined1 **)&(this->BranchInfoLookup).field_0x40;
          puVar7 = &(this->BranchInfoLookup).field_0x38;
          if (puVar1 != (undefined1 *)0x0) {
            puVar7 = puVar1;
          }
          iVar9 = *(int *)(puVar7 + (ulonglong)
                                    (*(int *)&(this->BranchInfoLookup).field_0x48 - 1U & uVar2) * 4)
          ;
          if (iVar9 != -1) {
            do {
              piVar6 = (int *)((longlong)iVar9 * 0x20 + *(longlong *)&this_00->field_0x0);
              if (*piVar6 == local_48.InstructionIndex) {
                if ((piVar6[1] == -1) || (local_48.ArgumentIndex == -1)) {
                  if ((*(FName *)(piVar6 + 2) != (FName)0x0) && (local_48.Label != (FName)0x0)) {
                    bVar11 = *(FName *)(piVar6 + 2) == local_48.Label;
                    goto LAB_14a094583;
                  }
                }
                else {
                  bVar11 = piVar6[1] == local_48.ArgumentIndex;
LAB_14a094583:
                  if (!bVar11) goto LAB_14a09458a;
                }
                if ((iVar9 != -1) && (piVar6 != (int *)0x0)) goto LAB_14a0945e1;
                break;
              }
LAB_14a09458a:
              iVar9 = piVar6[6];
            } while (iVar9 != -1);
          }
        }
        local_res8 = &local_48;
        TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FRigVMBranchInfoKey_const_&>_>
                  ((TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
                    *)this_00,(uint)local_res18,
                   (TKeyInitializer<FRigVMBranchInfoKey_const_&> *)(ulonglong)uVar2,
                   (bool *)&local_res8);
        piVar6 = (int *)((longlong)local_res18[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_14a0945e1:
        *(FScriptContainerElement **)(piVar6 + 4) = pFVar8;
        pFVar8 = pFVar8 + 0x1c;
      }
    }
    uVar2 = ::GetTypeHash(param_1);
    iVar3 = TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FRigVMBranchInfoKey>
                      ((TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
                        *)&this->BranchInfoLookup,uVar2,param_1);
    if (iVar3 != -1) {
      lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->BranchInfoLookup).field_0x0;
      puVar5 = (undefined8 *)(lVar4 + 0x10);
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      if (puVar5 != (undefined8 *)0x0) {
        return (FRigVMBranchInfo *)*puVar5;
      }
    }
  }
  return (FRigVMBranchInfo *)0x0;
}

// GetByteCodeHash @ 14a094660

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

uint __thiscall FRigVMByteCode::GetByteCodeHash(FRigVMByteCode *this)

{
  FRigVMInstruction *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FString *pFVar7;
  int iVar8;
  wchar_t *pwVar9;
  uint uVar10;
  FRigVMBranchInfo *pFVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  FRigVMBranchInfo *pFVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FRigVMInstructionArray local_58;
  FString local_48;
  
  uVar5 = 0;
  uVar16 = 0;
  if (0 < (this->Entries).ArrayNum) {
    lVar15 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar16 < (this->Entries).ArrayNum) {
        uVar6 = ~uVar16 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      pFVar7 = ::FName::ToString((FName *)((this->Entries).AllocatorInstance.Data +
                                          (longlong)(int)uVar16 * 0xc),&local_48);
      iVar2 = (pFVar7->Data).ArrayNum;
      iVar8 = iVar2 + -1;
      if (iVar2 == 0) {
        pwVar9 = L"";
        iVar8 = 0;
      }
      else {
        pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar9);
      uVar10 = uVar5 - uVar6 ^ uVar6 >> 0xd;
      uVar5 = (-0x61c88647 - uVar10) - uVar6 ^ uVar10 << 8;
      uVar12 = (uVar6 - uVar5) - uVar10 ^ uVar5 >> 0xd;
      uVar6 = (uVar10 - uVar12) - uVar5 ^ uVar12 >> 0xc;
      uVar5 = (uVar5 - uVar6) - uVar12 ^ uVar6 << 0x10;
      uVar10 = (uVar12 - uVar5) - uVar6 ^ uVar5 >> 5;
      uVar6 = (uVar6 - uVar10) - uVar5 ^ uVar10 >> 3;
      uVar5 = (uVar5 - uVar6) - uVar10 ^ uVar6 << 10;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      uVar12 = 0;
      if ((int)uVar16 < (this->Entries).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      uVar16 = uVar16 + 1;
      uVar12 = *(uint *)((this->Entries).AllocatorInstance.Data + lVar15 + 8);
      lVar15 = lVar15 + 0xc;
      uVar10 = ((uVar10 - uVar5) - uVar6 ^ uVar5 >> 0xf) - uVar12 ^ uVar12 >> 0xd;
      uVar5 = (-0x61c88647 - uVar10) - uVar12 ^ uVar10 << 8;
      uVar6 = (uVar12 - uVar5) - uVar10 ^ uVar5 >> 0xd;
      uVar10 = (uVar10 - uVar6) - uVar5 ^ uVar6 >> 0xc;
      uVar5 = (uVar5 - uVar10) - uVar6 ^ uVar10 << 0x10;
      uVar6 = (uVar6 - uVar5) - uVar10 ^ uVar5 >> 5;
      uVar10 = (uVar10 - uVar6) - uVar5 ^ uVar6 >> 3;
      uVar5 = (uVar5 - uVar10) - uVar6 ^ uVar10 << 10;
      uVar5 = (uVar6 - uVar5) - uVar10 ^ uVar5 >> 0xf;
    } while ((int)uVar16 < (this->Entries).ArrayNum);
  }
  FRigVMInstructionArray::FRigVMInstructionArray(&local_58,this,this->bByteCodeIsAligned);
  iVar8 = local_58.Instructions.ArrayNum;
  pFVar1 = (FRigVMInstruction *)
           (local_58.Instructions.AllocatorInstance.Data + (longlong)iVar8 * 0xc);
  FVar13.Data = local_58.Instructions.AllocatorInstance.Data;
  while( true ) {
    if (local_58.Instructions.ArrayNum != iVar8) {
      `TCheckedPointerIterator<FRigVMInstruction_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FRigVMInstruction *)FVar13.Data == pFVar1) break;
    uVar16 = GetOperatorHash(this,(FRigVMInstruction *)FVar13.Data);
    uVar5 = uVar5 - uVar16 ^ uVar16 >> 0xd;
    uVar6 = (-0x61c88647 - uVar5) - uVar16 ^ uVar5 << 8;
    uVar16 = (uVar16 - uVar6) - uVar5 ^ uVar6 >> 0xd;
    uVar5 = (uVar5 - uVar16) - uVar6 ^ uVar16 >> 0xc;
    uVar6 = (uVar6 - uVar5) - uVar16 ^ uVar5 << 0x10;
    uVar16 = (uVar16 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar16) - uVar6 ^ uVar16 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar16 ^ uVar5 << 10;
    uVar5 = (uVar16 - uVar6) - uVar5 ^ uVar6 >> 0xf;
    FVar13.Data = FVar13.Data + 0xc;
  }
  if ((FRigVMInstruction *)local_58.Instructions.AllocatorInstance.Data != (FRigVMInstruction *)0x0)
  {
    FMemory::Free(local_58.Instructions.AllocatorInstance.Data);
  }
  iVar8 = (this->BranchInfos).ArrayNum;
  pFVar14 = (FRigVMBranchInfo *)(this->BranchInfos).AllocatorInstance.Data;
  pFVar11 = pFVar14 + iVar8;
  while( true ) {
    if ((this->BranchInfos).ArrayNum != iVar8) {
      `TCheckedPointerIterator<FRigVMBranchInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar14 == pFVar11) break;
    uVar16 = ::GetTypeHash(pFVar14);
    uVar5 = uVar5 - uVar16 ^ uVar16 >> 0xd;
    uVar6 = (-0x61c88647 - uVar5) - uVar16 ^ uVar5 << 8;
    uVar16 = (uVar16 - uVar6) - uVar5 ^ uVar6 >> 0xd;
    uVar5 = (uVar5 - uVar16) - uVar6 ^ uVar16 >> 0xc;
    uVar6 = (uVar6 - uVar5) - uVar16 ^ uVar5 << 0x10;
    uVar16 = (uVar16 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar16) - uVar6 ^ uVar16 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar16 ^ uVar5 << 10;
    uVar5 = (uVar16 - uVar6) - uVar5 ^ uVar6 >> 0xf;
    pFVar14 = pFVar14 + 1;
  }
  return uVar5;
}

// GetEntry @ 14a094e90

FRigVMByteCodeEntry * __thiscall FRigVMByteCode::GetEntry(FRigVMByteCode *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigVMByteCodeEntry *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Entries).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRigVMByteCodeEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FRigVMByteCodeEntry *)((this->Entries).AllocatorInstance.Data + (longlong)param_1 * 0xc);
}

// GetFirstOperandByteIndex @ 14a095700

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

int __thiscall
FRigVMByteCode::GetFirstOperandByteIndex(FRigVMByteCode *this,FRigVMInstruction *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1->OpCode != Execute) {
    switch(param_1->OpCode) {
    case Zero:
    case BoolFalse:
    case BoolTrue:
    case Copy:
    case Increment:
    case Decrement:
    case Equals:
    case NotEquals:
    case JumpAbsoluteIf:
    case JumpForwardIf:
    case JumpBackwardIf:
    case BeginBlock:
    case ArrayReset:
    case ArrayGetNum:
    case ArraySetNum:
    case ArrayGetAtIndex:
    case ArraySetAtIndex:
    case ArrayAdd:
    case ArrayInsert:
    case ArrayRemove:
    case ArrayFind:
    case ArrayAppend:
    case ArrayClone:
    case ArrayIterator:
    case ArrayUnion:
    case ArrayDifference:
    case ArrayIntersection:
    case ArrayReverse:
    case JumpToBranch:
    case RunInstructions:
    case SetupTraits:
      return param_1->ByteCodeIndex + 2;
    default:
      return -1;
    }
  }
  iVar3 = param_1->ByteCodeIndex;
  if (((this->bByteCodeIsAligned == false) && (param_1->OperandAlignment != '\0')) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6769809472945650131>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                         ,0x62d,"bByteCodeIsAligned || InInstruction.OperandAlignment == 0"), bVar2)
     ) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return (uint)param_1->OperandAlignment + iVar3 + 10;
}

// GetInstructionsForOperand @ 14a095920

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMByteCode::GetInstructionsForOperand
          (FRigVMByteCode *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRigVMOperand *param_1)

{
  FRigVMOperand *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  TArrayView<FRigVMOperand_const_,int> *pTVar9;
  FRigVMOperand *pFVar10;
  uint local_48 [2];
  FRigVMInstructionArray local_40;
  TArrayView<FRigVMOperand_const_,int> local_30;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FRigVMInstructionArray::FRigVMInstructionArray(&local_40,this,this->bByteCodeIsAligned);
  local_48[0] = 0;
  if (0 < this->NumInstructions) {
    do {
      uVar4 = local_48[0];
      uVar6 = 0;
      if ((int)local_48[0] < local_40.Instructions.ArrayNum) {
        uVar6 = ~local_48[0] >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar8;
      }
      pTVar9 = GetOperandsForOp(this,&local_30,
                                (FRigVMInstruction *)
                                (local_40.Instructions.AllocatorInstance.Data +
                                (longlong)(int)uVar4 * 0xc));
      pFVar10 = pTVar9->DataPtr;
      pFVar1 = pFVar10 + pTVar9->ArrayNum;
      if (pFVar10 != pFVar1) {
        do {
          if (((pFVar10->MemoryType == param_1->MemoryType) &&
              (pFVar10->RegisterIndex == param_1->RegisterIndex)) &&
             (pFVar10->RegisterOffset == param_1->RegisterOffset)) {
            pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
                ((FScriptContainerElement *)local_48 <
                 pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar8;
            }
            iVar7 = __return_storage_ptr__->ArrayNum;
            if (iVar7 == __return_storage_ptr__->ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar7 + 1;
            *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
                 local_48[0];
            break;
          }
          pFVar10 = pFVar10 + 1;
        } while (pFVar10 != pFVar1);
      }
      local_48[0] = local_48[0] + 1;
    } while ((int)local_48[0] < this->NumInstructions);
  }
  if (local_40.Instructions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Instructions.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetOpAlignment @ 14a0960a0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

int __cdecl FRigVMByteCode::GetOpAlignment(ERigVMOpCode param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UScriptStruct *pUVar4;
  UPackage *pUVar5;
  ICppStructOps *pIVar6;
  
  switch(param_1) {
  case Zero:
  case BoolFalse:
  case BoolTrue:
  case Increment:
  case Decrement:
  case ArrayReset:
  case ArrayReverse:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      if (Z_Registration_Info_UScriptStruct_FRigVMUnaryOp.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_RigVM();
        Z_Registration_Info_UScriptStruct_FRigVMUnaryOp.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRigVMUnaryOp,(UObject *)pUVar5,
                             L"RigVMUnaryOp");
      }
      pIVar6 = UScriptStruct::GetCppStructOps
                         (Z_Registration_Info_UScriptStruct_FRigVMUnaryOp.OuterSingleton);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS2);
    }
    return Alignment;
  case Copy:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      if (Z_Registration_Info_UScriptStruct_FRigVMCopyOp.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_RigVM();
        Z_Registration_Info_UScriptStruct_FRigVMCopyOp.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRigVMCopyOp,(UObject *)pUVar5,L"RigVMCopyOp"
                            );
      }
      pIVar6 = UScriptStruct::GetCppStructOps
                         (Z_Registration_Info_UScriptStruct_FRigVMCopyOp.OuterSingleton);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS1);
    }
    return Alignment;
  case Equals:
  case NotEquals:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      if (Z_Registration_Info_UScriptStruct_FRigVMComparisonOp.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_RigVM();
        Z_Registration_Info_UScriptStruct_FRigVMComparisonOp.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRigVMComparisonOp,(UObject *)pUVar5,
                             L"RigVMComparisonOp");
      }
      pIVar6 = UScriptStruct::GetCppStructOps
                         (Z_Registration_Info_UScriptStruct_FRigVMComparisonOp.OuterSingleton);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS3);
    }
    return Alignment;
  case JumpAbsolute:
  case JumpForward:
  case JumpBackward:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
      if (Z_Registration_Info_UScriptStruct_FRigVMJumpOp.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_RigVM();
        Z_Registration_Info_UScriptStruct_FRigVMJumpOp.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRigVMJumpOp,(UObject *)pUVar5,L"RigVMJumpOp"
                            );
      }
      pIVar6 = UScriptStruct::GetCppStructOps
                         (Z_Registration_Info_UScriptStruct_FRigVMJumpOp.OuterSingleton);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS4);
    }
    return Alignment;
  case JumpAbsoluteIf:
  case JumpForwardIf:
  case JumpBackwardIf:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
      if (Z_Registration_Info_UScriptStruct_FRigVMJumpIfOp.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_RigVM();
        Z_Registration_Info_UScriptStruct_FRigVMJumpIfOp.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRigVMJumpIfOp,(UObject *)pUVar5,
                             L"RigVMJumpIfOp");
      }
      pIVar6 = UScriptStruct::GetCppStructOps
                         (Z_Registration_Info_UScriptStruct_FRigVMJumpIfOp.OuterSingleton);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS5);
    }
    return Alignment;
  case ChangeType:
    iVar3 = 0x6e6;
    break;
  case Exit:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
      pUVar4 = FRigVMBaseOp::StaticStruct();
      pIVar6 = UScriptStruct::GetCppStructOps(pUVar4);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS6);
    }
    return Alignment;
  case BeginBlock:
  case ArrayGetNum:
  case ArraySetNum:
  case ArrayRemove:
  case ArrayAppend:
  case ArrayClone:
  case ArrayUnion:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
      if (Z_Registration_Info_UScriptStruct_FRigVMBinaryOp.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_RigVM();
        Z_Registration_Info_UScriptStruct_FRigVMBinaryOp.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRigVMBinaryOp,(UObject *)pUVar5,
                             L"RigVMBinaryOp");
      }
      pIVar6 = UScriptStruct::GetCppStructOps
                         (Z_Registration_Info_UScriptStruct_FRigVMBinaryOp.OuterSingleton);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS7);
    }
    return Alignment;
  case EndBlock:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS11) && (_Init_thread_header(&::_TSS11), ::_TSS11 == -1)) {
      pUVar4 = FRigVMBaseOp::StaticStruct();
      pIVar6 = UScriptStruct::GetCppStructOps(pUVar4);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS11);
    }
    return Alignment;
  case ArrayGetAtIndex:
  case ArraySetAtIndex:
  case ArrayAdd:
  case ArrayInsert:
  case ArrayDifference:
  case ArrayIntersection:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
      if (Z_Registration_Info_UScriptStruct_FRigVMTernaryOp.OuterSingleton == (UScriptStruct *)0x0)
      {
        pUVar5 = Z_Construct_UPackage__Script_RigVM();
        Z_Registration_Info_UScriptStruct_FRigVMTernaryOp.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTernaryOp,(UObject *)pUVar5,
                             L"RigVMTernaryOp");
      }
      pIVar6 = UScriptStruct::GetCppStructOps
                         (Z_Registration_Info_UScriptStruct_FRigVMTernaryOp.OuterSingleton);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS8);
    }
    return Alignment;
  case ArrayFind:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
      if (Z_Registration_Info_UScriptStruct_FRigVMQuaternaryOp.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_RigVM();
        Z_Registration_Info_UScriptStruct_FRigVMQuaternaryOp.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRigVMQuaternaryOp,(UObject *)pUVar5,
                             L"RigVMQuaternaryOp");
      }
      pIVar6 = UScriptStruct::GetCppStructOps
                         (Z_Registration_Info_UScriptStruct_FRigVMQuaternaryOp.OuterSingleton);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS9);
    }
    return Alignment;
  case ArrayIterator:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
      if (Z_Registration_Info_UScriptStruct_FRigVMSenaryOp.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_RigVM();
        Z_Registration_Info_UScriptStruct_FRigVMSenaryOp.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRigVMSenaryOp,(UObject *)pUVar5,
                             L"RigVMSenaryOp");
      }
      pIVar6 = UScriptStruct::GetCppStructOps
                         (Z_Registration_Info_UScriptStruct_FRigVMSenaryOp.OuterSingleton);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS10);
    }
    return Alignment;
  case InvokeEntry:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1)) {
      if (Z_Registration_Info_UScriptStruct_FRigVMInvokeEntryOp.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_RigVM();
        Z_Registration_Info_UScriptStruct_FRigVMInvokeEntryOp.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRigVMInvokeEntryOp,(UObject *)pUVar5,
                             L"RigVMInvokeEntryOp");
      }
      pIVar6 = UScriptStruct::GetCppStructOps
                         (Z_Registration_Info_UScriptStruct_FRigVMInvokeEntryOp.OuterSingleton);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS12);
    }
    return Alignment;
  case JumpToBranch:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS13) && (_Init_thread_header(&::_TSS13), ::_TSS13 == -1)) {
      if (Z_Registration_Info_UScriptStruct_FRigVMJumpToBranchOp.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_RigVM();
        Z_Registration_Info_UScriptStruct_FRigVMJumpToBranchOp.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRigVMJumpToBranchOp,(UObject *)pUVar5,
                             L"RigVMJumpToBranchOp");
      }
      pIVar6 = UScriptStruct::GetCppStructOps
                         (Z_Registration_Info_UScriptStruct_FRigVMJumpToBranchOp.OuterSingleton);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS13);
    }
    return Alignment;
  case Execute:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (Z_Registration_Info_UScriptStruct_FRigVMExecuteOp.OuterSingleton == (UScriptStruct *)0x0)
      {
        pUVar5 = Z_Construct_UPackage__Script_RigVM();
        Z_Registration_Info_UScriptStruct_FRigVMExecuteOp.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteOp,(UObject *)pUVar5,
                             L"RigVMExecuteOp");
      }
      pIVar6 = UScriptStruct::GetCppStructOps
                         (Z_Registration_Info_UScriptStruct_FRigVMExecuteOp.OuterSingleton);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS0);
    }
    return Alignment;
  case RunInstructions:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS14) && (_Init_thread_header(&::_TSS14), ::_TSS14 == -1)) {
      if (Z_Registration_Info_UScriptStruct_FRigVMRunInstructionsOp.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_RigVM();
        Z_Registration_Info_UScriptStruct_FRigVMRunInstructionsOp.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRigVMRunInstructionsOp,(UObject *)pUVar5,
                             L"RigVMRunInstructionsOp");
      }
      pIVar6 = UScriptStruct::GetCppStructOps
                         (Z_Registration_Info_UScriptStruct_FRigVMRunInstructionsOp.OuterSingleton);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS14);
    }
    return Alignment;
  case SetupTraits:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS15) && (_Init_thread_header(&::_TSS15), ::_TSS15 == -1)) {
      if (Z_Registration_Info_UScriptStruct_FRigVMSetupTraitsOp.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_RigVM();
        Z_Registration_Info_UScriptStruct_FRigVMSetupTraitsOp.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FRigVMSetupTraitsOp,(UObject *)pUVar5,
                             L"RigVMSetupTraitsOp");
      }
      pIVar6 = UScriptStruct::GetCppStructOps
                         (Z_Registration_Info_UScriptStruct_FRigVMSetupTraitsOp.OuterSingleton);
      Alignment = pIVar6->Alignment;
      _Init_thread_footer(&::_TSS15);
    }
    return Alignment;
  case Invalid:
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6769809472945649880>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                       ,0x728,"false");
    goto LAB_14a096444;
  default:
    iVar3 = 0x72c;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                     ,iVar3,L"");
LAB_14a096444:
  if (bVar2 == false) {
    return 0;
  }
  pcVar1 = (code *)swi(3);
  iVar3 = (*pcVar1)();
  return iVar3;
}

// GetOpCodeAt @ 14a096b10

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

ERigVMOpCode __thiscall FRigVMByteCode::GetOpCodeAt(FRigVMByteCode *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ERigVMOpCode EVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->ByteCode).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return (ERigVMOpCode)(this->ByteCode).AllocatorInstance.Data[param_1];
}

// GetOpNumBytesAt @ 14a096b90

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

int __thiscall FRigVMByteCode::GetOpNumBytesAt(FRigVMByteCode *this,int param_1,bool param_2)

{
  code *pcVar1;
  ulong64 uVar2;
  ERigVMOpCode EVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 local_38 [2];
  undefined4 local_36;
  undefined4 local_32;
  
  EVar3 = GetOpCodeAt(this,param_1);
  switch(EVar3) {
  case Execute_0_Operands:
  case Execute_1_Operands:
  case Execute_2_Operands:
  case Execute_3_Operands:
  case Execute_4_Operands:
  case Execute_5_Operands:
  case Execute_6_Operands:
  case Execute_7_Operands:
  case Execute_8_Operands:
  case Execute_9_Operands:
  case Execute_10_Operands:
  case Execute_11_Operands:
  case Execute_12_Operands:
  case Execute_13_Operands:
  case Execute_14_Operands:
  case Execute_15_Operands:
  case Execute_16_Operands:
  case Execute_17_Operands:
  case Execute_18_Operands:
  case Execute_19_Operands:
  case Execute_20_Operands:
  case Execute_21_Operands:
  case Execute_22_Operands:
  case Execute_23_Operands:
  case Execute_24_Operands:
  case Execute_25_Operands:
  case Execute_26_Operands:
  case Execute_27_Operands:
  case Execute_28_Operands:
  case Execute_29_Operands:
  case Execute_30_Operands:
  case Execute_31_Operands:
  case Execute_32_Operands:
  case Execute_33_Operands:
  case Execute_34_Operands:
  case Execute_35_Operands:
  case Execute_36_Operands:
  case Execute_37_Operands:
  case Execute_38_Operands:
  case Execute_39_Operands:
  case Execute_40_Operands:
  case Execute_41_Operands:
  case Execute_42_Operands:
  case Execute_43_Operands:
  case Execute_44_Operands:
  case Execute_45_Operands:
  case Execute_46_Operands:
  case Execute_47_Operands:
  case Execute_48_Operands:
  case Execute_49_Operands:
  case Execute_50_Operands:
  case Execute_51_Operands:
  case Execute_52_Operands:
  case Execute_53_Operands:
  case Execute_54_Operands:
  case Execute_55_Operands:
  case Execute_56_Operands:
  case Execute_57_Operands:
  case Execute_58_Operands:
  case Execute_59_Operands:
  case Execute_60_Operands:
  case Execute_61_Operands:
  case Execute_62_Operands:
  case Execute_63_Operands:
  case Execute_64_Operands:
  case Execute:
    iVar6 = 10;
    if (param_2) {
      uVar9 = 0;
      puVar10 = local_38;
      local_38[0] = 0x68;
      local_36 = 0xffff;
      local_32 = 0xffff;
      uVar8 = param_1;
      do {
        uVar5 = 0;
        if ((int)uVar8 < (this->ByteCode).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          iVar6 = (*pcVar1)();
          return iVar6;
        }
        uVar9 = uVar9 + 1;
        *puVar10 = puVar10[(longlong)
                           ((this->ByteCode).AllocatorInstance.Data +
                           ((longlong)param_1 - (longlong)local_38))];
        puVar10 = puVar10 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar9 < 10);
      if (this->bByteCodeIsAligned != false) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          iVar7 = GetOperandAlignment();
          OperandAlignment = (ulong64)iVar7;
          _Init_thread_footer(&::_TSS0);
        }
        if (OperandAlignment != 0) {
          uVar8 = param_1 + 10;
          while( true ) {
            uVar2 = OperandAlignment;
            uVar9 = 0;
            if ((int)uVar8 < (this->ByteCode).ArrayNum) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              iVar6 = (*pcVar1)();
              return iVar6;
            }
            if ((uVar2 - 1 & (ulonglong)((this->ByteCode).AllocatorInstance.Data + (int)uVar8)) == 0
               ) break;
            iVar6 = iVar6 + 1;
            uVar8 = uVar8 + 1;
          }
        }
      }
      iVar6 = iVar6 + ((uint)local_36._2_2_ + (uint)local_36._2_2_ * 2) * 2;
    }
    return iVar6;
  case Zero:
  case BoolFalse:
  case BoolTrue:
  case Increment:
  case Decrement:
  case JumpAbsolute:
  case JumpForward:
  case JumpBackward:
  case ArrayReset:
  case ArrayReverse:
  case SetupTraits:
    return 8;
  case Copy:
  case JumpAbsoluteIf:
  case JumpForwardIf:
  case JumpBackwardIf:
  case RunInstructions:
    return 0x10;
  case Equals:
  case NotEquals:
  case ArrayGetAtIndex:
  case ArraySetAtIndex:
  case ArrayAdd:
  case ArrayInsert:
  case ArrayDifference:
  case ArrayIntersection:
    return 0x14;
  case ChangeType:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                       ,0x40f,L"");
    break;
  case Exit:
  case EndBlock:
    return 1;
  case BeginBlock:
  case ArrayGetNum:
  case ArraySetNum:
  case ArrayRemove:
  case ArrayAppend:
  case ArrayClone:
  case ArrayUnion:
    return 0xe;
  case ArrayFind:
    return 0x1a;
  case ArrayIterator:
    return 0x26;
  case InvokeEntry:
  case JumpToBranch:
    return 0xc;
  case Invalid:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6769809472945650617>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                       ,0x447,"false");
    break;
  default:
    goto switchD_14a096bd1_default;
  }
  if (bVar4 != false) {
    pcVar1 = (code *)swi(3);
    iVar6 = (*pcVar1)();
    return iVar6;
  }
switchD_14a096bd1_default:
  return 0;
}

// GetOperandAlignment @ 14a096f10

int __cdecl FRigVMByteCode::GetOperandAlignment(void)

{
  UScriptStruct *this;
  ICppStructOps *pIVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this = FRigVMOperand::StaticStruct();
      pIVar1 = UScriptStruct::GetCppStructOps(this);
      OperandAlignment = pIVar1->Alignment;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return OperandAlignment;
}

// GetOperandsForExecuteOp @ 14a096f90

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

TArrayView<FRigVMOperand_const_,int> * __thiscall
FRigVMByteCode::GetOperandsForExecuteOp
          (FRigVMByteCode *this,TArrayView<FRigVMOperand_const_,int> *__return_storage_ptr__,
          FRigVMInstruction *param_1)

{
  ushort uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<FRigVMOperand_const_,int> *pTVar6;
  FRigVMOperand *pFVar7;
  uint uVar8;
  
  iVar2 = param_1->ByteCodeIndex;
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  if ((this->bByteCodeIsAligned == false) && (param_1->OperandAlignment != '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("bByteCodeIsAligned || InInstruction.OperandAlignment == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                       ,0x520,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<FRigVMOperand_const_,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  uVar1 = *(ushort *)(pFVar3 + (longlong)iVar2 + 4);
  uVar8 = (uint)uVar1;
  if (uVar1 == 0) {
    pFVar7 = (FRigVMOperand *)0x0;
    uVar8 = 0;
  }
  else {
    pFVar7 = (FRigVMOperand *)
             ((this->ByteCode).AllocatorInstance.Data +
             (int)(param_1->OperandAlignment + 10 + iVar2));
  }
  __return_storage_ptr__->DataPtr = pFVar7;
  __return_storage_ptr__->ArrayNum = uVar8;
  return __return_storage_ptr__;
}

// GetOperandsForOp @ 14a097040

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

TArrayView<FRigVMOperand_const_,int> * __thiscall
FRigVMByteCode::GetOperandsForOp
          (FRigVMByteCode *this,TArrayView<FRigVMOperand_const_,int> *__return_storage_ptr__,
          FRigVMInstruction *param_1)

{
  switch(param_1->OpCode) {
  case Zero:
  case BoolFalse:
  case BoolTrue:
  case Increment:
  case Decrement:
  case JumpAbsoluteIf:
  case JumpForwardIf:
  case JumpBackwardIf:
  case ArrayReset:
  case ArrayReverse:
  case JumpToBranch:
  case RunInstructions:
  case SetupTraits:
    __return_storage_ptr__->DataPtr =
         (FRigVMOperand *)
         ((this->ByteCode).AllocatorInstance.Data + (longlong)param_1->ByteCodeIndex + 2);
    __return_storage_ptr__->ArrayNum = 1;
    return __return_storage_ptr__;
  case Copy:
  case BeginBlock:
  case ArrayGetNum:
  case ArraySetNum:
  case ArrayRemove:
  case ArrayAppend:
  case ArrayClone:
  case ArrayUnion:
    __return_storage_ptr__->DataPtr =
         (FRigVMOperand *)
         ((this->ByteCode).AllocatorInstance.Data + (longlong)param_1->ByteCodeIndex + 2);
    __return_storage_ptr__->ArrayNum = 2;
    return __return_storage_ptr__;
  case Equals:
  case NotEquals:
  case ArrayGetAtIndex:
  case ArraySetAtIndex:
  case ArrayAdd:
  case ArrayInsert:
  case ArrayDifference:
  case ArrayIntersection:
    __return_storage_ptr__->DataPtr =
         (FRigVMOperand *)
         ((this->ByteCode).AllocatorInstance.Data + (longlong)param_1->ByteCodeIndex + 2);
    __return_storage_ptr__->ArrayNum = 3;
    return __return_storage_ptr__;
  default:
    __return_storage_ptr__->DataPtr = (FRigVMOperand *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  case ArrayFind:
    __return_storage_ptr__->DataPtr =
         (FRigVMOperand *)
         ((this->ByteCode).AllocatorInstance.Data + (longlong)param_1->ByteCodeIndex + 2);
    __return_storage_ptr__->ArrayNum = 4;
    return __return_storage_ptr__;
  case ArrayIterator:
    __return_storage_ptr__->DataPtr =
         (FRigVMOperand *)
         ((this->ByteCode).AllocatorInstance.Data + (longlong)param_1->ByteCodeIndex + 2);
    __return_storage_ptr__->ArrayNum = 6;
    return __return_storage_ptr__;
  case Execute:
    GetOperandsForExecuteOp(this,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
}

// GetOperatorHash @ 14a097180

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

uint __thiscall FRigVMByteCode::GetOperatorHash(FRigVMByteCode *this,FRigVMInstruction *param_1)

{
  ushort uVar1;
  code *pcVar2;
  ERigVMOpCode EVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FRigVMOperand *pFVar7;
  FRigVMOperand *pFVar8;
  FRigVMExecuteOp *pFVar9;
  uint uVar10;
  int iVar11;
  
  EVar3 = GetOpCodeAt(this,param_1->ByteCodeIndex);
  switch(EVar3) {
  case Zero:
  case BoolFalse:
  case BoolTrue:
  case Increment:
  case Decrement:
  case ArrayReset:
  case ArrayReverse:
  case SetupTraits:
    uVar6 = ::GetTypeHash((FRigVMUnaryOp *)
                          ((this->ByteCode).AllocatorInstance.Data + param_1->ByteCodeIndex));
    return uVar6;
  case Copy:
    uVar6 = ::GetTypeHash((FRigVMCopyOp *)
                          ((this->ByteCode).AllocatorInstance.Data + param_1->ByteCodeIndex));
    return uVar6;
  case Equals:
  case NotEquals:
    uVar6 = ::GetTypeHash((FRigVMComparisonOp *)
                          ((this->ByteCode).AllocatorInstance.Data + param_1->ByteCodeIndex));
    return uVar6;
  case JumpAbsolute:
  case JumpForward:
  case JumpBackward:
    uVar6 = ::GetTypeHash((FRigVMJumpOp *)
                          ((this->ByteCode).AllocatorInstance.Data + param_1->ByteCodeIndex));
    return uVar6;
  case JumpAbsoluteIf:
  case JumpForwardIf:
  case JumpBackwardIf:
    uVar6 = ::GetTypeHash((FRigVMJumpIfOp *)
                          ((this->ByteCode).AllocatorInstance.Data + param_1->ByteCodeIndex));
    return uVar6;
  case ChangeType:
    iVar11 = 0x330;
    break;
  case Exit:
  case EndBlock:
    return (uint)(byte)(this->ByteCode).AllocatorInstance.Data[param_1->ByteCodeIndex];
  case BeginBlock:
  case ArrayGetNum:
  case ArraySetNum:
  case ArrayRemove:
  case ArrayAppend:
  case ArrayClone:
  case ArrayUnion:
    uVar6 = ::GetTypeHash((FRigVMBinaryOp *)
                          ((this->ByteCode).AllocatorInstance.Data + param_1->ByteCodeIndex));
    return uVar6;
  case ArrayGetAtIndex:
  case ArraySetAtIndex:
  case ArrayAdd:
  case ArrayInsert:
  case ArrayDifference:
  case ArrayIntersection:
    uVar6 = ::GetTypeHash((FRigVMTernaryOp *)
                          ((this->ByteCode).AllocatorInstance.Data + param_1->ByteCodeIndex));
    return uVar6;
  case ArrayFind:
    uVar6 = ::GetTypeHash((FRigVMQuaternaryOp *)
                          ((this->ByteCode).AllocatorInstance.Data + param_1->ByteCodeIndex));
    return uVar6;
  case ArrayIterator:
    uVar6 = ::GetTypeHash((FRigVMSenaryOp *)
                          ((this->ByteCode).AllocatorInstance.Data + param_1->ByteCodeIndex));
    return uVar6;
  case InvokeEntry:
    uVar6 = ::GetTypeHash((FRigVMInvokeEntryOp *)
                          ((this->ByteCode).AllocatorInstance.Data + param_1->ByteCodeIndex));
    return uVar6;
  case JumpToBranch:
    uVar6 = ::GetTypeHash((FRigVMJumpToBranchOp *)
                          ((this->ByteCode).AllocatorInstance.Data + param_1->ByteCodeIndex));
    return uVar6;
  case Execute:
    iVar11 = param_1->ByteCodeIndex;
    pFVar9 = (FRigVMExecuteOp *)((this->ByteCode).AllocatorInstance.Data + iVar11);
    uVar6 = ::GetTypeHash(pFVar9);
    if (((this->bByteCodeIsAligned == false) && (param_1->OperandAlignment != '\0')) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("bByteCodeIsAligned || InInstruction.OperandAlignment == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMByteCode.h"
                           ,0x520,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    uVar1 = pFVar9->ArgumentCount;
    pFVar7 = (FRigVMOperand *)(ulonglong)uVar1;
    if (uVar1 == 0) {
      pFVar7 = (FRigVMOperand *)0x0;
      pFVar8 = pFVar7;
    }
    else {
      pFVar8 = (FRigVMOperand *)
               ((this->ByteCode).AllocatorInstance.Data +
               (int)(param_1->OperandAlignment + 10 + iVar11));
    }
    pFVar7 = pFVar8 + (longlong)pFVar7;
    for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
      uVar5 = ::GetTypeHash(pFVar8);
      uVar6 = uVar6 - uVar5 ^ uVar5 >> 0xd;
      uVar10 = (-0x61c88647 - uVar6) - uVar5 ^ uVar6 << 8;
      uVar5 = (uVar5 - uVar10) - uVar6 ^ uVar10 >> 0xd;
      uVar6 = (uVar6 - uVar5) - uVar10 ^ uVar5 >> 0xc;
      uVar10 = (uVar10 - uVar6) - uVar5 ^ uVar6 << 0x10;
      uVar5 = (uVar5 - uVar10) - uVar6 ^ uVar10 >> 5;
      uVar6 = (uVar6 - uVar5) - uVar10 ^ uVar5 >> 3;
      uVar10 = (uVar10 - uVar6) - uVar5 ^ uVar6 << 10;
      uVar6 = (uVar5 - uVar10) - uVar6 ^ uVar10 >> 0xf;
    }
    return uVar6;
  case RunInstructions:
    uVar6 = ::GetTypeHash((FRigVMRunInstructionsOp *)
                          ((this->ByteCode).AllocatorInstance.Data + param_1->ByteCodeIndex));
    return uVar6;
  case Invalid:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6769809472945650840>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                       ,0x368,"false");
    goto LAB_14a09746b;
  default:
    iVar11 = 0x36d;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                     ,iVar11,L"");
LAB_14a09746b:
  if (bVar4 != false) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  return 0;
}

// GetTraits @ 14a099090

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

TMap<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
FRigVMByteCode::GetTraits
          (FRigVMByteCode *this,
          TMap<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,0>_>
          *__return_storage_ptr__,FRigVMMemoryStorageStruct *param_1,
          FRigVMMemoryStorageStruct *param_2,
          TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32>_> *param_3,UScriptStruct *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TMap<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar4;
  int iVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  ulong64 uVar12;
  undefined1 local_b8 [4];
  uint local_b4;
  FRigVMInstructionArray local_b0;
  TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> local_a0;
  TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32>_> local_90;
  undefined1 local_80 [16];
  int local_70;
  uint *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar9 = 0;
  iVar5 = 0;
  FRigVMInstructionArray::FRigVMInstructionArray(&local_b0,this,this->bByteCodeIsAligned);
  uVar11 = uVar9;
  uVar12 = uVar9;
  if (0 < local_b0.Instructions.ArrayNum) {
    do {
      uVar8 = (uint)uVar9;
      uVar3 = 0;
      if ((int)uVar8 < local_b0.Instructions.ArrayNum) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TMap<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,0>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
      if (((FRigVMInstruction *)(local_b0.Instructions.AllocatorInstance.Data + uVar11))->OpCode ==
          SetupTraits) {
        local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_90.ArrayNum = 0;
        local_90.ArrayMax = 0;
        GetTraitsForInstruction
                  (this,&local_a0,
                   (FRigVMInstruction *)(local_b0.Instructions.AllocatorInstance.Data + uVar11),
                   param_1,param_2,&local_90,param_4);
        iVar5 = local_a0.ArrayNum;
        pFVar10 = local_a0.AllocatorInstance.Data + (longlong)iVar5 * 0x20;
        uVar6 = local_a0._8_8_;
        FVar7.Data = local_a0.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar6 != iVar5) {
            local_b8[0] = 0;
            `TCheckedPointerIterator<FRigVMTraitScope_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_b8);
            uVar6 = local_a0._8_8_;
          }
          if (FVar7.Data == pFVar10) break;
          local_58 = *(undefined8 *)(FVar7.Data + 0x10);
          uStack_50 = *(undefined8 *)(FVar7.Data + 0x18);
          uVar12 = (ulong64)(uint)((int)uVar12 + (int)*(undefined8 *)(FVar7.Data + 0x18));
          FVar7.Data = FVar7.Data + 0x20;
        }
        if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.AllocatorInstance.Data);
        }
        if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.AllocatorInstance.Data);
        }
      }
      iVar5 = (int)uVar12;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 0xc;
    } while ((int)(uVar8 + 1) < local_b0.Instructions.ArrayNum);
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar12);
    }
  }
  if (param_3->ArrayMax < iVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar5,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_b4 = 0;
  if (0 < local_b0.Instructions.ArrayNum) {
    do {
      uVar3 = local_b4;
      uVar8 = 0;
      if ((int)local_b4 < local_b0.Instructions.ArrayNum) {
        uVar8 = ~local_b4 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TMap<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,0>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
      if (local_b0.Instructions.AllocatorInstance.Data[(longlong)(int)uVar3 * 0xc + 8] ==
          (FScriptContainerElement)0x67) {
        GetTraitsForInstruction
                  (this,(TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *)(local_80 + 8),
                   (FRigVMInstruction *)
                   (local_b0.Instructions.AllocatorInstance.Data + (longlong)(int)uVar3 * 0xc),
                   param_1,param_2,param_3,param_4);
        if (local_70 != 0) {
          local_68 = &local_b4;
          local_60 = local_80 + 8;
          TSet<TTuple<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<int_const_&,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_const_&>_>
                    ((TSet<TTuple<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)__return_storage_ptr__,
                     (TPairInitializer<int_const_&,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_const_&>
                      *)local_80,(bool *)&local_68);
        }
        if ((TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *)local_80._8_8_ !=
            (TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free((void *)local_80._8_8_);
        }
      }
      local_b4 = local_b4 + 1;
    } while ((int)local_b4 < local_b0.Instructions.ArrayNum);
  }
  if (local_b0.Instructions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Instructions.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTraits @ 14a0993a0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

TMap<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
FRigVMByteCode::GetTraits
          (FRigVMByteCode *this,
          TMap<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,0>_>
          *__return_storage_ptr__,FRigVMMemoryStorageStruct *param_1,
          FRigVMMemoryStorageStruct *param_2,UScriptStruct *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  TMap<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  uint local_res8 [4];
  FRigVMInstructionArray local_58;
  TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> local_48;
  uint *local_38;
  TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *local_30;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  FRigVMInstructionArray::FRigVMInstructionArray(&local_58,this,this->bByteCodeIsAligned);
  local_res8[0] = 0;
  if (0 < local_58.Instructions.ArrayNum) {
    do {
      uVar2 = local_res8[0];
      uVar4 = 0;
      if ((int)local_res8[0] < local_58.Instructions.ArrayNum) {
        uVar4 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TMap<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,0>_>
                  *)(*pcVar1)();
        return pTVar5;
      }
      if (local_58.Instructions.AllocatorInstance.Data[(longlong)(int)uVar2 * 0xc + 8] ==
          (FScriptContainerElement)0x67) {
        GetTraitsForInstruction
                  (this,&local_48,
                   (FRigVMInstruction *)
                   (local_58.Instructions.AllocatorInstance.Data + (longlong)(int)uVar2 * 0xc),
                   param_1,param_2,param_3);
        if (local_48.ArrayNum != 0) {
          local_38 = local_res8;
          local_30 = &local_48;
          TSet<TTuple<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<int_const_&,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_const_&>_>
                    ((TSet<TTuple<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)__return_storage_ptr__,
                     (TPairInitializer<int_const_&,TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_>_const_&>
                      *)(local_res8 + 2),(bool *)&local_38);
        }
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
      }
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < local_58.Instructions.ArrayNum);
  }
  if (local_58.Instructions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Instructions.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTraitsForInstruction @ 14a099570

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMByteCode::GetTraitsForInstruction
          (FRigVMByteCode *this,
          TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRigVMInstruction *param_1,FRigVMMemoryStorageStruct *param_2,
          FRigVMMemoryStorageStruct *param_3,
          TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32>_> *param_4,UScriptStruct *param_5)

{
  ushort uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FRigVMLazyBranch *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  UPackage *pUVar10;
  TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *pTVar11;
  FProperty *pFVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  FRigVMTrait *pFVar14;
  FRigVMMemoryHandle *pFVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulong64 uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  int iVar23;
  undefined1 local_res18 [16];
  undefined1 local_98 [4];
  uint local_94;
  TArray<int,TSizedDefaultAllocator<32>_> *local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 local_64;
  FRigVMMemoryHandle local_60;
  
  uVar18 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1->OpCode == SetupTraits) {
    if ((param_5 == (UScriptStruct *)0x0) &&
       (param_5 = Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton,
       Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton == (UScriptStruct *)0x0)) {
      pUVar10 = Z_Construct_UPackage__Script_RigVM();
      Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait,(UObject *)pUVar10,L"RigVMTrait");
      param_5 = Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton;
    }
    iVar23 = param_1->ByteCodeIndex;
    pFVar21 = (this->ByteCode).AllocatorInstance.Data;
    if ((pFVar21[(longlong)iVar23 + 2] != (FScriptContainerElement)0x1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Op.Arg.GetMemoryType() == ERigVMMemoryType::Literal",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                           ,0x909,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar11;
    }
    uVar1 = *(ushort *)(pFVar21 + (longlong)iVar23 + 4);
    if ((((uVar1 != 0xffff) && ((int)(uint)uVar1 < (param_2->LinkedProperties).ArrayNum)) &&
        (pFVar12 = FRigVMMemoryStorageStruct::GetProperty(param_2,(uint)uVar1),
        pFVar12 != (FProperty *)0x0)) &&
       (((*(uint *)(pFVar12->_padding_ + 0x18) >> 0x15 & 1) != 0 &&
        ((*(byte *)(*(longlong *)(pFVar12[1]._padding_ + 8) + 0x18) & 0x80) != 0)))) {
      pTVar13 = FRigVMMemoryStorageStruct::GetData<TArray<int,TSizedDefaultAllocator<32>_>_>
                          (param_2,pFVar12);
      pFVar19 = (pTVar13->AllocatorInstance).Data;
      iVar23 = pTVar13->ArrayNum;
      pFVar21 = pFVar19 + (longlong)iVar23 * 4;
      local_90 = pTVar13;
      while( true ) {
        if (pTVar13->ArrayNum != iVar23) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        iVar9 = (int)uVar18;
        if (pFVar19 == pFVar21) break;
        uVar22 = *(uint *)pFVar19;
        uVar7 = 0;
        if ((int)uVar22 < (param_3->LinkedProperties).ArrayNum) {
          uVar7 = ~uVar22 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar11;
        }
        lVar20 = *(longlong *)
                  ((param_3->LinkedProperties).AllocatorInstance.Data + (longlong)(int)uVar22 * 8);
        if (lVar20 == 0) {
LAB_14a0997a3:
          pFVar19 = pFVar19 + 4;
        }
        else {
          if ((*(uint *)(*(longlong *)(lVar20 + 8) + 0x18) >> 0x14 & 1) == 0) {
            if (lVar20 != 0) goto LAB_14a0997a1;
            goto LAB_14a0997a3;
          }
          lVar20 = *(longlong *)(lVar20 + 0x70);
          if (lVar20 == 0) {
LAB_14a0997a1:
            uVar18 = (ulong64)(iVar9 + 1);
            goto LAB_14a0997a3;
          }
          if (Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton == (UScriptStruct *)0x0)
          {
            pUVar10 = Z_Construct_UPackage__Script_RigVM();
            Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait,(UObject *)pUVar10,
                                 L"RigVMTrait");
          }
          if (Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton == (UScriptStruct *)0x0)
          goto LAB_14a0997a1;
          iVar2 = (int)(Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton)->_padding_;
          if ((*(int *)(lVar20 + 0x38) < iVar2) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar20 + 0x30) + (longlong)iVar2 * 8) !=
              &(Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton)->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) goto LAB_14a0997a3;
          uVar18 = (ulong64)(iVar9 + 1);
          pFVar19 = pFVar19 + 4;
        }
      }
      if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar18);
      }
      if (param_4->ArrayMax < iVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar9,&param_4->AllocatorInstance,param_4->ArrayNum,&param_4->ArrayMax);
      }
      iVar23 = 0;
      uVar22 = param_4->ArrayNum;
      local_94 = local_90->ArrayNum;
      uVar16 = (ulonglong)(int)local_94;
      pFVar21 = (local_90->AllocatorInstance).Data;
      local_88 = pFVar21 + uVar16 * 4;
      while( true ) {
        pFVar19 = local_88;
        if (local_90->ArrayNum != (int)uVar16) {
          local_98[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_98);
        }
        if (pFVar21 == pFVar19) break;
        uVar7 = *(uint *)pFVar21;
        uVar8 = 0;
        if ((int)uVar7 < (param_3->LinkedProperties).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar11;
        }
        pFVar12 = *(FProperty **)
                   ((param_3->LinkedProperties).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
        if (pFVar12 == (FProperty *)0x0) {
LAB_14a099b0c:
          pFVar21 = pFVar21 + 4;
          uVar16 = (ulonglong)local_94;
        }
        else {
          if ((*(uint *)(pFVar12->_padding_ + 0x18) >> 0x14 & 1) == 0) {
LAB_14a099aa5:
            if (uVar22 == 0xffffffff) {
              uVar22 = param_4->ArrayNum;
              iVar23 = 0;
            }
            pFVar15 = FRigVMMemoryStorageStruct::GetHandle
                                (param_3,&local_60,uVar7,(FRigVMPropertyPath *)0x0);
            iVar9 = param_4->ArrayNum;
            if (iVar9 == param_4->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,&param_4->AllocatorInstance,&param_4->ArrayMax);
              param_4->ArrayNum = iVar9;
            }
            param_4->ArrayNum = iVar9 + 1;
            pFVar12 = pFVar15->Property;
            pFVar3 = (param_4->AllocatorInstance).Data;
            iVar23 = iVar23 + 1;
            pFVar19 = pFVar3 + (longlong)iVar9 * 0x20;
            *(uchar **)pFVar19 = pFVar15->Ptr;
            *(FProperty **)(pFVar19 + 8) = pFVar12;
            pFVar5 = pFVar15->LazyBranch;
            pFVar3 = pFVar3 + (longlong)iVar9 * 0x20 + 0x10;
            *(FRigVMPropertyPath **)pFVar3 = pFVar15->PropertyPath;
            *(FRigVMLazyBranch **)(pFVar3 + 8) = pFVar5;
            goto LAB_14a099b0c;
          }
          lVar20 = pFVar12[1]._padding_;
          if ((lVar20 == 0) || (param_5 == (UScriptStruct *)0x0)) {
LAB_14a099a38:
            lVar20 = pFVar12[1]._padding_;
            if (lVar20 != 0) {
              if (Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton ==
                  (UScriptStruct *)0x0) {
                pUVar10 = Z_Construct_UPackage__Script_RigVM();
                Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton =
                     GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait,(UObject *)pUVar10,
                                     L"RigVMTrait");
              }
              if (Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton !=
                  (UScriptStruct *)0x0) {
                iVar9 = (int)(Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton)->
                             _padding_;
                if ((*(int *)(lVar20 + 0x38) < iVar9) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar20 + 0x30) + (longlong)iVar9 * 8)
                    != &(Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton)->_padding_))
                {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (bVar6) goto LAB_14a099b0c;
              }
            }
            goto LAB_14a099aa5;
          }
          iVar9 = (int)param_5->_padding_;
          if ((*(int *)(lVar20 + 0x38) < iVar9) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar20 + 0x30) + (longlong)iVar9 * 8) !=
              &param_5->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) goto LAB_14a099a38;
          local_80 = (FScriptContainerElement *)0x0;
          iStack_78 = 0;
          if (uVar22 != 0xffffffff) {
            uVar7 = 0;
            if ((int)uVar22 < param_4->ArrayNum) {
              uVar7 = ~uVar22 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pTVar11 = (TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar11;
            }
            lVar20 = (longlong)(int)uVar22;
            pFVar19 = (param_4->AllocatorInstance).Data;
            if ((iVar23 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              pTVar11 = (TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar11;
            }
            uVar22 = 0xffffffff;
            uStack_74 = local_64;
            local_80 = pFVar19 + lVar20 * 0x20;
            iStack_78 = iVar23;
          }
          lVar20 = 0;
          if (pFVar12[1]._padding_ != 0) {
            lVar20 = pFVar12[1]._padding_;
          }
          iVar9 = FRigVMMemoryStorageStruct::GetPropertyIndex(param_3,pFVar12);
          if (iVar9 == -1) {
            pFVar14 = (FRigVMTrait *)0x0;
          }
          else {
            pFVar14 = FRigVMMemoryStorageStruct::GetData<FRigVMTrait>(param_3,iVar9);
          }
          iVar9 = __return_storage_ptr__->ArrayNum;
          if (iVar9 == __return_storage_ptr__->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar9 + 1;
          pFVar19 = (__return_storage_ptr__->AllocatorInstance).Data;
          lVar17 = (longlong)iVar9 * 0x20;
          pFVar21 = pFVar21 + 4;
          *(FRigVMTrait **)(pFVar19 + lVar17) = pFVar14;
          *(longlong *)(pFVar19 + lVar17 + 8) = lVar20;
          *(FScriptContainerElement **)(pFVar19 + lVar17 + 0x10) = local_80;
          *(ulonglong *)(pFVar19 + lVar17 + 0x10 + 8) = CONCAT44(uStack_74,iStack_78);
          uVar16 = (ulonglong)local_94;
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetTraitsForInstruction @ 14a099b60

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMByteCode::GetTraitsForInstruction
          (FRigVMByteCode *this,
          TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRigVMInstruction *param_1,FRigVMMemoryStorageStruct *param_2,
          FRigVMMemoryStorageStruct *param_3,UScriptStruct *param_4)

{
  ushort uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UPackage *pUVar10;
  TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *pTVar11;
  FProperty *pFVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  ulonglong uVar14;
  FRigVMTrait *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res10 [8];
  uint local_res18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1->OpCode != SetupTraits) {
    return __return_storage_ptr__;
  }
  if ((param_4 == (UScriptStruct *)0x0) &&
     (param_4 = Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton,
     Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton == (UScriptStruct *)0x0)) {
    pUVar10 = Z_Construct_UPackage__Script_RigVM();
    param_4 = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTrait,(UObject *)pUVar10,L"RigVMTrait"
                             );
    Z_Registration_Info_UScriptStruct_FRigVMTrait.OuterSingleton = param_4;
  }
  iVar9 = param_1->ByteCodeIndex;
  pFVar3 = (this->ByteCode).AllocatorInstance.Data;
  if ((pFVar3[(longlong)iVar9 + 2] != (FScriptContainerElement)0x1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Op.Arg.GetMemoryType() == ERigVMMemoryType::Literal",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                         ,0x8da,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar11 = (TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
    return pTVar11;
  }
  uVar1 = *(ushort *)(pFVar3 + (longlong)iVar9 + 4);
  if ((((uVar1 != 0xffff) && ((int)(uint)uVar1 < (param_2->LinkedProperties).ArrayNum)) &&
      (pFVar12 = FRigVMMemoryStorageStruct::GetProperty(param_2,(uint)uVar1),
      pFVar12 != (FProperty *)0x0)) &&
     (((*(uint *)(pFVar12->_padding_ + 0x18) >> 0x15 & 1) != 0 &&
      ((*(byte *)(*(longlong *)(pFVar12[1]._padding_ + 8) + 0x18) & 0x80) != 0)))) {
    pTVar13 = FRigVMMemoryStorageStruct::GetData<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (param_2,pFVar12);
    pFVar17 = (pTVar13->AllocatorInstance).Data;
    local_res18 = pTVar13->ArrayNum;
    uVar14 = (ulonglong)(int)local_res18;
    pFVar3 = pFVar17 + uVar14 * 4;
    while( true ) {
      if (pTVar13->ArrayNum != (int)uVar14) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar17 == pFVar3) break;
      uVar2 = *(uint *)pFVar17;
      uVar8 = 0;
      if ((int)uVar2 < (param_3->LinkedProperties).ArrayNum) {
        uVar8 = ~uVar2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArray<FRigVMTraitScope,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar11;
      }
      pFVar12 = *(FProperty **)
                 ((param_3->LinkedProperties).AllocatorInstance.Data + (longlong)(int)uVar2 * 8);
      if ((((pFVar12 != (FProperty *)0x0) &&
           ((*(uint *)(pFVar12->_padding_ + 0x18) >> 0x14 & 1) != 0)) &&
          (lVar4 = pFVar12[1]._padding_, lVar4 != 0)) && (param_4 != (UScriptStruct *)0x0)) {
        iVar9 = (int)param_4->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar9) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar9 * 8) !=
            &param_4->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          iVar9 = FRigVMMemoryStorageStruct::GetPropertyIndex(param_3,pFVar12);
          if (iVar9 == -1) {
            pFVar15 = (FRigVMTrait *)0x0;
          }
          else {
            pFVar15 = FRigVMMemoryStorageStruct::GetData<FRigVMTrait>(param_3,iVar9);
          }
          iVar9 = __return_storage_ptr__->ArrayNum;
          if (iVar9 == __return_storage_ptr__->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar9 + 1;
          pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
          lVar16 = (longlong)iVar9 * 0x20;
          *(FRigVMTrait **)(pFVar5 + lVar16) = pFVar15;
          *(longlong *)(pFVar5 + lVar16 + 8) = lVar4;
          *(undefined8 *)(pFVar5 + lVar16 + 0x10) = 0;
          *(undefined4 *)(pFVar5 + lVar16 + 0x18) = 0;
        }
      }
      uVar14 = (ulonglong)local_res18;
      pFVar17 = pFVar17 + 4;
    }
  }
  return __return_storage_ptr__;
}

// InlineFunction @ 14a09db90

int __thiscall
FRigVMByteCode::InlineFunction
          (FRigVMByteCode *this,FRigVMByteCode *param_1,
          TArrayView<FRigVMOperand_const_,int> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == (FRigVMByteCode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FunctionByteCode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                       ,0x4cd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  if (param_1->bByteCodeIsAligned != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FunctionByteCode->bByteCodeIsAligned",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                       ,0x4ce,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = (this->ByteCode).ArrayNum;
  if (this == param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar1 = (param_1->ByteCode).ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar1,(ForAnyElementType *)this,&(this->ByteCode).ArrayNum,
                       &(this->ByteCode).ArrayMax);
    memcpy((this->ByteCode).AllocatorInstance.Data + iVar5,
           (param_1->ByteCode).AllocatorInstance.Data,(longlong)iVar1);
  }
  this->NumInstructions = this->NumInstructions + param_1->NumInstructions;
  return iVar4;
}

// Load @ 14a09ea90

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

void __thiscall FRigVMByteCode::Load(FRigVMByteCode *this,FArchive *param_1)

{
  TArray<FRigVMBranchInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  TMap<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>_>
  *this_00;
  undefined1 *puVar2;
  code *pcVar3;
  UScriptStruct *this_01;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  longlong *plVar7;
  ForAnyElementType FVar8;
  int *piVar9;
  wchar_t *pwVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  byte local_res18 [8];
  FRigVMBaseOp local_res20 [8];
  FRigVMBaseOp local_258 [4];
  uint local_254;
  FRigVMOperand local_250;
  ForAnyElementType local_248;
  int local_240;
  int local_23c;
  undefined1 local_238 [8];
  FRigVMUnaryOp local_230;
  undefined8 local_228;
  FRigVMExecuteOp local_220;
  FRigVMBinaryOp local_210;
  FRigVMTernaryOp local_200;
  FRigVMComparisonOp local_1e8;
  FRigVMQuaternaryOp local_1d0;
  undefined8 local_1b0;
  undefined4 local_1a8;
  FRigVMSenaryOp local_1a0;
  FRigVMCopyOp local_178;
  TArray<FString,TSizedDefaultAllocator<32>_> local_168;
  FRigVMJumpToBranchOp local_158;
  int local_148 [2];
  FRigVMJumpOp local_140;
  FRigVMJumpIfOp local_138;
  FRigVMRunInstructionsOp local_128;
  FRigVMBranchInfoKey local_118;
  FRigVMInvokeEntryOp local_108;
  FString local_f8;
  FString local_e8;
  FTopLevelAssetPath local_d8;
  FRigVMBranchInfoKey local_c8;
  FName local_b8;
  FName local_b0;
  FRigVMBranchInfoKey *local_a8;
  TArrayView<FRigVMOperand_const_,int> local_a0;
  FString local_90;
  FString local_80;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  
  iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (iVar5 < 0x24) {
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              (param_1,&this->ByteCode);
    return;
  }
  uVar17 = 0;
  local_254 = 0;
  (this->ByteCode).ArrayNum = 0;
  if ((this->ByteCode).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,&(this->ByteCode).ArrayMax);
  }
  this->bByteCodeIsAligned = false;
  plVar7 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar7[1] < (uint *)*plVar7 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_254);
    }
  }
  else {
    local_254 = *(uint *)*plVar7;
    *plVar7 = *plVar7 + 4;
  }
  uVar16 = uVar17;
  if (0 < (int)local_254) {
    do {
      plVar7 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = 0x68;
      if ((byte *)plVar7[1] < (byte *)*plVar7 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
      }
      else {
        local_res18[0] = *(byte *)*plVar7;
        *plVar7 = *plVar7 + 1;
      }
      if (local_res18[0] < 0x41) {
        local_res18[0] = 0x65;
      }
      switch(local_res18[0]) {
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x45:
      case 0x46:
      case 0x53:
      case 0x62:
        plVar7 = *(longlong **)&param_1->field_0x8;
        local_230._padding_._0_1_ = 0x68;
        local_230.Arg.MemoryType = Work;
        local_230.Arg.RegisterIndex = 0xffff;
        local_230.Arg.RegisterOffset = 0xffff;
        if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_230,1);
        }
        else {
          local_230._padding_._0_1_ = *(undefined1 *)*plVar7;
          *plVar7 = *plVar7 + 1;
        }
        FRigVMOperand::Serialize(&local_230.Arg,param_1);
        AddOp<FRigVMUnaryOp>(this,&local_230);
        break;
      case 0x44:
        local_178._padding_._0_1_ = 0x44;
        local_178.Source.MemoryType = Work;
        local_178.Source.RegisterIndex = 0xffff;
        local_178.Source.RegisterOffset = 0xffff;
        local_178.Target.MemoryType = Work;
        local_178.Target.RegisterIndex = 0xffff;
        local_178.Target.RegisterOffset = 0xffff;
        local_178.RegisterType = Invalid;
        local_178.CopyType = Default;
        FRigVMCopyOp::Serialize(&local_178,param_1);
        AddOp<FRigVMCopyOp>(this,&local_178);
        break;
      case 0x47:
      case 0x48:
        plVar7 = *(longlong **)&param_1->field_0x8;
        local_1e8._padding_._0_1_ = 0x68;
        local_1e8.A.MemoryType = Work;
        local_1e8.A.RegisterIndex = 0xffff;
        local_1e8.A.RegisterOffset = 0xffff;
        local_1e8.B.MemoryType = Work;
        local_1e8.B.RegisterIndex = 0xffff;
        local_1e8.B.RegisterOffset = 0xffff;
        local_1e8.Result.MemoryType = Work;
        local_1e8.Result.RegisterIndex = 0xffff;
        local_1e8.Result.RegisterOffset = 0xffff;
        if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1e8,1);
        }
        else {
          local_1e8._padding_._0_1_ = *(undefined1 *)*plVar7;
          *plVar7 = *plVar7 + 1;
        }
        FRigVMOperand::Serialize(&local_1e8.A,param_1);
        FRigVMOperand::Serialize(&local_1e8.B,param_1);
        FRigVMOperand::Serialize(&local_1e8.Result,param_1);
        AddOp<FRigVMComparisonOp>(this,&local_1e8);
        break;
      case 0x49:
      case 0x4a:
      case 0x4b:
        local_140._padding_._0_1_ = 0x68;
        local_140.InstructionIndex = -1;
        ::operator<<(param_1,&local_140);
        AddOp<FRigVMJumpOp>(this,&local_140);
        break;
      case 0x4c:
      case 0x4d:
      case 0x4e:
        local_138._padding_._0_1_ = 0x68;
        local_138._padding_._2_1_ = 0;
        local_138._4_8_ = 0xffffffffffffffff;
        local_138.Condition = true;
        ::operator<<(param_1,&local_138);
        AddOp<FRigVMJumpIfOp>(this,&local_138);
        break;
      default:
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6769809472945651060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                           ,0x28c,"false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      case 0x50:
        local_res20[0].OpCode = Exit;
        AddOp<FRigVMBaseOp>(this,local_res20);
        break;
      case 0x51:
      case 0x54:
      case 0x55:
      case 0x5a:
      case 0x5c:
      case 0x5d:
      case 0x5f:
        plVar7 = *(longlong **)&param_1->field_0x8;
        local_210._padding_._0_1_ = 0x68;
        local_210.ArgA.MemoryType = Work;
        local_210.ArgA.RegisterIndex = 0xffff;
        local_210.ArgA.RegisterOffset = 0xffff;
        local_210.ArgB.MemoryType = Work;
        local_210.ArgB.RegisterIndex = 0xffff;
        local_210.ArgB.RegisterOffset = 0xffff;
        if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_210,1);
        }
        else {
          local_210._padding_._0_1_ = *(undefined1 *)*plVar7;
          *plVar7 = *plVar7 + 1;
        }
        FRigVMOperand::Serialize(&local_210.ArgA,param_1);
        FRigVMOperand::Serialize(&local_210.ArgB,param_1);
        AddOp<FRigVMBinaryOp>(this,&local_210);
        break;
      case 0x52:
        local_258[0].OpCode = EndBlock;
        AddOp<FRigVMBaseOp>(this,local_258);
        break;
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x60:
      case 0x61:
        plVar7 = *(longlong **)&param_1->field_0x8;
        local_200._padding_._0_1_ = 0x68;
        local_200.ArgA.MemoryType = Work;
        local_200.ArgA.RegisterIndex = 0xffff;
        local_200.ArgA.RegisterOffset = 0xffff;
        local_200.ArgB.MemoryType = Work;
        local_200.ArgB.RegisterIndex = 0xffff;
        local_200.ArgB.RegisterOffset = 0xffff;
        local_200.ArgC.MemoryType = Work;
        local_200.ArgC.RegisterIndex = 0xffff;
        local_200.ArgC.RegisterOffset = 0xffff;
        if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_200,1);
        }
        else {
          local_200._padding_._0_1_ = *(undefined1 *)*plVar7;
          *plVar7 = *plVar7 + 1;
        }
        FRigVMOperand::Serialize(&local_200.ArgA,param_1);
        FRigVMOperand::Serialize(&local_200.ArgB,param_1);
        FRigVMOperand::Serialize(&local_200.ArgC,param_1);
        AddOp<FRigVMTernaryOp>(this,&local_200);
        break;
      case 0x5b:
        plVar7 = *(longlong **)&param_1->field_0x8;
        local_1d0._padding_._0_1_ = 0x68;
        local_1d0.ArgA.MemoryType = Work;
        local_1d0.ArgA.RegisterIndex = 0xffff;
        local_1d0.ArgA.RegisterOffset = 0xffff;
        local_1d0.ArgB.MemoryType = Work;
        local_1d0.ArgB.RegisterIndex = 0xffff;
        local_1d0.ArgB.RegisterOffset = 0xffff;
        local_1d0.ArgC.MemoryType = Work;
        local_1d0.ArgC.RegisterIndex = 0xffff;
        local_1d0.ArgC.RegisterOffset = 0xffff;
        local_1d0.ArgD.MemoryType = Work;
        local_1d0.ArgD.RegisterIndex = 0xffff;
        local_1d0.ArgD.RegisterOffset = 0xffff;
        if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1d0,1);
        }
        else {
          local_1d0._padding_._0_1_ = *(undefined1 *)*plVar7;
          *plVar7 = *plVar7 + 1;
        }
        FRigVMOperand::Serialize(&local_1d0.ArgA,param_1);
        FRigVMOperand::Serialize(&local_1d0.ArgB,param_1);
        FRigVMOperand::Serialize(&local_1d0.ArgC,param_1);
        FRigVMOperand::Serialize(&local_1d0.ArgD,param_1);
        AddOp<FRigVMQuaternaryOp>(this,&local_1d0);
        break;
      case 0x5e:
        plVar7 = *(longlong **)&param_1->field_0x8;
        local_1a0._padding_._0_1_ = 0x68;
        local_1a0.ArgA.MemoryType = Work;
        local_1a0.ArgA.RegisterIndex = 0xffff;
        local_1a0.ArgA.RegisterOffset = 0xffff;
        local_1a0.ArgB.MemoryType = Work;
        local_1a0.ArgB.RegisterIndex = 0xffff;
        local_1a0.ArgB.RegisterOffset = 0xffff;
        local_1a0.ArgC.MemoryType = Work;
        local_1a0.ArgC.RegisterIndex = 0xffff;
        local_1a0.ArgC.RegisterOffset = 0xffff;
        local_1a0.ArgD.MemoryType = Work;
        local_1a0.ArgD.RegisterIndex = 0xffff;
        local_1a0.ArgD.RegisterOffset = 0xffff;
        local_1a0.ArgE.MemoryType = Work;
        local_1a0.ArgE.RegisterIndex = 0xffff;
        local_1a0.ArgE.RegisterOffset = 0xffff;
        local_1a0.ArgF.MemoryType = Work;
        local_1a0.ArgF.RegisterIndex = 0xffff;
        local_1a0.ArgF.RegisterOffset = 0xffff;
        if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1a0,1);
        }
        else {
          local_1a0._padding_._0_1_ = *(undefined1 *)*plVar7;
          *plVar7 = *plVar7 + 1;
        }
        FRigVMOperand::Serialize(&local_1a0.ArgA,param_1);
        FRigVMOperand::Serialize(&local_1a0.ArgB,param_1);
        FRigVMOperand::Serialize(&local_1a0.ArgC,param_1);
        FRigVMOperand::Serialize(&local_1a0.ArgD,param_1);
        FRigVMOperand::Serialize(&local_1a0.ArgE,param_1);
        FRigVMOperand::Serialize(&local_1a0.ArgF,param_1);
        AddOp<FRigVMSenaryOp>(this,&local_1a0);
        break;
      case 99:
        local_108._padding_._0_1_ = 99;
        local_108.EntryName.ComparisonIndex.Value = 0;
        local_108.EntryName.Number = 0;
        if ((param_1->field_0x28 & 1) == 0) {
          ::FName::ToString(&local_108.EntryName,&local_90);
          ::operator<<(param_1,&local_90);
          FVar8.Data = local_90.Data.AllocatorInstance.Data;
        }
        else {
          local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_f8.Data.ArrayNum = 0;
          local_f8.Data.ArrayMax = 0;
          ::operator<<(param_1,&local_f8);
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_f8.Data.ArrayNum != 0) {
            FVar8.Data = local_f8.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_b8,(wchar_t *)FVar8.Data);
          local_108.EntryName = local_b8;
          FVar8.Data = local_f8.Data.AllocatorInstance.Data;
        }
        if (FVar8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar8.Data);
        }
        AddOp<FRigVMInvokeEntryOp>(this,&local_108);
        break;
      case 100:
        local_158._0_1_ = 0x68;
        local_158._2_1_ = 0;
        local_158._4_4_ = 0xffffffff;
        local_158.FirstBranchInfoIndex = -1;
        ::operator<<(param_1,&local_158);
        AddOp<FRigVMJumpToBranchOp>(this,&local_158);
        break;
      case 0x65:
        local_220._padding_._0_1_ = 0x68;
        local_220.FunctionIndex = 0xffff;
        local_220.ArgumentCount = 0;
        local_220.FirstPredicateIndex = 0xffff;
        local_220.PredicateCount = 0;
        ::operator<<(param_1,&local_220);
        local_248.Data = (FScriptContainerElement *)0x0;
        local_240 = 0;
        local_23c = 0;
        if (local_220.ArgumentCount != 0) {
          uVar12 = (ulonglong)local_220.ArgumentCount;
          do {
            local_250.MemoryType = Work;
            local_250.RegisterIndex = 0xffff;
            local_250.RegisterOffset = 0xffff;
            FRigVMOperand::Serialize(&local_250,param_1);
            if (((local_248.Data <= &local_250) &&
                (&local_250 < (FRigVMOperand *)(local_248.Data + (longlong)local_23c * 6))) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (local_240 == local_23c) {
              local_240 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x206,&local_248,&local_23c);
            }
            iVar5 = local_240 + 1;
            *(uint *)(local_248.Data + (longlong)local_240 * 6) =
                 CONCAT22(local_250.RegisterIndex,CONCAT11(local_250._1_1_,local_250.MemoryType));
            *(ushort *)(local_248.Data + (longlong)local_240 * 6 + 4) = local_250.RegisterOffset;
            uVar12 = uVar12 - 1;
            local_240 = iVar5;
          } while (uVar12 != 0);
        }
        iVar5 = local_240;
        local_a0.DataPtr = (FRigVMOperand *)local_248.Data;
        if ((local_240 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_a0.ArrayNum = iVar5;
        AddExecuteOp(this,local_220._2_4_ & 0xffff,&local_a0,local_220._6_4_ & 0xffff,
                     (uint)local_220._6_4_ >> 0x10);
        if ((FRigVMOperand *)local_248.Data != (FRigVMOperand *)0x0) {
          FMemory::Free(local_248.Data);
        }
        break;
      case 0x66:
        local_128._padding_._0_1_ = 0x68;
        local_128._padding_._2_1_ = 0;
        local_128._4_8_ = 0xffffffffffffffff;
        local_128.EndInstruction = -1;
        ::operator<<(param_1,&local_128);
        AddOp<FRigVMRunInstructionsOp>(this,&local_128);
        break;
      case 0x67:
        plVar7 = *(longlong **)&param_1->field_0x8;
        local_228._0_1_ = 0x68;
        local_228._2_1_ = 0;
        local_228._4_4_ = 0xffffffff;
        if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_228,1);
        }
        else {
          local_228._0_1_ = *(undefined1 *)*plVar7;
          *plVar7 = *plVar7 + 1;
        }
        FRigVMOperand::Serialize((FRigVMOperand *)((longlong)&local_228 + 2),param_1);
        AddOp<FRigVMSetupTraitsOp>(this,(FRigVMSetupTraitsOp *)&local_228);
      }
      uVar14 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)local_254);
  }
  piVar9 = &(this->Entries).ArrayMax;
  (this->Entries).ArrayNum = 0;
  if ((this->Entries).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Entries).AllocatorInstance,0,piVar9);
  }
  iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
  if (9 < iVar5) {
    if (Z_Registration_Info_UScriptStruct_FRigVMByteCodeEntry.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar6 = Z_Construct_UPackage__Script_RigVM();
      Z_Registration_Info_UScriptStruct_FRigVMByteCodeEntry.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigVMByteCodeEntry,(UObject *)pUVar6,
                           L"RigVMByteCodeEntry");
    }
    this_01 = Z_Registration_Info_UScriptStruct_FRigVMByteCodeEntry.OuterSingleton;
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 0;
    local_168.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&local_168);
    uVar16 = uVar17;
    if (0 < local_168.ArrayNum) {
      do {
        local_1b0 = 0;
        local_1a8 = 0;
        local_b0 = (FName)this_01->_padding_;
        ::FName::ToString(&local_b0,&local_80);
        uVar15 = (uint)uVar17;
        uVar14 = 0;
        if ((int)uVar15 < local_168.ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(local_168.AllocatorInstance.Data + uVar16 + 8) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)(local_168.AllocatorInstance.Data + uVar16);
        }
        UScriptStruct::ImportText
                  (this_01,pwVar10,&local_1b0,(UObject *)0x0,0,(FOutputDevice *)0x0,&local_80,true);
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        pFVar13 = (this->Entries).AllocatorInstance.Data;
        if (((pFVar13 <= (FScriptContainerElement *)&local_1b0) &&
            ((FScriptContainerElement *)&local_1b0 < pFVar13 + (longlong)*piVar9 * 0xc)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->Entries).ArrayNum;
        if (iVar5 == *piVar9) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&(this->Entries).AllocatorInstance,piVar9);
        }
        uVar17 = (ulonglong)(uVar15 + 1);
        (this->Entries).ArrayNum = iVar5 + 1;
        pFVar13 = (this->Entries).AllocatorInstance.Data;
        *(undefined8 *)(pFVar13 + (longlong)iVar5 * 0xc) = local_1b0;
        *(undefined4 *)(pFVar13 + (longlong)iVar5 * 0xc + 8) = local_1a8;
        uVar16 = uVar16 + 0x10;
      } while ((int)(uVar15 + 1) < local_168.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_168.AllocatorInstance.Data,local_168.ArrayNum);
    if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
  }
  pTVar1 = &this->BranchInfos;
  iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID);
  if (iVar5 < 0x5e) {
    (this->BranchInfos).ArrayNum = 0;
    if ((this->BranchInfos).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,&pTVar1->AllocatorInstance,0,&(this->BranchInfos).ArrayMax);
    }
    TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
             *)&this->BranchInfoLookup);
  }
  else {
    TArrayPrivateFriend::Serialize<FRigVMBranchInfo,TSizedDefaultAllocator<32>_>(param_1,pTVar1);
    this_00 = &this->BranchInfoLookup;
    TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
             *)this_00);
    iVar5 = (this->BranchInfos).ArrayNum;
    local_c8.InstructionIndex = 0;
    local_c8.ArgumentIndex = 0;
    local_c8.Label.ComparisonIndex.Value = 0;
    local_c8.Label.Number = 0;
    if (iVar5 != 0) {
      if (*(int *)&(this->BranchInfoLookup).field_0x8 ==
          *(int *)&(this->BranchInfoLookup).field_0x34) {
        pFVar13 = (pTVar1->AllocatorInstance).Data;
        pFVar19 = pFVar13 + (longlong)iVar5 * 0x1c;
        while( true ) {
          if ((this->BranchInfos).ArrayNum != iVar5) {
            `TCheckedPointerIterator<FRigVMBranchInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_238);
          }
          if (pFVar13 == pFVar19) break;
          local_118.InstructionIndex = *(int *)(pFVar13 + 0xc);
          local_118.ArgumentIndex = *(int *)(pFVar13 + 0x10);
          local_118.Label = *(FName *)(pFVar13 + 4);
          uVar14 = ::GetTypeHash(&local_118);
          if (*(int *)&(this->BranchInfoLookup).field_0x8 !=
              *(int *)&(this->BranchInfoLookup).field_0x34) {
            puVar2 = *(undefined1 **)&(this->BranchInfoLookup).field_0x40;
            puVar11 = &(this->BranchInfoLookup).field_0x38;
            if (puVar2 != (undefined1 *)0x0) {
              puVar11 = puVar2;
            }
            iVar18 = *(int *)(puVar11 +
                             (ulonglong)(*(int *)&(this->BranchInfoLookup).field_0x48 - 1U & uVar14)
                             * 4);
            if (iVar18 != -1) {
              do {
                piVar9 = (int *)((longlong)iVar18 * 0x20 + *(longlong *)&this_00->field_0x0);
                if (*piVar9 == local_118.InstructionIndex) {
                  if ((piVar9[1] == -1) || (local_118.ArgumentIndex == -1)) {
                    if ((*(FName *)(piVar9 + 2) != (FName)0x0) && (local_118.Label != (FName)0x0)) {
                      bVar4 = *(FName *)(piVar9 + 2) == local_118.Label;
                      goto LAB_14a09f723;
                    }
                  }
                  else {
                    bVar4 = piVar9[1] == local_118.ArgumentIndex;
LAB_14a09f723:
                    if (!bVar4) goto LAB_14a09f72a;
                  }
                  if ((iVar18 != -1) && (piVar9 != (int *)0x0)) goto LAB_14a09f779;
                  break;
                }
LAB_14a09f72a:
                iVar18 = piVar9[6];
              } while (iVar18 != -1);
            }
          }
          local_a8 = &local_118;
          TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FRigVMBranchInfoKey_const_&>_>
                    ((TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
                      *)this_00,(uint)local_148,
                     (TKeyInitializer<FRigVMBranchInfoKey_const_&> *)(ulonglong)uVar14,
                     (bool *)&local_a8);
          piVar9 = (int *)((longlong)local_148[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_14a09f779:
          *(FScriptContainerElement **)(piVar9 + 4) = pFVar13;
          pFVar13 = pFVar13 + 0x1c;
        }
      }
      ::GetTypeHash(&local_c8);
    }
  }
  iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
  if (iVar5 < 0x11) {
    iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FRigVMObjectVersion::GUID);
    if (7 < iVar5) {
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
      ::operator<<(param_1,&local_e8);
      local_68 = local_e8.Data.AllocatorInstance.Data;
      local_d8.PackageName.ComparisonIndex.Value = 0;
      local_d8.PackageName.Number = 0;
      local_d8.AssetName.ComparisonIndex.Value = 0;
      local_d8.AssetName.Number = 0;
      iStack_60 = local_e8.Data.ArrayNum + -1;
      if (local_e8.Data.ArrayNum == 0) {
        iStack_60 = 0;
      }
      local_58._12_4_ = uStack_5c;
      local_58.Size = iStack_60;
      local_58.DataPtr = (wchar_t *)local_e8.Data.AllocatorInstance.Data;
      FTopLevelAssetPath::TrySetPath(&local_d8,&local_58);
      this->bHasPublicContextAssetPath = true;
      (this->PublicContextAssetPath).PackageName = local_d8.PackageName;
      (this->PublicContextAssetPath).AssetName = local_d8.AssetName;
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    plVar7 = (longlong *)
             (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->PublicContextAssetPath);
    (**(code **)(*plVar7 + 0x178))(plVar7,&(this->PublicContextAssetPath).AssetName);
    this->bHasPublicContextAssetPath = true;
  }
  return;
}

// Num @ 14a0a02b0

int __thiscall FRigVMByteCode::Num(FRigVMByteCode *this)

{
  return (this->ByteCode).ArrayNum;
}

// NumEntries @ 14a0a02c0

int __thiscall FRigVMByteCode::NumEntries(FRigVMByteCode *this)

{
  return (this->Entries).ArrayNum;
}

// Reset @ 14a0a2cc0

void __thiscall FRigVMByteCode::Reset(FRigVMByteCode *this)

{
  int *piVar1;
  
  (this->ByteCode).ArrayNum = 0;
  if ((this->ByteCode).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,&(this->ByteCode).ArrayMax);
  }
  this->bByteCodeIsAligned = false;
  this->NumInstructions = 0;
  piVar1 = &(this->Entries).ArrayMax;
  (this->Entries).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Entries).AllocatorInstance,0,piVar1);
  }
  (this->BranchInfos).ArrayNum = 0;
  if ((this->BranchInfos).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,&(this->BranchInfos).AllocatorInstance,0,&(this->BranchInfos).ArrayMax);
  }
  TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
           *)&this->BranchInfoLookup);
  (this->PublicContextAssetPath).AssetName.ComparisonIndex = 0;
  (this->PublicContextAssetPath).AssetName.Number = 0;
  (this->PublicContextAssetPath).PackageName.ComparisonIndex = 0;
  (this->PublicContextAssetPath).PackageName.Number = 0;
  return;
}

// Save @ 14a0a4cf0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

void __thiscall FRigVMByteCode::Save(FRigVMByteCode *this,FArchive *param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UScriptStruct *this_00;
  ForAnyElementType FVar4;
  bool bVar5;
  UPackage *pUVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  ushort uVar16;
  uint uVar17;
  ulonglong uVar18;
  FScriptContainerElement local_res18 [8];
  uint local_res20 [2];
  TArray<FString,TSizedDefaultAllocator<32>_> local_1e8;
  uint local_1d8;
  uint local_1d4;
  FString local_1d0;
  ForAnyElementType local_1c0;
  int local_1b8 [2];
  FRigVMOperand local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  FScriptContainerElement *local_198;
  undefined8 local_190;
  FRigVMOperand local_188;
  TArray<FRigVMBranchInfo,TSizedDefaultAllocator<32>_> local_180;
  FString local_170;
  FRigVMExecuteOp local_160;
  FRigVMInstructionArray local_150;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  undefined4 local_130;
  undefined8 local_128;
  undefined1 auStack_120 [8];
  undefined4 local_118;
  undefined8 local_110;
  undefined1 auStack_108 [8];
  undefined1 local_100 [8];
  undefined2 local_f8;
  undefined4 local_f0;
  FName FStack_ec;
  undefined8 local_e0;
  undefined1 auStack_d8 [8];
  undefined4 local_d0;
  undefined1 auStack_cc [8];
  undefined4 uStack_c4;
  FRigVMOperand local_c0;
  TArrayView<FRigVMOperand_const_,int> local_b8;
  FRigVMJumpOp local_a8;
  FName local_a0;
  FRigVMJumpToBranchOp local_98;
  FString local_88;
  FRigVMCopyOp local_78;
  FRigVMJumpIfOp local_68;
  FRigVMRunInstructionsOp local_58;
  
  FRigVMInstructionArray::FRigVMInstructionArray(&local_150,this,this->bByteCodeIsAligned);
  plVar7 = *(longlong **)&param_1->field_0x8;
  local_res20[0] = local_150.Instructions.ArrayNum;
  local_198 = local_150.Instructions.AllocatorInstance.Data;
  local_150.Instructions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8 = local_150.Instructions.ArrayNum;
  local_150.Instructions.ArrayNum = 0;
  local_150.Instructions.ArrayMax = 0;
  if ((uint *)plVar7[1] < (uint *)*plVar7 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar7;
    *plVar7 = *plVar7 + 4;
  }
  local_1d4 = 0;
  if (0 < (int)local_res20[0]) {
    pFVar15 = local_198 + 4;
    do {
      uVar11 = local_1d4;
      uVar12 = 0;
      if ((int)local_1d4 < (int)local_1d8) {
        uVar12 = ~local_1d4 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar7 = *(longlong **)&param_1->field_0x8;
      local_res18[0] = pFVar15[4];
      if ((FScriptContainerElement *)plVar7[1] < (FScriptContainerElement *)*plVar7 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,1);
      }
      else {
        local_res18[0] = *(FScriptContainerElement *)*plVar7;
        *plVar7 = *plVar7 + 1;
      }
      switch(local_res18[0]) {
      case (FScriptContainerElement)0x41:
      case (FScriptContainerElement)0x42:
      case (FScriptContainerElement)0x43:
      case (FScriptContainerElement)0x45:
      case (FScriptContainerElement)0x46:
      case (FScriptContainerElement)0x53:
      case (FScriptContainerElement)0x62:
        local_1a8 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + *(int *)pFVar15);
        plVar7 = *(longlong **)&param_1->field_0x8;
        if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1a8,1);
          FRigVMOperand::Serialize((FRigVMOperand *)((longlong)&local_1a8 + 2),param_1);
        }
        else {
          uVar18 = (ulonglong)local_1a8 >> 8;
          local_1a8 = CONCAT71((int7)uVar18,*(undefined1 *)*plVar7);
          *plVar7 = *plVar7 + 1;
          FRigVMOperand::Serialize((FRigVMOperand *)((longlong)&local_1a8 + 2),param_1);
        }
        break;
      case (FScriptContainerElement)0x44:
        pFVar8 = (this->ByteCode).AllocatorInstance.Data + *(int *)pFVar15;
        local_78._0_8_ = *(undefined8 *)pFVar8;
        local_78._8_8_ = *(undefined8 *)(pFVar8 + 8);
        FRigVMCopyOp::Serialize(&local_78,param_1);
        break;
      case (FScriptContainerElement)0x47:
      case (FScriptContainerElement)0x48:
        pFVar2 = (this->ByteCode).AllocatorInstance.Data;
        pFVar8 = pFVar2 + *(int *)pFVar15;
        local_140._0_4_ = *(undefined4 *)pFVar8;
        local_140._4_4_ = *(undefined4 *)(pFVar8 + 4);
        auStack_138._0_4_ = *(undefined4 *)(pFVar8 + 8);
        auStack_138._4_4_ = *(undefined4 *)(pFVar8 + 0xc);
        local_130 = *(undefined4 *)(pFVar2 + (longlong)*(int *)pFVar15 + 0x10);
        plVar7 = *(longlong **)&param_1->field_0x8;
        if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_140,1);
        }
        else {
          uVar12 = (uint)(undefined4)local_140 >> 8;
          local_140._0_4_ = CONCAT31((int3)uVar12,*(undefined1 *)*plVar7);
          *plVar7 = *plVar7 + 1;
        }
        FRigVMOperand::Serialize((FRigVMOperand *)((longlong)&local_140 + 2),param_1);
        FRigVMOperand::Serialize((FRigVMOperand *)auStack_138,param_1);
        FRigVMOperand::Serialize((FRigVMOperand *)(auStack_138 + 6),param_1);
        break;
      case (FScriptContainerElement)0x49:
      case (FScriptContainerElement)0x4a:
      case (FScriptContainerElement)0x4b:
        local_a8 = *(FRigVMJumpOp *)((this->ByteCode).AllocatorInstance.Data + *(int *)pFVar15);
        ::operator<<(param_1,&local_a8);
        break;
      case (FScriptContainerElement)0x4c:
      case (FScriptContainerElement)0x4d:
      case (FScriptContainerElement)0x4e:
        pFVar8 = (this->ByteCode).AllocatorInstance.Data + *(int *)pFVar15;
        local_68._padding_ = *(longlong *)pFVar8;
        local_68._8_8_ = *(undefined8 *)(pFVar8 + 8);
        ::operator<<(param_1,&local_68);
        break;
      default:
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6769809472945651261>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                           ,0x1c3,"false");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      case (FScriptContainerElement)0x50:
      case (FScriptContainerElement)0x52:
        break;
      case (FScriptContainerElement)0x51:
      case (FScriptContainerElement)0x54:
      case (FScriptContainerElement)0x55:
      case (FScriptContainerElement)0x5a:
      case (FScriptContainerElement)0x5c:
      case (FScriptContainerElement)0x5d:
      case (FScriptContainerElement)0x5f:
        plVar7 = *(longlong **)&param_1->field_0x8;
        pFVar8 = (this->ByteCode).AllocatorInstance.Data + *(int *)pFVar15;
        local_190 = *(undefined8 *)pFVar8;
        local_188._0_4_ = *(undefined4 *)(pFVar8 + 8);
        local_188.RegisterOffset = *(ushort *)(pFVar8 + 0xc);
        if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_190,1);
        }
        else {
          uVar18 = (ulonglong)local_190 >> 8;
          local_190 = CONCAT71((int7)uVar18,*(undefined1 *)*plVar7);
          *plVar7 = *plVar7 + 1;
        }
        FRigVMOperand::Serialize((FRigVMOperand *)((longlong)&local_190 + 2),param_1);
        FRigVMOperand::Serialize(&local_188,param_1);
        break;
      case (FScriptContainerElement)0x56:
      case (FScriptContainerElement)0x57:
      case (FScriptContainerElement)0x58:
      case (FScriptContainerElement)0x59:
      case (FScriptContainerElement)0x60:
      case (FScriptContainerElement)0x61:
        pFVar2 = (this->ByteCode).AllocatorInstance.Data;
        pFVar8 = pFVar2 + *(int *)pFVar15;
        local_128._0_4_ = *(undefined4 *)pFVar8;
        local_128._4_4_ = *(undefined4 *)(pFVar8 + 4);
        auStack_120._0_4_ = *(undefined4 *)(pFVar8 + 8);
        auStack_120._4_4_ = *(undefined4 *)(pFVar8 + 0xc);
        local_118 = *(undefined4 *)(pFVar2 + (longlong)*(int *)pFVar15 + 0x10);
        plVar7 = *(longlong **)&param_1->field_0x8;
        if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_128,1);
        }
        else {
          uVar12 = (uint)(undefined4)local_128 >> 8;
          local_128._0_4_ = CONCAT31((int3)uVar12,*(undefined1 *)*plVar7);
          *plVar7 = *plVar7 + 1;
        }
        FRigVMOperand::Serialize((FRigVMOperand *)((longlong)&local_128 + 2),param_1);
        FRigVMOperand::Serialize((FRigVMOperand *)auStack_120,param_1);
        FRigVMOperand::Serialize((FRigVMOperand *)(auStack_120 + 6),param_1);
        break;
      case (FScriptContainerElement)0x5b:
        lVar13 = (longlong)*(int *)pFVar15;
        pFVar2 = (this->ByteCode).AllocatorInstance.Data;
        pFVar8 = pFVar2 + lVar13;
        local_110._0_4_ = *(undefined4 *)pFVar8;
        local_110._4_4_ = *(undefined4 *)(pFVar8 + 4);
        auStack_108._0_4_ = *(undefined4 *)(pFVar8 + 8);
        auStack_108._4_4_ = *(undefined4 *)(pFVar8 + 0xc);
        local_100 = *(undefined1 (*) [8])(pFVar2 + lVar13 + 0x10);
        local_f8 = *(undefined2 *)(pFVar2 + lVar13 + 0x18);
        plVar7 = *(longlong **)&param_1->field_0x8;
        if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_110,1);
        }
        else {
          uVar12 = (uint)(undefined4)local_110 >> 8;
          local_110._0_4_ = CONCAT31((int3)uVar12,*(undefined1 *)*plVar7);
          *plVar7 = *plVar7 + 1;
        }
        FRigVMOperand::Serialize((FRigVMOperand *)((longlong)&local_110 + 2),param_1);
        FRigVMOperand::Serialize((FRigVMOperand *)auStack_108,param_1);
        FRigVMOperand::Serialize((FRigVMOperand *)(auStack_108 + 6),param_1);
        FRigVMOperand::Serialize((FRigVMOperand *)(local_100 + 4),param_1);
        break;
      case (FScriptContainerElement)0x5e:
        plVar7 = *(longlong **)&param_1->field_0x8;
        pFVar8 = (this->ByteCode).AllocatorInstance.Data + *(int *)pFVar15;
        local_e0._0_4_ = *(undefined4 *)pFVar8;
        local_e0._4_4_ = *(undefined4 *)(pFVar8 + 4);
        auStack_d8._0_4_ = *(undefined4 *)(pFVar8 + 8);
        auStack_d8._4_4_ = *(undefined4 *)(pFVar8 + 0xc);
        local_d0 = *(undefined4 *)(pFVar8 + 0x10);
        auStack_cc._0_4_ = *(undefined4 *)(pFVar8 + 0x14);
        auStack_cc._4_4_ = *(undefined4 *)(pFVar8 + 0x18);
        uStack_c4 = *(undefined4 *)(pFVar8 + 0x1c);
        local_c0._0_4_ = *(undefined4 *)(pFVar8 + 0x20);
        local_c0.RegisterOffset = *(ushort *)(pFVar8 + 0x24);
        if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_e0,1);
        }
        else {
          uVar12 = (uint)(undefined4)local_e0 >> 8;
          local_e0._0_4_ = CONCAT31((int3)uVar12,*(undefined1 *)*plVar7);
          *plVar7 = *plVar7 + 1;
        }
        FRigVMOperand::Serialize((FRigVMOperand *)((longlong)&local_e0 + 2),param_1);
        FRigVMOperand::Serialize((FRigVMOperand *)auStack_d8,param_1);
        FRigVMOperand::Serialize((FRigVMOperand *)(auStack_d8 + 6),param_1);
        FRigVMOperand::Serialize((FRigVMOperand *)auStack_cc,param_1);
        FRigVMOperand::Serialize((FRigVMOperand *)(auStack_cc + 6),param_1);
        FRigVMOperand::Serialize(&local_c0,param_1);
        break;
      case (FScriptContainerElement)0x63:
        pFVar8 = (this->ByteCode).AllocatorInstance.Data;
        uVar1 = *(undefined8 *)(pFVar8 + *(int *)pFVar15);
        local_f0 = (undefined4)uVar1;
        FStack_ec.ComparisonIndex.Value = (uint)((ulonglong)uVar1 >> 0x20);
        FStack_ec.Number = *(uint *)(pFVar8 + (longlong)*(int *)pFVar15 + 8);
        if ((param_1->field_0x28 & 1) == 0) {
          ::FName::ToString(&FStack_ec,&local_88);
          ::operator<<(param_1,&local_88);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        else {
          local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_170.Data.ArrayNum = 0;
          local_170.Data.ArrayMax = 0;
          ::operator<<(param_1,&local_170);
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_170.Data.ArrayNum != 0) {
            FVar9.Data = local_170.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_a0,(wchar_t *)FVar9.Data);
          FStack_ec.ComparisonIndex = local_a0.ComparisonIndex.Value;
          FStack_ec.Number = local_a0.Number;
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
        }
        break;
      case (FScriptContainerElement)0x64:
        pFVar8 = (this->ByteCode).AllocatorInstance.Data;
        local_98._0_8_ = *(undefined8 *)(pFVar8 + *(int *)pFVar15);
        local_98.FirstBranchInfoIndex = *(int *)(pFVar8 + (longlong)*(int *)pFVar15 + 8);
        ::operator<<(param_1,&local_98);
        break;
      case (FScriptContainerElement)0x65:
        pFVar8 = (this->ByteCode).AllocatorInstance.Data;
        local_160._0_8_ = *(undefined8 *)(pFVar8 + *(int *)pFVar15);
        local_160.PredicateCount = *(ushort *)(pFVar8 + (longlong)*(int *)pFVar15 + 8);
        ::operator<<(param_1,&local_160);
        GetOperandsForExecuteOp(this,&local_b8,(FRigVMInstruction *)(pFVar15 + -4));
        uVar18 = (ulonglong)local_160.ArgumentCount;
        uVar12 = local_b8.ArrayNum;
        uVar17 = (uint)local_160.ArgumentCount;
        if ((uVar17 != uVar12) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6769809472945651384>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                               ,0x148,"OperandCount == Operands.Num()"), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar10 = 0;
        if (uVar17 != 0) {
          lVar13 = 0;
          do {
            uVar11 = 0;
            if ((int)uVar10 < (int)uVar12) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_1b0._0_4_ = *(undefined4 *)(&(local_b8.DataPtr)->MemoryType + lVar13);
            local_1b0.RegisterOffset =
                 *(ushort *)((longlong)&(local_b8.DataPtr)->RegisterOffset + lVar13);
            FRigVMOperand::Serialize(&local_1b0,param_1);
            uVar10 = uVar10 + 1;
            lVar13 = lVar13 + 6;
            uVar18 = uVar18 - 1;
            uVar11 = local_1d4;
          } while (uVar18 != 0);
        }
        break;
      case (FScriptContainerElement)0x66:
        pFVar8 = (this->ByteCode).AllocatorInstance.Data + *(int *)pFVar15;
        local_58._padding_ = *(longlong *)pFVar8;
        local_58._8_8_ = *(undefined8 *)(pFVar8 + 8);
        ::operator<<(param_1,&local_58);
        break;
      case (FScriptContainerElement)0x67:
        local_1a0 = *(undefined8 *)((this->ByteCode).AllocatorInstance.Data + *(int *)pFVar15);
        plVar7 = *(longlong **)&param_1->field_0x8;
        if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_1a0,1);
          FRigVMOperand::Serialize((FRigVMOperand *)((longlong)&local_1a0 + 2),param_1);
        }
        else {
          uVar18 = (ulonglong)local_1a0 >> 8;
          local_1a0 = CONCAT71((int7)uVar18,*(undefined1 *)*plVar7);
          *plVar7 = *plVar7 + 1;
          FRigVMOperand::Serialize((FRigVMOperand *)((longlong)&local_1a0 + 2),param_1);
        }
      }
      local_1d4 = uVar11 + 1;
      pFVar15 = pFVar15 + 0xc;
    } while ((int)local_1d4 < (int)local_res20[0]);
  }
  uVar18 = 0;
  if (Z_Registration_Info_UScriptStruct_FRigVMByteCodeEntry.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar6 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMByteCodeEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMByteCodeEntry,(UObject *)pUVar6,
                         L"RigVMByteCodeEntry");
  }
  this_00 = Z_Registration_Info_UScriptStruct_FRigVMByteCodeEntry.OuterSingleton;
  iVar14 = (int)*(short *)((longlong)
                           &(Z_Registration_Info_UScriptStruct_FRigVMByteCodeEntry.OuterSingleton)->
                            _padding_ + 4);
  local_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b8[0] = 0;
  local_1b8[1] = 0;
  uVar11 = (int)(Z_Registration_Info_UScriptStruct_FRigVMByteCodeEntry.OuterSingleton)->_padding_ +
           -1 + iVar14 & -iVar14;
  iVar14 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                     (1,1,uVar11,&local_1c0,local_1b8,local_1b8 + 1);
  FVar4.Data = local_1c0.Data;
  memset(local_1c0.Data + iVar14,0,(longlong)(int)uVar11);
  (**(code **)(this_00->_padding_ + 0x390))(this_00,FVar4.Data);
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  if (0 < (this->Entries).ArrayNum) {
    do {
      local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d0.Data.ArrayNum = 0;
      local_1d0.Data.ArrayMax = 0;
      if (((this->Entries).ArrayNum <= (int)uVar18) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UScriptStruct::ExportText
                (this_00,&local_1d0,(this->Entries).AllocatorInstance.Data + uVar18 * 0xc,FVar4.Data
                 ,(UObject *)0x0,0,(UObject *)0x0,true);
      if (((local_1e8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1d0) &&
          ((FScriptContainerElement *)&local_1d0 <
           local_1e8.AllocatorInstance.Data + (longlong)local_1e8.ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar14 = local_1e8.ArrayNum;
      if (local_1e8.ArrayNum == local_1e8.ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_1e8.AllocatorInstance,&local_1e8.ArrayMax);
      }
      FVar9.Data = local_1d0.Data.AllocatorInstance.Data;
      pFVar15 = local_1e8.AllocatorInstance.Data + (longlong)iVar14 * 0x10;
      local_1e8.ArrayNum = iVar14 + 1;
      *(FScriptContainerElement **)pFVar15 = (FScriptContainerElement *)0x0;
      lVar13 = (longlong)local_1d0.Data.ArrayNum;
      *(int *)(pFVar15 + 8) = local_1d0.Data.ArrayNum;
      if (local_1d0.Data.ArrayNum == 0) {
        *(int *)(pFVar15 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1d0.Data.ArrayNum,0,(ForAnyElementType *)pFVar15,
                   local_1d0.Data.ArrayNum,(int *)(pFVar15 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar15,FVar9.Data,lVar13 * 2);
      }
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      uVar16 = (short)uVar18 + 1;
      uVar18 = (ulonglong)uVar16;
    } while ((int)(uint)uVar16 < (this->Entries).ArrayNum);
  }
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>(param_1,&local_1e8);
  local_180.ArrayNum = (this->BranchInfos).ArrayNum;
  lVar13 = (longlong)local_180.ArrayNum;
  pFVar15 = (this->BranchInfos).AllocatorInstance.Data;
  local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_180.ArrayNum == 0) {
    local_180.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,local_180.ArrayNum,0,&local_180.AllocatorInstance,local_180.ArrayNum,
               &local_180.ArrayMax);
    memcpy(local_180.AllocatorInstance.Data,pFVar15,lVar13 * 0x1c);
  }
  TArrayPrivateFriend::Serialize<FRigVMBranchInfo,TSizedDefaultAllocator<32>_>(param_1,&local_180);
  plVar7 = (longlong *)
           (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->PublicContextAssetPath);
  (**(code **)(*plVar7 + 0x178))(plVar7,&(this->PublicContextAssetPath).AssetName);
  if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
  if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (local_198 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198);
  }
  return;
}

// Serialize @ 14a0a5cf0

void __thiscall FRigVMByteCode::Serialize(FRigVMByteCode *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FRigVMObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
  if (1 < iVar3) {
    if (((param_1->field_0x28 & 4) == 0) && ((param_1->field_0x2b & 5) == 0)) {
      if ((param_1->field_0x28 & 1) != 0) {
        Load(this,param_1);
        return;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                         ,0x126,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      Save(this,param_1);
    }
  }
  return;
}

// FRigVMByteCode @ 14a0bca30

FRigVMByteCode * __thiscall
FRigVMByteCode::FRigVMByteCode(FRigVMByteCode *this,FRigVMByteCode *param_1)

{
  int *piVar1;
  TArray<FRigVMByteCodeEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRigVMBranchInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRigVMPredicateBranch,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FName FVar7;
  
  piVar1 = &(this->ByteCode).ArrayMax;
  (this->ByteCode).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->ByteCode).ArrayNum;
  pFVar6 = (param_1->ByteCode).AllocatorInstance.Data;
  (this->ByteCode).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    memcpy((this->ByteCode).AllocatorInstance.Data,pFVar6,(longlong)iVar5);
  }
  pTVar2 = &this->Entries;
  this->NumInstructions = param_1->NumInstructions;
  piVar1 = &(this->Entries).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Entries).ArrayNum;
  pFVar6 = (param_1->Entries).AllocatorInstance.Data;
  (this->Entries).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0xc);
  }
  pTVar3 = &this->BranchInfos;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->BranchInfos).ArrayMax;
  iVar5 = (param_1->BranchInfos).ArrayNum;
  pFVar6 = (param_1->BranchInfos).AllocatorInstance.Data;
  (this->BranchInfos).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x1c);
  }
  pTVar4 = &this->PredicateBranches;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PredicateBranches).ArrayMax;
  iVar5 = (param_1->PredicateBranches).ArrayNum;
  pFVar6 = (param_1->PredicateBranches).AllocatorInstance.Data;
  (this->PredicateBranches).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x38);
  }
  FVar7 = (param_1->PublicContextAssetPath).AssetName;
  (this->PublicContextAssetPath).PackageName = (param_1->PublicContextAssetPath).PackageName;
  (this->PublicContextAssetPath).AssetName = FVar7;
  *(undefined8 *)&(this->BranchInfoLookup).field_0x0 = 0;
  *(undefined8 *)&(this->BranchInfoLookup).field_0x8 = 0;
  *(undefined8 *)&(this->BranchInfoLookup).field_0x20 = 0;
  *(undefined4 *)&(this->BranchInfoLookup).field_0x28 = 0;
  *(undefined4 *)&(this->BranchInfoLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->BranchInfoLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BranchInfoLookup).field_0x34 = 0;
  *(undefined8 *)&(this->BranchInfoLookup).field_0x40 = 0;
  *(undefined4 *)&(this->BranchInfoLookup).field_0x48 = 0;
  TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
               *)&this->BranchInfoLookup,
              (TSet<TTuple<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*>,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>,FDefaultSetAllocator>
               *)&param_1->BranchInfoLookup);
  this->bByteCodeIsAligned = param_1->bByteCodeIsAligned;
  this->bHasPublicContextAssetPath = param_1->bHasPublicContextAssetPath;
  return this;
}

// operator= @ 14a0c4580

FRigVMByteCode * __thiscall FRigVMByteCode::operator=(FRigVMByteCode *this,FRigVMByteCode *param_1)

{
  TArray<FRigVMByteCodeEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRigVMByteCodeEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRigVMBranchInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRigVMBranchInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FRigVMPredicateBranch,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FRigVMPredicateBranch,TSizedDefaultAllocator<32>_> *pTVar6;
  TMap<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>_>
  *pTVar7;
  TMap<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMBranchInfoKey,FRigVMBranchInfo_const_*,0>_>
  *pTVar8;
  undefined1 *_Src;
  undefined1 *_Dst;
  FScriptContainerElement *pFVar9;
  void *pvVar10;
  FName FVar11;
  
  if (this != param_1) {
    pFVar9 = (this->ByteCode).AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (this->ByteCode).AllocatorInstance.Data = (param_1->ByteCode).AllocatorInstance.Data;
    (param_1->ByteCode).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ByteCode).ArrayNum = (param_1->ByteCode).ArrayNum;
    (this->ByteCode).ArrayMax = (param_1->ByteCode).ArrayMax;
    (param_1->ByteCode).ArrayNum = 0;
    (param_1->ByteCode).ArrayMax = 0;
  }
  pTVar1 = &param_1->Entries;
  pTVar2 = &this->Entries;
  this->NumInstructions = param_1->NumInstructions;
  if (pTVar2 != pTVar1) {
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Entries).ArrayNum = (param_1->Entries).ArrayNum;
    (this->Entries).ArrayMax = (param_1->Entries).ArrayMax;
    (param_1->Entries).ArrayNum = 0;
    (param_1->Entries).ArrayMax = 0;
  }
  pTVar3 = &param_1->BranchInfos;
  pTVar4 = &this->BranchInfos;
  if (pTVar4 != pTVar3) {
    pFVar9 = (pTVar4->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->BranchInfos).ArrayNum = (param_1->BranchInfos).ArrayNum;
    (this->BranchInfos).ArrayMax = (param_1->BranchInfos).ArrayMax;
    (param_1->BranchInfos).ArrayNum = 0;
    (param_1->BranchInfos).ArrayMax = 0;
  }
  pTVar5 = &param_1->PredicateBranches;
  pTVar6 = &this->PredicateBranches;
  if (pTVar6 != pTVar5) {
    pFVar9 = (pTVar6->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PredicateBranches).ArrayNum = (param_1->PredicateBranches).ArrayNum;
    (this->PredicateBranches).ArrayMax = (param_1->PredicateBranches).ArrayMax;
    (param_1->PredicateBranches).ArrayNum = 0;
    (param_1->PredicateBranches).ArrayMax = 0;
  }
  FVar11 = (param_1->PublicContextAssetPath).AssetName;
  pTVar7 = &param_1->BranchInfoLookup;
  pTVar8 = &this->BranchInfoLookup;
  (this->PublicContextAssetPath).PackageName = (param_1->PublicContextAssetPath).PackageName;
  (this->PublicContextAssetPath).AssetName = FVar11;
  if (pTVar8 != pTVar7) {
    if (*(void **)pTVar8 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar8);
    }
    _Src = &(param_1->BranchInfoLookup).field_0x10;
    *(undefined8 *)pTVar8 = *(undefined8 *)pTVar7;
    _Dst = &(this->BranchInfoLookup).field_0x10;
    *(undefined8 *)pTVar7 = 0;
    *(undefined4 *)&(this->BranchInfoLookup).field_0x8 =
         *(undefined4 *)&(param_1->BranchInfoLookup).field_0x8;
    *(undefined4 *)&(this->BranchInfoLookup).field_0xc =
         *(undefined4 *)&(param_1->BranchInfoLookup).field_0xc;
    *(undefined8 *)&(param_1->BranchInfoLookup).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->BranchInfoLookup).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar10 = *(void **)&(this->BranchInfoLookup).field_0x20;
      if (pvVar10 != (void *)0x0) {
        FMemory::Free(pvVar10);
      }
      *(undefined8 *)&(this->BranchInfoLookup).field_0x20 =
           *(undefined8 *)&(param_1->BranchInfoLookup).field_0x20;
      *(undefined8 *)&(param_1->BranchInfoLookup).field_0x20 = 0;
      *(undefined4 *)&(this->BranchInfoLookup).field_0x28 =
           *(undefined4 *)&(param_1->BranchInfoLookup).field_0x28;
      *(undefined4 *)&(this->BranchInfoLookup).field_0x2c =
           *(undefined4 *)&(param_1->BranchInfoLookup).field_0x2c;
      *(undefined8 *)&(param_1->BranchInfoLookup).field_0x28 = 0;
    }
    *(undefined4 *)&(this->BranchInfoLookup).field_0x30 =
         *(undefined4 *)&(param_1->BranchInfoLookup).field_0x30;
    *(undefined4 *)&(this->BranchInfoLookup).field_0x34 =
         *(undefined4 *)&(param_1->BranchInfoLookup).field_0x34;
    *(undefined4 *)&(param_1->BranchInfoLookup).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->BranchInfoLookup).field_0x34 = 0;
    if (*(longlong *)&(param_1->BranchInfoLookup).field_0x40 == 0) {
      *(undefined4 *)&(this->BranchInfoLookup).field_0x38 =
           *(undefined4 *)&(param_1->BranchInfoLookup).field_0x38;
    }
    pvVar10 = *(void **)&(this->BranchInfoLookup).field_0x40;
    if (pvVar10 != (void *)0x0) {
      FMemory::Free(pvVar10);
    }
    *(undefined8 *)&(this->BranchInfoLookup).field_0x40 =
         *(undefined8 *)&(param_1->BranchInfoLookup).field_0x40;
    *(undefined8 *)&(param_1->BranchInfoLookup).field_0x40 = 0;
    *(undefined4 *)&(this->BranchInfoLookup).field_0x48 =
         *(undefined4 *)&(param_1->BranchInfoLookup).field_0x48;
    *(undefined4 *)&(param_1->BranchInfoLookup).field_0x48 = 0;
  }
  this->bByteCodeIsAligned = param_1->bByteCodeIsAligned;
  this->bHasPublicContextAssetPath = param_1->bHasPublicContextAssetPath;
  return this;
}

