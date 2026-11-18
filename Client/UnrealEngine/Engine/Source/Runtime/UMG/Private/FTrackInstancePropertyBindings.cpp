// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 6

// CallFunction<FMargin> @ 1468e3fd0

void __thiscall
FTrackInstancePropertyBindings::CallFunction<FMargin>
          (FTrackInstancePropertyBindings *this,UObject *param_1,FMargin *param_2)

{
  uchar uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar6;
  UFunction *pUVar7;
  FMargin *pFVar8;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar6 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar6 != (FProperty *)0x0) &&
     (cVar5 = (**(code **)(pFVar6->_padding_ + 0x70))(pFVar6), cVar5 != '\0')) {
    (**(code **)(pFVar6->_padding_ + 0x88))(pFVar6,param_1,param_2);
    return;
  }
  pUVar7 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar7 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pFVar8 = UE::MovieScene::FCachedProperty::GetPropertyAddress<FMargin>
                         ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      pFVar8 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,false);
    }
    if (pFVar8 != (FMargin *)0x0) {
      fVar2 = param_2->Top;
      fVar3 = param_2->Right;
      fVar4 = param_2->Bottom;
      pFVar8->Left = param_2->Left;
      pFVar8->Top = fVar2;
      pFVar8->Right = fVar3;
      pFVar8->Bottom = fVar4;
    }
  }
  else {
    InvokeSetterFunction<FMargin_const_&>(param_1,pUVar7,param_2);
  }
  return;
}

// CallFunction<FWidgetTransform> @ 1468e4090

void __thiscall
FTrackInstancePropertyBindings::CallFunction<FWidgetTransform>
          (FTrackInstancePropertyBindings *this,UObject *param_1,FWidgetTransform *param_2)

{
  uchar uVar1;
  double dVar2;
  undefined4 uVar3;
  char cVar4;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar5;
  UFunction *pUVar6;
  FWidgetTransform *pFVar7;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar5 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar5 != (FProperty *)0x0) &&
     (cVar4 = (**(code **)(pFVar5->_padding_ + 0x70))(pFVar5), cVar4 != '\0')) {
    (**(code **)(pFVar5->_padding_ + 0x88))(pFVar5,param_1,param_2);
    return;
  }
  pUVar6 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar6 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pFVar7 = UE::MovieScene::FCachedProperty::GetPropertyAddress<FWidgetTransform>
                         ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      pFVar7 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,false);
    }
    if (pFVar7 != (FWidgetTransform *)0x0) {
      dVar2 = (param_2->Translation).field0_0x0._s_0.Y;
      (pFVar7->Translation).field0_0x0._s_0.X = (param_2->Translation).field0_0x0._s_0.X;
      (pFVar7->Translation).field0_0x0._s_0.Y = dVar2;
      dVar2 = (param_2->Scale).field0_0x0._s_0.Y;
      (pFVar7->Scale).field0_0x0._s_0.X = (param_2->Scale).field0_0x0._s_0.X;
      (pFVar7->Scale).field0_0x0._s_0.Y = dVar2;
      dVar2 = (param_2->Shear).field0_0x0._s_0.Y;
      (pFVar7->Shear).field0_0x0._s_0.X = (param_2->Shear).field0_0x0._s_0.X;
      (pFVar7->Shear).field0_0x0._s_0.Y = dVar2;
      uVar3 = *(undefined4 *)&param_2->field_0x34;
      pFVar7->Angle = param_2->Angle;
      *(undefined4 *)&pFVar7->field_0x34 = uVar3;
    }
  }
  else {
    InvokeSetterFunction<FWidgetTransform_const_&>(param_1,pUVar6,param_2);
  }
  return;
}

