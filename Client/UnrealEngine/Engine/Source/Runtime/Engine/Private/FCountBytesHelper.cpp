// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// CountBytes @ 1484cbac0

void __thiscall `FRepStateStaticBuffer::CountBytes'::__l2::FCountBytesHelper::CountBytes(void *this)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FRepParentCmd *pFVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  uint local_res8;
  longlong local_res20;
  longlong local_68;
  
  plVar11 = *(longlong **)((longlong)this + 0x10);
  local_res20 = 0;
  local_res8 = 0;
  if (0 < (int)plVar11[1]) {
    local_68 = 0;
    lVar10 = *(longlong *)(*(longlong *)this + 0x98);
    do {
      uVar9 = 0;
      if ((int)local_res8 < (int)plVar11[1]) {
        uVar9 = ~local_res8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = (FRepParentCmd *)(*plVar11 + local_68);
      lVar2 = *(longlong *)((longlong)this + 8);
      uVar1 = pFVar8->CmdEnd;
      uVar9 = (uint)pFVar8->CmdStart;
      if ((uint)pFVar8->CmdStart < (uint)uVar1) {
        do {
          plVar11 = *(longlong **)((longlong)this + 0x18);
          uVar6 = 0;
          if ((int)uVar9 < (int)plVar11[1]) {
            uVar6 = ~uVar9 >> 0x1f;
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
          lVar12 = (longlong)(int)uVar9 * 0x20 + *plVar11;
          if (*(char *)(lVar12 + 0x1c) == '\0') {
            plVar11 = (longlong *)(*(int *)(lVar12 + 0x10) + lVar2);
            (**(code **)(**(longlong **)this + 0x10))
                      (*(longlong **)this,
                       (longlong)(int)plVar11[1] * (ulonglong)*(ushort *)(lVar12 + 10),
                       (longlong)*(int *)((longlong)plVar11 + 0xc) *
                       (ulonglong)*(ushort *)(lVar12 + 10));
            lVar3 = *plVar11;
            iVar7 = 0;
            if (0 < (int)plVar11[1]) {
              do {
                CountBytes_Command(this,pFVar8,uVar9 + 1,*(ushort *)(lVar12 + 8) - 1,
                                   (uchar *)((int)((uint)*(ushort *)(lVar12 + 10) * iVar7) + lVar3))
                ;
                iVar7 = iVar7 + 1;
              } while (iVar7 < (int)plVar11[1]);
            }
            uVar9 = *(ushort *)(lVar12 + 8) - 1;
          }
          else if (*(char *)(lVar12 + 0x1c) == '\x13') {
            (**(code **)(**(longlong **)this + 0x10))
                      (*(longlong **)this,
                       (longlong)*(int *)((longlong)*(int *)(lVar12 + 0x10) + 8 + lVar2) * 2,
                       (longlong)*(int *)((longlong)*(int *)(lVar12 + 0x10) + 0xc + lVar2) * 2);
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)(uint)uVar1);
      }
      lVar2 = *(longlong *)(*(longlong *)this + 0x98);
      if ((pFVar8->RepNotifyNumParams < 1) &&
         ((pFVar8->RepNotifyNumParams != 0 || (pFVar8->RepNotifyCondition != REPNOTIFY_OnChanged))))
      {
        plVar11 = *(longlong **)((longlong)this + 0x10);
        iVar7 = (int)plVar11[1];
        if ((int)local_res8 < iVar7 + -1) {
          uVar9 = 0;
          if ((int)(local_res8 + 1) < iVar7) {
            uVar9 = ~(local_res8 + 1) >> 0x1f;
          }
          if ((uVar9 == 0) &&
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
          lVar12 = (longlong)*(int *)(*plVar11 + 0x48 + local_68);
        }
        else {
          lVar12 = *(longlong *)((longlong)this + 0x20);
        }
        *(longlong *)((longlong)this + 0x30) =
             *(longlong *)((longlong)this + 0x30) + (lVar2 - lVar10);
        *(longlong *)((longlong)this + 0x38) =
             *(longlong *)((longlong)this + 0x38) + (lVar12 - local_res20);
      }
      else {
        *(longlong *)((longlong)this + 0x28) =
             *(longlong *)((longlong)this + 0x28) + (lVar2 - lVar10);
      }
      plVar11 = *(longlong **)((longlong)this + 0x10);
      local_res8 = local_res8 + 1;
      local_res20 = (longlong)pFVar8->ShadowOffset;
      local_68 = local_68 + 0x30;
      lVar10 = lVar2;
    } while ((int)local_res8 < (int)plVar11[1]);
  }
  return;
}

// CountBytes_Command @ 1484cdf50

void __thiscall
`FRepStateStaticBuffer::CountBytes'::__l2::FCountBytesHelper::CountBytes_Command
          (void *this,FRepParentCmd *param_1,int param_2,int param_3,
          TRepDataBufferBase<1,unsigned_char_const_> param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  while( true ) {
    if (param_3 <= param_2) {
      return;
    }
    plVar6 = *(longlong **)((longlong)this + 0x18);
    uVar4 = 0;
    if (param_2 < (int)plVar6[1]) {
      uVar4 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    lVar7 = (longlong)param_2 * 0x20 + *plVar6;
    if (*(char *)(lVar7 + 0x1c) == '\0') {
      plVar6 = (longlong *)(param_4.Data + *(int *)(lVar7 + 0x10));
      (**(code **)(**(longlong **)this + 0x10))
                (*(longlong **)this,(longlong)(int)plVar6[1] * (ulonglong)*(ushort *)(lVar7 + 10),
                 (longlong)*(int *)((longlong)plVar6 + 0xc) * (ulonglong)*(ushort *)(lVar7 + 10));
      lVar1 = *plVar6;
      iVar5 = 0;
      if (0 < (int)plVar6[1]) {
        do {
          CountBytes_Command(this,param_1,param_2 + 1,*(ushort *)(lVar7 + 8) - 1,
                             (uchar *)((int)((uint)*(ushort *)(lVar7 + 10) * iVar5) + lVar1));
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)plVar6[1]);
      }
      param_2 = *(ushort *)(lVar7 + 8) - 1;
    }
    else if (*(char *)(lVar7 + 0x1c) == '\x13') {
      (**(code **)(**(longlong **)this + 0x10))
                (*(longlong **)this,
                 (longlong)*(int *)(param_4.Data + (longlong)*(int *)(lVar7 + 0x10) + 8) * 2,
                 (longlong)*(int *)(param_4.Data + (longlong)*(int *)(lVar7 + 0x10) + 0xc) * 2);
    }
    param_2 = param_2 + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

