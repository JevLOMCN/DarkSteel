// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRigSpline
// Functions: 6

// StaticStruct @ 14debe7a0

UScriptStruct * __cdecl FRigUnit_DrawControlRigSpline::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_DrawControlRigSpline.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRigSpline();
    Z_Registration_Info_UScriptStruct_FRigUnit_DrawControlRigSpline.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline,(UObject *)pUVar1,
                         L"RigUnit_DrawControlRigSpline");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_DrawControlRigSpline_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_DrawControlRigSpline.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_DrawControlRigSpline.OuterSingleton;
}

// GetExecuteContextStruct @ 14debe820

UScriptStruct * __thiscall
FRigUnit_DrawControlRigSpline::GetExecuteContextStruct(FRigUnit_DrawControlRigSpline *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14debe830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_DrawControlRigSpline::Execute(FRigUnit_DrawControlRigSpline *this)

{
  undefined1 auStackY_298 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Spline,&this->Color,this->Thickness,
                this->Detail);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14dec39d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_DrawControlRigSpline::Execute
          (FRigUnit_DrawControlRigSpline *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Spline,&this->Color,this->Thickness,this->Detail);
  return;
}

// RigVMExecute @ 14dec61f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_DrawControlRigSpline::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FControlRigSpline *pFVar5;
  FLinearColor *pFVar6;
  float *pfVar7;
  FRigVMMemoryHandle *pFVar8;
  int *piVar9;
  FControlRigExecuteContext *pFVar10;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FControlRigSpline *)pFVar8->Ptr;
  }
  else {
    pFVar5 = (FControlRigSpline *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  if (iVar2 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FLinearColor *)pFVar8[1].Ptr;
  }
  else {
    pFVar6 = (FLinearColor *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  if (iVar2 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar7 = (float *)pFVar8[2].Ptr;
  }
  else {
    pfVar7 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar8[2].PropertyPath,pFVar8[2].Ptr,pFVar8[2].Property);
  }
  fVar1 = *pfVar7;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  piVar9 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar8,true,-1);
  iVar2 = *piVar9;
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar10,pFVar5,pFVar6,fVar1,iVar2);
  return;
}

