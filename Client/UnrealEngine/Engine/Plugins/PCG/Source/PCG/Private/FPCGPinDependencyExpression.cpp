// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticStruct @ 149c95730

UScriptStruct * __cdecl FPCGPinDependencyExpression::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGPinDependencyExpression.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGPinDependencyExpression.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGPinDependencyExpression,(UObject *)pUVar1,
                         L"PCGPinDependencyExpression");
  }
  return Z_Registration_Info_UScriptStruct_FPCGPinDependencyExpression.OuterSingleton;
}

// operator= @ 149ca6c20

FPCGPinDependencyExpression * __thiscall
FPCGPinDependencyExpression::operator=
          (FPCGPinDependencyExpression *this,FPCGPinDependencyExpression *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Expression).ArrayMax;
    piVar1 = &(this->Expression).ArrayMax;
    _Src = (param_1->Expression).AllocatorInstance.Data;
    iVar3 = (param_1->Expression).ArrayNum;
    (this->Expression).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Expression).AllocatorInstance.Data,_Src,(longlong)iVar3 << 3);
    }
  }
  return this;
}

// AddConjunction @ 149ca99d0

void __thiscall FPCGPinDependencyExpression::AddConjunction(FPCGPinDependencyExpression *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar2 = (this->Expression).AllocatorInstance.Data;
  if ((pFVar2 < (FScriptContainerElement *)0x151fbcad9) &&
     (&ConjunctionMarker < pFVar2 + (longlong)(this->Expression).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Expression).ArrayNum;
  piVar1 = &(this->Expression).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->Expression).ArrayNum = iVar5 + 1;
  *(undefined8 *)((this->Expression).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       0xffffffffffffffff;
  return;
}

// AddPinDependency @ 149caad50

void __thiscall
FPCGPinDependencyExpression::AddPinDependency(FPCGPinDependencyExpression *this,ulong64 param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 local_res10 [3];
  
  local_res10[0] = param_1;
  if (0xfffffffffffffffd < param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PinId != ConjunctionMarker && PinId != RemovedTermMarker",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGPinDependencyExpression.cpp"
                       ,9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Expression).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->Expression).ArrayMax * 8))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Expression).ArrayNum;
  piVar1 = &(this->Expression).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->Expression).ArrayNum = iVar5 + 1;
  *(ulong64 *)((this->Expression).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// AppendUsingConjunction @ 149cac640

void __thiscall
FPCGPinDependencyExpression::AppendUsingConjunction
          (FPCGPinDependencyExpression *this,FPCGPinDependencyExpression *param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  if ((param_1->Expression).ArrayNum != 0) {
    piVar1 = &(this->Expression).ArrayNum;
    if ((this->Expression).ArrayNum != 0) {
      pFVar3 = (this->Expression).AllocatorInstance.Data;
      if (((pFVar3 < (FScriptContainerElement *)0x151fbcad9) &&
          (&ConjunctionMarker < pFVar3 + (longlong)(this->Expression).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = *piVar1;
      piVar2 = &(this->Expression).ArrayMax;
      if (iVar6 == *piVar2) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar2);
      }
      *piVar1 = iVar6 + 1;
      *(undefined8 *)((this->Expression).AllocatorInstance.Data + (longlong)iVar6 * 8) =
           0xffffffffffffffff;
    }
    if ((this == param_1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (param_1->Expression).ArrayNum;
    if (iVar6 != 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar6,(ForAnyElementType *)this,piVar1,&(this->Expression).ArrayMax);
      memcpy((this->Expression).AllocatorInstance.Data + (longlong)iVar7 * 8,
             (param_1->Expression).AllocatorInstance.Data,(longlong)iVar6 << 3);
    }
  }
  return;
}

// DeactivatePin @ 149cbcc60

void __thiscall
FPCGPinDependencyExpression::DeactivatePin
          (FPCGPinDependencyExpression *this,ulong64 param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  
  *param_2 = false;
  iVar7 = (this->Expression).ArrayNum;
  uVar11 = 0;
  if (0 < iVar7) {
    lVar9 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar11 < iVar7) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(ulong64 *)((this->Expression).AllocatorInstance.Data + lVar9) == param_1) {
        uVar8 = 0;
        if ((int)uVar11 < (this->Expression).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar8 = uVar11 + 1;
        bVar2 = true;
        *(undefined8 *)((this->Expression).AllocatorInstance.Data + lVar9) = 0xfffffffffffffffe;
        lVar10 = lVar9;
        uVar6 = uVar11;
        do {
          uVar6 = uVar6 - 1;
          if ((int)uVar6 < 0) goto LAB_149cbce16;
          lVar10 = lVar10 + -8;
          uVar5 = 0;
          if ((int)uVar6 < (this->Expression).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(longlong *)((this->Expression).AllocatorInstance.Data + lVar10) == -1)
          goto LAB_149cbce16;
          uVar5 = 0;
          if ((int)uVar6 < (this->Expression).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        } while (*(longlong *)((this->Expression).AllocatorInstance.Data + lVar10) == -2);
        bVar2 = false;
LAB_149cbce16:
        iVar7 = (this->Expression).ArrayNum;
        bVar3 = true;
        lVar10 = lVar9;
        if ((int)uVar8 < iVar7) {
          do {
            lVar10 = lVar10 + 8;
            uVar6 = 0;
            if ((int)uVar8 < iVar7) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (*(longlong *)((this->Expression).AllocatorInstance.Data + lVar10) == -1) break;
            uVar6 = 0;
            if ((int)uVar8 < (this->Expression).ArrayNum) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (*(longlong *)((this->Expression).AllocatorInstance.Data + lVar10) != -2) {
              bVar3 = false;
              break;
            }
            iVar7 = (this->Expression).ArrayNum;
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < iVar7);
        }
        if ((bVar2) && (bVar3)) {
          *param_2 = true;
        }
      }
      iVar7 = (this->Expression).ArrayNum;
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar11 < iVar7);
  }
  return;
}

// OffsetNodeIds @ 149ccde60

void __thiscall
FPCGPinDependencyExpression::OffsetNodeIds(FPCGPinDependencyExpression *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Expression).AllocatorInstance.Data;
  iVar2 = (this->Expression).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Expression).ArrayNum != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(ulong64 *)pFVar4 != 0xffffffffffffffff) {
      uVar3 = PCGPinIdHelpers::OffsetNodeIdInPinId(*(ulong64 *)pFVar4,param_1);
      *(ulong64 *)pFVar4 = uVar3;
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

