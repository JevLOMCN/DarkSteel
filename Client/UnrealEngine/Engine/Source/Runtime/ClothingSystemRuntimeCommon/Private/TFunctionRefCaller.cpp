// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 18

// Call @ 148c22340

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherDataPrivate::FClothTetherDataPrivate'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `FClothTetherDataPrivate::FClothTetherDataPrivate'::__l2::<lambda_1>::operator()(param_1,*param_2)
  ;
  return;
}

// Call @ 148c22350

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherDataPrivate::GenerateEuclideanTethers'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `FClothTetherDataPrivate::GenerateEuclideanTethers'::__l2::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 148c22360

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_1>::operator()(param_1,*param_2)
  ;
  return;
}

// Call @ 148c22370

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_1>,bool,int>::Call
          (void *param_1,int *param_2)

{
  float *pfVar1;
  
  pfVar1 = TArrayView<float_const_,int>::operator[]
                     (*(TArrayView<float_const_,int> **)param_1,*param_2);
  return *pfVar1 <= __real_3dcccccd && __real_3dcccccd != *pfVar1;
}

// Call @ 148c223a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_1>,bool,int>::Call
          (void *param_1,int *param_2)

{
  float *pfVar1;
  
  pfVar1 = TArrayView<float_const_,int>::operator[]
                     (*(TArrayView<float_const_,int> **)param_1,*param_2);
  return *pfVar1 <= __real_3dcccccd && __real_3dcccccd != *pfVar1;
}

// Call @ 148c223d0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_1>,bool,int>::Call
          (void *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar3 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar3 = plVar1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar1[9] - 1U & *param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar2 * 0xc) == *param_2) goto LAB_148c2241f;
        iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_148c2241f:
  return iVar2 != -1;
}

// Call @ 148c22430

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_1>,bool,int>::Call
          (void *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar3 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar3 = plVar1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar1[9] - 1U & *param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar2 * 0xc) == *param_2) goto LAB_148c2247f;
        iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_148c2247f:
  return iVar2 != -1;
}

// Call @ 148c22490

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ClothingMeshUtils::SkinPhysicsMesh'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `ClothingMeshUtils::SkinPhysicsMesh'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 148c224a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothPhysicalMeshData::CalculateInverseMasses'::__l2::<lambda_2>,bool,int>::
Call(void *param_1,int *param_2)

{
  float *pfVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  uVar2 = *param_2;
  plVar3 = (longlong *)**(longlong **)param_1;
  uVar7 = 0;
  if ((int)uVar2 < (int)plVar3[1]) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pfVar1 = (float *)(*plVar3 + (longlong)(int)uVar2 * 4);
  return *pfVar1 <= __real_322bcc77 && __real_322bcc77 != *pfVar1;
}

// Call @ 148c22520

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_2>,void,int>::
Call(void *param_1,int *param_2)

{
  `FClothTetherDataPrivate::GenerateGeodesicTethers'::__l2::<lambda_2>::operator()(param_1,*param_2)
  ;
  return;
}

// Call @ 148c22530

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_2>,bool,int>::Call
          (void *param_1,int *param_2)

{
  float *pfVar1;
  
  pfVar1 = TArrayView<float_const_,int>::operator[]
                     (*(TArrayView<float_const_,int> **)param_1,*param_2);
  return __real_3dcccccd < *pfVar1 || __real_3dcccccd == *pfVar1;
}

// Call @ 148c22560

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_2>,bool,int>::Call
          (void *param_1,int *param_2)

{
  float *pfVar1;
  
  pfVar1 = TArrayView<float_const_,int>::operator[]
                     (*(TArrayView<float_const_,int> **)param_1,*param_2);
  return __real_3dcccccd < *pfVar1 || __real_3dcccccd == *pfVar1;
}

// Call @ 148c22590

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_2>,bool,int>::Call
          (void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = `FClothTetherData::GenerateTethers'::__l2::<lambda_2>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 148c225a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_2>,bool,int>::Call
          (void *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar3 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar3 = plVar1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar1[9] - 1U & *param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar2 * 0xc) == *param_2) goto LAB_148c225ef;
        iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_148c225ef:
  return iVar2 == -1;
}

// Call @ 148c22600

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_3>,bool,int>::Call
          (void *param_1,int *param_2)

{
  float *pfVar1;
  
  pfVar1 = TArrayView<float_const_,int>::operator[]
                     (*(TArrayView<float_const_,int> **)param_1,*param_2);
  return *pfVar1 <= __real_3dcccccd && __real_3dcccccd != *pfVar1;
}

// Call @ 148c22630

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_3>,bool,int>::Call
          (void *param_1,int *param_2)

{
  float *pfVar1;
  
  pfVar1 = TArrayView<float_const_,int>::operator[]
                     (*(TArrayView<float_const_,int> **)param_1,*param_2);
  return *pfVar1 <= __real_3dcccccd && __real_3dcccccd != *pfVar1;
}

// Call @ 148c22660

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_3>,bool,int>::Call
          (void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = `FClothTetherData::GenerateTethers'::__l2::<lambda_3>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 148c22670

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FClothTetherData::GenerateTethers'::__l2::<lambda_3>,bool,int>::Call
          (void *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)param_1;
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar3 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar3 = plVar1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar1[9] - 1U & *param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar2 * 0xc) == *param_2) goto LAB_148c226bf;
        iVar2 = *(int *)(*plVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_148c226bf:
  return iVar2 != -1;
}

