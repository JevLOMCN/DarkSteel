// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 147d4c2f0

UClass * __cdecl UInterpCurveEdSetup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterpCurveEdSetup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InterpCurveEdSetup",
               &Z_Registration_Info_UClass_UInterpCurveEdSetup.InnerSingleton,
               StaticRegisterNativesUInterpCurveEdSetup,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterpCurveEdSetup>,
               InternalVTableHelperCtorCaller<UInterpCurveEdSetup>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterpCurveEdSetup.InnerSingleton;
}

// UInterpCurveEdSetup @ 147d799b0

UInterpCurveEdSetup * __thiscall
UInterpCurveEdSetup::UInterpCurveEdSetup(UInterpCurveEdSetup *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterpCurveEdSetup__6B_;
  (this->Tabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tabs).ArrayNum = 0;
  (this->Tabs).ArrayMax = 0;
  return this;
}

// UInterpCurveEdSetup @ 147d799f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UInterpCurveEdSetup * __thiscall
UInterpCurveEdSetup::UInterpCurveEdSetup(UInterpCurveEdSetup *this,FObjectInitializer *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  UInterpCurveEdSetup *pUVar6;
  longlong lVar7;
  FString local_58;
  FString local_48;
  void *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterpCurveEdSetup__6B_;
  (this->Tabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tabs).ArrayNum = 0;
  (this->Tabs).ArrayMax = 0;
  pFVar5 = ::FString::FString(&local_58,L"Default");
  ::FString::FString(&local_48,pFVar5);
  local_28 = ___xmm_3f800000bf8000003f80000000000000;
  uStack_20 = _UNK_1519642a8;
  local_38 = (void *)0x0;
  local_30 = 0;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Tabs).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar1 + (longlong)(this->Tabs).ArrayMax * 0x30)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UInterpCurveEdSetup *)(*pcVar2)();
      return pUVar6;
    }
  }
  iVar4 = (this->Tabs).ArrayNum;
  if (iVar4 == (this->Tabs).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->Tabs).AllocatorInstance,&(this->Tabs).ArrayMax);
  }
  lVar7 = (longlong)iVar4;
  (this->Tabs).ArrayNum = iVar4 + 1;
  pFVar1 = (this->Tabs).AllocatorInstance.Data;
  *(undefined8 *)(pFVar1 + lVar7 * 0x30) = 0;
  *(FScriptContainerElement **)(pFVar1 + lVar7 * 0x30) = local_48.Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar1 + lVar7 * 0x30 + 8) = local_48.Data.ArrayNum;
  *(int *)(pFVar1 + lVar7 * 0x30 + 0xc) = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  *(undefined8 *)(pFVar1 + lVar7 * 0x30 + 0x10) = 0;
  *(void **)(pFVar1 + lVar7 * 0x30 + 0x10) = local_38;
  local_38 = (void *)0x0;
  *(undefined4 *)(pFVar1 + lVar7 * 0x30 + 0x18) = (undefined4)local_30;
  *(undefined4 *)(pFVar1 + lVar7 * 0x30 + 0x1c) = local_30._4_4_;
  local_30 = 0;
  *(undefined4 *)(pFVar1 + lVar7 * 0x30 + 0x20) = (undefined4)local_28;
  *(undefined4 *)(pFVar1 + lVar7 * 0x30 + 0x24) = local_28._4_4_;
  *(undefined4 *)(pFVar1 + lVar7 * 0x30 + 0x28) = (undefined4)uStack_20;
  *(undefined4 *)(pFVar1 + lVar7 * 0x30 + 0x2c) = uStack_20._4_4_;
  DestructItems<FCurveEdEntry,int>((FCurveEdEntry *)0x0,0);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UInterpCurveEdSetup @ 147d7b9f0

