// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 21

// StaticClass @ 14a2057a0

UClass * __cdecl UControlRigTestData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigTestData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigTestData",
               &Z_Registration_Info_UClass_UControlRigTestData.InnerSingleton,
               StaticRegisterNativesUControlRigTestData,0x528,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UControlRigTestData>,
               InternalVTableHelperCtorCaller<UControlRigTestData>,local_res8,
               UControlRigReplay::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigTestData.InnerSingleton;
}

// UControlRigTestData @ 14a222f00

UControlRigTestData * __thiscall
UControlRigTestData::UControlRigTestData(UControlRigTestData *this,FVTableHelper *param_1)

{
  UControlRigReplay::UControlRigReplay((UControlRigReplay *)this,param_1);
  this->_padding_ = (longlong)&___7UControlRigTestData__6B_;
  FControlRigTestDataFrame::FControlRigTestDataFrame(&this->Initial);
  (this->InputFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputFrames).ArrayNum = 0;
  (this->InputFrames).ArrayMax = 0;
  (this->OutputFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFrames).ArrayNum = 0;
  (this->OutputFrames).ArrayMax = 0;
  (this->EventQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventQueue).ArrayNum = 0;
  (this->EventQueue).ArrayMax = 0;
  return this;
}

// ~UControlRigTestData @ 14a226dd0

void __thiscall UControlRigTestData::~UControlRigTestData(UControlRigTestData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UControlRigTestData__6B_;
  pFVar1 = (this->EventQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FControlRigTestDataFrame,int>
            ((FControlRigTestDataFrame *)(this->OutputFrames).AllocatorInstance.Data,
             (this->OutputFrames).ArrayNum);
  pFVar1 = (this->OutputFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FControlRigTestDataFrame,int>
            ((FControlRigTestDataFrame *)(this->InputFrames).AllocatorInstance.Data,
             (this->InputFrames).ArrayNum);
  pFVar1 = (this->InputFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FControlRigTestDataFrame::~FControlRigTestDataFrame(&this->Initial);
  UControlRigReplay::~UControlRigReplay((UControlRigReplay *)this);
  return;
}

// operator() @ 14a22fa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UControlRigTestData::StartRecording'::__l2::<lambda_2>::operator()
          (void *this,URigVMHost *param_1,FName *param_2)

{
  longlong lVar1;
  FControlRigTestDataFrame *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  ForAnyElementType *pFVar7;
  undefined1 auStack_198 [32];
  FControlRigTestDataFrame *local_178;
  FControlRigTestDataFrame *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  FName local_148;
  FControlRigTestDataFrame local_138;
  ulonglong local_28;
  
  if (param_1 != (URigVMHost *)0x0) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
    pUVar6 = UControlRig::StaticClass();
    iVar5 = (int)pUVar6->_padding_;
    if (((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
         &pUVar6->_padding_)) &&
       (FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName), *param_2 != local_148)) {
      lVar1 = *(longlong *)this;
      iVar5 = *(int *)(lVar1 + 0x518);
      if (iVar5 < 1) {
        local_178 = (FControlRigTestDataFrame *)0x0;
        local_170 = (FControlRigTestDataFrame *)(longlong)iVar5;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*param_2 == **(FName **)(lVar1 + 0x510)) {
        FControlRigTestDataFrame::FControlRigTestDataFrame(&local_138);
        FControlRigTestDataFrame::Store(&local_138,(UControlRig *)param_1,false);
        FControlRigTestDataFrame::RestoreVariables(&local_138,(UControlRig *)param_1);
        lVar1 = *(longlong *)this;
        pFVar7 = (ForAnyElementType *)(lVar1 + 0x4f0);
        pFVar2 = (FControlRigTestDataFrame *)pFVar7->Data;
        if ((pFVar2 <= &local_138) && (&local_138 < pFVar2 + *(int *)(lVar1 + 0x4fc))) {
          local_160 = (longlong)*(int *)(lVar1 + 0x4f8);
          local_158 = 0x108;
          local_178 = &local_138;
          local_170 = pFVar2;
          local_168 = (longlong)*(int *)(lVar1 + 0x4fc);
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
        iVar5 = *(int *)(lVar1 + 0x4f8);
        if (iVar5 == *(int *)(lVar1 + 0x4fc)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x108,8,pFVar7,(int *)(lVar1 + 0x4fc));
        }
        *(int *)(lVar1 + 0x4f8) = iVar5 + 1;
        FControlRigTestDataFrame::FControlRigTestDataFrame
                  ((FControlRigTestDataFrame *)(pFVar7->Data + (longlong)iVar5 * 0x108),&local_138);
        FControlRigTestDataFrame::~FControlRigTestDataFrame(&local_138);
      }
    }
  }
  return;
}

// operator() @ 14a22fe30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UControlRigTestData::StartReplay'::__l2::<lambda_2>::operator()
          (void *this,URigVMHost *param_1,FName *param_2)

{
  float fVar1;
  double dVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  UClass *pUVar8;
  double *pdVar9;
  longlong lVar10;
  FControlRigTestDataFrame *this_00;
  uint uVar11;
  FName local_res10;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  
  if (param_1 != (URigVMHost *)0x0) {
    pUVar8 = UControlRig::StaticClass();
    iVar3 = (int)pUVar8->_padding_;
    if (((iVar3 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
         &pUVar8->_padding_)) &&
       (FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName), *param_2 != local_res10)) {
      lVar10 = *(longlong *)this;
      if ((*(int *)(lVar10 + 0x518) < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*param_2 == **(FName **)(lVar10 + 0x510)) {
        fVar1 = param_1->AbsoluteTime;
        pdVar9 = (double *)(**(code **)(**(longlong **)this + 0x2b0))(*(longlong **)this,local_68);
        dVar5 = __real_3e45798ee0000000;
        if (((double)fVar1 < *pdVar9 - __real_3e45798ee0000000) ||
           (fVar1 = param_1->AbsoluteTime,
           lVar10 = (**(code **)(**(longlong **)this + 0x2b0))(*(longlong **)this,local_58),
           *(double *)(lVar10 + 8) + dVar5 < (double)fVar1)) {
          fVar1 = param_1->DeltaTime;
          pdVar9 = (double *)(**(code **)(**(longlong **)this + 0x2b0))(*(longlong **)this,local_48)
          ;
          URigVMHost::SetAbsoluteAndDeltaTime(param_1,(float)*pdVar9,fVar1);
        }
        uVar7 = UControlRigTestData::GetFrameIndexForTime
                          (*(UControlRigTestData **)this,(double)param_1->AbsoluteTime,true);
        lVar10 = *(longlong *)this;
        uVar11 = 0;
        if ((int)uVar7 < *(int *)(lVar10 + 0x4f8)) {
          uVar11 = ~uVar7 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = (FControlRigTestDataFrame *)
                  (*(longlong *)(lVar10 + 0x4f0) + (longlong)(int)uVar7 * 0x108);
        FControlRigTestDataFrame::Restore(this_00,(UControlRig *)param_1,false);
        dVar2 = this_00->DeltaTime;
        if (dVar5 < dVar2) {
          URigVMHost::SetDeltaTime(param_1,(float)dVar2);
        }
      }
    }
  }
  return;
}

// operator() @ 14a2303f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UControlRigTestData::StartRecording'::__l2::<lambda_3>::operator()
          (void *this,URigVMHost *param_1,FName *param_2)

{
  longlong lVar1;
  FControlRigTestDataFrame *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  uint uVar8;
  ForAnyElementType *pFVar9;
  undefined1 auStack_198 [32];
  FControlRigTestDataFrame *local_178;
  FControlRigTestDataFrame *local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  FName local_148;
  LARGE_INTEGER local_140;
  FControlRigTestDataFrame local_138;
  ulonglong local_28;
  
  if (param_1 != (URigVMHost *)0x0) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
    pUVar7 = UControlRig::StaticClass();
    iVar6 = (int)pUVar7->_padding_;
    if (((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
         &pUVar7->_padding_)) &&
       (FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName), *param_2 != local_148)) {
      lVar1 = *(longlong *)this;
      iVar6 = *(int *)(lVar1 + 0x518);
      uVar8 = iVar6 - 1;
      uVar5 = 0;
      if ((int)uVar8 < iVar6) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_178 = (FControlRigTestDataFrame *)(longlong)(int)uVar8;
        local_170 = (FControlRigTestDataFrame *)(longlong)iVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*param_2 ==
          *(FName *)(*(longlong *)(lVar1 + 0x510) + -8 + (longlong)*(int *)(lVar1 + 0x518) * 8)) {
        FControlRigTestDataFrame::FControlRigTestDataFrame(&local_138);
        FControlRigTestDataFrame::Store(&local_138,(UControlRig *)param_1,false);
        lVar1 = *(longlong *)this;
        pFVar9 = (ForAnyElementType *)(lVar1 + 0x500);
        pFVar2 = (FControlRigTestDataFrame *)pFVar9->Data;
        if ((pFVar2 <= &local_138) && (&local_138 < pFVar2 + *(int *)(lVar1 + 0x50c))) {
          local_160 = (longlong)*(int *)(lVar1 + 0x508);
          local_158 = 0x108;
          local_178 = &local_138;
          local_170 = pFVar2;
          local_168 = (longlong)*(int *)(lVar1 + 0x50c);
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
        iVar6 = *(int *)(lVar1 + 0x508);
        if (iVar6 == *(int *)(lVar1 + 0x50c)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x108,8,pFVar9,(int *)(lVar1 + 0x50c));
        }
        *(int *)(lVar1 + 0x508) = iVar6 + 1;
        FControlRigTestDataFrame::FControlRigTestDataFrame
                  ((FControlRigTestDataFrame *)(pFVar9->Data + (longlong)iVar6 * 0x108),&local_138);
        *(undefined4 *)(*(longlong *)this + 0x520) = 0xffffffff;
        UObjectBaseUtility::MarkPackageDirty(*(UObjectBaseUtility **)this);
        QueryPerformanceCounter(&local_140);
        lVar1 = *(longlong *)this;
        if (*(double *)(lVar1 + 0x3c8) <=
            ((double)local_140.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000) - *(double *)(lVar1 + 0x3b8)) {
          *(undefined8 *)(lVar1 + 0x3c8) = 0;
          (**(code **)(**(longlong **)this + 0x2c0))();
        }
        FControlRigTestDataFrame::~FControlRigTestDataFrame(&local_138);
      }
    }
  }
  return;
}