// InvokeSetterFunction<FMargin_const_&> @ 1468f7140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<FMargin_const_&>
          (UObject *param_1,UFunction *param_2,FMargin *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  FMargin *pFVar13;
  FMargin *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  undefined1 local_60 [16];
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pFVar13 = param_3, local_res10->NumParms != '\0')) {
    pFVar13 = (FMargin *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pFVar13 = (FMargin *)(local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1468f7305;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FMargin *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1468f7330;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1468f7342;
            (*pcVar5)(plVar11,(undefined1 *)((longlong)&pFVar13->Left + (longlong)iVar4));
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1468f7287;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FMargin *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1468f72b2;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1468f72c9;
            memset((undefined1 *)((longlong)&pFVar13->Left + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0x10) {
              local_60._0_8_ = &local_res8;
              local_60._8_8_ = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1468f738d;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<FMargin_const_&>'::__l20
                      ::<lambda_1>::operator()(local_60);
              if (!bVar8) goto LAB_1468f747c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1468f73cc;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FMargin *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1468f73fb;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (FMargin *)
                   ((longlong)&pFVar13->Left + (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1468f7447;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1468f7432;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1468f747c;
  (*pcVar5)(local_res8,local_res10,pFVar13);
LAB_1468f747c:
  *(undefined8 *)(puVar12 + -8) = 0x1468f7488;
  return;
}

// InvokeSetterFunction<FWidgetTransform_const_&> @ 1468f74b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<FWidgetTransform_const_&>
          (UObject *param_1,UFunction *param_2,FWidgetTransform *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  FWidgetTransform *pFVar13;
  FWidgetTransform *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  UObject **local_60;
  UFunction **local_58;
  longlong **local_50;
  ulonglong local_48;
  
  puVar12 = auStack_98;
  local_48 = __security_cookie.value ^ (ulonglong)&local_68;
  uVar1 = param_2->ParmsSize;
  local_res8 = param_1;
  local_res10 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRuntimeObject && Setter",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\TrackInstancePropertyBindings.h"
                         ,0x1a9,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_res10->ReturnValueOffset != 0xffff) ||
     (pFVar13 = param_3, local_res10->NumParms != '\0')) {
    pFVar13 = (FWidgetTransform *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pFVar13 = (FWidgetTransform *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
      puVar12 = auStack_98 + -(uVar10 & 0xfffffffffffffff0);
    }
    plVar11 = (longlong *)local_res10->_padding_;
    bVar8 = true;
    local_68 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      do {
        local_68 = plVar11;
        if (*(int *)((longlong)plVar11 + 0x34) * (int)plVar11[6] +
            *(int *)((longlong)plVar11 + 0x44) <= (int)(uint)uVar1) {
          if ((*(uint *)(plVar11 + 7) >> 9 & 1) == 0) {
            pcVar5 = *(code **)(*plVar11 + 0x150);
            if ((int)plVar11[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)plVar11[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1468f7675;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FWidgetTransform *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1468f76a0;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar4 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1468f76b2;
            (*pcVar5)(plVar11,(longlong)&(pFVar13->Translation).field0_0x0 + (longlong)iVar4);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1468f75f7;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FWidgetTransform *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1468f7622;
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            iVar3 = *(int *)((longlong)plVar11 + 0x44);
            *(undefined8 *)(puVar12 + -8) = 0x1468f7639;
            memset((void *)((longlong)&(pFVar13->Translation).field0_0x0 + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0x38) {
              local_60 = &local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1468f76fd;
              bVar8 = `FTrackInstancePropertyBindings::
                      InvokeSetterFunction<FWidgetTransform_const_&>'::__l20::<lambda_1>::operator()
                                (&local_60);
              if (!bVar8) goto LAB_1468f77ec;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1468f773c;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (pFVar13 == (FWidgetTransform *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1468f776b;
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            plVar7 = local_68;
            _Dst = (FWidgetTransform *)
                   ((longlong)&(pFVar13->Translation).field0_0x0 +
                   (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1468f77b7;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1468f77a2;
                memcpy(_Dst,param_3,(longlong)iVar4 * (longlong)(int)lVar6);
              }
            }
          }
          bVar8 = false;
        }
        plVar11 = (longlong *)local_68[9];
      } while (plVar11 != (longlong *)0x0);
      local_68 = (longlong *)0x0;
    }
  }
  pcVar5 = *(code **)(*(longlong *)local_res8 + 0x260);
  *(undefined8 *)(puVar12 + -8) = 0x1468f77ec;
  (*pcVar5)(local_res8,local_res10,pFVar13);
LAB_1468f77ec:
  *(undefined8 *)(puVar12 + -8) = 0x1468f77f8;
  return;
}

// operator() @ 1504f5fb0

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<FMargin_const_&>'::__l20::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<FMargin_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,FMargin_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f6099;
    }
  }
  bVar4 = false;
LAB_1504f6099:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f60f0

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<FWidgetTransform_const_&>'::__l20::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1354893239349412283>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18 = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1354893239349412283>,
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<FWidgetTransform_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,FWidgetTransform_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f61d9;
    }
  }
  bVar4 = false;
LAB_1504f61d9:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