void __thiscall UInterpCurveEdSetup::~UInterpCurveEdSetup(UInterpCurveEdSetup *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterpCurveEdSetup__6B_;
  DestructItems<FCurveEdTab,int>
            ((FCurveEdTab *)(this->Tabs).AllocatorInstance.Data,(this->Tabs).ArrayNum);
  pFVar1 = (this->Tabs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddCurveToCurrentTab @ 147d82d10

bool __thiscall
UInterpCurveEdSetup::AddCurveToCurrentTab
          (UInterpCurveEdSetup *this,UObject *param_1,FString *param_2,FColor *param_3,
          FCurveEdEntry **param_4,bool param_5,bool param_6,bool param_7,float param_8,float param_9
          )

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  FCurveEdEntry *pFVar10;
  FCurveEdEntry *pFVar11;
  ulonglong uVar12;
  
  uVar6 = this->ActiveTab;
  lVar8 = (longlong)(int)uVar6;
  uVar9 = 0;
  uVar7 = 0;
  if ((int)uVar6 < (this->Tabs).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar1 = (this->Tabs).AllocatorInstance.Data;
  uVar12 = uVar9;
  if (0 < *(int *)(pFVar1 + lVar8 * 0x30 + 0x18)) {
    do {
      uVar7 = (uint)uVar9;
      uVar6 = 0;
      if ((int)uVar7 < *(int *)(pFVar1 + lVar8 * 0x30 + 0x18)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pUVar2 = (((FCurveEdEntry *)(*(longlong *)(pFVar1 + lVar8 * 0x30 + 0x10) + uVar12))->
               CurveObject).field0_0x0.DebugPtr;
      if (pUVar2 == (UObject *)0x0) {
        bVar4 = param_1 == (UObject *)0x0;
      }
      else {
        bVar4 = pUVar2 == param_1;
      }
      if (bVar4) {
        if (param_4 != (FCurveEdEntry **)0x0) {
          *param_4 = (FCurveEdEntry *)(*(longlong *)(pFVar1 + lVar8 * 0x30 + 0x10) + uVar12);
        }
        return false;
      }
      uVar9 = (ulonglong)(uVar7 + 1);
      uVar12 = uVar12 + 0x38;
    } while ((int)(uVar7 + 1) < *(int *)(pFVar1 + lVar8 * 0x30 + 0x18));
  }
  pFVar11 = (FCurveEdEntry *)0x0;
  uVar6 = *(uint *)(pFVar1 + lVar8 * 0x30 + 0x18);
  if (uVar6 == *(uint *)(pFVar1 + lVar8 * 0x30 + 0x1c)) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,(ForAnyElementType *)(pFVar1 + lVar8 * 0x30 + 0x10),
                       (int *)(pFVar1 + lVar8 * 0x30 + 0x1c));
    *(uint *)(pFVar1 + lVar8 * 0x30 + 0x18) = uVar6;
  }
  *(uint *)(pFVar1 + lVar8 * 0x30 + 0x18) = uVar6 + 1;
  uVar7 = 0;
  if ((int)uVar6 < (int)(uVar6 + 1)) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar10 = (FCurveEdEntry *)
            ((longlong)(int)uVar6 * 0x38 + *(longlong *)(pFVar1 + lVar8 * 0x30 + 0x10));
  if (pFVar10 != (FCurveEdEntry *)0x0) {
    (pFVar10->CurveObject).field0_0x0.DebugPtr = (UObject *)0x0;
    (pFVar10->CurveColor).field0_0x0.Bits = 0;
    (pFVar10->CurveName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar10->CurveName).Data.ArrayNum = 0;
    (pFVar10->CurveName).Data.ArrayMax = 0;
    pFVar10->bHideCurve = 0;
    pFVar10->bColorCurve = 0;
    pFVar10->bFloatingPointColorCurve = 0;
    pFVar10->bClamp = 0;
    pFVar10->ClampLow = 0.0;
    pFVar10->ClampHigh = 0.0;
    pFVar11 = pFVar10;
  }
  (pFVar11->CurveObject).field0_0x0.DebugPtr = (UObject *)0x0;
  pFVar11->CurveColor = (FColor_u_0)0x0;
  pFVar11->_padding_ = 0;
  (pFVar11->CurveName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar11->CurveName).Data.ArrayNum = 0;
  (pFVar11->CurveName).Data.ArrayMax = 0;
  pFVar11->bHideCurve = 0;
  pFVar11->bColorCurve = 0;
  pFVar11->bFloatingPointColorCurve = 0;
  pFVar11->bClamp = 0;
  pFVar11->ClampLow = 0.0;
  pFVar11->ClampHigh = 0.0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  (pFVar11->CurveObject).field0_0x0.DebugPtr = param_1;
  ::FString::operator=(&pFVar11->CurveName,param_2);
  (pFVar11->CurveColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_3->field0_0x0;
  pFVar11->bColorCurve = (uint)param_5;
  pFVar11->bFloatingPointColorCurve = (uint)param_6;
  pFVar11->bClamp = (uint)param_7;
  pFVar11->ClampLow = param_8;
  pFVar11->ClampHigh = param_9;
  if (param_4 != (FCurveEdEntry **)0x0) {
    *param_4 = pFVar11;
  }
  return true;
}

// ChangeCurveColor @ 147d8df00

void __thiscall
UInterpCurveEdSetup::ChangeCurveColor(UInterpCurveEdSetup *this,UObject *param_1,FColor *param_2)

{
  FColor_u_0 FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint local_res20;
  longlong local_48;
  
  local_res20 = 0;
  if (0 < (this->Tabs).ArrayNum) {
    local_48 = 0;
    do {
      uVar6 = 0;
      if ((int)local_res20 < (this->Tabs).ArrayNum) {
        uVar6 = ~local_res20 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Tabs).AllocatorInstance.Data;
      uVar6 = 0;
      if (0 < *(int *)(pFVar2 + local_48 + 0x18)) {
        lVar7 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar6 < *(int *)(pFVar2 + local_48 + 0x18)) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(UObject **)(lVar7 + *(longlong *)(pFVar2 + local_48 + 0x10)) == (UObject *)0x0) {
            bVar4 = param_1 == (UObject *)0x0;
          }
          else {
            bVar4 = *(UObject **)(lVar7 + *(longlong *)(pFVar2 + local_48 + 0x10)) == param_1;
          }
          if (bVar4) {
            FVar1 = param_2->field0_0x0;
            uVar5 = 0;
            if ((int)uVar6 < *(int *)(pFVar2 + local_48 + 0x18)) {
              uVar5 = ~uVar6 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            ((FColor_u_0 *)(*(longlong *)(pFVar2 + local_48 + 0x10) + 8 + lVar7))->_s_0 =
                 (FColor_u_0_s_0)FVar1;
          }
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x38;
        } while ((int)uVar6 < *(int *)(pFVar2 + local_48 + 0x18));
      }
      local_res20 = local_res20 + 1;
      local_48 = local_48 + 0x30;
    } while ((int)local_res20 < (this->Tabs).ArrayNum);
  }
  return;
}

