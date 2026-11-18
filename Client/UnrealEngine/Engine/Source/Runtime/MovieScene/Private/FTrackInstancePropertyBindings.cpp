// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 34

// CallFunction<int> @ 14627e040

void __thiscall
FTrackInstancePropertyBindings::CallFunction<int>
          (FTrackInstancePropertyBindings *this,UObject *param_1,int param_2)

{
  uchar uVar1;
  char cVar2;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar3;
  UFunction *pUVar4;
  int *piVar5;
  int local_res18 [4];
  
  local_res18[0] = param_2;
  this_00 = FindOrAdd(this,param_1);
  pFVar3 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar3 != (FProperty *)0x0) &&
     (cVar2 = (**(code **)(pFVar3->_padding_ + 0x70))(pFVar3), cVar2 != '\0')) {
    (**(code **)(pFVar3->_padding_ + 0x88))(pFVar3,param_1,local_res18);
    return;
  }
  pUVar4 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar4 != (UFunction *)0x0) {
    InvokeSetterFunction<int_const_&>(param_1,pUVar4,local_res18);
    return;
  }
  uVar1 = (this_00->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    piVar5 = UE::MovieScene::FCachedProperty::GetPropertyAddress<int>((FCachedProperty *)this_00);
  }
  else {
    if (uVar1 != '\x01') {
      return;
    }
    piVar5 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                       ((FVolatileProperty *)this_00,false);
  }
  if (piVar5 != (int *)0x0) {
    *piVar5 = local_res18[0];
  }
  return;
}

// CallFunction<float> @ 14627e120

void __thiscall
FTrackInstancePropertyBindings::CallFunction<float>
          (FTrackInstancePropertyBindings *this,UObject *param_1,float param_2)

{
  uchar uVar1;
  char cVar2;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar3;
  UFunction *pUVar4;
  float *pfVar5;
  float local_res18 [4];
  
  local_res18[0] = param_2;
  this_00 = FindOrAdd(this,param_1);
  pFVar3 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar3 != (FProperty *)0x0) &&
     (cVar2 = (**(code **)(pFVar3->_padding_ + 0x70))(pFVar3), cVar2 != '\0')) {
    (**(code **)(pFVar3->_padding_ + 0x88))(pFVar3,param_1,local_res18);
    return;
  }
  pUVar4 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar4 != (UFunction *)0x0) {
    InvokeSetterFunction<float_const_&>(param_1,pUVar4,local_res18);
    return;
  }
  uVar1 = (this_00->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pfVar5 = UE::MovieScene::FCachedProperty::GetPropertyAddress<float>((FCachedProperty *)this_00);
  }
  else {
    if (uVar1 != '\x01') {
      return;
    }
    pfVar5 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                       ((FVolatileProperty *)this_00,false);
  }
  if (pfVar5 != (float *)0x0) {
    *pfVar5 = local_res18[0];
  }
  return;
}

// CallFunction<double> @ 14627e200

void __thiscall
FTrackInstancePropertyBindings::CallFunction<double>
          (FTrackInstancePropertyBindings *this,UObject *param_1,double param_2)

{
  uchar uVar1;
  char cVar2;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar3;
  UFunction *pUVar4;
  double *pdVar5;
  double local_res18 [2];
  
  local_res18[0] = param_2;
  this_00 = FindOrAdd(this,param_1);
  pFVar3 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar3 != (FProperty *)0x0) &&
     (cVar2 = (**(code **)(pFVar3->_padding_ + 0x70))(pFVar3), cVar2 != '\0')) {
    (**(code **)(pFVar3->_padding_ + 0x88))(pFVar3,param_1,local_res18);
    return;
  }
  pUVar4 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar4 != (UFunction *)0x0) {
    InvokeSetterFunction<double_const_&>(param_1,pUVar4,local_res18);
    return;
  }
  uVar1 = (this_00->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pdVar5 = UE::MovieScene::FCachedProperty::GetPropertyAddress<double>((FCachedProperty *)this_00)
    ;
  }
  else {
    if (uVar1 != '\x01') {
      return;
    }
    pdVar5 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                       ((FVolatileProperty *)this_00,false);
  }
  if (pdVar5 != (double *)0x0) {
    *pdVar5 = local_res18[0];
  }
  return;
}

// CallFunction<UObject_*> @ 14627e2e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTrackInstancePropertyBindings::CallFunction<UObject_*>
          (FTrackInstancePropertyBindings *this,UObject *param_1,UObject *param_2)