// StaticExecute @ 14decaee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_DrawControlRigSpline::StaticExecute
          (FControlRigExecuteContext *param_1,FControlRigSpline *param_2,FLinearColor *param_3,
          float param_4,int param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  double *pdVar3;
  double dVar4;
  FControlRigSplineImpl *pFVar5;
  code *pcVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  ForAnyElementType _Src;
  void *pvVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  TVector<double> *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  ForAnyElementType *pFVar21;
  float fVar22;
  float fVar23;
  undefined1 auStackY_1b8 [32];
  TVector<double> local_168;
  undefined8 local_148;
  undefined1 local_140;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  double local_108 [2];
  double local_f8 [2];
  double local_e8 [2];
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  undefined1 local_a8;
  undefined4 local_a4;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if ((*(longlong *)&param_1->field_0x58 != 0) &&
     (pFVar5 = (param_2->SplineData).Object, pFVar5 != (FControlRigSplineImpl *)0x0)) {
    if (pFVar5->Spline == (ControlRigBaseSpline *)0x0) {
      if (1 < (byte)LogControlRig._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogControlRig);
      }
    }
    else {
      local_128 = *(undefined8 *)&param_3->field0_0x0;
      uStack_120 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      iVar13 = 0x40;
      if (param_5 < 0x40) {
        iVar13 = param_5;
      }
      iVar7 = 4;
      if (4 < iVar13) {
        iVar7 = iVar13;
      }
      local_f8 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      local_108 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      uVar15 = 0;
      local_d8 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_e8 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_148 = 0;
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 0;
      local_b8 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_a0 = (void *)0x0;
      local_98 = 0;
      local_90 = (void *)0x0;
      local_88 = 0;
      local_80 = 0;
      local_140 = 2;
      local_c8 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_a8 = 1;
      local_a4 = 0xbf800000;
      local_118 = param_4;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_138,iVar7,Default);
      fVar22 = 0.0;
      lVar17 = (longlong)iVar7;
      fVar23 = __real_3f800000 / (float)(iVar7 + -1);
      uVar20 = uVar15;
      if (0 < iVar7) {
        do {
          pTVar14 = FControlRigSpline::PositionAtParam(param_2,&local_168,fVar22);
          uVar19 = (uint)uVar20;
          dVar8 = (pTVar14->field0_0x0)._s_0.X;
          dVar9 = (pTVar14->field0_0x0)._s_0.Y;
          dVar4 = (pTVar14->field0_0x0)._s_0.Z;
          uVar12 = 0;
          if ((int)uVar19 < local_138.ArrayNum) {
            uVar12 = ~uVar19 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar22 = fVar22 + fVar23;
          *(double *)(local_138.AllocatorInstance.Data + uVar15) = dVar8;
          *(double *)(local_138.AllocatorInstance.Data + uVar15 + 8) = dVar9;
          *(double *)(local_138.AllocatorInstance.Data + uVar15 + 0x10) = dVar4;
          uVar15 = uVar15 + 0x18;
          lVar17 = lVar17 + -1;
          uVar20 = (ulonglong)(uVar19 + 1);
        } while (lVar17 != 0);
      }
      lVar17 = *(longlong *)&param_1->field_0x58;
      if (((*(undefined8 **)(lVar17 + 8) <= &local_148) &&
          (&local_148 < *(undefined8 **)(lVar17 + 8) + (longlong)*(int *)(lVar17 + 0x14) * 0x1a)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar13 = *(int *)(lVar17 + 0x10);
      if (iVar13 == *(int *)(lVar17 + 0x14)) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10d0,(ForAnyElementType *)(lVar17 + 8),(int *)(lVar17 + 0x14));
      }
      _Src.Data = local_138.AllocatorInstance.Data;
      *(int *)(lVar17 + 0x10) = iVar13 + 1;
      lVar17 = *(longlong *)(lVar17 + 8);
      lVar16 = (longlong)iVar13 * 0xd0;
      pFVar21 = (ForAnyElementType *)(lVar17 + 0x10 + lVar16);
      *(undefined8 *)(lVar16 + lVar17) = local_148;
      *(undefined1 *)(lVar16 + 8 + lVar17) = local_140;
      piVar1 = (int *)((longlong)&pFVar21[1].Data + 4);
      pFVar21->Data = (FScriptContainerElement *)0x0;
      lVar18 = (longlong)local_138.ArrayNum;
      *(int *)&pFVar21[1].Data = local_138.ArrayNum;
      if (local_138.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_138.ArrayNum,0,pFVar21,local_138.ArrayNum,piVar1);
        memcpy(pFVar21->Data,_Src.Data,lVar18 * 0x18);
      }
      pvVar10 = local_a0;
      puVar2 = (undefined8 *)(lVar16 + 0x20 + lVar17);
      *puVar2 = local_128;
      puVar2[1] = uStack_120;
      pFVar21 = (ForAnyElementType *)(lVar17 + 0xa8 + lVar16);
      *(float *)(lVar16 + 0x30 + lVar17) = local_118;
      pdVar3 = (double *)(lVar16 + 0x40 + lVar17);
      *pdVar3 = local_108[0];
      pdVar3[1] = local_108[1];
      pdVar3 = (double *)(lVar16 + 0x50 + lVar17);
      *pdVar3 = local_f8[0];
      pdVar3[1] = local_f8[1];
      pdVar3 = (double *)(lVar16 + 0x60 + lVar17);
      *pdVar3 = local_e8[0];
      pdVar3[1] = local_e8[1];
      pdVar3 = (double *)(lVar16 + 0x70 + lVar17);
      *pdVar3 = local_d8[0];
      pdVar3[1] = local_d8[1];
      pdVar3 = (double *)(lVar16 + 0x80 + lVar17);
      *pdVar3 = local_c8[0];
      pdVar3[1] = local_c8[1];
      pdVar3 = (double *)(lVar16 + 0x90 + lVar17);
      *pdVar3 = local_b8[0];
      pdVar3[1] = local_b8[1];
      *(undefined1 *)(lVar16 + 0xa0 + lVar17) = local_a8;
      piVar1 = (int *)((longlong)&pFVar21[1].Data + 4);
      *(undefined4 *)(lVar16 + 0xa4 + lVar17) = local_a4;
      pFVar21->Data = (FScriptContainerElement *)0x0;
      lVar18 = (longlong)(int)local_98;
      *(int *)&pFVar21[1].Data = (int)local_98;
      if ((int)local_98 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,4,(int)local_98,0,pFVar21,(int)local_98,piVar1);
        memcpy(pFVar21->Data,pvVar10,lVar18 * 0x58);
      }
      pvVar10 = local_90;
      pFVar21 = (ForAnyElementType *)(lVar17 + 0xb8 + lVar16);
      pFVar21->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&pFVar21[1].Data + 4);
      lVar18 = (longlong)(int)local_88;
      *(int *)&pFVar21[1].Data = (int)local_88;
      if ((int)local_88 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_88,0,pFVar21,(int)local_88,piVar1);
        memcpy(pFVar21->Data,pvVar10,lVar18 << 2);
      }
      *(undefined8 *)(lVar16 + 200 + lVar17) = local_80;
      if (local_90 != (void *)0x0) {
        FMemory::Free(local_90);
      }
      if (local_a0 != (void *)0x0) {
        FMemory::Free(local_a0);
      }
      if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
    }
  }
  return;
}

