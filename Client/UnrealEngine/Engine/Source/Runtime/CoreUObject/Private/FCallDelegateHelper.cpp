// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// CallMulticastDelegate @ 142205b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FCallDelegateHelper::CallMulticastDelegate(FFrame *param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UObject *pUVar8;
  FProperty *pFVar9;
  byte *pbVar10;
  longlong *plVar11;
  _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *p_Var12;
  UObject *pUVar13;
  code *pcVar14;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this;
  bool bVar15;
  UClass *pUVar16;
  ulonglong uVar17;
  FString *pFVar18;
  ulonglong uVar19;
  ulonglong _Size;
  undefined1 *puVar20;
  void *_Dst;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  undefined1 auStack_98 [32];
  FProperty *local_78;
  undefined1 uStack_69;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  ulonglong local_30;
  
  puVar20 = auStack_98;
  local_30 = __security_cookie.value ^ (ulonglong)&local_68;
  pUVar8 = *(UObject **)param_1->Code;
  param_1->Code = param_1->Code + 8;
  if (pUVar8 == (UObject *)0x0) {
    pFVar18 = GetTypeName<UFunction>(&local_60);
    if ((pFVar18->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar22);
  }
  pUVar16 = Z_Construct_UClass_UFunction_NoRegister();
  iVar4 = (int)pUVar16->_padding_;
  if ((iVar4 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar4 * 8)
      == &pUVar16->_padding_)) {
    _Dst = (void *)0x0;
    param_1->MostRecentPropertyAddress = (uchar *)0x0;
    param_1->MostRecentPropertyContainer = (uchar *)0x0;
    param_1->MostRecentProperty = (FProperty *)0x0;
    bVar1 = *param_1->Code;
    param_1->Code = param_1->Code + 1;
    (*GNatives.Elements[bVar1])(param_1->Object,param_1,(void *)0x0);
    pFVar9 = param_1->MostRecentProperty;
    if ((pFVar9 == (FProperty *)0x0) || ((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x19 & 1) == 0)) {
      if ((pFVar9 != (FProperty *)0x0) &&
         (local_78 = pFVar9,
         bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("CastResult || !Src",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x48c,L"CastFieldCheckedNullAllowed failed with 0x%016llx"), bVar15))
      {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      local_68 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
    }
    else {
      local_68 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 (**(code **)(pFVar9->_padding_ + 0x1d0))(pFVar9,param_1->MostRecentPropertyAddress)
      ;
    }
    uVar2 = *(ushort *)&pUVar8[4].field_0x16;
    _Size = (ulonglong)uVar2;
    if (uVar2 != 0) {
      sVar3 = *(short *)&pUVar8[2].field_0xc;
      if (sVar3 < 0x11) {
        uVar19 = _Size + 0x1e;
        if (uVar19 <= _Size + 0xf) {
          uVar19 = 0xffffffffffffff0;
        }
        puVar20 = auStack_98 + -(uVar19 & 0xfffffffffffffff0);
        _Dst = (void *)((longlong)&local_60 + -(uVar19 & 0xfffffffffffffff0));
      }
      else {
        uVar17 = (ulonglong)(int)((uVar2 - 1) + (int)sVar3);
        uVar19 = uVar17 + 0xf;
        if (uVar19 <= uVar17) {
          uVar19 = 0xffffffffffffff0;
        }
        puVar20 = auStack_98 + -(uVar19 & 0xfffffffffffffff0);
        _Dst = (void *)((ulonglong)(&uStack_69 + (longlong)sVar3 + -(uVar19 & 0xfffffffffffffff0)) &
                       (longlong)(int)~((int)sVar3 - 1U));
      }
    }
    *(undefined8 *)(puVar20 + -8) = 0x142205d13;
    memset(_Dst,0,_Size);
    pbVar10 = param_1->Code;
    plVar11 = *(longlong **)(pUVar8 + 2);
    bVar1 = *pbVar10;
    this = local_68;
    while (local_68 = this, bVar1 != 0x16) {
      param_1->MostRecentPropertyAddress = (uchar *)0x0;
      param_1->MostRecentPropertyContainer = (uchar *)0x0;
      if ((*(uint *)(plVar11 + 7) >> 8 & 1) == 0) {
        if ((int)plVar11[6] < 1) {
          *(int *)(puVar20 + 0x28) = (int)plVar11[6];
          *(undefined4 *)(puVar20 + 0x20) = 0;
          *(undefined8 *)(puVar20 + -8) = 0x142205e4e;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar15) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        if (_Dst == (void *)0x0) {
          *(undefined8 *)(puVar20 + -8) = 0x142205e75;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L"");
          if (bVar15) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        iVar4 = *(int *)((longlong)plVar11 + 0x44);
        if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
          pcVar14 = *(code **)(*plVar11 + 0x150);
          if ((int)plVar11[6] < 1) {
            *(int *)(puVar20 + 0x28) = (int)plVar11[6];
            *(undefined4 *)(puVar20 + 0x20) = 0;
            *(undefined8 *)(puVar20 + -8) = 0x142205f45;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar15) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          if (_Dst == (void *)0x0) {
            *(undefined8 *)(puVar20 + -8) = 0x142205f6c;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L"");
            if (bVar15) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          iVar7 = *(int *)((longlong)plVar11 + 0x44);
          *(undefined8 *)(puVar20 + -8) = 0x142205f7f;
          (*pcVar14)(plVar11,(longlong)iVar7 + (longlong)_Dst);
        }
        else {
          iVar7 = (int)plVar11[6];
          iVar5 = *(int *)((longlong)plVar11 + 0x34);
          if (iVar7 < 1) {
            *(int *)(puVar20 + 0x28) = iVar7;
            *(undefined4 *)(puVar20 + 0x20) = 0;
            *(undefined8 *)(puVar20 + -8) = 0x142205ec8;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar15) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          if (_Dst == (void *)0x0) {
            *(undefined8 *)(puVar20 + -8) = 0x142205eef;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L"");
            if (bVar15) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          iVar6 = *(int *)((longlong)plVar11 + 0x44);
          *(undefined8 *)(puVar20 + -8) = 0x142205f06;
          memset((void *)((longlong)iVar6 + (longlong)_Dst),0,(longlong)iVar5 * (longlong)iVar7);
        }
        bVar1 = *param_1->Code;
        param_1->Code = param_1->Code + 1;
        p_Var12 = GNatives.Elements[bVar1];
        pUVar13 = param_1->Object;
        *(undefined8 *)(puVar20 + -8) = 0x142205fa5;
        (*p_Var12)(pUVar13,param_1,(void *)((longlong)iVar4 + (longlong)_Dst));
      }
      else {
        bVar1 = *pbVar10;
        param_1->Code = pbVar10 + 1;
        p_Var12 = GNatives.Elements[bVar1];
        pUVar13 = param_1->Object;
        *(undefined8 *)(puVar20 + -8) = 0x142205d62;
        (*p_Var12)(pUVar13,param_1,(void *)0x0);
        if (param_1->MostRecentPropertyAddress != (uchar *)0x0) {
          if ((int)(uint)*(ushort *)&pUVar8[4].field_0x16 <
              *(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
              *(int *)((longlong)plVar11 + 0x44)) {
            *(undefined8 *)(puVar20 + -8) = 0x142205d9f;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Property->IsInContainer(SignatureFunction->ParmsSize)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptCore.cpp"
                                ,0xceb,L"");
            if (bVar15) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          if ((int)plVar11[6] < 1) {
            *(int *)(puVar20 + 0x28) = (int)plVar11[6];
            *(undefined4 *)(puVar20 + 0x20) = 0;
            *(undefined8 *)(puVar20 + -8) = 0x142205dd5;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar15) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          if (_Dst == (void *)0x0) {
            *(undefined8 *)(puVar20 + -8) = 0x142205dfc;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L"");
            if (bVar15) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          iVar4 = *(int *)((longlong)plVar11 + 0x44);
          pcVar14 = *(code **)(*plVar11 + 0x108);
          *(undefined8 *)(puVar20 + -8) = 0x142205e19;
          (*pcVar14)(plVar11,(longlong)iVar4 + (longlong)_Dst);
        }
      }
      pbVar10 = param_1->Code;
      plVar11 = (longlong *)plVar11[3];
      this = local_68;
      bVar1 = *pbVar10;
    }
    param_1->Code = pbVar10 + 1;
    if (this != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      *(undefined8 *)(puVar20 + -8) = 0x142205fdc;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                (this,_Dst);
    }
    plVar11 = *(longlong **)&pUVar8[3].field_0x8;
    do {
      if (plVar11 == (longlong *)0x0) {
        *(undefined8 *)(puVar20 + -8) = 0x14220608a;
        return;
      }
      if ((~(byte)((ulonglong)plVar11[7] >> 0x24) & 1) != 0) {
        pcVar14 = *(code **)(*plVar11 + 0x138);
        if ((int)plVar11[6] < 1) {
          *(int *)(puVar20 + 0x28) = (int)plVar11[6];
          *(undefined4 *)(puVar20 + 0x20) = 0;
          *(undefined8 *)(puVar20 + -8) = 0x142206038;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar15) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        if (_Dst == (void *)0x0) {
          *(undefined8 *)(puVar20 + -8) = 0x14220605f;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L"");
          if (bVar15) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
        }
        iVar4 = *(int *)((longlong)plVar11 + 0x44);
        *(undefined8 *)(puVar20 + -8) = 0x142206071;
        (*pcVar14)(plVar11,(longlong)iVar4 + (longlong)_Dst);
      }
      plVar11 = (longlong *)plVar11[0xb];
    } while( true );
  }
  pFVar18 = GetTypeName<UFunction>(&local_50);
  pwVar22 = L"";
  if ((pFVar18->Data).ArrayNum == 0) {
    pwVar21 = L"";
  }
  else {
    pwVar21 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
  }
  pFVar18 = GetFullNameForCastLogError<UObject>(&local_40,pUVar8);
  if ((pFVar18->Data).ArrayNum != 0) {
    pwVar22 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar22,pwVar21);
}