// ChangeCurveName @ 147d8e0f0

void __thiscall
UInterpCurveEdSetup::ChangeCurveName(UInterpCurveEdSetup *this,UObject *param_1,FString *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  uint uVar8;
  longlong lVar9;
  uint local_res20;
  longlong local_48;
  
  local_res20 = 0;
  if (0 < (this->Tabs).ArrayNum) {
    local_48 = 0;
    do {
      uVar8 = 0;
      if ((int)local_res20 < (this->Tabs).ArrayNum) {
        uVar8 = ~local_res20 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Tabs).AllocatorInstance.Data;
      uVar8 = 0;
      if (0 < *(int *)(pFVar3 + local_48 + 0x18)) {
        lVar9 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar8 < *(int *)(pFVar3 + local_48 + 0x18)) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(UObject **)(lVar9 + *(longlong *)(pFVar3 + local_48 + 0x10)) == (UObject *)0x0) {
            bVar5 = param_1 == (UObject *)0x0;
          }
          else {
            bVar5 = *(UObject **)(lVar9 + *(longlong *)(pFVar3 + local_48 + 0x10)) == param_1;
          }
          if (bVar5) {
            uVar6 = 0;
            if ((int)uVar8 < *(int *)(pFVar3 + local_48 + 0x18)) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar7 = (FString *)(*(longlong *)(pFVar3 + local_48 + 0x10) + 0x10 + lVar9);
            if (pFVar7 != param_2) {
              iVar2 = (param_2->Data).ArrayNum;
              piVar1 = &(pFVar7->Data).ArrayMax;
              _Src = (param_2->Data).AllocatorInstance.Data;
              (pFVar7->Data).ArrayNum = iVar2;
              if ((iVar2 == 0) && (*piVar1 == 0)) {
                *piVar1 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar2,*piVar1,(ForAnyElementType *)pFVar7,iVar2,piVar1);
                if (iVar2 != 0) {
                  memcpy((pFVar7->Data).AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
                }
              }
            }
          }
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x38;
        } while ((int)uVar8 < *(int *)(pFVar3 + local_48 + 0x18));
      }
      local_res20 = local_res20 + 1;
      local_48 = local_48 + 0x30;
    } while ((int)local_res20 < (this->Tabs).ArrayNum);
  }
  return;
}