// operator() @ 14a230910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UControlRigTestData::StartReplay'::__l2::<lambda_3>::operator()
          (void *this,URigVMHost *param_1,FName *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  float fVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  bool bVar26;
  uint uVar27;
  int iVar28;
  UClass *pUVar29;
  undefined7 extraout_var;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  FScriptContainerElement *pFVar34;
  FControlRigTestDataFrame *this_00;
  TTransform<double> *pTVar35;
  FLinearColor *pFVar36;
  longlong lVar37;
  undefined1 auStackY_198 [32];
  undefined1 local_158 [8];
  FRigElementKeyCollection local_150;
  FName local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_118 [96];
  void *local_b8;
  undefined4 local_b0;
  ulonglong local_a8;
  
  if (param_1 != (URigVMHost *)0x0) {
    local_a8 = __security_cookie.value ^ (ulonglong)auStackY_198;
    pUVar29 = UControlRig::StaticClass();
    iVar1 = (int)pUVar29->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar29->_padding_)) &&
       (FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName), *param_2 != local_140)) {
      lVar33 = *(longlong *)this;
      uVar32 = *(int *)(lVar33 + 0x518) - 1;
      uVar30 = 0;
      if ((int)uVar32 < *(int *)(lVar33 + 0x518)) {
        uVar30 = ~uVar32 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*param_2 ==
          *(FName *)(*(longlong *)(lVar33 + 0x510) + -8 + (longlong)*(int *)(lVar33 + 0x518) * 8)) {
        local_150.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_150.Keys.ArrayNum = 0;
        local_150.Keys.ArrayMax = 0;
        URigHierarchy::GetPose
                  (*(URigHierarchy **)&param_1[1].UserDefinedStructGuidToPathName.field_0x48,
                   (FRigPose *)local_118,false,All,&local_150,true);
        if (local_150.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Keys.AllocatorInstance.Data);
        }
        lVar33 = *(longlong *)this;
        uVar30 = *(uint *)(lVar33 + 0x520);
        uVar32 = 0;
        if ((int)uVar30 < *(int *)(lVar33 + 0x508)) {
          uVar32 = ~uVar30 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = (FControlRigTestDataFrame *)
                  ((longlong)(int)uVar30 * 0x108 + *(longlong *)(lVar33 + 0x500));
        if (*(char *)(*(longlong *)this + 0x524) != '\0') {
          FControlRigTestDataFrame::Restore(this_00,(UControlRig *)param_1,false);
        }
        dVar25 = __real_3f50624de0000000;
        fVar24 = __real_41700000;
        fVar23 = __real_bf800000;
        uVar22 = _UNK_15061cc8c;
        uVar21 = _UNK_15061cc88;
        uVar32 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        fVar20 = __real_3f800000;
        pFVar2 = (this_00->Pose).Elements.AllocatorInstance.Data;
        iVar1 = (this_00->Pose).Elements.ArrayNum;
        pFVar34 = pFVar2 + 0x80;
        while( true ) {
          if ((this_00->Pose).Elements.ArrayNum != iVar1) {
            local_158[0] = 0;
            `TCheckedPointerIterator<FRigPoseElement_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_158);
          }
          if ((FRigElementKey *)(pFVar34 + -0x80) ==
              (FRigElementKey *)(pFVar2 + (longlong)iVar1 * 0x110)) break;
          uVar27 = FRigPose::GetIndex((FRigPose *)local_118,(FRigElementKey *)(pFVar34 + -0x80));
          if (uVar27 != 0xffffffff) {
            uVar31 = 0;
            if ((int)uVar27 < (int)local_118._8_4_) {
              uVar31 = ~uVar27 >> 0x1f;
            }
            iVar28 = local_118._8_4_;
            if (uVar31 == 0) {
              uVar31 = 0x506106c8;
              bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              iVar28 = (int)CONCAT71(extraout_var,bVar26);
              if (bVar26) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            lVar33 = (longlong)(int)uVar27 * 0x110;
            local_138 = dVar25;
            dVar8 = *(double *)(local_118._0_8_ + lVar33 + 0xa0) - *(double *)(pFVar34 + 0x20);
            dVar9 = *(double *)((FScriptContainerElement *)(local_118._0_8_ + lVar33 + 0xa0) + 8) -
                    *(double *)(pFVar34 + 0x28);
            dVar11 = *(double *)(local_118._0_8_ + lVar33 + 0xb0) - *(double *)(pFVar34 + 0x30);
            dVar13 = *(double *)((FScriptContainerElement *)(local_118._0_8_ + lVar33 + 0xb0) + 8) -
                     *(double *)(pFVar34 + 0x38);
            lVar37 = -(ulonglong)
                      (dVar25 < (double)CONCAT44(uVar22 & (uint)((ulonglong)dVar9 >> 0x20),
                                                 uVar21 & SUB84(dVar9,0)));
            auVar5._8_4_ = (int)lVar37;
            auVar5._0_8_ = -(ulonglong)
                            (dVar25 < (double)CONCAT44(uVar32 & (uint)((ulonglong)dVar8 >> 0x20),
                                                       uVar30 & SUB84(dVar8,0)));
            auVar5._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
            iVar28 = movmskpd(iVar28,auVar5);
            lVar37 = -(ulonglong)
                      (dVar25 < (double)CONCAT44(uVar22 & (uint)((ulonglong)dVar13 >> 0x20),
                                                 uVar21 & SUB84(dVar13,0)));
            auVar15._8_4_ = (int)lVar37;
            auVar15._0_8_ =
                 -(ulonglong)
                  (dVar25 < (double)CONCAT44(uVar32 & (uint)((ulonglong)dVar11 >> 0x20),
                                             uVar30 & SUB84(dVar11,0)));
            auVar15._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
            uVar27 = movmskpd(uVar31,auVar15);
            if ((uVar27 & 0x3fffffff) == 0 && iVar28 == 0) {
              dVar8 = *(double *)(local_118._0_8_ + lVar33 + 0x80) + *(double *)pFVar34;
              dVar9 = *(double *)((FScriptContainerElement *)(local_118._0_8_ + lVar33 + 0x80) + 8)
                      + *(double *)(pFVar34 + 8);
              dVar12 = *(double *)(local_118._0_8_ + lVar33 + 0x80) - *(double *)pFVar34;
              dVar14 = *(double *)((FScriptContainerElement *)(local_118._0_8_ + lVar33 + 0x80) + 8)
                       - *(double *)(pFVar34 + 8);
              dVar11 = *(double *)(local_118._0_8_ + lVar33 + 0x90) + *(double *)(pFVar34 + 0x10);
              dVar13 = *(double *)((FScriptContainerElement *)(local_118._0_8_ + lVar33 + 0x90) + 8)
                       + *(double *)(pFVar34 + 0x18);
              dVar17 = *(double *)(local_118._0_8_ + lVar33 + 0x90) - *(double *)(pFVar34 + 0x10);
              dVar18 = *(double *)((FScriptContainerElement *)(local_118._0_8_ + lVar33 + 0x90) + 8)
                       - *(double *)(pFVar34 + 0x18);
              local_130 = dVar25;
              lVar37 = -(ulonglong)
                        (dVar25 < (double)CONCAT44(uVar22 & (uint)((ulonglong)dVar14 >> 0x20),
                                                   uVar21 & SUB84(dVar14,0)));
              auVar10._8_4_ = (int)lVar37;
              auVar10._0_8_ =
                   -(ulonglong)
                    (dVar25 < (double)CONCAT44(uVar32 & (uint)((ulonglong)dVar12 >> 0x20),
                                               uVar30 & SUB84(dVar12,0)));
              auVar10._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
              uVar27 = movmskpd(iVar28,auVar10);
              lVar37 = -(ulonglong)
                        (dVar25 < (double)CONCAT44(uVar22 & (uint)((ulonglong)dVar18 >> 0x20),
                                                   uVar21 & SUB84(dVar18,0)));
              auVar6._8_4_ = (int)lVar37;
              auVar6._0_8_ = -(ulonglong)
                              (dVar25 < (double)CONCAT44(uVar32 & (uint)((ulonglong)dVar17 >> 0x20),
                                                         uVar30 & SUB84(dVar17,0)));
              auVar6._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
              iVar28 = movmskpd(0,auVar6);
              uVar31 = iVar28 << 2 | uVar27;
              if (uVar31 != 0) {
                lVar37 = -(ulonglong)
                          (dVar25 < (double)CONCAT44(uVar22 & (uint)((ulonglong)dVar13 >> 0x20),
                                                     uVar21 & SUB84(dVar13,0)));
                auVar19._8_4_ = (int)lVar37;
                auVar19._0_8_ =
                     -(ulonglong)
                      (dVar25 < (double)CONCAT44(uVar32 & (uint)((ulonglong)dVar11 >> 0x20),
                                                 uVar30 & SUB84(dVar11,0)));
                auVar19._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
                uVar31 = movmskpd(uVar31,auVar19);
                lVar37 = -(ulonglong)
                          (dVar25 < (double)CONCAT44(uVar22 & (uint)((ulonglong)dVar9 >> 0x20),
                                                     uVar21 & SUB84(dVar9,0)));
                auVar4._8_4_ = (int)lVar37;
                auVar4._0_8_ = -(ulonglong)
                                (dVar25 < (double)CONCAT44(uVar32 & (uint)((ulonglong)dVar8 >> 0x20)
                                                           ,uVar30 & SUB84(dVar8,0)));
                auVar4._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
                uVar27 = movmskpd(uVar27,auVar4);
                if ((uVar31 & 0x3fffffff) != 0 || uVar27 != 0) goto LAB_14a230d39;
              }
              dVar8 = *(double *)(local_118._0_8_ + lVar33 + 0xc0) - *(double *)(pFVar34 + 0x40);
              dVar9 = *(double *)((FScriptContainerElement *)(local_118._0_8_ + lVar33 + 0xc0) + 8)
                      - *(double *)(pFVar34 + 0x48);
              dVar11 = *(double *)(local_118._0_8_ + lVar33 + 0xd0) - *(double *)(pFVar34 + 0x50);
              dVar13 = *(double *)((FScriptContainerElement *)(local_118._0_8_ + lVar33 + 0xd0) + 8)
                       - *(double *)(pFVar34 + 0x58);
              local_128 = dVar25;
              lVar37 = -(ulonglong)
                        (dVar25 < (double)CONCAT44(uVar22 & (uint)((ulonglong)dVar9 >> 0x20),
                                                   uVar21 & SUB84(dVar9,0)));
              auVar7._8_4_ = (int)lVar37;
              auVar7._0_8_ = -(ulonglong)
                              (dVar25 < (double)CONCAT44(uVar32 & (uint)((ulonglong)dVar8 >> 0x20),
                                                         uVar30 & SUB84(dVar8,0)));
              auVar7._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
              iVar28 = movmskpd(uVar27,auVar7);
              lVar37 = -(ulonglong)
                        (dVar25 < (double)CONCAT44(uVar22 & (uint)((ulonglong)dVar13 >> 0x20),
                                                   uVar21 & SUB84(dVar13,0)));
              auVar16._8_4_ = (int)lVar37;
              auVar16._0_8_ =
                   -(ulonglong)
                    (dVar25 < (double)CONCAT44(uVar32 & (uint)((ulonglong)dVar11 >> 0x20),
                                               uVar30 & SUB84(dVar11,0)));
              auVar16._12_4_ = (int)((ulonglong)lVar37 >> 0x20);
              uVar27 = movmskpd(0,auVar16);
              if ((uVar27 & 0x3fffffff) == 0 && iVar28 == 0) goto LAB_14a230d92;
            }
LAB_14a230d39:
            pFVar36 = &FLinearColor::Green;
            if (*(char *)(*(longlong *)this + 0x524) == '\0') {
              pTVar35 = (TTransform<double> *)(pFVar34 + -0x60);
            }
            else {
              pFVar36 = &FLinearColor::Red;
              pTVar35 = (TTransform<double> *)(local_118._0_8_ + lVar33 + 0x20);
            }
            FRigVMDrawInterface::DrawAxes
                      (&param_1->DrawInterface,&UE::Math::TTransform<double>::Identity,pTVar35,
                       pFVar36,fVar24,fVar20,SDPG_Foreground,fVar23);
          }
LAB_14a230d92:
          pFVar34 = pFVar34 + 0x110;
        }
        local_b0 = 0;
        if (local_b8 != (void *)0x0) {
          FMemory::Free(local_b8);
        }
        TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_118 + 0x20));
        if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_118._0_8_);
        }
      }
    }
  }
  return;
}

// BeginDestroy @ 14a241600

void __thiscall UControlRigTestData::BeginDestroy(UControlRigTestData *this)

{
  TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
  *this_00;
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint uVar2;
  code *pcVar3;
  TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
  *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  int local_res20;
  ForAnyElementType local_e8;
  uint local_e0 [4];
  FScriptContainerElement *local_d0;
  TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  UObject::BeginDestroy((UObject *)this);
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x108,8,&local_e8,(int *)(local_e0 + 1));
  local_e0[0] = iVar6 + 1;
  FControlRigTestDataFrame::FControlRigTestDataFrame
            ((FControlRigTestDataFrame *)(local_e8.Data + (longlong)iVar6 * 0x108),&this->Initial);
  if (((TArray<FControlRigTestDataFrame,TSizedDefaultAllocator<32>_> *)&local_e8 ==
       &this->InputFrames) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->InputFrames).ArrayNum;
  if (iVar6 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x108,8,iVar6,&local_e8,(int *)local_e0,(int *)(local_e0 + 1));
    ConstructItems<FControlRigTestDataFrame,FControlRigTestDataFrame,int>
              (local_e8.Data + (longlong)iVar7 * 0x108,
               (FControlRigTestDataFrame *)(this->InputFrames).AllocatorInstance.Data,iVar6);
  }
  if (((TArray<FControlRigTestDataFrame,TSizedDefaultAllocator<32>_> *)&local_e8 ==
       &this->OutputFrames) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = (this->OutputFrames).ArrayNum;
  if (iVar6 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x108,8,iVar6,&local_e8,(int *)local_e0,(int *)(local_e0 + 1));
    ConstructItems<FControlRigTestDataFrame,FControlRigTestDataFrame,int>
              (local_e8.Data + (longlong)iVar7 * 0x108,
               (FControlRigTestDataFrame *)(this->OutputFrames).AllocatorInstance.Data,iVar6);
  }
  uVar8 = (ulonglong)(int)local_e0[0];
  local_res18 = local_e0[0];
  pFVar14 = local_e8.Data + 0xd0;
  local_d0 = local_e8.Data + uVar8 * 0x108;
  do {
    pFVar13 = local_d0;
    if (local_e0[0] != (uint)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FControlRigTestDataFrame,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar14 + -0xd0 == pFVar13) {
      DestructItems<FControlRigTestDataFrame,int>
                ((FControlRigTestDataFrame *)local_e8.Data,local_e0[0]);
      if ((FControlRigTestDataFrame *)local_e8.Data != (FControlRigTestDataFrame *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      return;
    }
    uVar11 = *(uint *)(pFVar14 + 8);
    iStack_c0 = 0;
    local_a8 = 0;
    uStack_bc = 1;
    uStack_ac = 0;
    if (uVar11 != 0) {
      pFVar13 = *(FScriptContainerElement **)pFVar14;
      if (*(FScriptContainerElement **)pFVar14 == (FScriptContainerElement *)0x0) {
        pFVar13 = pFVar14 + -0x10;
      }
      uVar10 = *(uint *)pFVar13;
      while (uVar10 == 0) {
        lVar9 = (longlong)iStack_c0;
        local_a8 = local_a8 + 0x20;
        iStack_c0 = iStack_c0 + 1;
        uStack_ac = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_c0)
        goto LAB_14a24182d;
        uVar10 = *(uint *)(pFVar13 + lVar9 * 4 + 4);
      }
      uStack_bc = -uVar10 & uVar10;
      uVar8 = (ulonglong)uStack_bc * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res20 = (int)lVar9;
      uStack_ac = local_a8 + -1 + local_res20;
      if ((int)uVar11 < (int)uStack_ac) {
        uStack_ac = uVar11;
      }
    }
LAB_14a24182d:
    this_00 = (TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
               *)(pFVar14 + -0x20);
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar14 + -0x10);
    uStack_a4 = local_4c;
    iStack_a0 = *(int *)(pFVar14 + -0x18) - *(int *)(pFVar14 + 0x14);
    uVar10 = uVar11 & 0xffffffe0;
    TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
    uStack_b0 = 0xffffffff;
    TStack_90.CurrentBitIndex = uStack_ac;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    TStack_90._28_4_ = local_4c;
    TStack_90.BaseBitIndex = local_a8;
    uStack_70 = CONCAT44(uStack_9c,iStack_a0);
    iVar6 = (int)uVar11 >> 5;
    local_c8 = this_00;
    local_b8 = pTVar1;
    local_98 = this_00;
    TStack_90.Array = pTVar1;
    if (((int)uVar11 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar2 = *(uint *)(pFVar14 + 8);
    if (uVar11 != uVar2) {
      pTVar12 = *(TBitArray<FDefaultBitArrayAllocator> **)pFVar14;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)pFVar14 ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar12 = pTVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) &
               *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar6 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar6;
        uVar10 = uVar10 + 0x20;
        iVar6 = iVar6 + 1;
        uVar11 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
        goto LAB_14a241930;
        uVar11 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      uVar8 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_e0[2] = (uint)lVar9;
      uVar11 = local_e0[2] + -1 + uVar10;
      if ((int)uVar2 < (int)uVar11) {
        uVar11 = uVar2;
      }
    }
LAB_14a241930:
    while( true ) {
      pTVar4 = local_98;
      if (*(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34 !=
          (int)uStack_70) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_90.CurrentBitIndex == uVar11) && (TStack_90.Array == pTVar1)) &&
         (pTVar4 == this_00)) break;
      URigHierarchy::FMetadataStorage::Reset
                ((FMetadataStorage *)
                 ((longlong)TStack_90.CurrentBitIndex * 0x78 + *(longlong *)&pTVar4->Elements + 0x10
                 ));
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
    TSet<TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>,TDefaultMapHashableKeyFuncs<FRigElementKey,URigHierarchy::FMetadataStorage,0>,FDefaultSetAllocator>
    ::Reset(this_00);
    uVar8 = (ulonglong)local_res18;
    pFVar14 = pFVar14 + 0x108;
  } while( true );
}

// GetFrameIndexForTime @ 14a263bc0

int __thiscall
UControlRigTestData::GetFrameIndexForTime(UControlRigTestData *this,double param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FControlRigTestDataFrame,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  
  iVar4 = this->LastFrameIndex;
  pTVar5 = &this->InputFrames + ((ulonglong)param_2 ^ 1);
  if (iVar4 == -1) {
    this->LastFrameIndex = 0;
    iVar4 = 0;
  }
  while ((-1 < iVar4 && (iVar4 < pTVar5->ArrayNum))) {
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    pFVar1 = (pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 0x108;
    if (param_1 < *(double *)pFVar1 || param_1 == *(double *)pFVar1) break;
    this->LastFrameIndex = this->LastFrameIndex + 1;
    iVar4 = this->LastFrameIndex;
  }
  do {
    iVar4 = this->LastFrameIndex;
    if ((iVar4 < 0) || (pTVar5->ArrayNum <= iVar4)) {
LAB_14a263ceb:
      iVar4 = pTVar5->ArrayNum + -1;
      if (this->LastFrameIndex < iVar4) {
        iVar4 = this->LastFrameIndex;
      }
      iVar6 = 0;
      if (0 < iVar4) {
        iVar6 = iVar4;
      }
      this->LastFrameIndex = iVar6;
      return iVar6;
    }
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    if (*(double *)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 0x108) <= param_1)
    goto LAB_14a263ceb;
    this->LastFrameIndex = this->LastFrameIndex + -1;
  } while( true );
}

// GetPrivateStaticClass @ 14a268020

UClass * __cdecl UControlRigTestData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigTestData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigTestData",
               &Z_Registration_Info_UClass_UControlRigTestData.InnerSingleton,
               StaticRegisterNativesUControlRigTestData,0x528,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UControlRigTestData>,
               InternalVTableHelperCtorCaller<UControlRigTestData>,local_res8,
               UControlRigReplay::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigTestData.InnerSingleton;
}

// GetTimeRange @ 14a26bce0

TVector2<double> * __thiscall
UControlRigTestData::GetTimeRange
          (UControlRigTestData *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TVector2<double> *pTVar6;
  uint uVar7;
  
  iVar2 = (this->OutputFrames).ArrayNum;
  if (iVar2 == 0) {
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
    return __return_storage_ptr__;
  }
  uVar7 = 0;
  if ((int)(iVar2 - 1U) < iVar2) {
    uVar7 = ~(iVar2 - 1U) >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TVector2<double> *)(*pcVar4)();
      return pTVar6;
    }
  }
  iVar2 = (this->OutputFrames).ArrayNum;
  dVar1 = *(double *)
           ((this->OutputFrames).AllocatorInstance.Data + (longlong)iVar2 * 0x108 + -0x108);
  if (iVar2 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TVector2<double> *)(*pcVar4)();
      return pTVar6;
    }
  }
  pFVar3 = (this->OutputFrames).AllocatorInstance.Data;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar3;
  return __return_storage_ptr__;
}

// IsValidForTesting @ 14a275890

bool __thiscall UControlRigTestData::IsValidForTesting(UControlRigTestData *this)

{
  return (this->InputFrames).ArrayNum == (this->OutputFrames).ArrayNum;
}

// PerformTest @ 14a27b230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UControlRigTestData::PerformTest
          (UControlRigTestData *this,UControlRig *param_1,
          TFunction<void___cdecl(EMessageSeverity::Type,FString_const_&)> *param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  TFunction<void___cdecl(EMessageSeverity::Type,FString_const_&)> *pTVar16;
  bool bVar17;
  undefined1 uVar18;
  bool bVar19;
  int iVar20;
  uint *puVar21;
  undefined8 uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint *puVar28;
  longlong *plVar29;
  ForAnyElementType FVar30;
  FName *pFVar31;
  longlong lVar32;
  FScriptContainerElement *pFVar33;
  FName *pFVar34;
  bool bVar35;
  FControlRigTestDataFrame *this_00;
  FRigElementKey *pFVar36;
  uint uVar37;
  FName *pFVar38;
  FRigElementKey *pFVar39;
  longlong lVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auStackY_378 [32];
  undefined1 local_338;
  undefined1 local_337 [3];
  uint local_334;
  FString local_330;
  FString local_320;
  longlong local_310;
  FString local_308;
  undefined4 local_2f8 [2];
  undefined4 local_2f0 [2];
  TFunction<void___cdecl(EMessageSeverity::Type,FString_const_&)> *local_2e8;
  FScriptContainerElement *local_2e0;
  UControlRigTestData *local_2d8;
  UControlRig *local_2d0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_2c8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_2b8;
  longlong local_2a8;
  FRigElementKeyCollection local_2a0;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> local_290;
  TPairInitializer<FRigElementKey_const_&,int_const_&> local_280;
  undefined8 local_270;
  FScriptContainerElement *local_268;
  uint *local_260;
  FString local_258;
  FString local_248;
  double local_238;
  double local_230;
  double local_228;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FName local_108;
  FName FStack_100;
  FName local_f8;
  FName FStack_f0;
  FName local_e8;
  FName FStack_e0;
  undefined1 local_d8 [32];
  TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
  local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_378;
  bVar35 = true;
  local_2e8 = param_2;
  local_2d8 = this;
  local_2d0 = param_1;
  (**(code **)(param_1->_padding_ + 0x2c0))(param_1,1);
  FControlRigTestDataFrame::Restore(&this->Initial,param_1,true);
  FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
  local_2b8.ArrayNum = 1;
  uVar37 = 0;
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_2b8.AllocatorInstance,1,&local_2b8.ArrayMax);
  *(int **)local_2b8.AllocatorInstance.Data = local_280.Value;
  URigVMHost::SetEventQueue((URigVMHost *)param_1,&local_2b8);
  if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
  FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
  local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_2c8.AllocatorInstance,1,&local_2c8.ArrayMax);
  *(undefined8 *)local_2c8.AllocatorInstance.Data = local_270;
  URigVMHost::SetEventQueue((URigVMHost *)param_1,&local_2c8);
  if (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.AllocatorInstance.Data);
  }
  uVar15 = _UNK_15061cc8c;
  uVar14 = _UNK_15061cc88;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar23 = (this->OutputFrames).ArrayNum;
  iVar20 = (this->InputFrames).ArrayNum;
  if (iVar20 < iVar23) {
    iVar23 = iVar20;
  }
  if (0 < iVar23) {
    local_2a8 = 0;
    bVar35 = true;
    do {
      lVar32 = local_2a8;
      uVar25 = 0;
      if ((int)uVar37 < (this->InputFrames).ArrayNum) {
        uVar25 = ~uVar37 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar1 = (code *)swi(3);
        uVar18 = (*pcVar1)();
        return (bool)uVar18;
      }
      local_310 = lVar32 * 0x108;
      this_00 = (FControlRigTestDataFrame *)((this->InputFrames).AllocatorInstance.Data + local_310)
      ;
      uVar25 = 0;
      if ((int)uVar37 < (this->OutputFrames).ArrayNum) {
        uVar25 = ~uVar37 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar1 = (code *)swi(3);
        uVar18 = (*pcVar1)();
        return (bool)uVar18;
      }
      pFVar33 = (this->OutputFrames).AllocatorInstance.Data;
      local_2e0 = pFVar33;
      URigVMHost::SetAbsoluteAndDeltaTime
                ((URigVMHost *)param_1,(float)this_00->AbsoluteTime,(float)this_00->DeltaTime);
      bVar19 = FControlRigTestDataFrame::Restore(this_00,param_1,false);
      bVar17 = false;
      if (bVar19) {
        bVar17 = bVar35;
      }
      bVar35 = bVar17;
      (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
      puVar28 = (uint *)this->_padding_;
      puVar21 = puVar28 + (int)this->_padding_;
      for (; puVar28 != puVar21; puVar28 = puVar28 + 1) {
        if (*puVar28 == uVar37) goto LAB_14a27bf8b;
      }
      local_2a0.Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2a0.Keys.ArrayNum = 0;
      local_2a0.Keys.ArrayMax = 0;
      URigHierarchy::GetPose
                ((param_1->DynamicHierarchy).field0_0x0.DebugPtr,(FRigPose *)local_d8,false,All,
                 &local_2a0,true);
      if (local_2a0.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.Keys.AllocatorInstance.Data);
      }
      pFVar36 = *(FRigElementKey **)(pFVar33 + local_310 + 0x20);
      iVar23 = *(int *)(pFVar33 + local_310 + 0x28);
      pFVar38 = &pFVar36->Name;
      pFVar39 = (FRigElementKey *)((longlong)iVar23 * 0x110 + (longlong)pFVar36);
      while( true ) {
        lVar32 = local_310;
        if (*(int *)(pFVar33 + local_310 + 0x28) != iVar23) {
          local_338 = 0;
          `TCheckedPointerIterator<FRigPoseElement_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_338);
        }
        if (pFVar36 == pFVar39) break;
        if (local_d8._24_4_ != local_d8._20_4_) {
          TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
          ::Reset((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                   *)(local_d8 + 0x20));
          local_d8._24_4_ = local_d8._20_4_;
        }
        puVar21 = (uint *)TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                          ::Find((TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                                  *)(local_d8 + 0x20),pFVar36);
        if (puVar21 == (uint *)0x0) {
          local_334 = 0;
          if (0 < (int)local_d8._8_4_) {
            do {
              uVar25 = local_334;
              uVar27 = 0;
              if ((int)local_334 < (int)local_d8._8_4_) {
                uVar27 = ~local_334 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar1 = (code *)swi(3);
                uVar18 = (*pcVar1)();
                return (bool)uVar18;
              }
              local_260 = &local_334;
              pFVar33 = (FScriptContainerElement *)(local_d8._0_8_ + (longlong)(int)uVar25 * 0x110);
              local_268 = pFVar33;
              TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FRigElementKey_const_&,int_const_&>_>
                        ((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                          *)(local_d8 + 0x20),&local_280,(bool *)&local_268);
              if ((*(FName *)(pFVar33 + 4) == *pFVar38) &&
                 (uVar25 = local_334, *pFVar33 == (FScriptContainerElement)pFVar36->Type))
              goto LAB_14a27b6b4;
              local_334 = local_334 + 1;
            } while ((int)local_334 < (int)local_d8._8_4_);
          }
LAB_14a27b685:
          switch(pFVar36->Type) {
          case Bone:
            ::FName::ToString(&pFVar36->Name,&local_190);
            ::FString::PrintfImpl(&local_320,L"Bone(%s)");
            FVar30.Data = local_190.Data.AllocatorInstance.Data;
            break;
          case Null:
            ::FName::ToString(&pFVar36->Name,&local_180);
            ::FString::PrintfImpl(&local_320,L"Null(%s)");
            FVar30.Data = local_180.Data.AllocatorInstance.Data;
            break;
          default:
            local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_320.Data.ArrayNum = 0;
            local_320.Data.ArrayMax = 0;
            goto LAB_14a27bcff;
          case Control:
            ::FName::ToString(&pFVar36->Name,&local_170);
            ::FString::PrintfImpl(&local_320,L"Control(%s)");
            FVar30.Data = local_170.Data.AllocatorInstance.Data;
            break;
          case Curve:
            ::FName::ToString(&pFVar36->Name,&local_160);
            ::FString::PrintfImpl(&local_320,L"Curve(%s)");
            FVar30.Data = local_160.Data.AllocatorInstance.Data;
            break;
          case Reference:
            ::FName::ToString(&pFVar36->Name,&local_150);
            ::FString::PrintfImpl(&local_320,L"Reference(%s)");
            FVar30.Data = local_150.Data.AllocatorInstance.Data;
            break;
          case Connector:
            ::FName::ToString(&pFVar36->Name,&local_140);
            ::FString::PrintfImpl(&local_320,L"Connector(%s)");
            FVar30.Data = local_140.Data.AllocatorInstance.Data;
            break;
          case Last:
            ::FName::ToString(&pFVar36->Name,&local_130);
            ::FString::PrintfImpl(&local_320,L"Socket(%s)");
            FVar30.Data = local_130.Data.AllocatorInstance.Data;
          }
          if (FVar30.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar30.Data);
          }
LAB_14a27bcff:
          ::FString::PrintfImpl(&local_248,L"Frame[%03d]: Expected Rig Element \'%s\' is missing.");
          pTVar16 = local_2e8;
          local_2f0[0] = 1;
          UE::Core::Private::Function::CheckCallable(*(void **)local_2e8);
          pcVar1 = *(code **)pTVar16;
          plVar29 = *(longlong **)&pTVar16->field_0x28;
          if (*(longlong **)&pTVar16->field_0x28 == (longlong *)0x0) {
            plVar29 = (longlong *)&pTVar16->field_0x10;
          }
          uVar22 = (**(code **)(*plVar29 + 8))();
          (*pcVar1)(uVar22,local_2f0);
          FVar30.Data = local_320.Data.AllocatorInstance.Data;
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
            FVar30.Data = local_320.Data.AllocatorInstance.Data;
          }
LAB_14a27bd5d:
          if (FVar30.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar30.Data);
          }
          bVar35 = false;
        }
        else {
          uVar25 = *puVar21;
LAB_14a27b6b4:
          if (uVar25 == 0xffffffff) goto LAB_14a27b685;
          uVar24 = ~uVar25 >> 0x1f;
          uVar27 = 0;
          if ((int)uVar25 < (int)local_d8._8_4_) {
            uVar27 = uVar24;
          }
          if (uVar27 == 0) {
            uVar24 = 0x506106c8;
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar1 = (code *)swi(3);
              uVar18 = (*pcVar1)();
              return (bool)uVar18;
            }
          }
          uVar22 = local_d8._0_8_;
          lVar32 = (longlong)(int)uVar25 * 0x110;
          local_238 = (double)local_2d8->_padding_;
          dVar7 = *(double *)(local_d8._0_8_ + lVar32 + 0xb0) - *(double *)&pFVar36[0xe].Name.Number
          ;
          dVar8 = *(double *)((FScriptContainerElement *)(local_d8._0_8_ + lVar32 + 0xb0) + 8) -
                  (double)pFVar36[0xf].Name;
          dVar41 = *(double *)(local_d8._0_8_ + lVar32 + 0xa0) - (double)pFVar36[0xd].Name;
          dVar43 = *(double *)((FScriptContainerElement *)(local_d8._0_8_ + lVar32 + 0xa0) + 8) -
                   *(double *)(pFVar36 + 0xe);
          lVar40 = -(ulonglong)
                    (local_238 <
                    (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar15,
                                     SUB84(dVar8,0) & uVar14));
          auVar2._8_4_ = (int)lVar40;
          auVar2._0_8_ = -(ulonglong)
                          (local_238 <
                          (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar13,
                                           SUB84(dVar7,0) & uVar12));
          auVar2._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
          uVar25 = movmskpd(uVar24,auVar2);
          lVar40 = -(ulonglong)
                    (local_238 <
                    (double)CONCAT44((uint)((ulonglong)dVar43 >> 0x20) & uVar15,
                                     SUB84(dVar43,0) & uVar14));
          auVar9._8_4_ = (int)lVar40;
          auVar9._0_8_ = -(ulonglong)
                          (local_238 <
                          (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar13,
                                           SUB84(dVar41,0) & uVar12));
          auVar9._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
          iVar20 = movmskpd((int)local_2d8,auVar9);
          if ((uVar25 & 0x3fffffff) != 0 || iVar20 != 0) {
LAB_14a27b855:
            UE::Math::TTransform<double>::ToString
                      ((TTransform<double> *)&pFVar36[10].Name.Number,&local_1a0);
            UE::Math::TTransform<double>::ToString
                      ((TTransform<double> *)(uVar22 + lVar32 + 0x80),&local_1b0);
            switch(pFVar36->Type) {
            case Bone:
              ::FName::ToString(&pFVar36->Name,&local_220);
              ::FString::PrintfImpl(&local_330,L"Bone(%s)");
              FVar30.Data = local_220.Data.AllocatorInstance.Data;
              break;
            case Null:
              ::FName::ToString(&pFVar36->Name,&local_210);
              ::FString::PrintfImpl(&local_330,L"Null(%s)");
              FVar30.Data = local_210.Data.AllocatorInstance.Data;
              break;
            default:
              local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_330.Data.ArrayNum = 0;
              local_330.Data.ArrayMax = 0;
              goto LAB_14a27ba91;
            case Control:
              ::FName::ToString(&pFVar36->Name,&local_200);
              ::FString::PrintfImpl(&local_330,L"Control(%s)");
              FVar30.Data = local_200.Data.AllocatorInstance.Data;
              break;
            case Curve:
              ::FName::ToString(&pFVar36->Name,&local_1f0);
              ::FString::PrintfImpl(&local_330,L"Curve(%s)");
              FVar30.Data = local_1f0.Data.AllocatorInstance.Data;
              break;
            case Reference:
              ::FName::ToString(&pFVar36->Name,&local_1e0);
              ::FString::PrintfImpl(&local_330,L"Reference(%s)");
              FVar30.Data = local_1e0.Data.AllocatorInstance.Data;
              break;
            case Connector:
              ::FName::ToString(&pFVar36->Name,&local_1d0);
              ::FString::PrintfImpl(&local_330,L"Connector(%s)");
              FVar30.Data = local_1d0.Data.AllocatorInstance.Data;
              break;
            case Last:
              ::FName::ToString(&pFVar36->Name,&local_1c0);
              ::FString::PrintfImpl(&local_330,L"Socket(%s)");
              FVar30.Data = local_1c0.Data.AllocatorInstance.Data;
            }
            if (FVar30.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar30.Data);
            }
