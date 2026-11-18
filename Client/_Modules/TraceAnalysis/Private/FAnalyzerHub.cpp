// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 15

// operator() @ 14d394520

int __thiscall
`UE::Trace::FAnalyzerHub::OnNewType'::__l2::<lambda_1>::operator()(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  
  lVar3 = *(longlong *)this;
  iVar7 = 0;
  uVar2 = *(uint *)(lVar3 + 0x18);
  uVar8 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar8 >> 1) + iVar7;
      if (*(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar1 * 0xc) < param_1) {
        iVar7 = iVar1 + (uVar8 & 1);
      }
      uVar5 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar5 != 0);
  }
  if (iVar7 < (int)uVar2) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    if (*(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar7 * 0xc) == param_1) {
      return iVar7;
    }
  }
  return -1;
}

// operator() @ 14d394670

int __thiscall
`UE::Trace::FAnalyzerHub::BuildRoutes'::__l2::<lambda_2>::operator()(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  
  lVar3 = *(longlong *)this;
  iVar7 = 0;
  uVar2 = *(uint *)(lVar3 + 0x18);
  uVar8 = uVar2;
  if (0 < (int)uVar2) {
    do {
      iVar1 = (uVar8 >> 1) + iVar7;
      if (*(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar1 * 0xc) < param_1) {
        iVar7 = iVar1 + (uVar8 & 1);
      }
      uVar5 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar5 != 0);
  }
  if (iVar7 < (int)uVar2) {
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
    if (*(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar7 * 0xc) == param_1) {
      return iVar7;
    }
  }
  return -1;
}

// AddRoute @ 14d3974d0

void __thiscall
UE::Trace::FAnalyzerHub::AddRoute
          (FAnalyzerHub *this,ushort param_1,ushort param_2,char *param_3,char *param_4,bool param_5
          )

{
  int *piVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  
  if (((this->Analyzers).ArrayNum <= (int)(uint)param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnalyzerIndex < Analyzers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                         ,0x6f2,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar8 = *param_3;
  uVar10 = 0;
  if ((bVar8 == 0) || (*param_4 == '\0')) {
    uVar9 = 0x811c9dc5;
    if (bVar8 == 0) goto LAB_14d397588;
  }
  else {
    uVar9 = 0x811c9dc5;
    uVar10 = 0x811c9dc5;
    pbVar11 = (byte *)param_3;
    bVar2 = bVar8;
    do {
      pbVar11 = pbVar11 + 1;
      uVar10 = (bVar2 ^ uVar10) * 0x1000193;
      bVar2 = *pbVar11;
    } while (bVar2 != 0);
  }
  do {
    param_3 = param_3 + 1;
    uVar9 = (bVar8 ^ uVar9) * 0x1000193;
    bVar8 = *param_3;
  } while (*param_3 != 0);
LAB_14d397588:
  bVar8 = *param_4;
  while (bVar8 != 0) {
    param_4 = param_4 + 1;
    uVar9 = (bVar8 ^ uVar9) * 0x1000193;
    bVar8 = *param_4;
  }
  iVar6 = (this->Routes).ArrayNum;
  piVar1 = &(this->Routes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->Routes).AllocatorInstance,piVar1);
  }
  (this->Routes).ArrayNum = iVar6 + 1;
  lVar7 = (longlong)iVar6;
  pFVar3 = (this->Routes).AllocatorInstance.Data;
  *(uint *)(pFVar3 + lVar7 * 0xc) = uVar9;
  *(uint *)(pFVar3 + lVar7 * 0xc + 8) = uVar10;
  *(ushort *)(pFVar3 + lVar7 * 0xc + 6) = param_2;
  *(ushort *)(pFVar3 + lVar7 * 0xc + 4) = ~(ushort)!param_5 << 0xf | param_1 & 0x7fff;
  return;
}

// BuildRoutes @ 14d398120

void __thiscall UE::Trace::FAnalyzerHub::BuildRoutes(FAnalyzerHub *this)

