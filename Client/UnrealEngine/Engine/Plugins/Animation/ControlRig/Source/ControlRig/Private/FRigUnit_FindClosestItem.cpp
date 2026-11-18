// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4f3ae0

UScriptStruct * __cdecl FRigUnit_FindClosestItem::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_FindClosestItem.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_FindClosestItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FindClosestItem,(UObject *)pUVar1,
                         L"RigUnit_FindClosestItem");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_FindClosestItem_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_FindClosestItem.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_FindClosestItem.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f3cb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_FindClosestItem::GetExecuteContextStruct(FRigUnit_FindClosestItem *this)

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

// Execute @ 14a4f4300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_FindClosestItem::Execute(FRigUnit_FindClosestItem *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackY_2a8 [32];
  TArrayView<FRigElementKey_const_,int> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
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
  local_278.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_278.ArrayNum = iVar1;
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->Point,&this->Item,
                &this->CachedItems);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a527850

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_FindClosestItem::Execute(FRigUnit_FindClosestItem *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  StaticExecute(param_1,&local_18,&this->Point,&this->Item,&this->CachedItems);
  return;
}

// RigVMExecute @ 14a53ec90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_FindClosestItem::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigElementKey *pFVar2;
  code *pcVar3;
  bool bVar4;
  uchar *puVar5;
  TVector<double> *pTVar6;
  FRigVMMemoryHandle *pFVar7;
  FRigVMSlice *pFVar8;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar9;
  FControlRigExecuteContext *pFVar10;
  TArrayView<FRigElementKey_const_,int> local_28;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7->PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar5 = pFVar7->Ptr;
  }
  else {
    puVar5 = FRigVMPropertyPath::GetData_Internal(pFVar7->PropertyPath,pFVar7->Ptr,pFVar7->Property)
    ;
  }
  if (iVar1 < 2) {
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
  pFVar7 = param_2->DataPtr;
  if (pFVar7[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar6 = (TVector<double> *)pFVar7[1].Ptr;
  }
  else {
    pTVar6 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar7[1].PropertyPath,pFVar7[1].Ptr,pFVar7[1].Property);
  }
  if (iVar1 < 3) {
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
  pFVar2 = (FRigElementKey *)param_2->DataPtr[2].Ptr;
  pFVar7 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pFVar8 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar9 = (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)
           FRigVMMemoryHandle::GetData_Internal(pFVar7,false,pFVar8->Offset + pFVar8->Index);
  local_28.DataPtr = *(FRigElementKey **)puVar5;
  local_28.ArrayNum = *(int *)(puVar5 + 8);
  if (local_28.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar10,&local_28,pTVar6,pFVar2,pTVar9);
  return;
}

// StaticExecute @ 14a570ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_FindClosestItem::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          TVector<double> *param_3,FRigElementKey *param_4,
          TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_5)

