// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// CallFunction<FCameraFramingZone> @ 14d5ed6a0

void __thiscall
FTrackInstancePropertyBindings::CallFunction<FCameraFramingZone>
          (FTrackInstancePropertyBindings *this,UObject *param_1,FCameraFramingZone *param_2)

{
  uchar uVar1;
  double dVar2;
  char cVar3;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar4;
  UFunction *pUVar5;
  FCameraFramingZone *pFVar6;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar4 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar4 != (FProperty *)0x0) &&
     (cVar3 = (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4), cVar3 != '\0')) {
    (**(code **)(pFVar4->_padding_ + 0x88))(pFVar4,param_1,param_2);
    return;
  }
  pUVar5 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar5 == (UFunction *)0x0) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pFVar6 = UE::MovieScene::FCachedProperty::GetPropertyAddress<FCameraFramingZone>
                         ((FCachedProperty *)this_00);
    }
    else {
      if (uVar1 != '\x01') {
        return;
      }
      pFVar6 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,false);
    }
    if (pFVar6 != (FCameraFramingZone *)0x0) {
      dVar2 = param_2->Top;
      pFVar6->Left = param_2->Left;
      pFVar6->Top = dVar2;
      dVar2 = param_2->Bottom;
      pFVar6->Right = param_2->Right;
      pFVar6->Bottom = dVar2;
    }
  }
  else {
    InvokeSetterFunction<FCameraFramingZone_const_&>(param_1,pUVar5,param_2);
  }
  return;
}

// InvokeSetterFunction<FCameraFramingZone_const_&> @ 14d5f7410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<FCameraFramingZone_const_&>
          (UObject *param_1,UFunction *param_2,FCameraFramingZone *param_3)

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
  FCameraFramingZone *pFVar13;
  FCameraFramingZone *_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  FCameraFramingZone local_60;
  
  puVar12 = auStack_98;
  local_60.Bottom = (double)(__security_cookie.value ^ (ulonglong)&local_68);
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
    pFVar13 = (FCameraFramingZone *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pFVar13 = (FCameraFramingZone *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
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
              *(undefined8 *)(puVar12 + -8) = 0x14d5f75d5;
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
            if (pFVar13 == (FCameraFramingZone *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x14d5f7600;
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
            *(undefined8 *)(puVar12 + -8) = 0x14d5f7612;
            (*pcVar5)(plVar11,(longlong)&pFVar13->Left + (longlong)iVar4);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x14d5f7557;
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
            if (pFVar13 == (FCameraFramingZone *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x14d5f7582;
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
            *(undefined8 *)(puVar12 + -8) = 0x14d5f7599;
            memset((void *)((longlong)&pFVar13->Left + (longlong)iVar3),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 0x20) {
              local_60.Left = (double)&local_res8;
              local_60.Top = (double)&local_res10;
              local_60.Right = (double)&local_68;
              *(undefined8 *)(puVar12 + -8) = 0x14d5f765d;
              bVar8 = `FTrackInstancePropertyBindings::
                      InvokeSetterFunction<FCameraFramingZone_const_&>'::__l20::<lambda_1>::
                      operator()(&local_60);
              if (!bVar8) goto LAB_14d5f774c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x14d5f769c;
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
            if (pFVar13 == (FCameraFramingZone *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x14d5f76cb;
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
            _Dst = (FCameraFramingZone *)
                   ((longlong)&pFVar13->Left + (longlong)*(int *)((longlong)plVar11 + 0x44));
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x14d5f7717;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x14d5f7702;
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
  *(undefined8 *)(puVar12 + -8) = 0x14d5f774c;
  (*pcVar5)(local_res8,local_res10,pFVar13);
LAB_14d5f774c:
  *(undefined8 *)(puVar12 + -8) = 0x14d5f7758;
  return;
}

// operator() @ 150585320

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<FCameraFramingZone_const_&>'::__l20::
<lambda_1>::operator()(void *this)

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
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<FCameraFramingZone_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,FCameraFramingZone_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150585409;
    }
  }
  bVar4 = false;
LAB_150585409:
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

