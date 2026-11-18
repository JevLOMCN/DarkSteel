// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a06c8d0

UScriptStruct * __cdecl FRigVMInstructionArray::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMInstructionArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMInstructionArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMInstructionArray,(UObject *)pUVar1,
                         L"RigVMInstructionArray");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMInstructionArray.OuterSingleton;
}

// FRigVMInstructionArray @ 14a07a3a0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

FRigVMInstructionArray * __thiscall
FRigVMInstructionArray::FRigVMInstructionArray
          (FRigVMInstructionArray *this,FRigVMByteCode *param_1,bool param_2)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FRigVMInstructionArray *pFVar8;
  longlong lVar9;
  UScriptStruct *this_00;
  ICppStructOps *pIVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int local_38;
  uint uStack_34;
  undefined4 local_30;
  
  (this->Instructions).ArrayMax = 0;
  uVar11 = 0;
  (this->Instructions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Instructions).ArrayNum = 0;
  iVar5 = (param_1->ByteCode).ArrayNum;
  if (0 < iVar5) {
    do {
      uVar12 = 0;
      if ((int)uVar11 < iVar5) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FRigVMInstructionArray *)(*pcVar3)();
        return pFVar8;
      }
      FVar1 = (param_1->ByteCode).AllocatorInstance.Data[(int)uVar11];
      if (0x67 < (byte)FVar1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMByteCode.cpp"
                           ,0xcf,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FRigVMInstructionArray *)(*pcVar3)();
          return pFVar8;
        }
        (this->Instructions).ArrayNum = 0;
        if (-1 < (this->Instructions).ArrayMax) {
          return this;
        }
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)this,0,&(this->Instructions).ArrayMax);
        return this;
      }
      uVar12 = 0;
      if (param_2) {
        iVar5 = FRigVMByteCode::GetOpAlignment((ERigVMOpCode)FVar1);
        if (0 < iVar5) {
          while( true ) {
            uVar6 = 0;
            if ((int)uVar11 < (param_1->ByteCode).ArrayNum) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar8 = (FRigVMInstructionArray *)(*pcVar3)();
              return pFVar8;
            }
            if (((longlong)iVar5 - 1U &
                (ulonglong)((param_1->ByteCode).AllocatorInstance.Data + (int)uVar11)) == 0) break;
            uVar11 = uVar11 + 1;
          }
        }
        if (FVar1 == (FScriptContainerElement)0x65) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            this_00 = FRigVMOperand::StaticStruct();
            pIVar10 = UScriptStruct::GetCppStructOps(this_00);
            OperandAlignment = pIVar10->Alignment;
            _Init_thread_footer(&::_TSS0);
          }
          lVar9 = (longlong)OperandAlignment;
          if (0 < OperandAlignment) {
            while( true ) {
              uVar13 = uVar12 + uVar11 + 10;
              uVar6 = 0;
              if ((int)uVar13 < (param_1->ByteCode).ArrayNum) {
                uVar6 = ~uVar13 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar8 = (FRigVMInstructionArray *)(*pcVar3)();
                return pFVar8;
              }
              if ((lVar9 - 1U &
                  (ulonglong)((param_1->ByteCode).AllocatorInstance.Data + (int)uVar13)) == 0)
              break;
              uVar12 = (uint)(byte)((char)uVar12 + 1);
            }
          }
        }
      }
      piVar14 = &(this->Instructions).ArrayMax;
      pFVar2 = (this->Instructions).AllocatorInstance.Data;
      local_38 = (this->Instructions).ArrayNum;
      local_30._0_2_ = CONCAT11((char)uVar12,FVar1);
      uStack_34 = uVar11;
      if (((pFVar2 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)*piVar14 * 0xc)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FRigVMInstructionArray *)(*pcVar3)();
        return pFVar8;
      }
      iVar5 = (this->Instructions).ArrayNum;
      if (iVar5 == *piVar14) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,(ForAnyElementType *)this,piVar14);
      }
      (this->Instructions).ArrayNum = iVar5 + 1;
      pFVar2 = (this->Instructions).AllocatorInstance.Data;
      *(ulonglong *)(pFVar2 + (longlong)iVar5 * 0xc) = CONCAT44(uStack_34,local_38);
      *(undefined4 *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = local_30;
      iVar7 = FRigVMByteCode::GetOpNumBytesAt(param_1,uVar11,true);
      iVar5 = (param_1->ByteCode).ArrayNum;
      uVar11 = uVar11 + iVar7;
    } while ((int)uVar11 < iVar5);
  }
  return this;
}

// FRigVMInstructionArray @ 14a07a740

FRigVMInstructionArray * __thiscall
FRigVMInstructionArray::FRigVMInstructionArray(FRigVMInstructionArray *this)

{
  (this->Instructions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Instructions).ArrayNum = 0;
  (this->Instructions).ArrayMax = 0;
  return this;
}

// operator[] @ 14a07dff0

/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

FRigVMInstruction * __thiscall
FRigVMInstructionArray::operator[](FRigVMInstructionArray *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigVMInstruction *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Instructions).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRigVMInstruction *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FRigVMInstruction *)
         ((this->Instructions).AllocatorInstance.Data + (longlong)param_1 * 0xc);
}

// Empty @ 14a090a50

void __thiscall FRigVMInstructionArray::Empty(FRigVMInstructionArray *this)

{
  int *piVar1;
  
  piVar1 = &(this->Instructions).ArrayMax;
  (this->Instructions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// Reset @ 14a0a3000

void __thiscall FRigVMInstructionArray::Reset(FRigVMInstructionArray *this)

{
  (this->Instructions).ArrayNum = 0;
  if ((this->Instructions).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,&(this->Instructions).ArrayMax);
  }
  return;
}