{
  FRigElementKey *pFVar1;
  undefined8 uVar2;
  ushort uVar3;
  URigHierarchy *this;
  FScriptContainerElement *pFVar4;
  FCachedRigElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined3 uVar10;
  FNameEntryId FVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FRigElementKey *pFVar17;
  longlong lVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  undefined1 auStackY_168 [32];
  FCachedRigElement local_118;
  FRigElementKey *local_f8;
  TVector<double> *local_f0;
  FRigElementKey local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_2->ArrayNum == 0) {
    uVar10 = InvalidKey._1_3_;
    FVar11.Value = InvalidKey.Name.ComparisonIndex.Value;
    param_4->Type = InvalidKey.Type;
    *(undefined3 *)&param_4->field_0x1 = uVar10;
    (param_4->Name).ComparisonIndex = (FNameEntryId)FVar11.Value;
    (param_4->Name).Number = InvalidKey.Name.Number;
  }
  else {
    this = param_1->Hierarchy;
    if (this != (URigHierarchy *)0x0) {
      local_f8 = param_4;
      local_f0 = param_3;
      TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNum
                (param_5,param_2->ArrayNum,Default);
      uVar16 = 0;
      if (0 < param_2->ArrayNum) {
        do {
          uVar14 = 0;
          if ((int)uVar16 < param_5->ArrayNum) {
            uVar14 = ~uVar16 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar4 = (param_5->AllocatorInstance).Data;
          uVar14 = 0;
          if ((int)uVar16 < param_2->ArrayNum) {
            uVar14 = ~uVar16 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar12 = FCachedRigElement::UpdateCache
                             ((FCachedRigElement *)(pFVar4 + (longlong)(int)uVar16 * 0x20),
                              param_2->DataPtr + (int)uVar16,this);
          if (!bVar12) {
            param_5->ArrayNum = 0;
            if (param_5->ArrayMax < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
            }
            break;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < param_2->ArrayNum);
      }
      uVar16 = 0;
      if ((param_5->ArrayNum == 0) && (0 < param_2->ArrayNum)) {
        pFVar17 = param_2->DataPtr;
        pFVar1 = pFVar17 + param_2->ArrayNum;
        for (; pFVar17 != pFVar1; pFVar17 = pFVar17 + 1) {
          local_e8.Type = pFVar17->Type;
          local_e8._1_3_ = *(undefined3 *)&pFVar17->field_0x1;
          local_e8.Name.ComparisonIndex.Value = (pFVar17->Name).ComparisonIndex.Value;
          local_e8.Name.Number = (pFVar17->Name).Number;
          local_118.Key._0_4_ = local_118.Key._0_4_ & 0xffffff00;
          local_118.Key.Name.ComparisonIndex.Value = 0;
          local_118.Key.Name.Number = 0;
          local_118.Index = 0xffff;
          local_118.ContainerVersion = -1;
          local_118.Element = (FRigBaseElement *)0x0;
          FCachedRigElement::UpdateCache(&local_118,&local_e8,this);
          pFVar5 = (FCachedRigElement *)(param_5->AllocatorInstance).Data;
          if (((pFVar5 <= &local_118) && (&local_118 < pFVar5 + param_5->ArrayMax)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar13 = param_5->ArrayNum;
          if (iVar13 == param_5->ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&param_5->AllocatorInstance,&param_5->ArrayMax);
          }
          param_5->ArrayNum = iVar13 + 1;
          pFVar6 = (param_5->AllocatorInstance).Data;
          pFVar4 = pFVar6 + (longlong)iVar13 * 0x20;
          *(ulonglong *)pFVar4 =
               CONCAT44(local_118.Key.Name.ComparisonIndex.Value,local_118.Key._0_4_);
          *(ulonglong *)(pFVar4 + 8) =
               CONCAT26(local_118._14_2_,CONCAT24(local_118.Index,local_118.Key.Name.Number));
          pFVar6 = pFVar6 + (longlong)iVar13 * 0x20 + 0x10;
          *(ulonglong *)pFVar6 = CONCAT44(local_118._20_4_,local_118.ContainerVersion);
          *(FRigBaseElement **)(pFVar6 + 8) = local_118.Element;
          param_4 = local_f8;
        }
      }
      fVar21 = __real_7f7fc99e;
      if ((param_5->ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (param_5->AllocatorInstance).Data;
      uVar2 = *(undefined8 *)pFVar4;
      param_4->Type = (char)uVar2;
      *(int3 *)&param_4->field_0x1 = (int3)((ulonglong)uVar2 >> 8);
      (param_4->Name).ComparisonIndex = (FNameEntryId)(int)((ulonglong)uVar2 >> 0x20);
      (param_4->Name).Number = *(uint *)(pFVar4 + 8);
      iVar13 = param_5->ArrayNum;
      if (0 < iVar13) {
        lVar18 = 0;
        do {
          uVar15 = ~uVar16 >> 0x1f;
          uVar14 = 0;
          if ((int)uVar16 < iVar13) {
            uVar14 = uVar15;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar4 = (param_5->AllocatorInstance).Data;
          if ((((*(short *)(pFVar4 + lVar18 + 0xc) != -1) &&
               (bVar12 = ::FName::IsWithinBounds((FNameEntryId)*(uint *)(pFVar4 + lVar18 + 4)),
               bVar12)) && (*(longlong *)(pFVar4 + lVar18 + 4) != 0)) &&
             (pFVar4[lVar18] != (FScriptContainerElement)0x0)) {
            uVar14 = 0;
            if ((int)uVar16 < param_5->ArrayNum) {
              uVar14 = uVar15;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar14 = 0xffffffff;
            uVar3 = *(ushort *)((param_5->AllocatorInstance).Data + lVar18 + 0xc);
            if (uVar3 != 0xffff) {
              uVar14 = (uint)uVar3;
            }
            URigHierarchy::GetGlobalTransformByIndex(this,&local_b8,uVar14,false);
            local_d8 = local_b8.Translation.XY.m128d_f64[0];
            dStack_d0 = local_b8.Translation.XY.m128d_f64[1];
            dVar9 = local_b8.Translation.XY.m128d_f64[0] - (local_f0->field0_0x0)._s_0.X;
            dVar8 = local_b8.Translation.XY.m128d_f64[1] - (local_f0->field0_0x0)._s_0.Y;
            local_c8 = local_b8.Translation.ZW.m128d_f64[0];
            dVar19 = local_b8.Translation.ZW.m128d_f64[0] - (local_f0->field0_0x0)._s_0.Z;
            fVar20 = (float)SQRT(dVar9 * dVar9 + dVar8 * dVar8 + dVar19 * dVar19);
            if (fVar20 < fVar21) {
              uVar14 = 0;
              if ((int)uVar16 < param_5->ArrayNum) {
                uVar14 = uVar15;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar4 = (param_5->AllocatorInstance).Data;
              uVar2 = *(undefined8 *)(pFVar4 + lVar18);
              param_4->Type = (char)uVar2;
              *(int3 *)&param_4->field_0x1 = (int3)((ulonglong)uVar2 >> 8);
              (param_4->Name).ComparisonIndex = (FNameEntryId)(int)((ulonglong)uVar2 >> 0x20);
              (param_4->Name).Number = *(uint *)(pFVar4 + lVar18 + 8);
              fVar21 = fVar20;
            }
          }
          iVar13 = param_5->ArrayNum;
          uVar16 = uVar16 + 1;
          lVar18 = lVar18 + 0x20;
        } while ((int)uVar16 < iVar13);
      }
    }
  }
  return;
}

