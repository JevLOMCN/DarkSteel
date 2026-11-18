// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 3

// FConvexBody @ 14a9765d0

FConvexBody * __thiscall
UE::Mutable::Private::FConvexBody::FConvexBody(FConvexBody *this,FConvexBody *param_1)

{
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ulong64 uVar6;
  
  ::FString::FString((FString *)this,(FString *)param_1);
  pTVar1 = &this->Vertices;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Vertices).ArrayMax;
  iVar4 = (param_1->Vertices).ArrayNum;
  pFVar5 = (param_1->Vertices).AllocatorInstance.Data;
  (this->Vertices).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0xc);
  }
  pTVar3 = &this->Indices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Indices).ArrayMax;
  iVar4 = (param_1->Indices).ArrayNum;
  pFVar5 = (param_1->Indices).AllocatorInstance.Data;
  (this->Indices).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  uVar6 = (param_1->Transform).Rotation.m128_u64[1];
  (this->Transform).Rotation.m128_u64[0] = (param_1->Transform).Rotation.m128_u64[0];
  (this->Transform).Rotation.m128_u64[1] = uVar6;
  uVar6 = (param_1->Transform).Translation.m128_u64[1];
  (this->Transform).Translation.m128_u64[0] = (param_1->Transform).Translation.m128_u64[0];
  (this->Transform).Translation.m128_u64[1] = uVar6;
  uVar6 = (param_1->Transform).Scale3D.m128_u64[1];
  (this->Transform).Scale3D.m128_u64[0] = (param_1->Transform).Scale3D.m128_u64[0];
  (this->Transform).Scale3D.m128_u64[1] = uVar6;
  return this;
}

// Serialise @ 14ab851c0

void __thiscall
UE::Mutable::Private::FConvexBody::Serialise(FConvexBody *this,FOutputArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [4];
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44 [3];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  local_res10[0] = (uint)this->_padding_;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res10,4);
  if (local_res10[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,this->_padding_,(ulonglong)local_res10[0] * 2);
  }
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->_padding_,4);
  local_res8[0] = (this->Vertices).ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  uVar6 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < (this->Vertices).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar5 * 0xc;
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 4,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 8,4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_res8[0]);
  }
  local_res18[0] = (this->Indices).ArrayNum;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res18,4);
  if (local_res18[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->Indices).AllocatorInstance.Data,(ulonglong)local_res18[0] << 2
              );
  }
  local_38 = (this->Transform).Rotation.m128_f32[0];
  fStack_34 = (this->Transform).Rotation.m128_f32[1];
  fStack_30 = (this->Transform).Rotation.m128_f32[2];
  fStack_2c = (this->Transform).Rotation.m128_f32[3];
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&local_38,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&fStack_34,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&fStack_30,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&fStack_2c,4);
  local_58 = (this->Transform).Translation.m128_f32[0];
  fStack_54 = (this->Transform).Translation.m128_f32[1];
  local_50 = (this->Transform).Translation.m128_f32[2];
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&local_58,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&fStack_54,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&local_50,4);
  local_4c = (this->Transform).Scale3D.m128_f32[0];
  fStack_48 = (this->Transform).Scale3D.m128_f32[1];
  local_44[0] = (this->Transform).Scale3D.m128_f32[2];
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&local_4c,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&fStack_48,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_44,4);
  return;
}

// Unserialise @ 14ab8cf50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FConvexBody::Unserialise(FConvexBody *this,FInputArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  __m128 _Var3;
  __m128 _Var4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  uint local_res10 [2];
  undefined1 local_58 [12];
  undefined8 local_48;
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  
  Private::operator>>(param_1,(FString *)this);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&this->_padding_,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res8,4);
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Vertices,local_res8[0],Default);
  uVar8 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar7 = (uint)uVar8;
      uVar6 = 0;
      if ((int)uVar7 < (this->Vertices).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Vertices).AllocatorInstance.Data + (longlong)(int)uVar7 * 0xc;
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 4,4);
      (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,pFVar1 + 8,4);
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_res8[0]);
  }
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res10,4);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->Indices,local_res10[0],Default);
  if (local_res10[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->Indices).AllocatorInstance.Data,(ulonglong)local_res10[0] << 2
              );
  }
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&local_38,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,(longlong)&local_38 + 4,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&uStack_30,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,(longlong)&uStack_30 + 4,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_58,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_58 + 4,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_58 + 8,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,&local_48,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,(longlong)&local_48 + 4,4);
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_40,4);
  _Var3.m128_f32[3] = 0.0;
  _Var3._0_12_ = local_58;
  (this->Transform).Translation = _Var3;
  _Var4.m128_f32[2] = (float)local_40[0];
  _Var4.m128_u64[0] = local_48;
  _Var4.m128_f32[3] = 0.0;
  (this->Transform).Scale3D = _Var4;
  (this->Transform).Rotation.m128_u64[0] = local_38;
  (this->Transform).Rotation.m128_u64[1] = uStack_30;
  return;
}