{
  ushort uVar1;
  IAnalyzer *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  <lambda_1> local_res8 [8];
  undefined ***local_res10;
  FAnalyzerHub *local_68;
  <lambda_1> *local_60;
  undefined **local_58;
  FAnalyzerHub *local_50;
  short local_48;
  
  uVar1 = (ushort)(this->Analyzers).ArrayNum;
  local_58 = &`UE::Trace::FAnalyzerHub::BuildRoutes'::`2'::<unnamed-type-Builder>::_vftable_;
  uVar9 = 0;
  local_res10 = &local_58;
  uVar11 = uVar9;
  local_50 = this;
  if (uVar1 != 0) {
    do {
      iVar6 = (this->Routes).ArrayNum;
      sVar8 = (short)uVar9;
      local_48 = sVar8;
      if (((this->Analyzers).ArrayNum <= (int)uVar9) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar2 = *(IAnalyzer **)((this->Analyzers).AllocatorInstance.Data + uVar11 * 8);
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res10);
      if (iVar6 == (this->Routes).ArrayNum) {
        RetireAnalyzer(this,pIVar2);
      }
      uVar9 = (ulonglong)(ushort)(sVar8 + 1U);
      uVar11 = uVar11 + 1;
    } while ((ushort)(sVar8 + 1U) < uVar1);
  }
  AlgoImpl::
  IntroSortInternal<UE::Trace::FAnalyzerHub::FRoute,int,_UE::Trace::FAnalyzerHub::BuildRoutes_::__l2::<lambda_1>,TLess<void>_>
            ((FRoute *)(this->Routes).AllocatorInstance.Data,(this->Routes).ArrayNum,local_res8[0],
             (TLess<void>)local_res8[0]);
  local_60 = local_res8;
  local_68 = this;
  iVar6 = `UE::Trace::FAnalyzerHub::BuildRoutes'::__l2::<lambda_2>::operator()(&local_68,0x811c9dc5)
  ;
  pFVar13 = (this->Routes).AllocatorInstance.Data;
  if (*(uint *)(pFVar13 + 8) == 0) {
    uVar5 = 0xffff;
  }
  else {
    iVar7 = `UE::Trace::FAnalyzerHub::BuildRoutes'::__l2::<lambda_2>::operator()
                      (&local_68,*(uint *)(pFVar13 + 8));
    if (iVar7 < 0) {
      iVar7 = iVar6;
    }
    uVar5 = (undefined2)iVar7;
  }
  *(undefined2 *)(pFVar13 + 10) = uVar5;
  *(undefined2 *)(pFVar13 + 8) = 1;
  uVar1 = (ushort)(this->Routes).ArrayNum;
  if (1 < uVar1) {
    lVar12 = 0xc;
    uVar11 = (ulonglong)(ushort)(uVar1 - 1);
    do {
      pFVar10 = (this->Routes).AllocatorInstance.Data + lVar12;
      if (*(int *)pFVar10 == *(int *)pFVar13) {
        *(short *)(pFVar13 + 8) = *(short *)(pFVar13 + 8) + 1;
        pFVar10 = pFVar13;
      }
      else {
        if (*(uint *)(pFVar10 + 8) == 0) {
          uVar5 = 0xffff;
        }
        else {
          iVar7 = `UE::Trace::FAnalyzerHub::BuildRoutes'::__l2::<lambda_2>::operator()
                            (&local_68,*(uint *)(pFVar10 + 8));
          if (iVar7 < 0) {
            iVar7 = iVar6;
          }
          uVar5 = (undefined2)iVar7;
        }
        *(undefined2 *)(pFVar10 + 10) = uVar5;
        *(undefined2 *)(pFVar10 + 8) = 1;
      }
      lVar12 = lVar12 + 0xc;
      uVar11 = uVar11 - 1;
      pFVar13 = pFVar10;
    } while (uVar11 != 0);
  }
  return;
}

// End @ 14d39b6f0

void __thiscall UE::Trace::FAnalyzerHub::End(FAnalyzerHub *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Analyzers).AllocatorInstance.Data;
  iVar2 = (this->Analyzers).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Analyzers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Trace::IAnalyzer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong **)pFVar3 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar3 + 0x10))();
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// GetActiveAnalyzerNum @ 14d39c550

uint __thiscall UE::Trace::FAnalyzerHub::GetActiveAnalyzerNum(FAnalyzerHub *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Analyzers).AllocatorInstance.Data;
  iVar2 = (this->Analyzers).ArrayNum;
  uVar4 = 0;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Analyzers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Trace::IAnalyzer_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    uVar4 = uVar4 + (*(longlong *)pFVar3 != 0);
    pFVar3 = pFVar3 + 8;
  }
  return uVar4;
}

// GetRouteIndex @ 14d39d2f0

int __thiscall UE::Trace::FAnalyzerHub::GetRouteIndex(FAnalyzerHub *this,FDispatch *param_1)

{
  ushort uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_short> FVar6;
  
  uVar2 = (this->TypeToRoute).ArrayNum;
  uVar1 = param_1->Uid;
  if (uVar2 <= uVar1) {
    return -1;
  }
  if ((int)uVar2 <= (int)(uint)uVar1) {
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
  FVar6 = (this->TypeToRoute).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<unsigned_short>)0x0) {
    FVar6 = (ForElementType<unsigned_short>)&this->TypeToRoute;
  }
  return *(ushort *)((longlong)FVar6 + (ulonglong)uVar1 * 2) - 1;
}

// OnEvent @ 14d3a3b80

void __thiscall
UE::Trace::FAnalyzerHub::OnEvent
          (FAnalyzerHub *this,FDispatch *param_1,EStyle param_2,FOnEventContext *param_3)

{
  ushort uVar1;
  short sVar2;
  FScriptContainerElement *pFVar3;
  IAnalyzer *pIVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  ForElementType<unsigned_short> FVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  
  uVar8 = (this->TypeToRoute).ArrayNum;
  uVar1 = param_1->Uid;
  if (uVar1 < uVar8) {
    if (((int)uVar8 <= (int)(uint)uVar1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar9 = (this->TypeToRoute).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_short>)0x0) {
      FVar9 = (ForElementType<unsigned_short>)&this->TypeToRoute;
    }
    uVar8 = *(ushort *)((longlong)FVar9 + (ulonglong)uVar1 * 2) - 1;
    if ((-1 < (int)uVar8) && (uVar8 < (uint)(this->Routes).ArrayNum)) {
      pFVar3 = (this->Routes).AllocatorInstance.Data;
      pFVar11 = pFVar3 + (ulonglong)uVar8 * 0xc;
      do {
        sVar2 = *(short *)(pFVar11 + 10);
        iVar10 = (int)*(short *)(pFVar11 + 8);
        if (*(short *)(pFVar11 + 8) != 0) {
          pFVar11 = pFVar11 + 6;
          do {
            iVar10 = iVar10 + -1;
            if (*(ushort *)(pFVar11 + -2) >> 0xf == (ushort)(param_2 != Normal)) {
              uVar8 = *(ushort *)(pFVar11 + -2) & 0x7fff;
              if (((this->Analyzers).ArrayNum <= (int)uVar8) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pIVar4 = *(IAnalyzer **)
                        ((this->Analyzers).AllocatorInstance.Data + (ulonglong)uVar8 * 8);
              if ((pIVar4 != (IAnalyzer *)0x0) &&
                 (cVar7 = (**(code **)((longlong)*pIVar4 + 0x28))
                                    (pIVar4,*(undefined2 *)pFVar11,param_2,param_3), cVar7 == '\0'))
              {
                RetireAnalyzer(this,pIVar4);
              }
            }
            pFVar11 = pFVar11 + 0xc;
          } while (iVar10 != 0);
        }
        pFVar11 = pFVar3 + (longlong)sVar2 * 0xc;
      } while (pFVar3 <= pFVar3 + (longlong)sVar2 * 0xc);
    }
  }
  return;
}

// OnNewType @ 14d3a4190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Trace::FAnalyzerHub::OnNewType(FAnalyzerHub *this,FDispatch *param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  FScriptContainerElement *pFVar4;
  IAnalyzer *pIVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  byte *pbVar10;
  ForElementType<unsigned_short> FVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FAnalyzerHub *local_res8;
  
  local_res8 = this;
  uVar9 = `UE::Trace::FAnalyzerHub::OnNewType'::__l2::<lambda_1>::operator()
                    (&local_res8,param_1->Hash);
  if ((int)uVar9 < 0) {
    uVar9 = 0x811c9dc5;
    pbVar10 = (byte *)((longlong)&param_1->Hash + (ulonglong)param_1->LoggerNameOffset);
    bVar1 = *pbVar10;
    while (bVar1 != 0) {
      pbVar10 = pbVar10 + 1;
      uVar9 = (bVar1 ^ uVar9) * 0x1000193;
      bVar1 = *pbVar10;
    }
    uVar9 = `UE::Trace::FAnalyzerHub::OnNewType'::__l2::<lambda_1>::operator()(&local_res8,uVar9);
    if ((int)uVar9 < 0) {
      uVar9 = `UE::Trace::FAnalyzerHub::OnNewType'::__l2::<lambda_1>::operator()
                        (&local_res8,0x811c9dc5);
    }
  }
  uVar2 = param_1->Uid;
  if ((ushort)(this->TypeToRoute).ArrayNum <= uVar2) {
    TArray<unsigned_short,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
              (&this->TypeToRoute,uVar2 + 0x20,Default);
  }
  if (((this->TypeToRoute).ArrayNum <= (int)(uint)uVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar11 = (this->TypeToRoute).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<unsigned_short>)0x0) {
    FVar11 = (ForElementType<unsigned_short>)&this->TypeToRoute;
  }
  *(short *)((longlong)FVar11 + (ulonglong)uVar2 * 2) = (short)uVar9 + 1;
  if ((-1 < (int)uVar9) && (uVar9 < (uint)(this->Routes).ArrayNum)) {
    pFVar4 = (this->Routes).AllocatorInstance.Data;
    pFVar13 = pFVar4 + (ulonglong)uVar9 * 0xc;
    do {
      sVar3 = *(short *)(pFVar13 + 10);
      iVar12 = (int)*(short *)(pFVar13 + 8);
      if (*(short *)(pFVar13 + 8) != 0) {
        pFVar13 = pFVar13 + 6;
        do {
          iVar12 = iVar12 + -1;
          if (-1 < (short)*(ushort *)(pFVar13 + -2)) {
            uVar9 = *(ushort *)(pFVar13 + -2) & 0x7fff;
            if (((this->Analyzers).ArrayNum <= (int)uVar9) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pIVar5 = *(IAnalyzer **)
                      ((this->Analyzers).AllocatorInstance.Data + (ulonglong)uVar9 * 8);
            if ((pIVar5 != (IAnalyzer *)0x0) &&
               (cVar8 = (**(code **)((longlong)*pIVar5 + 0x20))
                                  (pIVar5,*(undefined2 *)pFVar13,param_1), cVar8 == '\0')) {
              RetireAnalyzer(this,pIVar5);
            }
          }
          pFVar13 = pFVar13 + 0xc;
        } while (iVar12 != 0);
      }
      pFVar13 = pFVar4 + (longlong)sVar3 * 0xc;
    } while (pFVar4 <= pFVar4 + (longlong)sVar3 * 0xc);
  }
  return;
}

// OnThreadInfo @ 14d3a4530

void __thiscall UE::Trace::FAnalyzerHub::OnThreadInfo(FAnalyzerHub *this,FInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Analyzers).AllocatorInstance.Data;
  iVar2 = (this->Analyzers).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Analyzers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Trace::IAnalyzer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    plVar3 = *(longlong **)pFVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// RetireAnalyzer @ 14d3a6920

void __thiscall UE::Trace::FAnalyzerHub::RetireAnalyzer(FAnalyzerHub *this,IAnalyzer *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = (this->Analyzers).ArrayNum;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Analyzers).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(IAnalyzer **)((this->Analyzers).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) ==
          param_1) {
        (**(code **)((longlong)*param_1 + 0x10))(param_1);
        uVar4 = 0;
        if ((int)uVar5 < (this->Analyzers).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(undefined8 *)((this->Analyzers).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) = 0;
        return;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  return;
}

// RouteAllEvents @ 14d3a6a30

void __thiscall
`UE::Trace::FAnalyzerHub::BuildRoutes'::__l2::<unnamed-type-Builder>::RouteAllEvents
          (void *this,ushort param_1,bool param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  lVar3 = *(longlong *)((longlong)this + 8);
  uVar2 = *(ushort *)((longlong)this + 0x10);
  if (*(int *)(lVar3 + 8) <= (int)(uint)uVar2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AnalyzerIndex < Analyzers.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceAnalysis\\Private\\Analysis\\Engine.cpp"
                       ,0x6f2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)(lVar3 + 0x18);
  if (iVar6 == *(int *)(lVar3 + 0x1c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)(lVar3 + 0x10),(int *)(lVar3 + 0x1c));
  }
  *(int *)(lVar3 + 0x18) = iVar6 + 1;
  lVar3 = *(longlong *)(lVar3 + 0x10);
  *(ushort *)(lVar3 + 6 + (longlong)iVar6 * 0xc) = param_1;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar6 * 0xc);
  *puVar1 = 0x811c9dc5;
  puVar1[2] = 0;
  *(ushort *)(puVar1 + 1) = ~(ushort)!param_2 << 0xf | uVar2 & 0x7fff;
  return;
}

// RouteEvent @ 14d3a6b00

void __thiscall
`UE::Trace::FAnalyzerHub::BuildRoutes'::__l2::<unnamed-type-Builder>::RouteEvent
          (void *this,ushort param_1,char *param_2,char *param_3,bool param_4)

{
  UE::Trace::FAnalyzerHub::AddRoute
            (*(FAnalyzerHub **)((longlong)this + 8),*(ushort *)((longlong)this + 0x10),param_1,
             param_2,param_3,param_4);
  return;
}

// RouteLoggerEvents @ 14d3a6b40

void __thiscall
`UE::Trace::FAnalyzerHub::BuildRoutes'::__l2::<unnamed-type-Builder>::RouteLoggerEvents
          (void *this,ushort param_1,char *param_2,bool param_3)

{
  UE::Trace::FAnalyzerHub::AddRoute
            (*(FAnalyzerHub **)((longlong)this + 8),*(ushort *)((longlong)this + 0x10),param_1,
             param_2,"",param_3);
  return;
}

// SetAnalyzers @ 14d3a7aa0

void __thiscall
UE::Trace::FAnalyzerHub::SetAnalyzers
          (FAnalyzerHub *this,TArray<UE::Trace::IAnalyzer_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != (FAnalyzerHub *)param_1) {
    pFVar1 = (this->Analyzers).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Analyzers).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Analyzers).ArrayNum = param_1->ArrayNum;
    (this->Analyzers).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  BuildRoutes(this);
  return;
}