// CreateNewTab @ 147d943c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UInterpCurveEdSetup::CreateNewTab(UInterpCurveEdSetup *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  FCurveEdEntry *pFVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FString local_48;
  FCurveEdEntry *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_38 = (FCurveEdEntry *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (&local_48 != param_1) {
    uVar3 = (param_1->Data).ArrayNum;
    pFVar8 = (param_1->Data).AllocatorInstance.Data;
    local_48.Data.ArrayMax = 0;
    local_48.Data.ArrayNum = uVar3;
    if (uVar3 == 0) {
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar3,0,(ForAnyElementType *)&local_48,uVar3,&local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,pFVar8,(longlong)(int)uVar3 * 2);
    }
  }
  pFVar8 = (this->Tabs).AllocatorInstance.Data;
  local_28 = ___xmm_3f800000bf8000003f80000000000000;
  uStack_20 = _UNK_1519642a8;
  if ((pFVar8 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar8 + (longlong)(this->Tabs).ArrayMax * 0x30)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->Tabs).ArrayNum;
  piVar1 = &(this->Tabs).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->Tabs).AllocatorInstance,piVar1);
  }
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  pFVar8 = (this->Tabs).AllocatorInstance.Data;
  (this->Tabs).ArrayNum = iVar7 + 1;
  pFVar8 = pFVar8 + (longlong)iVar7 * 0x30;
  *(undefined8 *)&pFVar8->field_0x0 = 0;
  lVar9 = (longlong)local_48.Data.ArrayNum;
  *(int *)&pFVar8[8].field_0x0 = local_48.Data.ArrayNum;
  if (local_48.Data.ArrayNum == 0) {
    *(int *)(pFVar8 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)pFVar8,local_48.Data.ArrayNum,
               (int *)(pFVar8 + 0xc));
    memcpy(*(void **)&pFVar8->field_0x0,_Src.Data,lVar9 * 2);
  }
  pFVar5 = local_38;
  pFVar2 = pFVar8 + 0x10;
  *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
  iVar7 = (int)uStack_30;
  *(int *)&pFVar8[0x18].field_0x0 = (int)uStack_30;
  if ((int)uStack_30 == 0) {
    *(int *)(pFVar8 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,(int)uStack_30,0,(ForAnyElementType *)pFVar2,(int)uStack_30,
               (int *)(pFVar8 + 0x1c));
    ConstructItems<FCurveEdEntry,FCurveEdEntry,int>
              (*(FScriptContainerElement **)&pFVar2->field_0x0,pFVar5,iVar7);
  }
  *(undefined4 *)&pFVar8[0x20].field_0x0 = (undefined4)local_28;
  *(undefined4 *)(pFVar8 + 0x24) = local_28._4_4_;
  *(undefined4 *)&pFVar8[0x28].field_0x0 = (undefined4)uStack_20;
  *(undefined4 *)(pFVar8 + 0x2c) = uStack_20._4_4_;
  DestructItems<FCurveEdEntry,int>(local_38,(int)uStack_30);
  if (local_38 != (FCurveEdEntry *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// GetCurveEdInterfacePointer @ 147da53a0

FCurveEdInterface * __cdecl UInterpCurveEdSetup::GetCurveEdInterfacePointer(FCurveEdEntry *param_1)

{
  UObject *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  
  if ((param_1->CurveObject).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDistributionFloat_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar3);
    if ((bVar2) && (pUVar1 = (param_1->CurveObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0))
    {
      return (FCurveEdInterface *)(pUVar1 + 1);
    }
  }
  if ((param_1->CurveObject).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDistributionVector_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar3);
    if (bVar2) {
      pUVar1 = (param_1->CurveObject).field0_0x0.DebugPtr;
      pUVar4 = (UObject *)0x0;
      if (pUVar1 != (UObject *)0x0) {
        pUVar4 = pUVar1 + 1;
      }
      return (FCurveEdInterface *)pUVar4;
    }
  }
  return (FCurveEdInterface *)0x0;
}

// GetPrivateStaticClass @ 147da7c40

UClass * __cdecl UInterpCurveEdSetup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterpCurveEdSetup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InterpCurveEdSetup",
               &Z_Registration_Info_UClass_UInterpCurveEdSetup.InnerSingleton,
               StaticRegisterNativesUInterpCurveEdSetup,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterpCurveEdSetup>,
               InternalVTableHelperCtorCaller<UInterpCurveEdSetup>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterpCurveEdSetup.InnerSingleton;
}

