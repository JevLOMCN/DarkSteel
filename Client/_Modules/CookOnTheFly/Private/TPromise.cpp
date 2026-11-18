// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 1

// SetValue @ 14311ffb0

void __thiscall
TPromise<UE::Cook::FCookOnTheFlyResponse>::SetValue
          (TPromise<UE::Cook::FCookOnTheFlyResponse> *this,FCookOnTheFlyResponse *param_1)

{
  int iVar1;
  TFutureState<UE::Cook::FCookOnTheFlyResponse> *this_00;
  void *_Src;
  code *pcVar2;
  uchar *puVar3;
  uchar *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  bool bVar20;
  
  if ((this->State).Object == (TFutureState<UE::Cook::FCookOnTheFlyResponse> *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("State.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0x283,L"");
    if (bVar20) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this->State).Object == (TFutureState<UE::Cook::FCookOnTheFlyResponse> *)0x0) {
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar20) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  this_00 = (this->State).Object;
  if (*(TAtomic<bool> *)&this_00->field_0x68 != (TAtomic<bool>)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsComplete()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                        ,0xcd,L"");
    if (bVar20) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = param_1->field_0x1;
  uVar6 = param_1->field_0x2;
  uVar7 = param_1->field_0x3;
  uVar8 = param_1->field_0x4;
  uVar9 = param_1->field_0x5;
  uVar10 = param_1->field_0x6;
  uVar11 = param_1->field_0x7;
  uVar12 = param_1->field_0x8;
  uVar13 = param_1->field_0x9;
  uVar14 = param_1->field_0xa;
  uVar15 = param_1->field_0xb;
  uVar16 = param_1->field_0xc;
  uVar17 = param_1->field_0xd;
  uVar18 = param_1->field_0xe;
  uVar19 = param_1->field_0xf;
  puVar3 = (this_00->Result).Pad + 0x18;
  puVar4 = (this_00->Result).Pad + 0x24;
  (this_00->Result).Pad[0] = param_1->field_0x0;
  (this_00->Result).Pad[1] = uVar5;
  (this_00->Result).Pad[2] = uVar6;
  (this_00->Result).Pad[3] = uVar7;
  (this_00->Result).Pad[4] = uVar8;
  (this_00->Result).Pad[5] = uVar9;
  (this_00->Result).Pad[6] = uVar10;
  (this_00->Result).Pad[7] = uVar11;
  (this_00->Result).Pad[8] = uVar12;
  (this_00->Result).Pad[9] = uVar13;
  (this_00->Result).Pad[10] = uVar14;
  (this_00->Result).Pad[0xb] = uVar15;
  (this_00->Result).Pad[0xc] = uVar16;
  (this_00->Result).Pad[0xd] = uVar17;
  (this_00->Result).Pad[0xe] = uVar18;
  (this_00->Result).Pad[0xf] = uVar19;
  uVar5 = param_1->field_0x11;
  uVar6 = param_1->field_0x12;
  uVar7 = param_1->field_0x13;
  uVar8 = param_1->field_0x14;
  uVar9 = param_1->field_0x15;
  uVar10 = param_1->field_0x16;
  uVar11 = param_1->field_0x17;
  (this_00->Result).Pad[0x10] = param_1->field_0x10;
  (this_00->Result).Pad[0x11] = uVar5;
  (this_00->Result).Pad[0x12] = uVar6;
  (this_00->Result).Pad[0x13] = uVar7;
  (this_00->Result).Pad[0x14] = uVar8;
  (this_00->Result).Pad[0x15] = uVar9;
  (this_00->Result).Pad[0x16] = uVar10;
  (this_00->Result).Pad[0x17] = uVar11;
  *(FScriptContainerElement **)puVar3 = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)&param_1->field_0x20;
  _Src = *(void **)&param_1->field_0x18;
  *(int *)((this_00->Result).Pad + 0x20) = iVar1;
  if (iVar1 == 0) {
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,0,(ForAnyElementType *)puVar3,iVar1,(int *)puVar4);
    memcpy(*(FScriptContainerElement **)puVar3,_Src,(longlong)iVar1);
  }
  FFutureState::MarkComplete((FFutureState *)this_00);
  return;
}

