// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCommonParser
// Functions: 10

// StaticStruct @ 14e66ae80

UScriptStruct * __cdecl FInterchangeStepCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeStepCurve.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeCommonParser();
    Z_Registration_Info_UScriptStruct_FInterchangeStepCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeStepCurve,(UObject *)pUVar1,
                         L"InterchangeStepCurve");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangeStepCurve.OuterSingleton;
}

// InternalRemoveRedundantKey<unsigned_char> @ 14e66b710

void __thiscall
FInterchangeStepCurve::InternalRemoveRedundantKey<unsigned_char>
          (FInterchangeStepCurve *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<bool___cdecl(unsigned_char_const_&,unsigned_char_const_&)> *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement local_res10 [8];
  TFunctionRef<bool___cdecl(unsigned_char_const_&,unsigned_char_const_&)> *local_res18;
  longlong local_res20;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_58;
  undefined1 local_48 [16];
  
  uVar12 = param_1->ArrayNum;
  lVar11 = (longlong)(int)uVar12;
  if (uVar12 != 0) {
    local_48._0_8_ = (FScriptContainerElement *)0x0;
    local_48._8_4_ = 0;
    local_48._12_4_ = 0;
    local_res18 = param_2;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < 1) {
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,(ForAnyElementType *)local_48,0,(int *)(local_48 + 0xc));
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar12,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_res10[0] = *(param_1->AllocatorInstance).Data;
    if (((this->KeyTimes).ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar10 = (this->KeyTimes).AllocatorInstance.Data;
    if ((((ulonglong)local_48._0_8_ <= pFVar10) &&
        (pFVar10 < (FScriptContainerElement *)(local_48._0_8_ + (longlong)(int)local_48._12_4_ * 4))
        ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (local_48._8_4_ == local_48._12_4_) {
      local_48._8_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,(ForAnyElementType *)local_48,(int *)(local_48 + 0xc));
    }
    lVar7 = (longlong)(int)local_48._8_4_;
    local_48._8_4_ = local_48._8_4_ + 1;
    *(undefined4 *)(local_48._0_8_ + lVar7 * 4) = *(undefined4 *)pFVar10;
    if ((param_1->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar10 = (param_1->AllocatorInstance).Data;
    if (((local_58.AllocatorInstance.Data <= pFVar10) &&
        (pFVar10 < local_58.AllocatorInstance.Data + local_58.ArrayMax)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = local_58.ArrayNum;
    if (local_58.ArrayNum == local_58.ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_58.AllocatorInstance,&local_58.ArrayMax);
    }
    local_58.ArrayNum = iVar4 + 1;
    uVar12 = 1;
    local_58.AllocatorInstance.Data[iVar4] = *pFVar10;
    local_res20 = lVar11;
    if (1 < lVar11) {
      lVar11 = 1;
      do {
        uVar9 = ~uVar12 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        cVar3 = (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,local_res10,
                           (param_1->AllocatorInstance).Data + lVar11);
        if (cVar3 == '\0') {
          uVar6 = 0;
          uVar5 = uVar6;
          if ((int)uVar12 < param_1->ArrayNum) {
            uVar5 = uVar9;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_res10[0] = (param_1->AllocatorInstance).Data[lVar11];
          uVar5 = uVar6;
          if ((int)uVar12 < (this->KeyTimes).ArrayNum) {
            uVar5 = uVar9;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar10 = (this->KeyTimes).AllocatorInstance.Data + lVar11 * 4;
          if ((((ulonglong)local_48._0_8_ <= pFVar10) &&
              (pFVar10 < (FScriptContainerElement *)
                         (local_48._0_8_ + (longlong)(int)local_48._12_4_ * 4))) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = local_48._8_4_;
          if (local_48._8_4_ == local_48._12_4_) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)local_48,(int *)(local_48 + 0xc));
          }
          local_48._8_4_ = iVar4 + 1;
          *(undefined4 *)(local_48._0_8_ + (longlong)iVar4 * 4) = *(undefined4 *)pFVar10;
          if ((int)uVar12 < param_1->ArrayNum) {
            uVar6 = uVar9;
          }
          if ((uVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar10 = (param_1->AllocatorInstance).Data + lVar11;
          if (((local_58.AllocatorInstance.Data <= pFVar10) &&
              (pFVar10 < local_58.AllocatorInstance.Data + local_58.ArrayMax)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = local_58.ArrayNum;
          if (local_58.ArrayNum == local_58.ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_58.AllocatorInstance,&local_58.ArrayMax);
          }
          local_58.ArrayNum = iVar4 + 1;
          local_58.AllocatorInstance.Data[iVar4] = *pFVar10;
          param_2 = local_res18;
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < local_res20);
    }
    if (local_48._12_4_ != local_48._8_4_) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_48._8_4_,(ForAnyElementType *)local_48,local_48._8_4_,
                 (int *)(local_48 + 0xc));
    }
    iVar4 = local_48._8_4_;
    if (local_58.ArrayMax != local_58.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_58.ArrayNum,&local_58.AllocatorInstance,local_58.ArrayNum,
                 &local_58.ArrayMax);
      iVar4 = local_48._8_4_;
    }
    iVar8 = local_58.ArrayNum;
    if (this != (FInterchangeStepCurve *)local_48) {
      pFVar10 = (this->KeyTimes).AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
        iVar4 = local_48._8_4_;
        iVar8 = local_58.ArrayNum;
      }
      (this->KeyTimes).AllocatorInstance.Data = (FScriptContainerElement *)local_48._0_8_;
      (this->KeyTimes).ArrayMax = local_48._12_4_;
      local_48._8_4_ = 0;
      local_48._12_4_ = 0;
      local_48._0_8_ = (FScriptContainerElement *)0x0;
      (this->KeyTimes).ArrayNum = iVar4;
    }
    if (param_1 != &local_58) {
      pFVar10 = (param_1->AllocatorInstance).Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
        iVar8 = local_58.ArrayNum;
      }
      (param_1->AllocatorInstance).Data = local_58.AllocatorInstance.Data;
      param_1->ArrayMax = local_58.ArrayMax;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      param_1->ArrayNum = iVar8;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  return;
}

// InternalRemoveRedundantKey<int> @ 14e66bd30

void __thiscall
FInterchangeStepCurve::InternalRemoveRedundantKey<int>
          (FInterchangeStepCurve *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<bool___cdecl(int_const_&,int_const_&)> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 local_res10;
  TFunctionRef<bool___cdecl(int_const_&,int_const_&)> *local_res18;
  longlong local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  ForAnyElementType local_48;
  int local_40;
  int iStack_3c;
  
  uVar12 = param_1->ArrayNum;
  lVar11 = (longlong)(int)uVar12;
  if (uVar12 != 0) {
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    iStack_3c = 0;
    local_res18 = param_2;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < 1) {
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,&stack0xffffffffffffffb8,0,&stack0xffffffffffffffc4);
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res10 = *(undefined4 *)(param_1->AllocatorInstance).Data;
    if (((this->KeyTimes).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->KeyTimes).AllocatorInstance.Data;
    if (((local_48.Data <= pFVar1) && (pFVar1 < local_48.Data + (longlong)iStack_3c * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_40 == iStack_3c) {
      local_40 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&stack0xffffffffffffffb8,&stack0xffffffffffffffc4);
    }
    lVar8 = (longlong)local_40;
    local_40 = local_40 + 1;
    *(undefined4 *)(local_48.Data + lVar8 * 4) = *(undefined4 *)pFVar1;
    if ((param_1->ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((local_58.AllocatorInstance.Data <= pFVar1) &&
        (pFVar1 < local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = local_58.ArrayNum;
    if (local_58.ArrayNum == local_58.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_58.AllocatorInstance,&local_58.ArrayMax);
    }
    local_58.ArrayNum = iVar5 + 1;
    uVar12 = 1;
    *(undefined4 *)(local_58.AllocatorInstance.Data + (longlong)iVar5 * 4) = *(undefined4 *)pFVar1;
    local_res20 = lVar11;
    if (1 < lVar11) {
      lVar11 = 1;
      do {
        uVar10 = ~uVar12 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        cVar4 = (**(code **)local_res18)
                          (*(undefined8 *)&local_res18->field_0x8,&stack0x00000010,
                           (param_1->AllocatorInstance).Data + (longlong)(int)uVar12 * 4);
        if (cVar4 == '\0') {
          uVar7 = 0;
          uVar6 = uVar7;
          if ((int)uVar12 < param_1->ArrayNum) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_res10 = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar11 * 4);
          uVar6 = uVar7;
          if ((int)uVar12 < (this->KeyTimes).ArrayNum) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this->KeyTimes).AllocatorInstance.Data + lVar11 * 4;
          if (((local_48.Data <= pFVar1) && (pFVar1 < local_48.Data + (longlong)iStack_3c * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = local_40;
          if (local_40 == iStack_3c) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&stack0xffffffffffffffb8,&stack0xffffffffffffffc4);
          }
          local_40 = iVar5 + 1;
          *(undefined4 *)(local_48.Data + (longlong)iVar5 * 4) = *(undefined4 *)pFVar1;
          if ((int)uVar12 < param_1->ArrayNum) {
            uVar7 = uVar10;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (param_1->AllocatorInstance).Data + lVar11 * 4;
          if (((local_58.AllocatorInstance.Data <= pFVar1) &&
              (pFVar1 < local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = local_58.ArrayNum;
          if (local_58.ArrayNum == local_58.ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_58.AllocatorInstance,&local_58.ArrayMax);
          }
          local_58.ArrayNum = iVar5 + 1;
          *(undefined4 *)(local_58.AllocatorInstance.Data + (longlong)iVar5 * 4) =
               *(undefined4 *)pFVar1;
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < local_res20);
    }
    if (iStack_3c != local_40) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_40,&stack0xffffffffffffffb8,local_40,&stack0xffffffffffffffc4);
    }
    iVar5 = local_40;
    if (local_58.ArrayMax != local_58.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_58.ArrayNum,&local_58.AllocatorInstance,local_58.ArrayNum,
                 &local_58.ArrayMax);
      iVar5 = local_40;
    }
    iVar9 = local_58.ArrayNum;
    if (this != (FInterchangeStepCurve *)&stack0xffffffffffffffb8) {
      pFVar1 = (this->KeyTimes).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
        iVar5 = local_40;
        iVar9 = local_58.ArrayNum;
      }
      (this->KeyTimes).AllocatorInstance.Data = local_48.Data;
      (this->KeyTimes).ArrayMax = iStack_3c;
      local_40 = 0;
      iStack_3c = 0;
      local_48.Data = (FScriptContainerElement *)0x0;
      (this->KeyTimes).ArrayNum = iVar5;
    }
    if (param_1 != &local_58) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
        iVar9 = local_58.ArrayNum;
      }
      (param_1->AllocatorInstance).Data = local_58.AllocatorInstance.Data;
      param_1->ArrayMax = local_58.ArrayMax;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      param_1->ArrayNum = iVar9;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// InternalRemoveRedundantKey<float> @ 14e66c350

void __thiscall
FInterchangeStepCurve::InternalRemoveRedundantKey<float>
          (FInterchangeStepCurve *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<bool___cdecl(float_const_&,float_const_&)> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 local_res10;
  TFunctionRef<bool___cdecl(float_const_&,float_const_&)> *local_res18;
  longlong local_res20;
  TArray<float,TSizedDefaultAllocator<32>_> local_58;
  ForAnyElementType local_48;
  int local_40;
  int iStack_3c;
  
  uVar12 = param_1->ArrayNum;
  lVar11 = (longlong)(int)uVar12;
  if (uVar12 != 0) {
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    iStack_3c = 0;
    local_res18 = param_2;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < 1) {
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,&stack0xffffffffffffffb8,0,&stack0xffffffffffffffc4);
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res10 = *(undefined4 *)(param_1->AllocatorInstance).Data;
    if (((this->KeyTimes).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (this->KeyTimes).AllocatorInstance.Data;
    if (((local_48.Data <= pFVar1) && (pFVar1 < local_48.Data + (longlong)iStack_3c * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_40 == iStack_3c) {
      local_40 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&stack0xffffffffffffffb8,&stack0xffffffffffffffc4);
    }
    lVar8 = (longlong)local_40;
    local_40 = local_40 + 1;
    *(undefined4 *)(local_48.Data + lVar8 * 4) = *(undefined4 *)pFVar1;
    if ((param_1->ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (((local_58.AllocatorInstance.Data <= pFVar1) &&
        (pFVar1 < local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = local_58.ArrayNum;
    if (local_58.ArrayNum == local_58.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_58.AllocatorInstance,&local_58.ArrayMax);
    }
    local_58.ArrayNum = iVar5 + 1;
    uVar12 = 1;
    *(undefined4 *)(local_58.AllocatorInstance.Data + (longlong)iVar5 * 4) = *(undefined4 *)pFVar1;
    local_res20 = lVar11;
    if (1 < lVar11) {
      lVar11 = 1;
      do {
        uVar10 = ~uVar12 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        cVar4 = (**(code **)local_res18)
                          (*(undefined8 *)&local_res18->field_0x8,&stack0x00000010,
                           (param_1->AllocatorInstance).Data + (longlong)(int)uVar12 * 4);
        if (cVar4 == '\0') {
          uVar7 = 0;
          uVar6 = uVar7;
          if ((int)uVar12 < param_1->ArrayNum) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_res10 = *(undefined4 *)((param_1->AllocatorInstance).Data + lVar11 * 4);
          uVar6 = uVar7;
          if ((int)uVar12 < (this->KeyTimes).ArrayNum) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this->KeyTimes).AllocatorInstance.Data + lVar11 * 4;
          if (((local_48.Data <= pFVar1) && (pFVar1 < local_48.Data + (longlong)iStack_3c * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = local_40;
          if (local_40 == iStack_3c) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&stack0xffffffffffffffb8,&stack0xffffffffffffffc4);
          }
          local_40 = iVar5 + 1;
          *(undefined4 *)(local_48.Data + (longlong)iVar5 * 4) = *(undefined4 *)pFVar1;
          if ((int)uVar12 < param_1->ArrayNum) {
            uVar7 = uVar10;
          }
          if ((uVar7 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (param_1->AllocatorInstance).Data + lVar11 * 4;
          if (((local_58.AllocatorInstance.Data <= pFVar1) &&
              (pFVar1 < local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = local_58.ArrayNum;
          if (local_58.ArrayNum == local_58.ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_58.AllocatorInstance,&local_58.ArrayMax);
          }
          local_58.ArrayNum = iVar5 + 1;
          *(undefined4 *)(local_58.AllocatorInstance.Data + (longlong)iVar5 * 4) =
               *(undefined4 *)pFVar1;
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < local_res20);
    }
    if (iStack_3c != local_40) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_40,&stack0xffffffffffffffb8,local_40,&stack0xffffffffffffffc4);
    }
    iVar5 = local_40;
    if (local_58.ArrayMax != local_58.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_58.ArrayNum,&local_58.AllocatorInstance,local_58.ArrayNum,
                 &local_58.ArrayMax);
      iVar5 = local_40;
    }
    iVar9 = local_58.ArrayNum;
    if (this != (FInterchangeStepCurve *)&stack0xffffffffffffffb8) {
      pFVar1 = (this->KeyTimes).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
        iVar5 = local_40;
        iVar9 = local_58.ArrayNum;
      }
      (this->KeyTimes).AllocatorInstance.Data = local_48.Data;
      (this->KeyTimes).ArrayMax = iStack_3c;
      local_40 = 0;
      iStack_3c = 0;
      local_48.Data = (FScriptContainerElement *)0x0;
      (this->KeyTimes).ArrayNum = iVar5;
    }
    if (param_1 != &local_58) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
        iVar9 = local_58.ArrayNum;
      }
      (param_1->AllocatorInstance).Data = local_58.AllocatorInstance.Data;
      param_1->ArrayMax = local_58.ArrayMax;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      param_1->ArrayNum = iVar9;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// InternalRemoveRedundantKey<FString> @ 14e66c990

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FInterchangeStepCurve::InternalRemoveRedundantKey<FString>
          (FInterchangeStepCurve *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<bool___cdecl(FString_const_&,FString_const_&)> *param_2)

{
  uint uVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  undefined1 local_58 [16];
  TOptional<TArray<float,TSizedDefaultAllocator<32>_>_>_u_0 local_48;
  
  uVar1 = param_1->ArrayNum;
  if (uVar1 != 0) {
    local_58._0_8_ = (FScriptContainerElement *)0x0;
    local_58._8_4_ = 0;
    local_58._12_4_ = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if ((int)uVar1 < 1) {
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,(ForAnyElementType *)local_58,0,(int *)(local_58 + 0xc));
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar1,&local_68.AllocatorInstance,0,&local_68.ArrayMax);
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = (param_1->AllocatorInstance).Data;
    local_48.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
    local_48.TypedValue.ArrayNum = *(undefined4 *)(pFVar9 + 8);
    lVar7 = (longlong)local_48.TypedValue.ArrayNum;
    _Src = *(void **)pFVar9;
    if (local_48.TypedValue.ArrayNum == 0) {
      local_48.TypedValue.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.TypedValue.ArrayNum,0,(ForAnyElementType *)&local_48,
                 local_48.TypedValue.ArrayNum,(int *)((longlong)&local_48 + 0xc));
      memcpy((void *)local_48.TypedValue.AllocatorInstance.Data,_Src,lVar7 * 2);
    }
    if (((this->KeyTimes).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = (this->KeyTimes).AllocatorInstance.Data;
    if ((((ulonglong)local_58._0_8_ <= pFVar9) &&
        (pFVar9 < (FScriptContainerElement *)(local_58._0_8_ + (longlong)(int)local_58._12_4_ * 4)))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_58._8_4_ == local_58._12_4_) {
      local_58._8_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,(ForAnyElementType *)local_58,(int *)(local_58 + 0xc));
    }
    lVar7 = (longlong)(int)local_58._8_4_;
    local_58._8_4_ = local_58._8_4_ + 1;
    *(undefined4 *)(local_58._0_8_ + lVar7 * 4) = *(undefined4 *)pFVar9;
    if ((param_1->ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = (param_1->AllocatorInstance).Data;
    if (((local_68.AllocatorInstance.Data <= pFVar9) &&
        (pFVar9 < local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = local_68.ArrayNum;
    if (local_68.ArrayNum == local_68.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
    }
    local_68.ArrayNum = iVar5 + 1;
    ::FString::FString((FString *)(local_68.AllocatorInstance.Data + (longlong)iVar5 * 0x10),
                       (FString *)pFVar9);
    uVar10 = 1;
    if (1 < (longlong)(int)uVar1) {
      lVar12 = 1;
      lVar7 = 0x10;
      do {
        uVar8 = ~uVar10 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar6 = uVar8;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        cVar4 = (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,&local_48,
                           (param_1->AllocatorInstance).Data + lVar7);
        if (cVar4 == '\0') {
          uVar6 = 0;
          if ((int)uVar10 < param_1->ArrayNum) {
            uVar6 = uVar8;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar9 = (param_1->AllocatorInstance).Data;
          iVar11 = *(int *)(pFVar9 + lVar7 + 8);
          iVar5 = iVar11 + -1;
          if (iVar11 == 0) {
            iVar5 = 0;
          }
          ::FString::AssignRange((FString *)&local_48,*(wchar_t **)(pFVar9 + lVar7),iVar5);
          uVar6 = 0;
          if ((int)uVar10 < (this->KeyTimes).ArrayNum) {
            uVar6 = uVar8;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar9 = (this->KeyTimes).AllocatorInstance.Data + lVar12 * 4;
          if ((((ulonglong)local_58._0_8_ <= pFVar9) &&
              (pFVar9 < (FScriptContainerElement *)
                        (local_58._0_8_ + (longlong)(int)local_58._12_4_ * 4))) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = local_58._8_4_;
          if (local_58._8_4_ == local_58._12_4_) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)local_58,(int *)(local_58 + 0xc));
          }
          local_58._8_4_ = iVar5 + 1;
          *(undefined4 *)(local_58._0_8_ + (longlong)iVar5 * 4) = *(undefined4 *)pFVar9;
          uVar6 = 0;
          if ((int)uVar10 < param_1->ArrayNum) {
            uVar6 = uVar8;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar9 = (param_1->AllocatorInstance).Data + lVar7;
          if (((local_68.AllocatorInstance.Data <= pFVar9) &&
              (pFVar9 < local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x10)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar5 = local_68.ArrayNum;
          if (local_68.ArrayNum == local_68.ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
          }
          local_68.ArrayNum = iVar5 + 1;
          ::FString::FString((FString *)(local_68.AllocatorInstance.Data + (longlong)iVar5 * 0x10),
                             (FString *)pFVar9);
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar12 < (int)uVar1);
    }
    if (local_58._12_4_ != local_58._8_4_) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_58._8_4_,(ForAnyElementType *)local_58,local_58._8_4_,
                 (int *)(local_58 + 0xc));
    }
    iVar5 = local_58._8_4_;
    if (local_68.ArrayMax != local_68.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_68.ArrayNum,&local_68.AllocatorInstance,local_68.ArrayNum,
                 &local_68.ArrayMax);
      iVar5 = local_58._8_4_;
    }
    iVar11 = local_68.ArrayNum;
    if (this != (FInterchangeStepCurve *)local_58) {
      pFVar9 = (this->KeyTimes).AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
        iVar5 = local_58._8_4_;
        iVar11 = local_68.ArrayNum;
      }
      (this->KeyTimes).AllocatorInstance.Data = (FScriptContainerElement *)local_58._0_8_;
      (this->KeyTimes).ArrayMax = local_58._12_4_;
      local_58._8_4_ = 0;
      local_58._12_4_ = 0;
      local_58._0_8_ = (FScriptContainerElement *)0x0;
      (this->KeyTimes).ArrayNum = iVar5;
    }
    if (param_1 != &local_68) {
      DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      pFVar9 = (param_1->AllocatorInstance).Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      iVar11 = 0;
      (param_1->AllocatorInstance).Data = local_68.AllocatorInstance.Data;
      param_1->ArrayNum = local_68.ArrayNum;
      param_1->ArrayMax = local_68.ArrayMax;
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = 0;
      local_68.ArrayMax = 0;
    }
    if (local_48.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48.TypedValue.AllocatorInstance.Data);
      iVar11 = local_68.ArrayNum;
    }
    DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,iVar11);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_58._0_8_);
    }
  }
  return;
}

// InternalRemoveRedundantKey<bool> @ 14e66d080

void __thiscall
FInterchangeStepCurve::InternalRemoveRedundantKey<bool>
          (FInterchangeStepCurve *this,TArray<bool,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<bool___cdecl(bool_const_&,bool_const_&)> *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement local_res10 [8];
  TFunctionRef<bool___cdecl(bool_const_&,bool_const_&)> *local_res18;
  longlong local_res20;
  TArray<bool,TSizedDefaultAllocator<32>_> local_58;
  undefined1 local_48 [16];
  
  uVar12 = param_1->ArrayNum;
  lVar11 = (longlong)(int)uVar12;
  if (uVar12 != 0) {
    local_48._0_8_ = (FScriptContainerElement *)0x0;
    local_48._8_4_ = 0;
    local_48._12_4_ = 0;
    local_res18 = param_2;
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < 1) {
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar12,(ForAnyElementType *)local_48,0,(int *)(local_48 + 0xc));
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar12,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_res10[0] = *(param_1->AllocatorInstance).Data;
    if (((this->KeyTimes).ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar10 = (this->KeyTimes).AllocatorInstance.Data;
    if ((((ulonglong)local_48._0_8_ <= pFVar10) &&
        (pFVar10 < (FScriptContainerElement *)(local_48._0_8_ + (longlong)(int)local_48._12_4_ * 4))
        ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (local_48._8_4_ == local_48._12_4_) {
      local_48._8_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,(ForAnyElementType *)local_48,(int *)(local_48 + 0xc));
    }
    lVar7 = (longlong)(int)local_48._8_4_;
    local_48._8_4_ = local_48._8_4_ + 1;
    *(undefined4 *)(local_48._0_8_ + lVar7 * 4) = *(undefined4 *)pFVar10;
    if ((param_1->ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar10 = (param_1->AllocatorInstance).Data;
    if (((local_58.AllocatorInstance.Data <= pFVar10) &&
        (pFVar10 < local_58.AllocatorInstance.Data + local_58.ArrayMax)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = local_58.ArrayNum;
    if (local_58.ArrayNum == local_58.ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_58.AllocatorInstance,&local_58.ArrayMax);
    }
    local_58.ArrayNum = iVar4 + 1;
    uVar12 = 1;
    local_58.AllocatorInstance.Data[iVar4] = *pFVar10;
    local_res20 = lVar11;
    if (1 < lVar11) {
      lVar11 = 1;
      do {
        uVar9 = ~uVar12 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        cVar3 = (**(code **)param_2)
                          (*(undefined8 *)&param_2->field_0x8,local_res10,
                           (param_1->AllocatorInstance).Data + lVar11);
        if (cVar3 == '\0') {
          uVar6 = 0;
          uVar5 = uVar6;
          if ((int)uVar12 < param_1->ArrayNum) {
            uVar5 = uVar9;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          local_res10[0] = (param_1->AllocatorInstance).Data[lVar11];
          uVar5 = uVar6;
          if ((int)uVar12 < (this->KeyTimes).ArrayNum) {
            uVar5 = uVar9;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar10 = (this->KeyTimes).AllocatorInstance.Data + lVar11 * 4;
          if ((((ulonglong)local_48._0_8_ <= pFVar10) &&
              (pFVar10 < (FScriptContainerElement *)
                         (local_48._0_8_ + (longlong)(int)local_48._12_4_ * 4))) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = local_48._8_4_;
          if (local_48._8_4_ == local_48._12_4_) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,(ForAnyElementType *)local_48,(int *)(local_48 + 0xc));
          }
          local_48._8_4_ = iVar4 + 1;
          *(undefined4 *)(local_48._0_8_ + (longlong)iVar4 * 4) = *(undefined4 *)pFVar10;
          if ((int)uVar12 < param_1->ArrayNum) {
            uVar6 = uVar9;
          }
          if ((uVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar10 = (param_1->AllocatorInstance).Data + lVar11;
          if (((local_58.AllocatorInstance.Data <= pFVar10) &&
              (pFVar10 < local_58.AllocatorInstance.Data + local_58.ArrayMax)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar4 = local_58.ArrayNum;
          if (local_58.ArrayNum == local_58.ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x101,&local_58.AllocatorInstance,&local_58.ArrayMax);
          }
          local_58.ArrayNum = iVar4 + 1;
          local_58.AllocatorInstance.Data[iVar4] = *pFVar10;
          param_2 = local_res18;
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < local_res20);
    }
    if (local_48._12_4_ != local_48._8_4_) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_48._8_4_,(ForAnyElementType *)local_48,local_48._8_4_,
                 (int *)(local_48 + 0xc));
    }
    iVar4 = local_48._8_4_;
    if (local_58.ArrayMax != local_58.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_58.ArrayNum,&local_58.AllocatorInstance,local_58.ArrayNum,
                 &local_58.ArrayMax);
      iVar4 = local_48._8_4_;
    }
    iVar8 = local_58.ArrayNum;
    if (this != (FInterchangeStepCurve *)local_48) {
      pFVar10 = (this->KeyTimes).AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
        iVar4 = local_48._8_4_;
        iVar8 = local_58.ArrayNum;
      }
      (this->KeyTimes).AllocatorInstance.Data = (FScriptContainerElement *)local_48._0_8_;
      (this->KeyTimes).ArrayMax = local_48._12_4_;
      local_48._8_4_ = 0;
      local_48._12_4_ = 0;
      local_48._0_8_ = (FScriptContainerElement *)0x0;
      (this->KeyTimes).ArrayNum = iVar4;
    }
    if (param_1 != &local_58) {
      pFVar10 = (param_1->AllocatorInstance).Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
        iVar8 = local_58.ArrayNum;
      }
      (param_1->AllocatorInstance).Data = local_58.AllocatorInstance.Data;
      param_1->ArrayMax = local_58.ArrayMax;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      param_1->ArrayNum = iVar8;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
  }
  return;
}

// ~FInterchangeStepCurve @ 14e66d990

void __thiscall FInterchangeStepCurve::~FInterchangeStepCurve(FInterchangeStepCurve *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->StringKeyValues).field0_0x0.TypedValue.ArrayMax != -1) {
    DestructItems<FString,int>
              ((FString *)(this->StringKeyValues).field0_0x0.TypedValue.AllocatorInstance.Data,
               (this->StringKeyValues).field0_0x0.TypedValue.ArrayNum);
    pFVar1 = (this->StringKeyValues).field0_0x0.TypedValue.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  if (((this->IntegerKeyValues).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->IntegerKeyValues).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  if (((this->ByteKeyValues).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->ByteKeyValues).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  if (((this->BooleanKeyValues).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->BooleanKeyValues).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  if (((this->FloatKeyValues).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->FloatKeyValues).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->KeyTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14e66da30

FInterchangeStepCurve * __thiscall
FInterchangeStepCurve::operator=(FInterchangeStepCurve *this,FInterchangeStepCurve *param_1)

{
  int *piVar1;
  TOptional<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar2;
  TOptional<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar3;
  TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar5;
  TOptional<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  FInterchangeStepCurve *pFVar11;
  
  if (this != param_1) {
    iVar7 = (param_1->KeyTimes).ArrayNum;
    piVar1 = &(this->KeyTimes).ArrayMax;
    pFVar8 = (param_1->KeyTimes).AllocatorInstance.Data;
    (this->KeyTimes).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar7,*piVar1,(ForAnyElementType *)this,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((this->KeyTimes).AllocatorInstance.Data,pFVar8,(longlong)iVar7 << 2);
      }
    }
  }
  pTVar2 = &this->FloatKeyValues;
  if (&param_1->FloatKeyValues != pTVar2) {
    if ((param_1->FloatKeyValues).field0_0x0.TypedValue.ArrayMax == -1) {
      if ((this->FloatKeyValues).field0_0x0.TypedValue.ArrayMax != -1) {
        pFVar8 = (pTVar2->field0_0x0).TypedValue.AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (pTVar2->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->FloatKeyValues).field0_0x0.TypedValue.ArrayNum = 0;
        (this->FloatKeyValues).field0_0x0.TypedValue.ArrayMax = -1;
      }
    }
    else {
      pFVar8 = (pTVar2->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (pTVar2->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = (param_1->FloatKeyValues).field0_0x0.TypedValue.ArrayNum;
      pFVar8 = (param_1->FloatKeyValues).field0_0x0.TypedValue.AllocatorInstance.Data;
      piVar1 = &(this->FloatKeyValues).field0_0x0.TypedValue.ArrayMax;
      (this->FloatKeyValues).field0_0x0.TypedValue.ArrayNum = iVar7;
      if (iVar7 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar7,0,(ForAnyElementType *)pTVar2,iVar7,piVar1);
        memcpy((pTVar2->field0_0x0).TypedValue.AllocatorInstance.Data,pFVar8,(longlong)iVar7 << 2);
      }
      if (*piVar1 == -1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FInterchangeStepCurve *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  pTVar3 = &this->BooleanKeyValues;
  if (&param_1->BooleanKeyValues != pTVar3) {
    if ((param_1->BooleanKeyValues).field0_0x0.TypedValue.ArrayMax == -1) {
      if ((this->BooleanKeyValues).field0_0x0.TypedValue.ArrayMax != -1) {
        pFVar8 = (pTVar3->field0_0x0).TypedValue.AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (pTVar3->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->BooleanKeyValues).field0_0x0.TypedValue.ArrayNum = 0;
        (this->BooleanKeyValues).field0_0x0.TypedValue.ArrayMax = -1;
      }
    }
    else {
      pFVar8 = (pTVar3->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (pTVar3->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = (param_1->BooleanKeyValues).field0_0x0.TypedValue.ArrayNum;
      pFVar8 = (param_1->BooleanKeyValues).field0_0x0.TypedValue.AllocatorInstance.Data;
      piVar1 = &(this->BooleanKeyValues).field0_0x0.TypedValue.ArrayMax;
      (this->BooleanKeyValues).field0_0x0.TypedValue.ArrayNum = iVar7;
      if (iVar7 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar7,0,(ForAnyElementType *)pTVar3,iVar7,piVar1);
        memcpy((pTVar3->field0_0x0).TypedValue.AllocatorInstance.Data,pFVar8,(longlong)iVar7);
      }
      if (*piVar1 == -1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FInterchangeStepCurve *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  pTVar4 = &this->ByteKeyValues;
  if (&param_1->ByteKeyValues != pTVar4) {
    if ((param_1->ByteKeyValues).field0_0x0.TypedValue.ArrayMax == -1) {
      if ((this->ByteKeyValues).field0_0x0.TypedValue.ArrayMax != -1) {
        pFVar8 = (pTVar4->field0_0x0).TypedValue.AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (pTVar4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->ByteKeyValues).field0_0x0.TypedValue.ArrayNum = 0;
        (this->ByteKeyValues).field0_0x0.TypedValue.ArrayMax = -1;
      }
    }
    else {
      pFVar8 = (pTVar4->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (pTVar4->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = (param_1->ByteKeyValues).field0_0x0.TypedValue.ArrayNum;
      pFVar8 = (param_1->ByteKeyValues).field0_0x0.TypedValue.AllocatorInstance.Data;
      piVar1 = &(this->ByteKeyValues).field0_0x0.TypedValue.ArrayMax;
      (this->ByteKeyValues).field0_0x0.TypedValue.ArrayNum = iVar7;
      if (iVar7 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar7,0,(ForAnyElementType *)pTVar4,iVar7,piVar1);
        memcpy((pTVar4->field0_0x0).TypedValue.AllocatorInstance.Data,pFVar8,(longlong)iVar7);
      }
      if (*piVar1 == -1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FInterchangeStepCurve *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  pTVar5 = &this->IntegerKeyValues;
  if (&param_1->IntegerKeyValues != pTVar5) {
    if ((param_1->IntegerKeyValues).field0_0x0.TypedValue.ArrayMax == -1) {
      if ((this->IntegerKeyValues).field0_0x0.TypedValue.ArrayMax != -1) {
        pFVar8 = (pTVar5->field0_0x0).TypedValue.AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (pTVar5->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->IntegerKeyValues).field0_0x0.TypedValue.ArrayNum = 0;
        (this->IntegerKeyValues).field0_0x0.TypedValue.ArrayMax = -1;
      }
    }
    else {
      pFVar8 = (pTVar5->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (pTVar5->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = (param_1->IntegerKeyValues).field0_0x0.TypedValue.ArrayNum;
      pFVar8 = (param_1->IntegerKeyValues).field0_0x0.TypedValue.AllocatorInstance.Data;
      piVar1 = &(this->IntegerKeyValues).field0_0x0.TypedValue.ArrayMax;
      (this->IntegerKeyValues).field0_0x0.TypedValue.ArrayNum = iVar7;
      if (iVar7 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar7,0,(ForAnyElementType *)pTVar5,iVar7,piVar1);
        memcpy((pTVar5->field0_0x0).TypedValue.AllocatorInstance.Data,pFVar8,(longlong)iVar7 << 2);
      }
      if (*piVar1 == -1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FInterchangeStepCurve *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  pTVar6 = &this->StringKeyValues;
  if (&param_1->StringKeyValues != pTVar6) {
    if ((param_1->StringKeyValues).field0_0x0.TypedValue.ArrayMax == -1) {
      if ((this->StringKeyValues).field0_0x0.TypedValue.ArrayMax != -1) {
        DestructItems<FString,int>
                  ((FString *)(pTVar6->field0_0x0).TypedValue.AllocatorInstance.Data,
                   (this->StringKeyValues).field0_0x0.TypedValue.ArrayNum);
        pFVar8 = (pTVar6->field0_0x0).TypedValue.AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (pTVar6->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->StringKeyValues).field0_0x0.TypedValue.ArrayNum = 0;
        (this->StringKeyValues).field0_0x0.TypedValue.ArrayMax = -1;
      }
    }
    else {
      DestructItems<FString,int>
                ((FString *)(pTVar6->field0_0x0).TypedValue.AllocatorInstance.Data,
                 (this->StringKeyValues).field0_0x0.TypedValue.ArrayNum);
      pFVar8 = (pTVar6->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (pTVar6->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = (param_1->StringKeyValues).field0_0x0.TypedValue.ArrayNum;
      pFVar8 = (param_1->StringKeyValues).field0_0x0.TypedValue.AllocatorInstance.Data;
      piVar1 = &(this->StringKeyValues).field0_0x0.TypedValue.ArrayMax;
      (this->StringKeyValues).field0_0x0.TypedValue.ArrayNum = iVar7;
      if (iVar7 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar7,0,(ForAnyElementType *)pTVar6,iVar7,piVar1);
        ConstructItems<FString,FString,int>
                  ((pTVar6->field0_0x0).TypedValue.AllocatorInstance.Data,(FString *)pFVar8,iVar7);
      }
      if (*piVar1 == -1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x171,
                            L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                           );
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          pFVar11 = (FInterchangeStepCurve *)(*pcVar9)();
          return pFVar11;
        }
      }
    }
  }
  return this;
}

// RemoveRedundantKeys @ 14e66fc00

void __thiscall
FInterchangeStepCurve::RemoveRedundantKeys(FInterchangeStepCurve *this,float param_1)

{
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [4];
  float local_64;
  code *local_60;
  float *local_58;
  code *local_50;
  undefined1 *local_48;
  code *local_40;
  undefined1 *local_38;
  code *local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_18;
  
  if (1 < (this->KeyTimes).ArrayNum) {
    if ((this->FloatKeyValues).field0_0x0.TypedValue.ArrayMax != -1) {
      local_58 = &local_64;
      local_60 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FInterchangeStepCurve::RemoveRedundantKeys'::__l8::<lambda_1>,bool,float_const_&,float_const_&>
                 ::Call;
      local_64 = param_1;
      InternalRemoveRedundantKey<float>
                (this,(TArray<float,TSizedDefaultAllocator<32>_> *)&this->FloatKeyValues,
                 (TFunctionRef<bool___cdecl(float_const_&,float_const_&)> *)&local_60);
      return;
    }
    if ((this->IntegerKeyValues).field0_0x0.TypedValue.ArrayMax != -1) {
      local_48 = local_res8;
      local_50 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FInterchangeStepCurve::RemoveRedundantKeys'::__l12::<lambda_2>,bool,int_const_&,int_const_&>
                 ::Call;
      InternalRemoveRedundantKey<int>
                (this,(TArray<int,TSizedDefaultAllocator<32>_> *)&this->IntegerKeyValues,
                 (TFunctionRef<bool___cdecl(int_const_&,int_const_&)> *)&local_50);
      return;
    }
    if ((this->StringKeyValues).field0_0x0.TypedValue.ArrayMax != -1) {
      local_38 = local_res18;
      local_40 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FInterchangeStepCurve::RemoveRedundantKeys'::__l16::<lambda_3>,bool,FString_const_&,FString_const_&>
                 ::Call;
      InternalRemoveRedundantKey<FString>
                (this,(TArray<FString,TSizedDefaultAllocator<32>_> *)&this->StringKeyValues,
                 (TFunctionRef<bool___cdecl(FString_const_&,FString_const_&)> *)&local_40);
      return;
    }
    if ((this->BooleanKeyValues).field0_0x0.TypedValue.ArrayMax != -1) {
      local_28 = local_res20;
      local_30 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FInterchangeStepCurve::RemoveRedundantKeys'::__l20::<lambda_4>,bool,bool_const_&,bool_const_&>
                 ::Call;
      InternalRemoveRedundantKey<bool>
                (this,(TArray<bool,TSizedDefaultAllocator<32>_> *)&this->BooleanKeyValues,
                 (TFunctionRef<bool___cdecl(bool_const_&,bool_const_&)> *)&local_30);
      return;
    }
    if ((this->ByteKeyValues).field0_0x0.TypedValue.ArrayMax != -1) {
      local_18 = local_68;
      local_20 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FInterchangeStepCurve::RemoveRedundantKeys'::__l24::<lambda_5>,bool,unsigned_char_const_&,unsigned_char_const_&>
                 ::Call;
      InternalRemoveRedundantKey<unsigned_char>
                (this,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->ByteKeyValues,
                 (TFunctionRef<bool___cdecl(unsigned_char_const_&,unsigned_char_const_&)> *)
                 &local_20);
    }
  }
  return;
}

// Serialize @ 14e670880

void __thiscall FInterchangeStepCurve::Serialize(FInterchangeStepCurve *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(param_1,&this->KeyTimes);
  TOptional<TArray<float,TSizedDefaultAllocator<32>_>_>::Serialize(&this->FloatKeyValues,param_1);
  TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::Serialize
            (&this->ByteKeyValues,param_1);
  TOptional<TArray<bool,TSizedDefaultAllocator<32>_>_>::Serialize(&this->BooleanKeyValues,param_1);
  TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>::Serialize(&this->IntegerKeyValues,param_1);
  TOptional<TArray<FString,TSizedDefaultAllocator<32>_>_>::Serialize(&this->StringKeyValues,param_1)
  ;
  return;
}