// PostLoad @ 147db9170

void __thiscall UInterpCurveEdSetup::PostLoad(UInterpCurveEdSetup *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FObjectPtr_u_0 *this_00;
  void *_Dst;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  
  UObject::PostLoad((UObject *)this);
  uVar10 = 0;
  if (0 < (this->Tabs).ArrayNum) {
    lVar8 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->Tabs).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Tabs).AllocatorInstance.Data;
      uVar7 = *(int *)(pFVar1 + lVar8 + 0x18) - 1;
      if (-1 < (int)uVar7) {
        lVar9 = (longlong)(int)uVar7 * 0x38;
        do {
          uVar4 = 0;
          if ((int)uVar7 < *(int *)(pFVar1 + lVar8 + 0x18)) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
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
          this_00 = (FObjectPtr_u_0 *)(*(longlong *)(pFVar1 + lVar8 + 0x10) + lVar9);
          if (this_00->Handle == (UObject *)0x0) {
LAB_147db92bb:
            uVar4 = 0;
            if ((int)uVar7 < *(int *)(pFVar1 + lVar8 + 0x18)) {
              uVar4 = ~uVar7 >> 0x1f;
            }
            if ((uVar4 == 0) &&
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
            _Dst = (void *)(*(longlong *)(pFVar1 + lVar8 + 0x10) + lVar9);
            if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x10));
            }
            if (~uVar7 + *(int *)(pFVar1 + lVar8 + 0x18) != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + 0x38),
                      (longlong)(int)(~uVar7 + *(int *)(pFVar1 + lVar8 + 0x18)) * 0x38);
            }
            *(int *)(pFVar1 + lVar8 + 0x18) = *(int *)(pFVar1 + lVar8 + 0x18) + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,(ForAnyElementType *)(pFVar1 + lVar8 + 0x10),
                       *(int *)(pFVar1 + lVar8 + 0x18),(int *)(pFVar1 + lVar8 + 0x1c));
          }
          else {
            pUVar5 = Z_Construct_UClass_UDistributionFloat_NoRegister();
            bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
            if ((!bVar3) || (pUVar6 = this_00->Handle, pUVar6 == (UObject *)0x0)) {
              if (this_00->Handle != (UObject *)0x0) {
                pUVar5 = Z_Construct_UClass_UDistributionVector_NoRegister();
                bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
                if ((bVar3) && (pUVar6 = this_00->Handle, pUVar6 != (UObject *)0x0))
                goto LAB_147db92b1;
              }
              goto LAB_147db92bb;
            }
LAB_147db92b1:
            if (pUVar6 == (UObject *)0xffffffffffffffd8) goto LAB_147db92bb;
          }
          lVar9 = lVar9 + -0x38;
          uVar7 = uVar7 - 1;
        } while (-1 < (int)uVar7);
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x30;
    } while ((int)uVar10 < (this->Tabs).ArrayNum);
  }
  return;
}

// RemoveCurve @ 147dbd2f0

void __thiscall UInterpCurveEdSetup::RemoveCurve(UInterpCurveEdSetup *this,UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *_Dst;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong local_res18;
  
  uVar8 = 0;
  if (0 < (this->Tabs).ArrayNum) {
    local_res18 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->Tabs).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Tabs).AllocatorInstance.Data;
      uVar7 = *(int *)(pFVar1 + local_res18 + 0x18) - 1;
      if (-1 < (int)uVar7) {
        lVar9 = (longlong)(int)uVar7 * 0x38;
        do {
          uVar6 = ~uVar7 >> 0x1f;
          uVar4 = 0;
          if ((int)uVar7 < *(int *)(pFVar1 + local_res18 + 0x18)) {
            uVar4 = uVar6;
          }
          if ((uVar4 == 0) &&
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
          if (*(UObject **)(lVar9 + *(longlong *)(pFVar1 + local_res18 + 0x10)) == (UObject *)0x0) {
            bVar3 = param_1 == (UObject *)0x0;
          }
          else {
            bVar3 = *(UObject **)(lVar9 + *(longlong *)(pFVar1 + local_res18 + 0x10)) == param_1;
          }
          if (bVar3) {
            uVar4 = 0;
            if ((int)uVar7 < *(int *)(pFVar1 + local_res18 + 0x18)) {
              uVar4 = uVar6;
            }
            if ((uVar4 == 0) &&
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
            _Dst = (void *)(*(longlong *)(pFVar1 + local_res18 + 0x10) + lVar9);
            if (*(void **)((longlong)_Dst + 0x10) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x10));
            }
            iVar5 = *(int *)(pFVar1 + local_res18 + 0x18) + ~uVar7;
            if (iVar5 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + 0x38),(longlong)iVar5 * 0x38);
            }
            *(int *)(pFVar1 + local_res18 + 0x18) = *(int *)(pFVar1 + local_res18 + 0x18) + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,(ForAnyElementType *)(pFVar1 + local_res18 + 0x10),
                       *(int *)(pFVar1 + local_res18 + 0x18),(int *)(pFVar1 + local_res18 + 0x1c));
          }
          lVar9 = lVar9 + -0x38;
          uVar7 = uVar7 - 1;
        } while (-1 < (int)uVar7);
      }
      local_res18 = local_res18 + 0x30;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (this->Tabs).ArrayNum);
  }
  return;
}