LAB_14a27ba91:
            ::FString::PrintfImpl
                      (&local_258,
                       L"Frame[%03d]: Expected Rig Element \'%s\' doesn\'t match. (%s vs expected %s)."
                      );
            pTVar16 = local_2e8;
            local_2f8[0] = 1;
            UE::Core::Private::Function::CheckCallable(*(void **)local_2e8);
            pcVar1 = *(code **)pTVar16;
            plVar29 = *(longlong **)&pTVar16->field_0x28;
            if (*(longlong **)&pTVar16->field_0x28 == (longlong *)0x0) {
              plVar29 = (longlong *)&pTVar16->field_0x10;
            }
            uVar22 = (**(code **)(*plVar29 + 8))();
            (*pcVar1)(uVar22,local_2f8);
            if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_258.Data.AllocatorInstance.Data);
            }
            if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_330.Data.AllocatorInstance.Data);
            }
            FVar30.Data = local_1a0.Data.AllocatorInstance.Data;
            if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
              FVar30.Data = local_1a0.Data.AllocatorInstance.Data;
            }
            goto LAB_14a27bd5d;
          }
          dVar7 = *(double *)(local_d8._0_8_ + lVar32 + 0x90) - *(double *)(pFVar36 + 0xc);
          dVar8 = *(double *)(local_d8._0_8_ + lVar32 + 0x98) - *(double *)&pFVar36[0xc].Name.Number
          ;
          dVar41 = *(double *)(local_d8._0_8_ + lVar32 + 0x90) + *(double *)(pFVar36 + 0xc);
          dVar43 = *(double *)(local_d8._0_8_ + lVar32 + 0x98) +
                   *(double *)&pFVar36[0xc].Name.Number;
          dVar42 = *(double *)(local_d8._0_8_ + lVar32 + 0x80) - *(double *)&pFVar36[10].Name.Number
          ;
          dVar44 = *(double *)(local_d8._0_8_ + lVar32 + 0x88) - (double)pFVar36[0xb].Name;
          dVar45 = *(double *)(local_d8._0_8_ + lVar32 + 0x80) + *(double *)&pFVar36[10].Name.Number
          ;
          dVar46 = *(double *)(local_d8._0_8_ + lVar32 + 0x88) + (double)pFVar36[0xb].Name;
          lVar40 = -(ulonglong)
                    (local_238 <
                    (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar15,
                                     SUB84(dVar8,0) & uVar14));
          auVar3._8_4_ = (int)lVar40;
          auVar3._0_8_ = -(ulonglong)
                          (local_238 <
                          (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar13,
                                           SUB84(dVar7,0) & uVar12));
          auVar3._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
          iVar26 = movmskpd(0,auVar3);
          lVar40 = -(ulonglong)
                    (local_238 <
                    (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) & uVar15,
                                     SUB84(dVar44,0) & uVar14));
          auVar4._8_4_ = (int)lVar40;
          auVar4._0_8_ = -(ulonglong)
                          (local_238 <
                          (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar13,
                                           SUB84(dVar42,0) & uVar12));
          auVar4._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
          uVar25 = movmskpd(iVar20,auVar4);
          uVar27 = iVar26 << 2 | uVar25;
          local_230 = local_238;
          if (uVar27 != 0) {
            lVar40 = -(ulonglong)
                      (local_238 <
                      (double)CONCAT44((uint)((ulonglong)dVar43 >> 0x20) & uVar15,
                                       SUB84(dVar43,0) & uVar14));
            auVar5._8_4_ = (int)lVar40;
            auVar5._0_8_ = -(ulonglong)
                            (local_238 <
                            (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar13,
                                             SUB84(dVar41,0) & uVar12));
            auVar5._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
            uVar27 = movmskpd(uVar27,auVar5);
            lVar40 = -(ulonglong)
                      (local_238 <
                      (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) & uVar15,
                                       SUB84(dVar46,0) & uVar14));
            auVar10._8_4_ = (int)lVar40;
            auVar10._0_8_ =
                 -(ulonglong)
                  (local_238 <
                  (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) & uVar13,
                                   SUB84(dVar45,0) & uVar12));
            auVar10._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
            uVar25 = movmskpd(uVar25,auVar10);
            if ((uVar27 & 0x3fffffff) != 0 || uVar25 != 0) goto LAB_14a27b855;
          }
          dVar7 = *(double *)(local_d8._0_8_ + lVar32 + 0xd0) - (double)pFVar36[0x11].Name;
          dVar8 = *(double *)((FScriptContainerElement *)(local_d8._0_8_ + lVar32 + 0xd0) + 8) -
                  *(double *)(pFVar36 + 0x12);
          dVar41 = *(double *)(local_d8._0_8_ + lVar32 + 0xc0) - *(double *)(pFVar36 + 0x10);
          dVar43 = *(double *)((FScriptContainerElement *)(local_d8._0_8_ + lVar32 + 0xc0) + 8) -
                   *(double *)&pFVar36[0x10].Name.Number;
          lVar40 = -(ulonglong)
                    (local_238 <
                    (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar15,
                                     SUB84(dVar8,0) & uVar14));
          auVar6._8_4_ = (int)lVar40;
          auVar6._0_8_ = -(ulonglong)
                          (local_238 <
                          (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar13,
                                           SUB84(dVar7,0) & uVar12));
          auVar6._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
          uVar27 = movmskpd((int)lVar32,auVar6);
          lVar40 = -(ulonglong)
                    (local_238 <
                    (double)CONCAT44((uint)((ulonglong)dVar43 >> 0x20) & uVar15,
                                     SUB84(dVar43,0) & uVar14));
          auVar11._8_4_ = (int)lVar40;
          auVar11._0_8_ =
               -(ulonglong)
                (local_238 <
                (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar13,SUB84(dVar41,0) & uVar12
                                ));
          auVar11._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
          iVar20 = movmskpd(uVar25,auVar11);
          local_228 = local_238;
          if ((uVar27 & 0x3fffffff) != 0 || iVar20 != 0) goto LAB_14a27b855;
        }
        pFVar36 = (FRigElementKey *)&pFVar36[0x16].Name.Number;
        pFVar38 = pFVar38 + 0x22;
        pFVar33 = local_2e0;
      }
      URigVMHost::GetExternalVariables((URigVMHost *)local_2d0,&local_290);
      iVar23 = local_290.ArrayNum;
      pFVar33 = local_2e0;
      pFVar38 = (FName *)(local_290.AllocatorInstance.Data + (longlong)local_290.ArrayNum * 0x30);
      FVar30.Data = local_290.AllocatorInstance.Data;
      while( true ) {
        if (local_290.ArrayNum != iVar23) {
          local_337[0] = 0;
          `TCheckedPointerIterator<FRigVMExternalVariable_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_337);
        }
        if ((FName *)FVar30.Data == pFVar38) break;
        local_108 = *(FName *)FVar30.Data;
        FStack_100 = *(FName *)((longlong)FVar30.Data + 8);
        pFVar34 = *(FName **)(pFVar33 + lVar32 + 0x10);
        local_f8 = *(FName *)((longlong)FVar30.Data + 0x10);
        FStack_f0 = *(FName *)((longlong)FVar30.Data + 0x18);
        local_e8 = *(FName *)((longlong)FVar30.Data + 0x20);
        FStack_e0 = *(FName *)((longlong)FVar30.Data + 0x28);
        pFVar31 = pFVar34 + (longlong)*(int *)(pFVar33 + local_310 + 0x18) * 4;
        if (pFVar34 == pFVar31) {
LAB_14a27bf31:
          FVar30.Data = FVar30.Data + 0x30;
          lVar32 = local_310;
        }
        else {
          do {
            if ((*pFVar34 == local_108) && (pFVar34[1] == local_f8)) {
              local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_308.Data.ArrayNum = 0;
              local_308.Data.ArrayMax = 0;
              FProperty::ExportText_Direct
                        ((FProperty *)*(FName *)((longlong)FVar30.Data + 8),&local_308,
                         (void *)*(FName *)((longlong)FVar30.Data + 0x28),
                         (void *)*(FName *)((longlong)FVar30.Data + 0x28),(UObject *)0x0,0,
                         (UObject *)0x0);
              uVar25 = pFVar34[3].ComparisonIndex.Value;
              if (local_308.Data.ArrayNum == uVar25) {
                if (1 < local_308.Data.ArrayNum) {
                  iVar20 = FGenericPlatformStricmp::Stricmp
                                     ((wchar_t *)local_308.Data.AllocatorInstance.Data,
                                      (wchar_t *)pFVar34[2]);
                  bVar17 = iVar20 == 0;
                  goto LAB_14a27bea0;
                }
              }
              else {
                bVar17 = uVar25 + local_308.Data.ArrayNum == 1;
LAB_14a27bea0:
                if (!bVar17) {
                  if (1 < (byte)LogControlRig._0_1_) {
                    ::FName::ToString((FName *)FVar30.Data,&local_120);
                    UE::Logging::Private::BasicLog<2>
                              (&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
                    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_120.Data.AllocatorInstance.Data);
                    }
                  }
                  bVar35 = false;
                }
              }
              if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_308.Data.AllocatorInstance.Data);
              }
              goto LAB_14a27bf31;
            }
            pFVar34 = pFVar34 + 4;
          } while (pFVar34 != pFVar31);
          FVar30.Data = FVar30.Data + 0x30;
          lVar32 = local_310;
        }
      }
      if ((FName *)local_290.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_290.AllocatorInstance.Data);
      }
      local_b8.HashSize = 0;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_d8 + 0x20));
      this = local_2d8;
      param_1 = local_2d0;
      if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_d8._0_8_);
        this = local_2d8;
        param_1 = local_2d0;
      }
LAB_14a27bf8b:
      uVar37 = uVar37 + 1;
      iVar23 = (this->OutputFrames).ArrayNum;
      local_2a8 = local_2a8 + 1;
      iVar20 = (this->InputFrames).ArrayNum;
      if (iVar20 < iVar23) {
        iVar23 = iVar20;
      }
      param_2 = local_2e8;
    } while ((int)uVar37 < iVar23);
  }
  if (*(longlong *)param_2 != 0) {
    plVar29 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar29 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar29 + 0x10))();
  }
  return bVar35;
}

// Serialize @ 14a28eeb0

void __thiscall UControlRigTestData::Serialize(UControlRigTestData *this,FArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FGuid FVar3;
  int iVar4;
  FCustomVersionContainer *pFVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong *puVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FName local_res8;
  FScriptContainerElement *local_res10;
  FGuid local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FControlRigObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  this->LastFrameIndex = -1;
  pFVar5 = (FCustomVersionContainer *)(**(code **)(*(longlong *)param_1 + 0x60))(param_1);
  FCustomVersionContainer::operator=(&(this->Initial).ArchiveCustomVersions,pFVar5);
  (this->Initial).bTestMetadata = (this->Initial).Metadata.ArrayNum != 0;
  pFVar10 = (this->InputFrames).AllocatorInstance.Data;
  iVar4 = (this->InputFrames).ArrayNum;
  pFVar8 = pFVar10 + 0xac;
  pFVar12 = pFVar10 + (longlong)iVar4 * 0x108;
  local_res10 = pFVar12;
  while( true ) {
    if ((this->InputFrames).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FControlRigTestDataFrame,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar10 == pFVar12) break;
    pFVar6 = (FScriptContainerElement *)(**(code **)(*(longlong *)param_1 + 0x60))(param_1);
    pFVar1 = pFVar8 + -0xc;
    if (pFVar1 != pFVar6) {
      iVar2 = *(int *)&pFVar6[8].field_0x0;
      pFVar6 = *(FScriptContainerElement **)&pFVar6->field_0x0;
      *(int *)(pFVar8 + -4) = iVar2;
      if ((iVar2 == 0) && (*(int *)pFVar8 == 0)) {
        *(undefined4 *)pFVar8 = 0;
        pFVar12 = local_res10;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar2,*(int *)pFVar8,(ForAnyElementType *)pFVar1,iVar2,(int *)pFVar8);
        pFVar12 = local_res10;
        if (iVar2 != 0) {
          memcpy(*(FScriptContainerElement **)&pFVar1->field_0x0,pFVar6,(longlong)iVar2 * 0x28);
          pFVar12 = local_res10;
        }
      }
    }
    pFVar10 = pFVar10 + 0x108;
    pFVar8[0x54] = (FScriptContainerElement)(*(int *)(pFVar8 + -0x14) != 0);
    pFVar8 = pFVar8 + 0x108;
  }
  pFVar10 = (this->OutputFrames).AllocatorInstance.Data;
  iVar4 = (this->OutputFrames).ArrayNum;
  pFVar8 = pFVar10 + 0xac;
  pFVar12 = pFVar10 + (longlong)iVar4 * 0x108;
  local_res10 = pFVar12;
  while( true ) {
    if ((this->OutputFrames).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FControlRigTestDataFrame,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar10 == pFVar12) break;
    pFVar6 = (FScriptContainerElement *)(**(code **)(*(longlong *)param_1 + 0x60))(param_1);
    pFVar1 = pFVar8 + -0xc;
    if (pFVar1 != pFVar6) {
      iVar2 = *(int *)&pFVar6[8].field_0x0;
      pFVar6 = *(FScriptContainerElement **)&pFVar6->field_0x0;
      *(int *)(pFVar8 + -4) = iVar2;
      if ((iVar2 == 0) && (*(int *)pFVar8 == 0)) {
        *(undefined4 *)pFVar8 = 0;
        pFVar12 = local_res10;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar2,*(int *)pFVar8,(ForAnyElementType *)pFVar1,iVar2,(int *)pFVar8);
        pFVar12 = local_res10;
        if (iVar2 != 0) {
          memcpy(*(FScriptContainerElement **)&pFVar1->field_0x0,pFVar6,(longlong)iVar2 * 0x28);
          pFVar12 = local_res10;
        }
      }
    }
    pFVar10 = pFVar10 + 0x108;
    pFVar8[0x54] = (FScriptContainerElement)(*(int *)(pFVar8 + -0x14) != 0);
    pFVar8 = pFVar8 + 0x108;
  }
  local_48 = FControlRigObjectVersion::GUID;
  iVar4 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_48);
  if (iVar4 < 0x1e) {
    pFVar10 = (this->Initial).Pose.Elements.AllocatorInstance.Data;
    iVar4 = (this->Initial).Pose.Elements.ArrayNum;
    pFVar8 = pFVar10 + 0xf8;
    pFVar12 = pFVar10 + (longlong)iVar4 * 0x110;
    while( true ) {
      if ((this->Initial).Pose.Elements.ArrayNum != iVar4) {
        `TCheckedPointerIterator<FRigPoseElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      FVar3 = local_48;
      if (pFVar10 == pFVar12) break;
      local_48.A = local_48._1_4_ << 8;
      pFVar10 = pFVar10 + 0x110;
      local_48._8_8_ = FVar3._8_8_;
      local_48.B = 0;
      *(undefined8 *)pFVar8 = local_48._0_8_;
      *(undefined4 *)(pFVar8 + 8) = 0;
      pFVar8 = pFVar8 + 0x110;
    }
    iVar4 = (this->InputFrames).ArrayNum;
    uVar7 = (ulonglong)iVar4;
    pFVar10 = (this->InputFrames).AllocatorInstance.Data;
    local_res10 = (FScriptContainerElement *)CONCAT44(local_res10._4_4_,iVar4);
    pFVar8 = pFVar10 + 0x28;
    pFVar12 = pFVar10 + uVar7 * 0x108;
    while( true ) {
      if ((this->InputFrames).ArrayNum != (int)uVar7) {
        `TCheckedPointerIterator<FControlRigTestDataFrame,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar10 == pFVar12) break;
      lVar13 = *(longlong *)(pFVar8 + -8);
      iVar4 = *(int *)pFVar8;
      puVar9 = (ulonglong *)(lVar13 + 0xf8);
      lVar11 = (longlong)iVar4 * 0x110 + lVar13;
      while( true ) {
        if (*(int *)pFVar8 != iVar4) {
          `TCheckedPointerIterator<FRigPoseElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res8);
        }
        FVar3 = local_48;
        if (lVar13 == lVar11) break;
        local_48.A = local_48._1_4_ << 8;
        local_48._8_8_ = FVar3._8_8_;
        local_48.B = 0;
        lVar13 = lVar13 + 0x110;
        *puVar9 = local_48._0_8_;
        *(undefined4 *)(puVar9 + 1) = 0;
        puVar9 = puVar9 + 0x22;
      }
      uVar7 = (ulonglong)local_res10 & 0xffffffff;
      pFVar10 = pFVar10 + 0x108;
      pFVar8 = pFVar8 + 0x108;
    }
    iVar4 = (this->OutputFrames).ArrayNum;
    uVar7 = (ulonglong)iVar4;
    pFVar10 = (this->OutputFrames).AllocatorInstance.Data;
    local_res10 = (FScriptContainerElement *)CONCAT44(local_res10._4_4_,iVar4);
    pFVar8 = pFVar10 + 0x28;
    pFVar12 = pFVar10 + uVar7 * 0x108;
    while( true ) {
      if ((this->OutputFrames).ArrayNum != (int)uVar7) {
        `TCheckedPointerIterator<FControlRigTestDataFrame,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar10 == pFVar12) break;
      lVar13 = *(longlong *)(pFVar8 + -8);
      iVar4 = *(int *)pFVar8;
      puVar9 = (ulonglong *)(lVar13 + 0xf8);
      lVar11 = (longlong)iVar4 * 0x110 + lVar13;
      while( true ) {
        if (*(int *)pFVar8 != iVar4) {
          `TCheckedPointerIterator<FRigPoseElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res8);
        }
        FVar3 = local_48;
        if (lVar13 == lVar11) break;
        local_48.A = local_48._1_4_ << 8;
        local_48._8_8_ = FVar3._8_8_;
        local_48.B = 0;
        lVar13 = lVar13 + 0x110;
        *puVar9 = local_48._0_8_;
        *(undefined4 *)(puVar9 + 1) = 0;
        puVar9 = puVar9 + 0x22;
      }
      uVar7 = (ulonglong)local_res10 & 0xffffffff;
      pFVar10 = pFVar10 + 0x108;
      pFVar8 = pFVar8 + 0x108;
    }
  }
  if ((this->EventQueue).ArrayNum == 0) {
    FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
    TArray<FName,TSizedDefaultAllocator<32>_>::CopyToEmpty<FName,int>
              (&this->EventQueue,&local_res8,1,(this->EventQueue).ArrayMax);
  }
  return;
}