{
  uchar uVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FResolvedPropertyAndFunction *this_00;
  FObjectPropertyBase *this_01;
  UFunction *pUVar5;
  void *pvVar6;
  FFieldClass *this_02;
  UObject *local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res18[0] = param_2;
  this_00 = FindOrAdd(this,param_1);
  this_01 = (FObjectPropertyBase *)FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((this_01 != (FObjectPropertyBase *)0x0) &&
     (cVar3 = (**(code **)(this_01->_padding_ + 0x70))(this_01), cVar3 != '\0')) {
    (**(code **)(this_01->_padding_ + 0x88))(this_01,param_1,local_res18);
    return;
  }
  pUVar5 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar5 != (UFunction *)0x0) {
    InvokeSetterFunction<UObject_*_&>(param_1,pUVar5,local_res18);
    return;
  }
  if (this_01 != (FObjectPropertyBase *)0x0) {
    if ((*(uint *)(this_01->_padding_ + 0x18) >> 0x1a & 1) != 0) {
      uVar1 = (this_00->ResolvedProperty).TypeIndex;
      if (uVar1 == '\0') {
        pvVar6 = (void *)(this_00->ResolvedProperty)._padding_;
      }
      else if (uVar1 == '\x01') {
        pvVar6 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                           ((FVolatileProperty *)this_00,true);
      }
      else {
        pvVar6 = (void *)0x0;
      }
      if (((int)this_01->_padding_ < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pvVar6 == (void *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FObjectPropertyBase::SetObjectPropertyValue
                (this_01,(void *)((longlong)*(int *)((longlong)&this_01->_padding_ + 4) +
                                 (longlong)pvVar6),local_res18[0]);
      return;
    }
    if (1 < (byte)LogMovieScene._0_1_) {
      this_02 = FObjectPropertyBase::StaticClass();
      ::FName::ToString(&this_02->Name,&local_18);
      bVar4 = IsThisNotNull(this_01,"FField::GetName");
      if (bVar4) {
        ::FName::ToString((FName *)&this_01->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// CallFunction<bool> @ 14627e500

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTrackInstancePropertyBindings::CallFunction<bool>
          (FTrackInstancePropertyBindings *this,UObject *param_1,bool param_2)

{
  uchar uVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FResolvedPropertyAndFunction *this_00;
  FBoolProperty *this_01;
  UFunction *pUVar5;
  void *pvVar6;
  FFieldClass *this_02;
  bool local_res18 [16];
  FString local_28;
  FString local_18;
  
  local_res18[0] = param_2;
  this_00 = FindOrAdd(this,param_1);
  this_01 = (FBoolProperty *)FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((this_01 != (FBoolProperty *)0x0) &&
     (cVar3 = (**(code **)(this_01->_padding_ + 0x70))(this_01), cVar3 != '\0')) {
    (**(code **)(this_01->_padding_ + 0x88))(this_01,param_1,local_res18);
    return;
  }
  pUVar5 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar5 != (UFunction *)0x0) {
    InvokeSetterFunction<bool_const_&>(param_1,pUVar5,local_res18);
    return;
  }
  if (this_01 != (FBoolProperty *)0x0) {
    if ((*(uint *)(this_01->_padding_ + 0x18) >> 0x11 & 1) != 0) {
      uVar1 = (this_00->ResolvedProperty).TypeIndex;
      if (uVar1 == '\0') {
        pvVar6 = (void *)(this_00->ResolvedProperty)._padding_;
      }
      else if (uVar1 == '\x01') {
        pvVar6 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                           ((FVolatileProperty *)this_00,true);
      }
      else {
        pvVar6 = (void *)0x0;
      }
      if (((int)this_01->_padding_ < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pvVar6 == (void *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FBoolProperty::SetPropertyValue
                (this_01,(void *)((longlong)*(int *)((longlong)&this_01->_padding_ + 4) +
                                 (longlong)pvVar6),local_res18[0]);
      return;
    }
    if (1 < (byte)LogMovieScene._0_1_) {
      this_02 = FBoolProperty::StaticClass();
      ::FName::ToString(&this_02->Name,&local_18);
      bVar4 = IsThisNotNull(this_01,"FField::GetName");
      if (bVar4) {
        ::FName::ToString((FName *)&this_01->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// InvokeSetterFunction<UObject_*_&> @ 1462844a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<UObject_*_&>
          (UObject *param_1,UFunction *param_2,UObject **param_3)

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
  UObject **ppUVar13;
  UObject **_Dst;
  UObject *local_res8;
  UFunction *local_res10;
  undefined1 auStack_98 [48];
  longlong *local_68;
  UObject *local_60;
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
     (ppUVar13 = param_3, local_res10->NumParms != '\0')) {
    ppUVar13 = (UObject **)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      ppUVar13 = (UObject **)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
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
              *(undefined8 *)(puVar12 + -8) = 0x146284665;
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
            if (ppUVar13 == (UObject **)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x146284690;
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
            *(undefined8 *)(puVar12 + -8) = 0x1462846a2;
            (*pcVar5)(plVar11,(longlong)iVar4 + (longlong)ppUVar13);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1462845e7;
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
            if (ppUVar13 == (UObject **)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x146284612;
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
            *(undefined8 *)(puVar12 + -8) = 0x146284629;
            memset((void *)((longlong)iVar3 + (longlong)ppUVar13),0,
                   (longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 8) {
              local_60 = (UObject *)&local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1462846ed;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<UObject_*_&>'::__l20::
                      <lambda_1>::operator()(&local_60);
              if (!bVar8) goto LAB_1462847dc;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x14628472c;
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
            if (ppUVar13 == (UObject **)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x14628475b;
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
            _Dst = (UObject **)((longlong)*(int *)((longlong)plVar11 + 0x44) + (longlong)ppUVar13);
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1462847a7;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x146284792;
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
  *(undefined8 *)(puVar12 + -8) = 0x1462847dc;
  (*pcVar5)(local_res8,local_res10,ppUVar13);
LAB_1462847dc:
  *(undefined8 *)(puVar12 + -8) = 0x1462847e8;
  return;
}

// InvokeSetterFunction<__int64_&> @ 146284810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<__int64_&>
          (UObject *param_1,UFunction *param_2,long64 *param_3)

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
  long64 *plVar13;
  long64 *_Dst;
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
     (plVar13 = param_3, local_res10->NumParms != '\0')) {
    plVar13 = (long64 *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      plVar13 = (long64 *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
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
              *(undefined8 *)(puVar12 + -8) = 0x1462849d5;
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
            if (plVar13 == (long64 *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x146284a00;
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
            *(undefined8 *)(puVar12 + -8) = 0x146284a12;
            (*pcVar5)(plVar11,(longlong)iVar4 + (longlong)plVar13);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x146284957;
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
            if (plVar13 == (long64 *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x146284982;
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
            *(undefined8 *)(puVar12 + -8) = 0x146284999;
            memset((void *)((longlong)iVar3 + (longlong)plVar13),0,(longlong)iVar2 * (longlong)iVar4
                  );
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 8) {
              local_60 = &local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x146284a5d;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<__int64_&>'::__l20::
                      <lambda_1>::operator()(&local_60);
              if (!bVar8) goto LAB_146284b4c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x146284a9c;
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
            if (plVar13 == (long64 *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x146284acb;
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
            _Dst = (long64 *)((longlong)*(int *)((longlong)plVar11 + 0x44) + (longlong)plVar13);
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x146284b17;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x146284b02;
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
  *(undefined8 *)(puVar12 + -8) = 0x146284b4c;
  (*pcVar5)(local_res8,local_res10,plVar13);
LAB_146284b4c:
  *(undefined8 *)(puVar12 + -8) = 0x146284b58;
  return;
}

// InvokeSetterFunction<int_const_&> @ 146284b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<int_const_&>
          (UObject *param_1,UFunction *param_2,int *param_3)

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
  int *piVar13;
  int *_Dst;
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
     (piVar13 = param_3, local_res10->NumParms != '\0')) {
    piVar13 = (int *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      piVar13 = (int *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
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
              *(undefined8 *)(puVar12 + -8) = 0x146284d45;
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
            if (piVar13 == (int *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x146284d70;
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
            *(undefined8 *)(puVar12 + -8) = 0x146284d82;
            (*pcVar5)(plVar11,(longlong)iVar4 + (longlong)piVar13);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x146284cc7;
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
            if (piVar13 == (int *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x146284cf2;
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
            *(undefined8 *)(puVar12 + -8) = 0x146284d09;
            memset((void *)((longlong)iVar3 + (longlong)piVar13),0,(longlong)iVar2 * (longlong)iVar4
                  );
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 4) {
              local_60 = &local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x146284dcd;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<int_const_&>'::__l20::
                      <lambda_1>::operator()(&local_60);
              if (!bVar8) goto LAB_146284ebc;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x146284e0c;
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
            if (piVar13 == (int *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x146284e3b;
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
            _Dst = (int *)((longlong)*(int *)((longlong)plVar11 + 0x44) + (longlong)piVar13);
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x146284e87;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x146284e72;
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
  *(undefined8 *)(puVar12 + -8) = 0x146284ebc;
  (*pcVar5)(local_res8,local_res10,piVar13);
LAB_146284ebc:
  *(undefined8 *)(puVar12 + -8) = 0x146284ec8;
  return;
}

// InvokeSetterFunction<float_const_&> @ 146284ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<float_const_&>
          (UObject *param_1,UFunction *param_2,float *param_3)

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
  float *pfVar13;
  float *_Dst;
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
     (pfVar13 = param_3, local_res10->NumParms != '\0')) {
    pfVar13 = (float *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pfVar13 = (float *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
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
              *(undefined8 *)(puVar12 + -8) = 0x1462850b5;
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
            if (pfVar13 == (float *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1462850e0;
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
            *(undefined8 *)(puVar12 + -8) = 0x1462850f2;
            (*pcVar5)(plVar11,(longlong)iVar4 + (longlong)pfVar13);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x146285037;
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
            if (pfVar13 == (float *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x146285062;
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
            *(undefined8 *)(puVar12 + -8) = 0x146285079;
            memset((void *)((longlong)iVar3 + (longlong)pfVar13),0,(longlong)iVar2 * (longlong)iVar4
                  );
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 4) {
              local_60 = &local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x14628513d;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<float_const_&>'::__l20::
                      <lambda_1>::operator()(&local_60);
              if (!bVar8) goto LAB_14628522c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x14628517c;
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
            if (pfVar13 == (float *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1462851ab;
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
            _Dst = (float *)((longlong)*(int *)((longlong)plVar11 + 0x44) + (longlong)pfVar13);
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1462851f7;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1462851e2;
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
  *(undefined8 *)(puVar12 + -8) = 0x14628522c;
  (*pcVar5)(local_res8,local_res10,pfVar13);
LAB_14628522c:
  *(undefined8 *)(puVar12 + -8) = 0x146285238;
  return;
}

// InvokeSetterFunction<double_const_&> @ 146285260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<double_const_&>
          (UObject *param_1,UFunction *param_2,double *param_3)

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
  double *pdVar13;
  double *_Dst;
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
     (pdVar13 = param_3, local_res10->NumParms != '\0')) {
    pdVar13 = (double *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pdVar13 = (double *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
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
              *(undefined8 *)(puVar12 + -8) = 0x146285425;
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
            if (pdVar13 == (double *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x146285450;
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
            *(undefined8 *)(puVar12 + -8) = 0x146285462;
            (*pcVar5)(plVar11,(longlong)iVar4 + (longlong)pdVar13);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1462853a7;
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
            if (pdVar13 == (double *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1462853d2;
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
            *(undefined8 *)(puVar12 + -8) = 0x1462853e9;
            memset((void *)((longlong)iVar3 + (longlong)pdVar13),0,(longlong)iVar2 * (longlong)iVar4
                  );
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 8) {
              local_60 = &local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x1462854ad;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<double_const_&>'::__l20
                      ::<lambda_1>::operator()(&local_60);
              if (!bVar8) goto LAB_14628559c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x1462854ec;
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
            if (pdVar13 == (double *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x14628551b;
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
            _Dst = (double *)((longlong)*(int *)((longlong)plVar11 + 0x44) + (longlong)pdVar13);
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x146285567;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x146285552;
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
  *(undefined8 *)(puVar12 + -8) = 0x14628559c;
  (*pcVar5)(local_res8,local_res10,pdVar13);
LAB_14628559c:
  *(undefined8 *)(puVar12 + -8) = 0x1462855a8;
  return;
}

// InvokeSetterFunction<bool_const_&> @ 1462855d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl
FTrackInstancePropertyBindings::InvokeSetterFunction<bool_const_&>
          (UObject *param_1,UFunction *param_2,bool *param_3)

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
  bool *pbVar13;
  bool *_Dst;
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
     (pbVar13 = param_3, local_res10->NumParms != '\0')) {
    pbVar13 = (bool *)0x0;
    puVar12 = auStack_98;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)(uVar1 + 0xf) + 0xf;
      if (uVar10 <= uVar1 + 0xf) {
        uVar10 = 0xffffffffffffff0;
      }
      pbVar13 = (bool *)((longlong)&local_60 + -(uVar10 & 0xfffffffffffffff0));
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
              *(undefined8 *)(puVar12 + -8) = 0x146285795;
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
            if (pbVar13 == (bool *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x1462857c0;
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
            *(undefined8 *)(puVar12 + -8) = 0x1462857d2;
            (*pcVar5)(plVar11,pbVar13 + iVar4);
          }
          else {
            iVar4 = (int)plVar11[6];
            iVar2 = *(int *)((longlong)plVar11 + 0x34);
            if (iVar4 < 1) {
              *(int *)(puVar12 + 0x28) = iVar4;
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x146285717;
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
            if (pbVar13 == (bool *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x146285742;
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
            *(undefined8 *)(puVar12 + -8) = 0x146285759;
            memset(pbVar13 + iVar3,0,(longlong)iVar2 * (longlong)iVar4);
          }
          if ((((char)local_68[7] < '\0') && (((ulonglong)local_68[7] >> 10 & 1) == 0)) && (bVar8))
          {
            if (*(int *)((longlong)local_68 + 0x34) != 1) {
              local_60 = &local_res8;
              local_58 = &local_res10;
              local_50 = &local_68;
              *(undefined8 *)(puVar12 + -8) = 0x14628581d;
              bVar8 = `FTrackInstancePropertyBindings::InvokeSetterFunction<bool_const_&>'::__l20::
                      <lambda_1>::operator()(&local_60);
              if (!bVar8) goto LAB_14628590c;
            }
            plVar11 = local_68;
            if ((int)local_68[6] < 1) {
              *(int *)(puVar12 + 0x28) = (int)local_68[6];
              *(undefined4 *)(puVar12 + 0x20) = 0;
              *(undefined8 *)(puVar12 + -8) = 0x14628585c;
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
            if (pbVar13 == (bool *)0x0) {
              *(undefined8 *)(puVar12 + -8) = 0x14628588b;
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
            _Dst = pbVar13 + *(int *)((longlong)plVar11 + 0x44);
            if (_Dst != param_3) {
              if ((*(uint *)(local_68 + 7) >> 0x1e & 1) == 0) {
                lVar6 = local_68[6];
                pcVar5 = *(code **)(*local_68 + 0xf0);
                *(undefined8 *)(puVar12 + -8) = 0x1462858d7;
                (*pcVar5)(plVar7,_Dst,param_3,(int)lVar6);
              }
              else {
                iVar4 = *(int *)((longlong)local_68 + 0x34);
                lVar6 = local_68[6];
                *(undefined8 *)(puVar12 + -8) = 0x1462858c2;
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
  *(undefined8 *)(puVar12 + -8) = 0x14628590c;
  (*pcVar5)(local_res8,local_res10,pbVar13);
LAB_14628590c:
  *(undefined8 *)(puVar12 + -8) = 0x146285918;
  return;
}

// SetCurrentValue<UObject_*> @ 146288eb0

void __thiscall
FTrackInstancePropertyBindings::SetCurrentValue<UObject_*>
          (FTrackInstancePropertyBindings *this,UObject *param_1,UObject *param_2)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  FResolvedPropertyAndFunction *this_00;
  FObjectPropertyBase *this_01;
  void *pvVar4;
  
  this_00 = FindOrAdd(this,param_1);
  this_01 = (FObjectPropertyBase *)FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((this_01 != (FObjectPropertyBase *)0x0) &&
     ((*(uint *)(this_01->_padding_ + 0x18) >> 0x1a & 1) != 0)) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pvVar4 = (void *)(this_00->ResolvedProperty)._padding_;
    }
    else if (uVar1 == '\x01') {
      pvVar4 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,true);
    }
    else {
      pvVar4 = (void *)0x0;
    }
    if ((int)this_01->_padding_ < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (pvVar4 == (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FObjectPropertyBase::SetObjectPropertyValue
              (this_01,(void *)((longlong)*(int *)((longlong)&this_01->_padding_ + 4) +
                               (longlong)pvVar4),param_2);
  }
  return;
}

// SetCurrentValue<bool> @ 146288fa0

void __thiscall
FTrackInstancePropertyBindings::SetCurrentValue<bool>
          (FTrackInstancePropertyBindings *this,UObject *param_1,bool param_2)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  FResolvedPropertyAndFunction *this_00;
  FBoolProperty *this_01;
  void *pvVar4;
  
  this_00 = FindOrAdd(this,param_1);
  this_01 = (FBoolProperty *)FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((this_01 != (FBoolProperty *)0x0) && ((*(uint *)(this_01->_padding_ + 0x18) >> 0x11 & 1) != 0)
     ) {
    uVar1 = (this_00->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pvVar4 = (void *)(this_00->ResolvedProperty)._padding_;
    }
    else if (uVar1 == '\x01') {
      pvVar4 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                         ((FVolatileProperty *)this_00,true);
    }
    else {
      pvVar4 = (void *)0x0;
    }
    if ((int)this_01->_padding_ < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (pvVar4 == (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FBoolProperty::SetPropertyValue
              (this_01,(void *)((longlong)*(int *)((longlong)&this_01->_padding_ + 4) +
                               (longlong)pvVar4),param_2);
  }
  return;
}

// TryGetPropertyValue<UObject_*> @ 1462986e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FTrackInstancePropertyBindings::TryGetPropertyValue<UObject_*>
          (FResolvedPropertyAndFunction *param_1,UObject **param_2)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FProperty *pFVar5;
  FProperty *pFVar6;
  FResolvedPropertyAndFunction *pFVar7;
  void *pvVar8;
  UObject *pUVar9;
  FFieldClass *this;
  FString local_28;
  FString local_18;
  
  pFVar5 = FResolvedPropertyAndFunction::GetValidProperty(param_1);
  if (pFVar5 != (FProperty *)0x0) {
    pFVar6 = FResolvedPropertyAndFunction::GetValidProperty(param_1);
    if ((pFVar6 != (FProperty *)0x0) && ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x1a & 1) != 0)) {
      uVar1 = (param_1->ResolvedProperty).TypeIndex;
      pFVar7 = param_1;
      if (uVar1 != '\0') {
        pFVar7 = (FResolvedPropertyAndFunction *)0x0;
      }
      if (pFVar7 == (FResolvedPropertyAndFunction *)0x0) {
        if (uVar1 != '\x01') {
          param_1 = (FResolvedPropertyAndFunction *)0x0;
        }
        if (param_1 == (FResolvedPropertyAndFunction *)0x0) {
          pvVar8 = (void *)0x0;
        }
        else {
          pvVar8 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                             ((FVolatileProperty *)param_1,true);
        }
      }
      else {
        pvVar8 = (void *)(pFVar7->ResolvedProperty)._padding_;
      }
      if ((pFVar6->ArrayDim < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((pvVar8 == (void *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pUVar9 = (UObject *)
               (**(code **)(pFVar6->_padding_ + 0x1f8))
                         (pFVar6,(longlong)pFVar6->Offset_Internal + (longlong)pvVar8);
      *param_2 = pUVar9;
      return true;
    }
    if (1 < (byte)LogMovieScene._0_1_) {
      this = FObjectPropertyBase::StaticClass();
      ::FName::ToString(&this->Name,&local_18);
      bVar3 = IsThisNotNull(pFVar5,"FField::GetName");
      if (bVar3) {
        ::FName::ToString((FName *)&pFVar5->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// TryGetPropertyValue<bool> @ 1462988c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FTrackInstancePropertyBindings::TryGetPropertyValue<bool>
          (FResolvedPropertyAndFunction *param_1,bool *param_2)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FBoolProperty *this;
  FResolvedPropertyAndFunction *pFVar5;
  void *pvVar6;
  FFieldClass *this_00;
  FString local_28;
  FString local_18;
  
  this = (FBoolProperty *)FResolvedPropertyAndFunction::GetValidProperty(param_1);
  if (this != (FBoolProperty *)0x0) {
    if ((*(uint *)(this->_padding_ + 0x18) >> 0x11 & 1) != 0) {
      uVar1 = (param_1->ResolvedProperty).TypeIndex;
      pFVar5 = param_1;
      if (uVar1 != '\0') {
        pFVar5 = (FResolvedPropertyAndFunction *)0x0;
      }
      if (pFVar5 == (FResolvedPropertyAndFunction *)0x0) {
        if (uVar1 != '\x01') {
          param_1 = (FResolvedPropertyAndFunction *)0x0;
        }
        if (param_1 == (FResolvedPropertyAndFunction *)0x0) {
          pvVar6 = (void *)0x0;
        }
        else {
          pvVar6 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                             ((FVolatileProperty *)param_1,true);
        }
      }
      else {
        pvVar6 = (void *)(pFVar5->ResolvedProperty)._padding_;
      }
      if (((int)this->_padding_ < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((pvVar6 == (void *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      bVar3 = FBoolProperty::GetPropertyValue
                        (this,(void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) +
                                      (longlong)pvVar6));
      *param_2 = bVar3;
      return true;
    }
    if (1 < (byte)LogMovieScene._0_1_) {
      this_00 = FBoolProperty::StaticClass();
      ::FName::ToString(&this_00->Name,&local_18);
      bVar3 = IsThisNotNull(this,"FField::GetName");
      if (bVar3) {
        ::FName::ToString((FName *)&this->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// FTrackInstancePropertyBindings @ 146299840

FTrackInstancePropertyBindings * __thiscall
FTrackInstancePropertyBindings::FTrackInstancePropertyBindings
          (FTrackInstancePropertyBindings *this,FName param_1,FString *param_2)

{
  *(undefined8 *)&this->RuntimeObjectToFunctionMap = 0;
  *(undefined8 *)&(this->RuntimeObjectToFunctionMap).field_0x8 = 0;
  *(undefined8 *)&(this->RuntimeObjectToFunctionMap).field_0x20 = 0;
  *(undefined4 *)&(this->RuntimeObjectToFunctionMap).field_0x28 = 0;
  *(undefined4 *)&(this->RuntimeObjectToFunctionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RuntimeObjectToFunctionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RuntimeObjectToFunctionMap).field_0x34 = 0;
  *(undefined8 *)&(this->RuntimeObjectToFunctionMap).field_0x40 = 0;
  *(undefined4 *)&(this->RuntimeObjectToFunctionMap).field_0x48 = 0;
  ::FString::FString(&this->PropertyPath,param_2);
  (this->FunctionName).ComparisonIndex = 0;
  (this->FunctionName).Number = 0;
  this->PropertyName = param_1;
  return this;
}

// ~FTrackInstancePropertyBindings @ 14629b950

void __thiscall
FTrackInstancePropertyBindings::~FTrackInstancePropertyBindings
          (FTrackInstancePropertyBindings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->PropertyPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->RuntimeObjectToFunctionMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RuntimeObjectToFunctionMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// CacheBinding @ 1462a5ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTrackInstancePropertyBindings::CacheBinding(FTrackInstancePropertyBindings *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  FProperty *pFVar3;
  UObject *pUVar4;
  FFieldClass *pFVar5;
  FName *pFVar6;
  UFunction *pUVar7;
  FProperty *pFVar8;
  ForAnyElementType FVar9;
  int iVar10;
  FProperty *pFVar11;
  undefined1 auStack_158 [32];
  FWeakObjectPtr local_138;
  FWeakObjectPtr local_130;
  TPairInitializer<FObjectKey_&&,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction_const_&>
  local_128;
  UObject *local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FWeakObjectPtr *local_c8;
  FProperty *local_c0;
  FName local_b8 [2];
  TStringView<wchar_t> local_a8;
  FProperty local_98;
  
  local_98.RepNotifyFunc = (FName)(__security_cookie.value ^ (ulonglong)auStack_158);
  local_d8 = (this->PropertyPath).Data.AllocatorInstance.Data;
  iVar10 = (this->PropertyPath).Data.ArrayNum;
  pFVar11 = (FProperty *)0x0;
  iStack_d0 = iVar10 + -1;
  if (iVar10 == 0) {
    iStack_d0 = 0;
  }
  local_a8._12_4_ = uStack_cc;
  local_a8.Size = iStack_d0;
  local_a8.DataPtr = (wchar_t *)local_d8;
  FindPropertyAndFunction((FResolvedPropertyAndFunction *)&local_98,param_1,&local_a8);
  ::FName::ToString(&this->PropertyName,&local_f0);
  pFVar8 = &local_98;
  if ((byte)local_98.DestructorLinkNext != 0) {
    pFVar8 = pFVar11;
  }
  if (pFVar8 == (FProperty *)0x0) {
    pFVar8 = &local_98;
    if ((byte)local_98.DestructorLinkNext != 1) {
      pFVar8 = pFVar11;
    }
    if (pFVar8 == (FProperty *)0x0) goto LAB_1462a5c2a;
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pFVar8->_padding_);
    if (pUVar4 == (UObject *)0x0) {
      pFVar8->ArrayDim = 0;
      pFVar8->ElementSize = 0;
      pFVar3 = pFVar11;
    }
    else {
      pFVar5 = FProperty::StaticClass();
      pFVar3 = (FProperty *)
               FFieldPath::GetTyped((FFieldPath *)&pFVar8->ArrayDim,pFVar5,(UStruct *)0x0);
    }
    if (((pFVar8->_padding_ == 0) || (pFVar3 == (FProperty *)0x0)) ||
       ((pFVar3->_padding_ & 0x18000) != 0)) {
      pFVar3 = pFVar11;
    }
  }
  else {
    pFVar3 = UE::MovieScene::FCachedProperty::GetValidProperty((FCachedProperty *)pFVar8);
  }
  if ((pFVar3 != (FProperty *)0x0) && ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x11 & 1) != 0)) {
    ::FString::FString(&local_110,"b");
    iVar10 = local_110.Data.ArrayNum + -1;
    FVar9.Data = local_110.Data.AllocatorInstance.Data;
    if (local_110.Data.ArrayNum == 0) {
      iVar10 = 0;
      FVar9.Data = (FScriptContainerElement *)L"";
    }
    ::FString::RemoveFromStart(&local_f0,(wchar_t *)FVar9.Data,iVar10,CaseSensitive);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
LAB_1462a5c2a:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&::Set,"Set");
    atexit(`FTrackInstancePropertyBindings::CacheBinding'::__l3::
           _dynamic_atexit_destructor_for__Set__);
    _Init_thread_footer(&::_TSS0);
  }
  ::FString::ConcatFF(&local_100,&::Set,&local_f0);
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_100.Data.ArrayNum != 0) {
    FVar9.Data = local_100.Data.AllocatorInstance.Data;
  }
  pFVar6 = ::FName::FName(local_b8,(wchar_t *)FVar9.Data);
  pUVar7 = UObject::FindFunction(param_1,*pFVar6);
  if ((pUVar7 != (UFunction *)0x0) && (pUVar7->NumParms != '\0')) {
    local_128.Value = (FResolvedPropertyAndFunction *)pUVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)&local_98.PostConstructLinkNext,(FObjectPtr)&local_128.Value);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  local_130.ObjectIndex = 0;
  local_130.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_138.ObjectIndex = 0;
    local_138.ObjectSerialNumber = 0;
    local_118 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_118);
    local_130 = local_138;
  }
  local_c8 = &local_130;
  local_c0 = &local_98;
  TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FObjectKey_&&,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction_const_&>_>
            ((TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction,0>,FDefaultSetAllocator>
              *)this,&local_128,(bool *)&local_c8);
  if ((1 < (byte)local_98.DestructorLinkNext) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[(byte)local_98.DestructorLinkNext])(&local_98);
  return;
}

// CallFunctionForEnum @ 1462a6ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTrackInstancePropertyBindings::CallFunctionForEnum
          (FTrackInstancePropertyBindings *this,UObject *param_1,long64 param_2)

{
  uchar uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar6;
  UFunction *pUVar7;
  void *pvVar8;
  FFieldClass *this_01;
  long64 local_res18;
  FString local_28;
  FString local_18;
  
  local_res18 = param_2;
  this_00 = FindOrAdd(this,param_1);
  pFVar6 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar6 != (FProperty *)0x0) &&
     (cVar4 = (**(code **)(pFVar6->_padding_ + 0x70))(pFVar6), cVar4 != '\0')) {
    (**(code **)(pFVar6->_padding_ + 0x88))(pFVar6,param_1,&local_res18);
    return;
  }
  pUVar7 = (UFunction *)FWeakObjectPtr::Get(&(this_00->SetterFunction).WeakPtr);
  if (pUVar7 != (UFunction *)0x0) {
    InvokeSetterFunction<__int64_&>(param_1,pUVar7,&local_res18);
    return;
  }
  if (pFVar6 != (FProperty *)0x0) {
    if ((*(ulonglong *)(pFVar6->_padding_ + 0x18) & 0x1000000000000) != 0) {
      uVar1 = (this_00->ResolvedProperty).TypeIndex;
      plVar2 = (longlong *)pFVar6[1]._padding_;
      if (uVar1 == '\0') {
        pvVar8 = (void *)(this_00->ResolvedProperty)._padding_;
      }
      else if (uVar1 == '\x01') {
        pvVar8 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                           ((FVolatileProperty *)this_00,true);
      }
      else {
        pvVar8 = (void *)0x0;
      }
      if ((pFVar6->ArrayDim < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pvVar8 == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(*plVar2 + 0x1e8))
                (plVar2,(longlong)pFVar6->Offset_Internal + (longlong)pvVar8,local_res18);
      return;
    }
    if (1 < (byte)LogMovieScene._0_1_) {
      this_01 = FEnumProperty::StaticClass();
      ::FName::ToString(&this_01->Name,&local_18);
      bVar5 = IsThisNotNull(pFVar6,"FField::GetName");
      if (bVar5) {
        ::FName::ToString((FName *)&pFVar6->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// FindOrAdd @ 1462acfd0

FResolvedPropertyAndFunction * __thiscall
FTrackInstancePropertyBindings::FindOrAdd(FTrackInstancePropertyBindings *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction> *pTVar3;
  FProperty *pFVar4;
  FResolvedPropertyAndFunction *pFVar5;
  FObjectKey local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    local_res8.ObjectIndex = local_res10.ObjectIndex;
    local_res8.ObjectSerialNumber = local_res10.ObjectSerialNumber;
  }
  pTVar3 = TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction,0>,FDefaultSetAllocator>
                   *)this,&local_res8);
  pFVar5 = (FResolvedPropertyAndFunction *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction> *)
                0x0) {
    pFVar5 = (FResolvedPropertyAndFunction *)0x0;
  }
  if (pFVar5 != (FResolvedPropertyAndFunction *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid(&(pFVar5->SetterFunction).WeakPtr);
    if (!bVar2) {
      pFVar4 = FResolvedPropertyAndFunction::GetValidProperty(pFVar5);
      if (pFVar4 == (FProperty *)0x0) goto LAB_1462ad07e;
    }
    return pFVar5;
  }
LAB_1462ad07e:
  CacheBinding(this,param_1);
  pTVar3 = TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction,0>,FDefaultSetAllocator>
                   *)this,&local_res8);
  if (pTVar3 == (TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction> *)
                0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FResolvedPropertyAndFunction *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FResolvedPropertyAndFunction *)&pTVar3->field_0x8;
}

// FindProperty @ 1462ad0e0

FProperty * __cdecl
FTrackInstancePropertyBindings::FindProperty(UObject *param_1,TStringView<wchar_t> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FProperty *pFVar4;
  TStringView<wchar_t> local_38;
  FPropertyResolutionState local_28;
  
  local_38.DataPtr = param_2->DataPtr;
  local_38.Size = param_2->Size;
  local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pFVar4 = (FProperty *)0x0;
  local_28.bIsVolatile = false;
  local_28.bIsValid = true;
  local_28.PropertySteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.PropertySteps.ArrayNum = 0;
  local_28.PropertySteps.ArrayMax = 0;
  UE::MovieScene::ResolveProperty(param_1,&local_38,&local_28);
  if ((local_28.bIsValid != false) && (local_28.PropertySteps.ArrayNum != 0)) {
    uVar3 = 0;
    if ((int)(local_28.PropertySteps.ArrayNum - 1U) < local_28.PropertySteps.ArrayNum) {
      uVar3 = ~(local_28.PropertySteps.ArrayNum - 1U) >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FProperty *)(*pcVar1)();
        return pFVar4;
      }
    }
    if (local_28.PropertySteps.AllocatorInstance.Data +
        (longlong)(local_28.PropertySteps.ArrayNum + -1) * 0x18 != (FScriptContainerElement *)0x0) {
      pFVar4 = *(FProperty **)
                (local_28.PropertySteps.AllocatorInstance.Data +
                (longlong)(local_28.PropertySteps.ArrayNum + -1) * 0x18);
    }
  }
  if (local_28.PropertySteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.PropertySteps.AllocatorInstance.Data);
  }
  return pFVar4;
}

// FindPropertyAndFunction @ 1462ad490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FResolvedPropertyAndFunction * __cdecl
FTrackInstancePropertyBindings::FindPropertyAndFunction
          (FResolvedPropertyAndFunction *__return_storage_ptr__,UObject *param_1,
          TStringView<wchar_t> *param_2)

{
  FFieldClass *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FResolvedPropertyAndFunction *pFVar5;
  longlong lVar6;
  FFieldClass *pFVar7;
  FField *pFVar8;
  ForAnyElementType FVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStackY_298 [32];
  FPropertyResolutionState local_258;
  FWeakObjectPtr local_240;
  FFieldPath local_238;
  longlong local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 local_200;
  FField *local_1f8 [2];
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  undefined1 local_1c8 [96];
  undefined1 local_168 [16];
  longlong lStack_158;
  void *local_150;
  longlong lStack_148;
  longlong local_140;
  longlong lStack_138;
  byte local_110;
  FWeakObjectPtr local_108;
  TVariant<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty> local_100;
  TVariant<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty> local_a0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_1e8.DataPtr = param_2->DataPtr;
  local_1e8.Size = param_2->Size;
  local_1e8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_258.bIsVolatile = false;
  local_258.bIsValid = true;
  local_258.PropertySteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.PropertySteps.ArrayNum = 0;
  local_258.PropertySteps.ArrayMax = 0;
  UE::MovieScene::ResolveProperty(param_1,&local_1e8,&local_258);
  bVar12 = false;
  if (local_258.bIsValid != false) {
    if (local_258.PropertySteps.ArrayNum != 0) {
      local_168._0_4_ = 0;
      local_168._4_4_ = 0;
      local_208 = 0;
      local_168._8_8_ = 0;
      lStack_158 = 0;
      local_150 = (void *)0x0;
      lStack_148 = 0;
      local_140 = 0;
      lStack_138 = 0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)local_168,(FObjectPtr)&local_208);
      local_168._8_8_ = 0;
      lStack_158 = 0;
      local_150 = (void *)0x0;
      lStack_148 = 0;
      local_140 = 0;
      lStack_138 = CONCAT44(lStack_138._4_4_,0xffffffff);
      local_110 = 0;
      local_108.ObjectIndex = 0;
      local_108.ObjectSerialNumber = 0;
      local_200 = 0;
      FWeakObjectPtr::operator=(&local_108,(FObjectPtr)&local_200);
      if (local_258.bIsVolatile == false) {
        uVar4 = 0;
        if ((int)(local_258.PropertySteps.ArrayNum - 1U) < local_258.PropertySteps.ArrayNum) {
          uVar4 = ~(local_258.PropertySteps.ArrayNum - 1U) >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar5 = (FResolvedPropertyAndFunction *)(*pcVar2)();
            return pFVar5;
          }
        }
        FVar9.Data = local_258.PropertySteps.AllocatorInstance.Data;
        lVar6 = (longlong)local_258.PropertySteps.ArrayNum;
        pFVar8 = *(FField **)(local_258.PropertySteps.AllocatorInstance.Data + lVar6 * 0x18 + -0x18)
        ;
        local_1f8[0] = (FField *)0x0;
        if (pFVar8 != (FField *)0x0) {
          local_1f8[0] = (FField *)FField::GetOwnerUObject(pFVar8);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1f8[0] != (FField *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)local_1f8[0]);
        }
        local_240.ObjectIndex = 0;
        local_240.ObjectSerialNumber = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1f8[0] != (FField *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)local_1f8[0]);
        }
        FWeakObjectPtr::operator=(&local_240,(FObjectPtr)local_1f8);
        if ((pFVar8 == (FField *)0x0) ||
           (((uint)(int)pFVar8->ClassPrivate->CastFlags >> 0xf & 1) == 0)) {
          pFVar8 = (FField *)0x0;
        }
        local_238.ResolvedField = (FField *)0x0;
        local_238.ResolvedOwner.WeakPtr.ObjectIndex = 0;
        local_238.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
        local_238.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_238.Path.ArrayNum = 0;
        local_238.Path.ArrayMax = 0;
        FFieldPath::Generate(&local_238,pFVar8);
        local_218 = *(longlong *)(FVar9.Data + lVar6 * 0x18 + -8);
        local_210 = *(undefined4 *)(FVar9.Data + lVar6 * 0x18 + -0x10);
        local_100._padding_._0_4_ = local_240.ObjectIndex;
        local_100._padding_._4_4_ = local_240.ObjectSerialNumber;
        local_100._padding_ = 0;
        local_100._padding_._4_4_ = 0;
        pFVar7 = FProperty::StaticClass();
        if ((local_238.ResolvedField == (FField *)0x0) ||
           (bVar3 = FWeakObjectPtr::IsValid(&local_238.ResolvedOwner.WeakPtr),
           pFVar8 = local_238.ResolvedField, !bVar3)) {
          iVar10 = 0;
          if (local_238.Path.ArrayNum != 0) {
            pFVar8 = FFieldPath::TryToResolvePath
                               (&local_238,(UStruct *)0x0,UseStructIfOuterNotFound);
            if (pFVar8 != (FField *)0x0) {
              if ((pFVar7 == (FFieldClass *)0x0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("FieldType",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x2dd,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                pFVar5 = (FResolvedPropertyAndFunction *)(*pcVar2)();
                return pFVar5;
              }
              pFVar1 = pFVar8->ClassPrivate;
              if (pFVar7->Id == CASTCLASS_None) {
                for (; pFVar1 != (FFieldClass *)0x0; pFVar1 = pFVar1->SuperClass) {
                  if (pFVar1 == pFVar7) {
                    bVar12 = true;
                    break;
                  }
                }
              }
              else {
                bVar12 = (pFVar1->CastFlags & pFVar7->Id) != CASTCLASS_None;
              }
              if (bVar12) goto LAB_1462ad778;
            }
            pFVar8 = local_238.ResolvedField;
            if (local_238.ResolvedField != (FField *)0x0) {
              local_238.ResolvedOwner.WeakPtr.ObjectIndex = 0;
              local_238.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
              local_238.ResolvedField = (FField *)0x0;
              pFVar8 = local_238.ResolvedField;
            }
            goto LAB_1462ad778;
          }
        }
        else {
LAB_1462ad778:
          local_238.ResolvedField = pFVar8;
          iVar10 = local_238.Path.ArrayNum;
        }
        FVar9.Data = local_238.Path.AllocatorInstance.Data;
        local_100._padding_ = (longlong)local_238.ResolvedField;
        local_100._padding_._0_4_ = local_238.ResolvedOwner.WeakPtr.ObjectIndex;
        local_100._padding_._4_4_ = local_238.ResolvedOwner.WeakPtr.ObjectSerialNumber;
        local_100._padding_._0_4_ = iVar10;
        if (((iVar10 != 0) || (local_100._padding_._4_4_ != 0)) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar10,local_100._padding_._4_4_,
                       (ForAnyElementType *)&local_100._padding_,iVar10,
                       (int *)((longlong)&local_100._padding_ + 4)), iVar10 != 0)) {
          memcpy((void *)local_100._padding_,FVar9.Data,(longlong)iVar10 << 3);
        }
        local_100._padding_ = local_218;
        local_100._padding_._0_4_ = local_210;
        local_100.TypeIndex = 0;
        TVariant<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::operator=
                  ((TVariant<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty> *)
                   local_168,&local_100);
        uVar11 = (ulonglong)local_100.TypeIndex;
        if ((1 < uVar11) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar12)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FResolvedPropertyAndFunction *)(*pcVar2)();
          return pFVar5;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11] ==
            UE::Core::Private::TDestructorCaller<UE::MovieScene::FCachedProperty>::Destruct) {
          FVar9.Data = local_238.Path.AllocatorInstance.Data;
          if ((void *)local_100._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_100._padding_);
            FVar9.Data = local_238.Path.AllocatorInstance.Data;
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11])(&local_100);
          FVar9.Data = local_238.Path.AllocatorInstance.Data;
        }
      }
      else {
        local_1d8.DataPtr = param_2->DataPtr;
        local_1d8.Size = param_2->Size;
        local_1d8._12_4_ = *(undefined4 *)&param_2->field_0xc;
        UE::MovieScene::BuildVolatileProperty
                  ((FVolatileProperty *)local_1c8,param_1,&local_1d8,&local_258);
        UE::MovieScene::FVolatileProperty::FVolatileProperty
                  ((FVolatileProperty *)&local_a0,(FVolatileProperty *)local_1c8);
        local_a0.TypeIndex = 1;
        TVariant<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::operator=
                  ((TVariant<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty> *)
                   local_168,&local_a0);
        uVar11 = (ulonglong)local_a0.TypeIndex;
        if ((1 < uVar11) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar12)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FResolvedPropertyAndFunction *)(*pcVar2)();
          return pFVar5;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11] ==
            UE::Core::Private::TDestructorCaller<UE::MovieScene::FVolatileProperty>::Destruct) {
          if ((void *)local_a0._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_a0._padding_);
          }
          if ((void *)local_a0._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_a0._padding_);
          }
          if ((void *)local_a0._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_a0._padding_);
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11])(&local_a0);
        }
        if ((void *)local_1c8._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1c8._64_8_);
        }
        FVar9.Data = (FScriptContainerElement *)local_1c8._8_8_;
        if ((FScriptContainerElement *)local_1c8._24_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_1c8._24_8_);
          FVar9.Data = (FScriptContainerElement *)local_1c8._8_8_;
        }
      }
      if (FVar9.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar9.Data);
      }
      uVar11 = (ulonglong)local_110;
      (__return_storage_ptr__->ResolvedProperty).TypeIndex = local_110;
      if ((1 < local_110) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0x105,L""), bVar12)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FResolvedPropertyAndFunction *)(*pcVar2)();
        return pFVar5;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                    ::__l2::MoveConstructors)[uVar11] ==
          UE::Core::Private::TMoveConstructorCaller<UE::MovieScene::FCachedProperty>::Construct) {
        (__return_storage_ptr__->ResolvedProperty)._padding_ = local_168._0_8_;
        (__return_storage_ptr__->ResolvedProperty)._padding_ = 0;
        (__return_storage_ptr__->ResolvedProperty)._padding_ = 0;
        (__return_storage_ptr__->ResolvedProperty)._padding_ = 0;
        (__return_storage_ptr__->ResolvedProperty)._padding_ = 0;
        pFVar7 = FProperty::StaticClass();
        FFieldPath::GetTyped((FFieldPath *)(local_168 + 8),pFVar7,(UStruct *)0x0);
        FFieldPath::operator=
                  ((FFieldPath *)&(__return_storage_ptr__->ResolvedProperty)._padding_,
                   (FFieldPath *)(local_168 + 8));
        (__return_storage_ptr__->ResolvedProperty)._padding_ = local_140;
        *(undefined4 *)&(__return_storage_ptr__->ResolvedProperty)._padding_ =
             (undefined4)lStack_138;
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                    ::__l2::MoveConstructors)[uVar11])(__return_storage_ptr__,local_168);
      }
      uVar11 = (ulonglong)local_110;
      (__return_storage_ptr__->SetterFunction).WeakPtr = local_108;
      if ((1 < local_110) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar12)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FResolvedPropertyAndFunction *)(*pcVar2)();
        return pFVar5;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11] ==
          UE::Core::Private::TDestructorCaller<UE::MovieScene::FCachedProperty>::Destruct) {
        if (local_150 != (void *)0x0) {
          FMemory::Free(local_150);
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::MovieScene::FCachedProperty,UE::MovieScene::FVolatileProperty>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11])(local_168);
      }
      goto LAB_1462ada9d;
    }
  }
  FResolvedPropertyAndFunction::FResolvedPropertyAndFunction(__return_storage_ptr__);
LAB_1462ada9d:
  if (local_258.PropertySteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.PropertySteps.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCurrentValueForEnum @ 1462aed60

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
FTrackInstancePropertyBindings::GetCurrentValueForEnum
          (FTrackInstancePropertyBindings *this,UObject *param_1)

{
  uchar uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar5;
  void *pvVar6;
  long64 lVar7;
  FFieldClass *this_01;
  FString local_28;
  FString local_18;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar5 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if (pFVar5 != (FProperty *)0x0) {
    if ((*(ulonglong *)(pFVar5->_padding_ + 0x18) & 0x1000000000000) != 0) {
      uVar1 = (this_00->ResolvedProperty).TypeIndex;
      plVar2 = (longlong *)pFVar5[1]._padding_;
      if (uVar1 == '\0') {
        pvVar6 = (void *)(this_00->ResolvedProperty)._padding_;
      }
      else if (uVar1 == '\x01') {
        pvVar6 = UE::MovieScene::FVolatileProperty::ResolvePropertySteps
                           ((FVolatileProperty *)this_00,true);
      }
      else {
        pvVar6 = (void *)0x0;
      }
      if ((pFVar5->ArrayDim < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        lVar7 = (*pcVar3)();
        return lVar7;
      }
      if ((pvVar6 == (void *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        lVar7 = (*pcVar3)();
        return lVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0001462aee55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar7 = (**(code **)(*plVar2 + 0x210))
                        (plVar2,(longlong)pFVar5->Offset_Internal + (longlong)pvVar6);
      return lVar7;
    }
    if (1 < (byte)LogMovieScene._0_1_) {
      this_01 = FEnumProperty::StaticClass();
      ::FName::ToString(&this_01->Name,&local_18);
      bVar4 = IsThisNotNull(pFVar5,"FField::GetName");
      if (bVar4) {
        ::FName::ToString((FName *)&pFVar5->_padding_,&local_28);
      }
      else {
        ::FString::FString(&local_28,L"None");
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return 0;
}

// GetProperty @ 1462b0410

FProperty * __thiscall
FTrackInstancePropertyBindings::GetProperty(FTrackInstancePropertyBindings *this,UObject *param_1)

{
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar1;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar1 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  return pFVar1;
}

// GetPropertyStruct @ 1462b0430

UStruct * __thiscall
FTrackInstancePropertyBindings::GetPropertyStruct
          (FTrackInstancePropertyBindings *this,UObject *param_1)

{
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar1;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar1 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  if ((pFVar1 != (FProperty *)0x0) && ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    return (UStruct *)pFVar1[1]._padding_;
  }
  return (UStruct *)0x0;
}

// HasValidBinding @ 1462b16c0

bool __thiscall
FTrackInstancePropertyBindings::HasValidBinding
          (FTrackInstancePropertyBindings *this,UObject *param_1)

{
  FResolvedPropertyAndFunction *this_00;
  FProperty *pFVar1;
  
  this_00 = FindOrAdd(this,param_1);
  pFVar1 = FResolvedPropertyAndFunction::GetValidProperty(this_00);
  return pFVar1 != (FProperty *)0x0;
}

// StaticPropertyAndValue @ 1462bd440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> * __cdecl
FTrackInstancePropertyBindings::StaticPropertyAndValue
          (TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_>
           *__return_storage_ptr__,UObject *param_1,TStringView<wchar_t> *param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  FBoolProperty *this;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *pTVar8;
  undefined *****pppppuVar9;
  undefined **ppuVar10;
  ITypeErasedPropertyConstValueImpl *pIVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined *****pppppuVar14;
  undefined **ppuVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined1 auStackY_338 [32];
  FPropertyResolutionState local_308;
  TStringView<wchar_t> local_2e8;
  undefined ****local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  bool local_2c8;
  undefined7 uStack_2c7;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  byte local_298;
  undefined ****local_290;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  undefined8 uStack_258;
  byte local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  byte local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  byte local_1c0;
  undefined1 local_1b8 [64];
  byte local_178;
  FBoolProperty *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  byte local_128;
  FBoolProperty *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  byte local_d8;
  FBoolProperty *local_d0;
  void *local_c8 [8];
  byte local_88;
  void *local_80 [8];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_338;
  if ((param_1 == (UObject *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\TrackInstancePropertyBindings.cpp"
                         ,0x1b4,L"No object specified"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *)
             (*pcVar5)();
    return pTVar8;
  }
  local_2e8.DataPtr = param_2->DataPtr;
  local_2e8.Size = param_2->Size;
  local_2e8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_308.bIsVolatile = false;
  local_308.bIsValid = true;
  local_308.PropertySteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_308.PropertySteps.ArrayNum = 0;
  local_308.PropertySteps.ArrayMax = 0;
  UE::MovieScene::ResolveProperty(param_1,&local_2e8,&local_308);
  if ((local_308.bIsValid != false) && (local_308.PropertySteps.ArrayNum != 0)) {
    uVar7 = 0;
    if ((int)(local_308.PropertySteps.ArrayNum - 1U) < local_308.PropertySteps.ArrayNum) {
      uVar7 = ~(local_308.PropertySteps.ArrayNum - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *)
                 (*pcVar5)();
        return pTVar8;
      }
    }
    pFVar2 = local_308.PropertySteps.AllocatorInstance.Data +
             (longlong)(local_308.PropertySteps.ArrayNum + -1) * 0x18;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      this = *(FBoolProperty **)pFVar2;
      if (((this != (FBoolProperty *)0x0) && (lVar3 = *(longlong *)(pFVar2 + 0x10), lVar3 != 0)) &&
         (*(int *)(pFVar2 + 8) == -1)) {
        if (((int)this->_padding_ < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *)
                   (*pcVar5)();
          return pTVar8;
        }
        pvVar12 = (void *)(*(int *)((longlong)&this->_padding_ + 4) + lVar3);
        uVar4 = *(ulonglong *)(this->_padding_ + 0x18);
        if ((uVar4 >> 0x11 & 1) == 0) {
          if ((uVar4 >> 0x1a & 1) == 0) {
            local_1b8._8_4_ = *(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_;
            local_178 = local_178 | 3;
            local_1b8._0_8_ = &___7FTypeErasedConstPropertyPtrBase_Private_MovieScene_UE__6B_;
            local_1b8._16_8_ = pvVar12;
            if (((local_178 & 1) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bIsValid",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                   ,0x97,
                                   L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar8 = (TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *
                       )(*pcVar5)();
              return pTVar8;
            }
            ppuVar15 = (undefined **)local_1b8;
            if ((local_178 & 2) == 0) {
              ppuVar15 = (undefined **)local_1b8._0_8_;
            }
            if (((local_178 & 1) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bIsValid",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                   ,0x97,
                                   L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar8 = (TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *
                       )(*pcVar5)();
              return pTVar8;
            }
            ppuVar10 = (undefined **)local_1b8;
            if ((local_178 & 2) == 0) {
              ppuVar10 = (undefined **)local_1b8._0_8_;
            }
            if ((ppuVar15 != ppuVar10) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                   ,0xce,
                                   L"TInlineValue cannot operate with multiple inheritance objects."
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar8 = (TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *
                       )(*pcVar5)();
              return pTVar8;
            }
            TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8>::
            TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8>
                      ((TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8>
                        *)local_80,
                       (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8>
                        *)local_1b8);
            if ((local_178 & 1) != 0) {
              ppuVar15 = (undefined **)local_1b8;
              if ((local_178 & 2) == 0) {
                ppuVar15 = (undefined **)local_1b8._0_8_;
              }
              local_178 = local_178 & 0xfe;
              (**(code **)*ppuVar15)(ppuVar15,0);
              if ((local_178 & 2) == 0) {
                FMemory::Free((void *)local_1b8._0_8_);
              }
            }
            local_d0 = this;
            TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8>::
            TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8>
                      ((TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8>
                        *)local_c8,
                       (TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8>
                        *)local_80);
            TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_>::
            TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_>
                      (__return_storage_ptr__,
                       (TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue> *)&local_d0);
            if ((local_88 & 1) != 0) {
              pIVar11 = TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8>
                        ::GetValue((TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8>
                                    *)local_c8);
              local_88 = local_88 & 0xfe;
              (**(code **)pIVar11->_padding_)(pIVar11,0);
              if ((local_88 & 2) == 0) {
                FMemory::Free(local_c8[0]);
              }
            }
            if ((local_40 & 1) != 0) {
              pIVar11 = TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8>
                        ::GetValue((TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8>
                                    *)local_80);
              local_40 = local_40 & 0xfe;
              (**(code **)pIVar11->_padding_)(pIVar11,0);
              if ((local_40 & 2) == 0) {
                FMemory::Free(local_80[0]);
              }
            }
          }
          else {
            local_280 = (**(code **)(this->_padding_ + 0x1f8))(this,pvVar12);
            local_250 = local_250 | 3;
            uStack_288 = 8;
            local_290 = (undefined ****)
                        &___7__TTypeErasedPropertyValueImpl_PEAVUObject___Private_MovieScene_UE__6B_
            ;
            if (((local_250 & 1) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bIsValid",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                   ,0x97,
                                   L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar8 = (TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *
                       )(*pcVar5)();
              return pTVar8;
            }
            pppppuVar14 = &local_290;
            if ((local_250 & 2) == 0) {
              pppppuVar14 = (undefined *****)local_290;
            }
            if (((local_250 & 1) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bIsValid",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                   ,0x97,
                                   L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar8 = (TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *
                       )(*pcVar5)();
              return pTVar8;
            }
            pppppuVar9 = &local_290;
            if ((local_250 & 2) == 0) {
              pppppuVar9 = (undefined *****)local_290;
            }
            if ((pppppuVar14 != pppppuVar9) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                   ,0xce,
                                   L"TInlineValue cannot operate with multiple inheritance objects."
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              pTVar8 = (TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *
                       )(*pcVar5)();
              return pTVar8;
            }
            bVar17 = local_1c0 & 0xfe;
            local_1c0 = bVar17 | 2;
            bVar18 = local_250;
            bVar16 = local_250;
            if ((local_250 & 1) != 0) {
              bVar17 = bVar17 | 3;
              bVar16 = local_250 & 0xfe;
              bVar18 = 0;
              local_200 = (undefined *****)local_290;
              uStack_1f8 = CONCAT44(uStack_284,uStack_288);
              local_1c0 = bVar17 & 2 ^ bVar17;
              local_1f0 = local_280;
              uStack_1e8 = uStack_278;
              local_1e0 = local_270;
              uStack_1dc = uStack_26c;
              uStack_1d8 = uStack_268;
              uStack_1d4 = uStack_264;
              local_1d0 = local_260;
              uStack_1c8 = uStack_258;
            }
            if ((bVar18 & 1) != 0) {
              pppppuVar14 = &local_290;
              if ((bVar16 & 2) == 0) {
                pppppuVar14 = (undefined *****)local_290;
              }
              local_250 = bVar16 & 0xfe;
              (*(code *)**pppppuVar14)(pppppuVar14,0);
              if ((local_250 & 2) == 0) {
                FMemory::Free(local_290);
              }
            }
            bVar18 = local_d8 & 0xfe;
            local_120 = this;
            local_d8 = bVar18 | 2;
            if ((local_1c0 & 1) != 0) {
              bVar18 = bVar18 | 3;
              local_1c0 = local_1c0 & 0xfe;
              local_d8 = (local_1c0 ^ bVar18) & 2 ^ bVar18;
              local_118 = (undefined4)local_200;
              uStack_114 = local_200._4_4_;
              uStack_110 = (undefined4)uStack_1f8;
              uStack_10c = uStack_1f8._4_4_;
              local_108 = (undefined4)local_1f0;
              uStack_104 = local_1f0._4_4_;
              uStack_100 = (undefined4)uStack_1e8;
              uStack_fc = uStack_1e8._4_4_;
              local_f8 = local_1e0;
              uStack_f4 = uStack_1dc;
              uStack_f0 = uStack_1d8;
              uStack_ec = uStack_1d4;
              local_e8 = (undefined4)local_1d0;
              uStack_e4 = local_1d0._4_4_;
              uStack_e0 = (undefined4)uStack_1c8;
              uStack_dc = uStack_1c8._4_4_;
            }
            *(FBoolProperty **)&__return_storage_ptr__->TypedValue = this;
            puVar1 = &(__return_storage_ptr__->TypedValue).field_0x48;
            *puVar1 = *puVar1 & 0xfe;
            puVar1 = &(__return_storage_ptr__->TypedValue).field_0x48;
            *puVar1 = *puVar1 | 2;
            if ((local_d8 & 1) != 0) {
              local_d8 = local_d8 & 0xfe;
              bVar18 = (__return_storage_ptr__->TypedValue).field_0x48 | 1;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x8 = local_118;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0xc = uStack_114;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x10 = uStack_110;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x14 = uStack_10c;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x18 = local_108;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x1c = uStack_104;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x20 = uStack_100;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x24 = uStack_fc;
              (__return_storage_ptr__->TypedValue).field_0x48 = (local_d8 ^ bVar18) & 2 ^ bVar18;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x28 = local_f8;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x2c = uStack_f4;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x30 = uStack_f0;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x34 = uStack_ec;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x38 = local_e8;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x3c = uStack_e4;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x40 = uStack_e0;
              *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x44 = uStack_dc;
            }
            __return_storage_ptr__->bIsSet = true;
            if ((local_d8 & 1) != 0) {
              puVar13 = (undefined8 *)&local_118;
              if ((local_d8 & 2) == 0) {
                puVar13 = (undefined8 *)CONCAT44(uStack_114,local_118);
              }
              local_d8 = local_d8 & 0xfe;
              (**(code **)*puVar13)(puVar13,0);
              if ((local_d8 & 2) == 0) {
                FMemory::Free((void *)CONCAT44(uStack_114,local_118));
              }
            }
            if ((local_1c0 & 1) != 0) {
              pppppuVar14 = (undefined *****)&local_200;
              if ((local_1c0 & 2) == 0) {
                pppppuVar14 = local_200;
              }
              local_1c0 = local_1c0 & 0xfe;
              (*(code *)**pppppuVar14)(pppppuVar14,0);
              if ((local_1c0 & 2) == 0) {
                FMemory::Free(local_200);
              }
            }
          }
        }
        else {
          local_2c8 = FBoolProperty::GetPropertyValue(this,pvVar12);
          local_298 = local_298 | 3;
          uStack_2d0 = 1;
          local_2d8 = (undefined ****)
                      &___7__TTypeErasedPropertyValueImpl__N_Private_MovieScene_UE__6B_;
          if (((local_298 & 1) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("bIsValid",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                 ,0x97,
                                 L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *)
                     (*pcVar5)();
            return pTVar8;
          }
          pppppuVar14 = &local_2d8;
          if ((local_298 & 2) == 0) {
            pppppuVar14 = (undefined *****)local_2d8;
          }
          if (((local_298 & 1) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("bIsValid",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                 ,0x97,
                                 L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *)
                     (*pcVar5)();
            return pTVar8;
          }
          pppppuVar9 = &local_2d8;
          if ((local_298 & 2) == 0) {
            pppppuVar9 = (undefined *****)local_2d8;
          }
          if ((pppppuVar14 != pppppuVar9) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                 ,0xce,
                                 L"TInlineValue cannot operate with multiple inheritance objects."),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *)
                     (*pcVar5)();
            return pTVar8;
          }
          bVar16 = local_208 & 0xfe;
          local_208 = bVar16 | 2;
          bVar18 = local_298;
          if ((local_298 & 1) != 0) {
            bVar16 = bVar16 | 3;
            bVar18 = local_298 & 0xfe;
            local_248 = (undefined *****)local_2d8;
            uStack_240 = CONCAT44(uStack_2cc,uStack_2d0);
            local_208 = (bVar16 ^ bVar18) & 2 ^ bVar16;
            local_238 = CONCAT71(uStack_2c7,local_2c8);
            uStack_230 = uStack_2c0;
            local_228 = local_2b8;
            uStack_224 = uStack_2b4;
            uStack_220 = uStack_2b0;
            uStack_21c = uStack_2ac;
            local_218 = local_2a8;
            uStack_210 = uStack_2a0;
          }
          if ((bVar18 & 1) != 0) {
            pppppuVar14 = &local_2d8;
            if ((bVar18 & 2) == 0) {
              pppppuVar14 = (undefined *****)local_2d8;
            }
            local_298 = bVar18 & 0xfe;
            (*(code *)**pppppuVar14)(pppppuVar14,0);
            if ((local_298 & 2) == 0) {
              FMemory::Free(local_2d8);
            }
          }
          bVar18 = local_128 & 0xfe;
          local_170 = this;
          local_128 = bVar18 | 2;
          if ((local_208 & 1) != 0) {
            bVar18 = bVar18 | 3;
            local_208 = local_208 & 0xfe;
            local_128 = (local_208 ^ bVar18) & 2 ^ bVar18;
            local_168 = (undefined4)local_248;
            uStack_164 = local_248._4_4_;
            uStack_160 = (undefined4)uStack_240;
            uStack_15c = uStack_240._4_4_;
            local_158 = (undefined4)local_238;
            uStack_154 = local_238._4_4_;
            uStack_150 = (undefined4)uStack_230;
            uStack_14c = uStack_230._4_4_;
            local_148 = local_228;
            uStack_144 = uStack_224;
            uStack_140 = uStack_220;
            uStack_13c = uStack_21c;
            local_138 = (undefined4)local_218;
            uStack_134 = local_218._4_4_;
            uStack_130 = (undefined4)uStack_210;
            uStack_12c = uStack_210._4_4_;
          }
          *(FBoolProperty **)&__return_storage_ptr__->TypedValue = this;
          puVar1 = &(__return_storage_ptr__->TypedValue).field_0x48;
          *puVar1 = *puVar1 & 0xfe;
          puVar1 = &(__return_storage_ptr__->TypedValue).field_0x48;
          *puVar1 = *puVar1 | 2;
          if ((local_128 & 1) != 0) {
            local_128 = local_128 & 0xfe;
            bVar18 = (__return_storage_ptr__->TypedValue).field_0x48 | 1;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x8 = local_168;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0xc = uStack_164;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x10 = uStack_160;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x14 = uStack_15c;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x18 = local_158;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x1c = uStack_154;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x20 = uStack_150;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x24 = uStack_14c;
            (__return_storage_ptr__->TypedValue).field_0x48 = (bVar18 ^ local_128) & 2 ^ bVar18;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x28 = local_148;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x2c = uStack_144;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x30 = uStack_140;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x34 = uStack_13c;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x38 = local_138;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x3c = uStack_134;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x40 = uStack_130;
            *(undefined4 *)&(__return_storage_ptr__->TypedValue).field_0x44 = uStack_12c;
          }
          __return_storage_ptr__->bIsSet = true;
          if ((local_128 & 1) != 0) {
            puVar13 = (undefined8 *)&local_168;
            if ((local_128 & 2) == 0) {
              puVar13 = (undefined8 *)CONCAT44(uStack_164,local_168);
            }
            local_128 = local_128 & 0xfe;
            (**(code **)*puVar13)(puVar13,0);
            if ((local_128 & 2) == 0) {
              FMemory::Free((void *)CONCAT44(uStack_164,local_168));
            }
          }
          if ((local_208 & 1) != 0) {
            pppppuVar14 = (undefined *****)&local_248;
            if ((local_208 & 2) == 0) {
              pppppuVar14 = local_248;
            }
            local_208 = local_208 & 0xfe;
            (*(code *)**pppppuVar14)(pppppuVar14,0);
            if ((local_208 & 2) == 0) {
              FMemory::Free(local_248);
            }
          }
        }
        goto LAB_1462bdd60;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7738840367931326910>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\TrackInstancePropertyBindings.cpp"
                         ,0x1be,
                         "Property && LastStep->ContainerAddress && LastStep->ArrayIndex == INDEX_NONE"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *)
                 (*pcVar5)();
        return pTVar8;
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
LAB_1462bdd60:
  if (local_308.PropertySteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.PropertySteps.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticValue @ 1462bdf20

TOptional<UE::MovieScene::FSourcePropertyValue> * __cdecl
FTrackInstancePropertyBindings::StaticValue
          (TOptional<UE::MovieScene::FSourcePropertyValue> *__return_storage_ptr__,UObject *param_1,
          TStringView<wchar_t> *param_2)

{
  undefined1 *puVar1;
  undefined8 *******pppppppuVar2;
  TInlineValue<UE::MovieScene::Private::ITypeErasedPropertyConstValueImpl,64,8> *pTVar3;
  byte bVar4;
  TStringView<wchar_t> local_78;
  undefined1 local_68 [8];
  undefined8 ******local_60 [8];
  byte local_20;
  bool local_18;
  
  local_78.DataPtr = param_2->DataPtr;
  local_78.Size = param_2->Size;
  local_78._12_4_ = *(undefined4 *)&param_2->field_0xc;
  StaticPropertyAndValue
            ((TOptional<TTuple<FProperty_const_*,UE::MovieScene::FSourcePropertyValue>_> *)local_68,
             param_1,&local_78);
  if (local_18 == false) {
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    (__return_storage_ptr__->TypedValue).Value.bIsValid = false;
    (__return_storage_ptr__->TypedValue).Value.bInline = true;
    if ((local_20 & 1) != 0) {
      local_20 = local_20 & 0xfe;
      bVar4 = (__return_storage_ptr__->TypedValue).Value.field_0x40 | 1;
      *(undefined8 *******)(__return_storage_ptr__->TypedValue).Value.Data.Pad = local_60[0];
      *(undefined8 *******)((__return_storage_ptr__->TypedValue).Value.Data.Pad + 8) = local_60[1];
      *(undefined8 *******)((__return_storage_ptr__->TypedValue).Value.Data.Pad + 0x10) =
           local_60[2];
      *(undefined8 *******)((__return_storage_ptr__->TypedValue).Value.Data.Pad + 0x18) =
           local_60[3];
      (__return_storage_ptr__->TypedValue).Value.field_0x40 = (bVar4 ^ local_20) & 2 ^ bVar4;
      pTVar3 = &(__return_storage_ptr__->TypedValue).Value;
      (pTVar3->Data).Pad[0x20] = local_60[4]._0_1_;
      (pTVar3->Data).Pad[0x21] = local_60[4]._1_1_;
      (pTVar3->Data).Pad[0x22] = local_60[4]._2_1_;
      (pTVar3->Data).Pad[0x23] = local_60[4]._3_1_;
      pTVar3 = &(__return_storage_ptr__->TypedValue).Value;
      (pTVar3->Data).Pad[0x24] = local_60[4]._4_1_;
      (pTVar3->Data).Pad[0x25] = local_60[4]._5_1_;
      (pTVar3->Data).Pad[0x26] = local_60[4]._6_1_;
      (pTVar3->Data).Pad[0x27] = local_60[4]._7_1_;
      pTVar3 = &(__return_storage_ptr__->TypedValue).Value;
      (pTVar3->Data).Pad[0x28] = local_60[5]._0_1_;
      (pTVar3->Data).Pad[0x29] = local_60[5]._1_1_;
      (pTVar3->Data).Pad[0x2a] = local_60[5]._2_1_;
      (pTVar3->Data).Pad[0x2b] = local_60[5]._3_1_;
      pTVar3 = &(__return_storage_ptr__->TypedValue).Value;
      (pTVar3->Data).Pad[0x2c] = local_60[5]._4_1_;
      (pTVar3->Data).Pad[0x2d] = local_60[5]._5_1_;
      (pTVar3->Data).Pad[0x2e] = local_60[5]._6_1_;
      (pTVar3->Data).Pad[0x2f] = local_60[5]._7_1_;
      *(undefined8 *******)((__return_storage_ptr__->TypedValue).Value.Data.Pad + 0x30) =
           local_60[6];
      *(undefined8 *******)((__return_storage_ptr__->TypedValue).Value.Data.Pad + 0x38) =
           local_60[7];
    }
    __return_storage_ptr__->bIsSet = true;
    if ((local_20 & 1) != 0) {
      pppppppuVar2 = local_60;
      if ((local_20 & 2) == 0) {
        pppppppuVar2 = (undefined8 *******)local_60[0];
      }
      local_20 = local_20 & 0xfe;
      (*(code *)**pppppppuVar2)(pppppppuVar2,0);
      if ((local_20 & 2) == 0) {
        FMemory::Free(local_60[0]);
        return __return_storage_ptr__;
      }
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 1504e8050

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<UObject_*_&>'::__l20::<lambda_1>::operator()
          (void *this)

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
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<UObject*___ptr64&___ptr64>(UObject*___ptr64,UFunction*___ptr64,UObject*___ptr64&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504e8139;
    }
  }
  bVar4 = false;
LAB_1504e8139:
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

// operator() @ 1504e8190

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<__int64_&>'::__l20::<lambda_1>::operator()
          (void *this)

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
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<__int64&___ptr64>(UObject*___ptr64,UFunction*___ptr64,__int64&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504e8279;
    }
  }
  bVar4 = false;
LAB_1504e8279:
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

// operator() @ 1504e82d0

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<int_const_&>'::__l20::<lambda_1>::operator()
          (void *this)

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
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<int_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,int_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504e83b9;
    }
  }
  bVar4 = false;
LAB_1504e83b9:
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

// operator() @ 1504e8410

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<float_const_&>'::__l20::<lambda_1>::operator()
          (void *this)

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
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<float_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,float_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504e84f9;
    }
  }
  bVar4 = false;
LAB_1504e84f9:
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

// operator() @ 1504e8550

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<double_const_&>'::__l20::<lambda_1>::
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
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<double_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,double_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504e8639;
    }
  }
  bVar4 = false;
LAB_1504e8639:
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

// operator() @ 1504e8690

bool __thiscall
`FTrackInstancePropertyBindings::InvokeSetterFunction<bool_const_&>'::__l20::<lambda_1>::operator()
          (void *this)

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
                       &`public:___cdecl_`private:_static_void___cdecl_FTrackInstancePropertyBindings::InvokeSetterFunction<bool_const&___ptr64>(UObject*___ptr64,UFunction*___ptr64,bool_const&___ptr64)'::`20'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504e8779;
    }
  }
  bVar4 = false;
LAB_1504e8779:
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

