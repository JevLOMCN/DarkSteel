// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 10

// StaticStruct @ 148c0ab10

UScriptStruct * __cdecl FClothTetherData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClothTetherData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
    Z_Registration_Info_UScriptStruct_FClothTetherData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClothTetherData,(UObject *)pUVar1,
                         L"ClothTetherData");
  }
  return Z_Registration_Info_UScriptStruct_FClothTetherData.OuterSingleton;
}

// operator= @ 148c1b520

FClothTetherData * __thiscall
FClothTetherData::operator=(FClothTetherData *this,FClothTetherData *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
               (this->Tethers).AllocatorInstance.Data,(this->Tethers).ArrayNum);
    iVar2 = (param_1->Tethers).ArrayNum;
    piVar1 = &(this->Tethers).ArrayMax;
    pTVar3 = (TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
             (param_1->Tethers).AllocatorInstance.Data;
    (this->Tethers).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
              ((this->Tethers).AllocatorInstance.Data,pTVar3,iVar2);
  }
  return this;
}

// operator() @ 148c1ead0

bool __thiscall
`FClothTetherData::GenerateTethers'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar3 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar3 = plVar1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar1[9] - 1U & param_1) * 4);
    if (iVar2 != -1) {
      while (*(int *)(*plVar1 + (longlong)iVar2 * 0xc) != param_1) {
        iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
        if (iVar2 == -1) {
          return false;
        }
      }
      plVar1 = *(longlong **)this;
      if ((int)plVar1[1] == *(int *)((longlong)plVar1 + 0x34)) {
        return true;
      }
      plVar3 = (longlong *)plVar1[8];
      if ((longlong *)plVar1[8] == (longlong *)0x0) {
        plVar3 = plVar1 + 7;
      }
      iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar1[9] - 1U & param_1) * 4);
      if (iVar2 == -1) {
        return true;
      }
      while (*(int *)(*plVar1 + (longlong)iVar2 * 0xc) != param_1) {
        iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
        if (iVar2 == -1) {
          return true;
        }
      }
    }
  }
  return false;
}

// operator() @ 148c1eb80

bool __thiscall
`FClothTetherData::GenerateTethers'::__l2::<lambda_3>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar3 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar3 = plVar1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar1[9] - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*plVar1 + (longlong)iVar2 * 0xc) == param_1) {
          plVar1 = *(longlong **)this;
          if ((int)plVar1[1] == *(int *)((longlong)plVar1 + 0x34)) {
            return false;
          }
          plVar3 = (longlong *)plVar1[8];
          if ((longlong *)plVar1[8] == (longlong *)0x0) {
            plVar3 = plVar1 + 7;
          }
          iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar1[9] - 1U & param_1) * 4);
          if (iVar2 == -1) {
            return false;
          }
          do {
            if (*(int *)(*plVar1 + (longlong)iVar2 * 0xc) == param_1) {
              return true;
            }
            iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
          } while (iVar2 != -1);
          return false;
        }
        iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// GenerateTethers @ 148c2b110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FClothTetherData::GenerateTethers
          (FClothTetherData *this,
          TArray<TArray<TTuple<float,int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  undefined1 auStackY_158 [32];
  <lambda_1> local_118;
  undefined8 *local_110;
  TArray<TArray<TTuple<float,int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_108;
  TArrayView<std::nullptr_t,int> local_100;
  code *local_f0;
  undefined8 **local_e8;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  TArray<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_48;
  ForAnyElementType local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_ac = 0x80;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a4 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60._0_4_ = 0;
  local_60._4_4_ = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  local_a8 = 0xffffffff;
  TArray<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  SetNum(&local_48,param_1->ArrayNum,Default);
  local_110 = (undefined8 *)local_d8;
  local_f0 = UE::Core::Private::Function::
             TFunctionRefCaller<`FClothTetherDataPrivate::FClothTetherDataPrivate'::__l2::<lambda_1>,void,int>
             ::Call;
  local_e8 = &local_110;
  local_100.DataPtr = (void **)0x0;
  local_100.ArrayNum = 0;
  local_108 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_1->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_f0,
             local_118,None,&local_100);
  FClothTetherDataPrivate::UpdateCounts((FClothTetherDataPrivate *)local_d8);
  FClothTetherDataPrivate::GetBatchedTetherData((FClothTetherDataPrivate *)local_d8,&this->Tethers);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
             local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)local_48.AllocatorInstance.Data
      != (TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_58.Data,(int)local_50);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_58.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d8,0,local_d8._8_4_);
  iVar1 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  return;
}

// GenerateTethers @ 148c2b340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FClothTetherData::GenerateTethers
          (FClothTetherData *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          TArrayView<unsigned_int_const_,int> *param_2,TArrayView<float_const_,int> *param_3,
          TArrayView<float_const_,int> *param_4,bool param_5)

{
  int *piVar1;
  undefined1 auStackY_158 [32];
  TArrayView<float_const_,int> *local_118;
  TArrayView<float_const_,int> *local_110;
  TArrayView<float_const_,int> *local_108;
  code *local_100;
  TArrayView<float_const_,int> **local_f8;
  code *local_f0;
  TArrayView<float_const_,int> **local_e8;
  code *local_e0;
  TArrayView<float_const_,int> **local_d8;
  FClothTetherDataPrivate local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (param_1->ArrayNum == param_3->ArrayNum) {
    local_118 = param_4;
    local_f8 = &local_118;
    local_100 = UE::Core::Private::Function::
                TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_3>,bool,int>::
                Call;
    local_e8 = &local_110;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_2>,bool,int>::
               Call;
    local_d8 = &local_108;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_1>,bool,int>::
               Call;
    local_110 = param_3;
    local_108 = param_3;
    FClothTetherDataPrivate::FClothTetherDataPrivate
              (&local_c8,param_1,param_2,(TFunctionRef<bool___cdecl(int)> *)&local_e0,
               (TFunctionRef<bool___cdecl(int)> *)&local_f0,
               (TFunctionRef<bool___cdecl(int)> *)&local_100,param_5);
    FClothTetherDataPrivate::GetBatchedTetherData(&local_c8,&this->Tethers);
    FClothTetherDataPrivate::~FClothTetherDataPrivate(&local_c8);
  }
  else {
    DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
               (this->Tethers).AllocatorInstance.Data,(this->Tethers).ArrayNum);
    piVar1 = &(this->Tethers).ArrayMax;
    (this->Tethers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  return;
}

// GenerateTethers @ 148c2b470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FClothTetherData::GenerateTethers
          (FClothTetherData *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          TArrayView<unsigned_int_const_,int> *param_2,TArrayView<float_const_,int> *param_3,
          bool param_4)

{
  int *piVar1;
  undefined1 auStackY_158 [32];
  TArrayView<float_const_,int> *local_118;
  TArrayView<float_const_,int> *local_110;
  TArrayView<float_const_,int> *local_108;
  code *local_100;
  TArrayView<float_const_,int> **local_f8;
  code *local_f0;
  TArrayView<float_const_,int> **local_e8;
  code *local_e0;
  TArrayView<float_const_,int> **local_d8;
  FClothTetherDataPrivate local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (param_1->ArrayNum == param_3->ArrayNum) {
    local_f8 = &local_118;
    local_100 = UE::Core::Private::Function::
                TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_3>,bool,int>::
                Call;
    local_e8 = &local_110;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_2>,bool,int>::
               Call;
    local_d8 = &local_108;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_1>,bool,int>::
               Call;
    local_118 = param_3;
    local_110 = param_3;
    local_108 = param_3;
    FClothTetherDataPrivate::FClothTetherDataPrivate
              (&local_c8,param_1,param_2,(TFunctionRef<bool___cdecl(int)> *)&local_e0,
               (TFunctionRef<bool___cdecl(int)> *)&local_f0,
               (TFunctionRef<bool___cdecl(int)> *)&local_100,param_4);
    FClothTetherDataPrivate::GetBatchedTetherData(&local_c8,&this->Tethers);
    FClothTetherDataPrivate::~FClothTetherDataPrivate(&local_c8);
  }
  else {
    DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
               (this->Tethers).AllocatorInstance.Data,(this->Tethers).ArrayNum);
    piVar1 = &(this->Tethers).ArrayMax;
    (this->Tethers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  return;
}

// GenerateTethers @ 148c2b5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FClothTetherData::GenerateTethers
          (FClothTetherData *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          TArrayView<unsigned_int_const_,int> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_5,bool param_6)

{
  int *piVar1;
  undefined1 auStackY_168 [32];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_128;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_120;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_118;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_110;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_108;
  code *local_100;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **local_f8;
  code *local_f0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **local_e8;
  code *local_e0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **local_d8;
  FClothTetherDataPrivate local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (((*(int *)&(param_4->Elements).field_0x8 == *(int *)&(param_4->Elements).field_0x34) ||
      (*(int *)&(param_5->Elements).field_0x8 == *(int *)&(param_5->Elements).field_0x34)) ||
     (*(int *)&(param_3->Elements).field_0x8 == *(int *)&(param_3->Elements).field_0x34)) {
    DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
               (this->Tethers).AllocatorInstance.Data,(this->Tethers).ArrayNum);
    piVar1 = &(this->Tethers).ArrayMax;
    (this->Tethers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    local_f8 = &local_120;
    local_100 = UE::Core::Private::Function::
                TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_3>,bool,int>::
                Call;
    local_e8 = &local_110;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_2>,bool,int>::
               Call;
    local_d8 = &local_128;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_1>,bool,int>::
               Call;
    local_118 = param_4;
    local_108 = param_5;
    local_128 = param_3;
    local_120 = param_3;
    local_110 = param_3;
    FClothTetherDataPrivate::FClothTetherDataPrivate
              (&local_c8,param_1,param_2,(TFunctionRef<bool___cdecl(int)> *)&local_e0,
               (TFunctionRef<bool___cdecl(int)> *)&local_f0,
               (TFunctionRef<bool___cdecl(int)> *)&local_100,param_6);
    FClothTetherDataPrivate::GetBatchedTetherData(&local_c8,&this->Tethers);
    FClothTetherDataPrivate::~FClothTetherDataPrivate(&local_c8);
  }
  return;
}

// GenerateTethers @ 148c2b710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FClothTetherData::GenerateTethers
          (FClothTetherData *this,TArrayView<UE::Math::TVector<float>_const_,int> *param_1,
          TArrayView<unsigned_int_const_,int> *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,bool param_4)

{
  int *piVar1;
  undefined1 auStackY_158 [32];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_118;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_110;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_108;
  code *local_100;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **local_f8;
  code *local_f0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **local_e8;
  code *local_e0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **local_d8;
  FClothTetherDataPrivate local_c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)&(param_3->Elements).field_0x8 == *(int *)&(param_3->Elements).field_0x34) {
    DestructItems<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_> *)
               (this->Tethers).AllocatorInstance.Data,(this->Tethers).ArrayNum);
    piVar1 = &(this->Tethers).ArrayMax;
    (this->Tethers).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    local_f8 = &local_118;
    local_100 = UE::Core::Private::Function::
                TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_3>,bool,int>::
                Call;
    local_e8 = &local_110;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_2>,bool,int>::
               Call;
    local_d8 = &local_108;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_1>,bool,int>::
               Call;
    local_118 = param_3;
    local_110 = param_3;
    local_108 = param_3;
    FClothTetherDataPrivate::FClothTetherDataPrivate
              (&local_c8,param_1,param_2,(TFunctionRef<bool___cdecl(int)> *)&local_e0,
               (TFunctionRef<bool___cdecl(int)> *)&local_f0,
               (TFunctionRef<bool___cdecl(int)> *)&local_100,param_4);
    FClothTetherDataPrivate::GetBatchedTetherData(&local_c8,&this->Tethers);
    FClothTetherDataPrivate::~FClothTetherDataPrivate(&local_c8);
  }
  return;
}

// Serialize @ 148c31df0

bool __thiscall FClothTetherData::Serialize(FClothTetherData *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if ((param_1->field_0x28 & 5) != 0) {
    if (Z_Registration_Info_UScriptStruct_FClothTetherData.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
      Z_Registration_Info_UScriptStruct_FClothTetherData.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FClothTetherData,(UObject *)pUVar1,
                           L"ClothTetherData");
    }
    UStruct::SerializeTaggedProperties
              ((UStruct *)Z_Registration_Info_UScriptStruct_FClothTetherData.OuterSingleton,param_1,
               (uchar *)this,
               (UStruct *)Z_Registration_Info_UScriptStruct_FClothTetherData.OuterSingleton,
               (uchar *)0x0,(UObject *)0x0);
  }
  TArrayPrivateFriend::
  Serialize<TArray<TTuple<int,int,float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (param_1,&this->Tethers);
  return true;
}