// Serialize @ 14a28f340

void __thiscall
UControlRigTestData::Serialize(UControlRigTestData *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StartRecording @ 14a297880

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRigTestData::StartRecording(UControlRigTestData *this,UControlRig *param_1)

{
  int iVar1;
  FDelegateHandle FVar2;
  LARGE_INTEGER local_res10;
  <lambda_1> local_res18;
  
  if (param_1 != (UControlRig *)0x0) {
    local_res10 = (LARGE_INTEGER)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)((longlong)&this->_padding_ + 4),(FObjectPtr)&local_res10);
    (**(code **)(this->_padding_ + 0x2d0))(this);
    FVar2.ID = this->_padding_;
    if (FVar2.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &param_1->PreConstructionEvent,FVar2);
      this->_padding_ = 0;
    }
    if (this->_padding_ != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_,
                 (FDelegateHandle)this->_padding_);
      this->_padding_ = 0;
    }
    if (this->_padding_ != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_,
                 (FDelegateHandle)this->_padding_);
      this->_padding_ = 0;
    }
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&this->EventQueue,(TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1->_padding_);
    QueryPerformanceCounter(&local_res10);
    this->_padding_ =
         (longlong)
         ((double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000);
    local_res10 = (LARGE_INTEGER)this;
    FVar2 = TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
            ::AddLambda<_UControlRigTestData::StartRecording_::__l2::<lambda_1>_>
                      ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                        *)&param_1->PreConstructionEvent,&local_res18);
    this->_padding_ = *(longlong *)FVar2.ID;
    local_res10 = (LARGE_INTEGER)this;
    FVar2 = TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
            ::AddLambda<_UControlRigTestData::StartRecording_::__l2::<lambda_2>_>
                      ((TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                        *)&param_1->_padding_,(<lambda_2> *)&local_res18);
    this->_padding_ = *(longlong *)FVar2.ID;
    local_res10 = (LARGE_INTEGER)this;
    FVar2 = TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
            ::AddLambda<_UControlRigTestData::StartRecording_::__l2::<lambda_3>_>
                      ((TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                        *)&param_1->_padding_,(<lambda_3> *)&local_res18);
    iVar1 = (this->InputFrames).ArrayNum;
    this->_padding_ = *(longlong *)FVar2.ID;
    if (iVar1 == 0) {
      (**(code **)(param_1->_padding_ + 0x318))(param_1);
    }
    return true;
  }
  return false;
}