// RemoveTab @ 147dbd750

void __thiscall UInterpCurveEdSetup::RemoveTab(UInterpCurveEdSetup *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar6 = 0;
  if (0 < (this->Tabs).ArrayNum) {
    lVar8 = 0;
    do {
      uVar9 = ~uVar6 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar6 < (this->Tabs).ArrayNum) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = (this->Tabs).AllocatorInstance.Data;
      iVar5 = (param_1->Data).ArrayNum;
      iVar1 = *(int *)(pFVar7 + lVar8 + 8);
      if (iVar1 == iVar5) {
        if (iVar1 < 2) goto LAB_147dbd82b;
        iVar5 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pFVar7 + lVar8),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar3 = iVar5 == 0;
      }
      else {
        bVar3 = iVar1 + iVar5 == 1;
      }
      if (bVar3) {
LAB_147dbd82b:
        uVar4 = 0;
        if ((int)uVar6 < (this->Tabs).ArrayNum) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar7 = (this->Tabs).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30;
        DestructItems<FCurveEdEntry,int>(*(FCurveEdEntry **)(pFVar7 + 0x10),*(int *)(pFVar7 + 0x18))
        ;
        if (*(void **)(pFVar7 + 0x10) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar7 + 0x10));
        }
        if (*(void **)pFVar7 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar7);
        }
        iVar5 = (this->Tabs).ArrayNum + ~uVar6;
        if (iVar5 != 0) {
          memmove(pFVar7,pFVar7 + 0x30,(longlong)iVar5 * 0x30);
        }
        iVar5 = (this->Tabs).ArrayNum + -1;
        (this->Tabs).ArrayNum = iVar5;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&(this->Tabs).AllocatorInstance,iVar5,&(this->Tabs).ArrayMax);
        return;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x30;
    } while ((int)uVar6 < (this->Tabs).ArrayNum);
  }
  return;
}

// ReplaceCurve @ 147dbdd80

void __thiscall
UInterpCurveEdSetup::ReplaceCurve(UInterpCurveEdSetup *this,UObject *param_1,UObject *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong local_res10;
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("RemoveCurve",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InterpCurveEdSetup.cpp"
                         ,0x74,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_2 == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AddCurve",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InterpCurveEdSetup.cpp"
                         ,0x75,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = 0;
  if (0 < (this->Tabs).ArrayNum) {
    local_res10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Tabs).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->Tabs).AllocatorInstance.Data;
      uVar6 = 0;
      if (0 < *(int *)(pFVar1 + local_res10 + 0x18)) {
        lVar8 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar6 < *(int *)(pFVar1 + local_res10 + 0x18)) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(UObject **)(lVar8 + *(longlong *)(pFVar1 + local_res10 + 0x10)) == (UObject *)0x0) {
            bVar4 = param_1 == (UObject *)0x0;
          }
          else {
            bVar4 = *(UObject **)(lVar8 + *(longlong *)(pFVar1 + local_res10 + 0x10)) == param_1;
          }
          if (bVar4) {
            uVar5 = 0;
            if ((int)uVar6 < *(int *)(pFVar1 + local_res10 + 0x18)) {
              uVar5 = ~uVar6 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar2 = *(longlong *)(pFVar1 + local_res10 + 0x10);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(param_2);
            }
            *(UObject **)(lVar2 + lVar8) = param_2;
          }
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 0x38;
        } while ((int)uVar6 < *(int *)(pFVar1 + local_res10 + 0x18));
      }
      local_res10 = local_res10 + 0x30;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->Tabs).ArrayNum);
  }
  return;
}