// StartReplay @ 14a297c70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UControlRigTestData::StartReplay
          (UControlRigTestData *this,UControlRig *param_1,EControlRigReplayPlaybackMode param_2)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FDelegateHandle FVar6;
  undefined7 in_register_00000081;
  UControlRig *local_48;
  <lambda_1> local_40;
  <lambda_2> local_38;
  <lambda_3> local_30 [3];
  
  (**(code **)(this->_padding_ + 0x2c0))(this,param_1,CONCAT71(in_register_00000081,param_2));
  (**(code **)(this->_padding_ + 0x2d0))(this);
  if (param_1 != (UControlRig *)0x0) {
    if (this->_padding_ != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &param_1->PreConstructionEvent,(FDelegateHandle)this->_padding_);
      this->_padding_ = 0;
    }
    if (this->_padding_ != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_,
                 (FDelegateHandle)this->_padding_);
      this->_padding_ = 0;
    }
    if (this->_padding_ != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_,
                 (FDelegateHandle)this->_padding_);
      this->_padding_ = 0;
    }
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1->_padding_,&this->EventQueue);
    iVar2 = (this->InputFrames).ArrayNum;
    this->bIsApplyingOutputs = true;
    if ((iVar2 != 0) && ((this->OutputFrames).ArrayNum != 0)) {
      if (iVar2 < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      dVar1 = *(double *)((this->InputFrames).AllocatorInstance.Data + 8);
      if ((this->InputFrames).ArrayNum < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      URigVMHost::SetAbsoluteAndDeltaTime
                ((URigVMHost *)param_1,(float)*(double *)(this->InputFrames).AllocatorInstance.Data,
                 (float)dVar1);
      FVar6 = TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
              ::AddLambda<_UControlRigTestData::StartReplay_::__l2::<lambda_1>_>
                        ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                          *)&param_1->PreConstructionEvent,&local_40);
      this->_padding_ = *(longlong *)FVar6.ID;
      FVar6 = TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
              ::AddLambda<_UControlRigTestData::StartReplay_::__l2::<lambda_2>_>
                        ((TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                          *)&param_1->_padding_,&local_38);
      this->_padding_ = *(longlong *)FVar6.ID;
      FVar6 = TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
              ::AddLambda<_UControlRigTestData::StartReplay_::__l2::<lambda_3>_>
                        ((TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                          *)&param_1->_padding_,local_30);
      this->_padding_ = *(longlong *)FVar6.ID;
      (**(code **)(param_1->_padding_ + 0x318))(param_1);
      local_48 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)((longlong)&this->_padding_ + 4),(FObjectPtr)&local_48);
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesUControlRigTestData @ 14a2980b0

void __cdecl UControlRigTestData::StaticRegisterNativesUControlRigTestData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UControlRigTestData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopRecording @ 14a2982a0

bool __thiscall UControlRigTestData::StopRecording(UControlRigTestData *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
    if (pUVar2 != (UObject *)0x0) {
      if (this->_padding_ != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x28].field_0x20,
                   (FDelegateHandle)this->_padding_);
        this->_padding_ = 0;
      }
      if (this->_padding_ != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0xc].field_0x18,
                   (FDelegateHandle)this->_padding_);
        this->_padding_ = 0;
      }
      if (this->_padding_ != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0xb].field_0x20,
                   (FDelegateHandle)this->_padding_);
        this->_padding_ = 0;
      }
    }
    *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
    return true;
  }
  return false;
}

// StopReplay @ 14a298480

bool __thiscall UControlRigTestData::StopReplay(UControlRigTestData *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (pUVar1 != (UObject *)0x0) {
    if (this->_padding_ != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1[0x28].field_0x20,
                 (FDelegateHandle)this->_padding_);
      this->_padding_ = 0;
    }
    if (this->_padding_ != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1[0xc].field_0x18,
                 (FDelegateHandle)this->_padding_);
      this->_padding_ = 0;
    }
    if (this->_padding_ != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1[0xb].field_0x20,
                 (FDelegateHandle)this->_padding_);
      this->_padding_ = 0;
    }
    *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
    return true;
  }
  return false;
}

// execGetFrameIndexForTime @ 14a2b2720

void __cdecl
UControlRigTestData::execGetFrameIndexForTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int local_res10 [2];
  double local_res18 [2];
  
  local_res18[0] = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = GetFrameIndexForTime((UControlRigTestData *)param_1,local_res18[0],local_res10[0] != 0);
  *(int *)param_3 = iVar2;
  return;
}