// ResetTabs @ 147dbe310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UInterpCurveEdSetup::ResetTabs(UInterpCurveEdSetup *this)

{
  TArray<FCurveEdTab,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  FCurveEdEntry *pFVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FString local_38;
  FCurveEdEntry *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  pTVar1 = &this->Tabs;
  DestructItems<FCurveEdTab,int>
            ((FCurveEdTab *)(this->Tabs).AllocatorInstance.Data,(this->Tabs).ArrayNum);
  piVar2 = &(this->Tabs).ArrayMax;
  (this->Tabs).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_28 = (FCurveEdEntry *)0x0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  ::FString::operator=(&local_38,L"Default");
  pFVar8 = (pTVar1->AllocatorInstance).Data;
  local_18 = ___xmm_3f800000bf8000003f80000000000000;
  uStack_10 = _UNK_1519642a8;
  if ((pFVar8 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar8 + (longlong)*piVar2 * 0x30)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->Tabs).ArrayNum;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,piVar2);
  }
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  (this->Tabs).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
  *(undefined8 *)pFVar8 = 0;
  iVar7 = local_38.Data.ArrayNum;
  *(int *)(pFVar8 + 8) = iVar7;
  if (iVar7 == 0) {
    *(int *)(pFVar8 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)pFVar8,iVar7,(int *)(pFVar8 + 0xc));
    memcpy(*(void **)pFVar8,_Src.Data,(longlong)iVar7 * 2);
  }
  pFVar5 = local_28;
  pFVar3 = pFVar8 + 0x10;
  *(FScriptContainerElement **)pFVar3 = (FScriptContainerElement *)0x0;
  iVar7 = (int)uStack_20;
  *(int *)(pFVar8 + 0x18) = iVar7;
  if (iVar7 == 0) {
    *(int *)(pFVar8 + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar7,0,(ForAnyElementType *)pFVar3,iVar7,(int *)(pFVar8 + 0x1c));
                    /* WARNING: Load size is inaccurate */
    ConstructItems<FCurveEdEntry,FCurveEdEntry,int>(*pFVar3,pFVar5,iVar7);
  }
  *(undefined4 *)(pFVar8 + 0x20) = (undefined4)local_18;
  *(undefined4 *)(pFVar8 + 0x24) = local_18._4_4_;
  *(undefined4 *)(pFVar8 + 0x28) = (undefined4)uStack_10;
  *(undefined4 *)(pFVar8 + 0x2c) = uStack_10._4_4_;
  DestructItems<FCurveEdEntry,int>(local_28,(int)uStack_20);
  if (local_28 != (FCurveEdEntry *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// ShowingCurve @ 147dc2600

bool __thiscall UInterpCurveEdSetup::ShowingCurve(UInterpCurveEdSetup *this,UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar9 = 0;
  if (0 < (this->Tabs).ArrayNum) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->Tabs).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (this->Tabs).AllocatorInstance.Data;
      uVar6 = 0;
      if (0 < *(int *)(pFVar1 + lVar8 + 0x18)) {
        lVar7 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar6 < *(int *)(pFVar1 + lVar8 + 0x18)) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if (*(UObject **)(lVar7 + *(longlong *)(pFVar1 + lVar8 + 0x10)) == (UObject *)0x0) {
            bVar3 = param_1 == (UObject *)0x0;
          }
          else {
            bVar3 = *(UObject **)(lVar7 + *(longlong *)(pFVar1 + lVar8 + 0x10)) == param_1;
          }
          if (bVar3) {
            return true;
          }
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x38;
        } while ((int)uVar6 < *(int *)(pFVar1 + lVar8 + 0x18));
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x30;
    } while ((int)uVar9 < (this->Tabs).ArrayNum);
  }
  return false;
}

// StaticRegisterNativesUInterpCurveEdSetup @ 147dc4080

void __cdecl UInterpCurveEdSetup::StaticRegisterNativesUInterpCurveEdSetup(void)

{
  return;
}

