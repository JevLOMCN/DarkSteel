// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 7

// Empty @ 14e69ab40

void __thiscall
TArray<FInterchangeCurve,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FInterchangeCurve,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FInterchangeCurve,int>
              ((FInterchangeCurve *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14e69abb0

void __thiscall
TArray<FInterchangeStepCurve,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FInterchangeStepCurve,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FInterchangeStepCurve,int>
              ((FInterchangeStepCurve *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// CopyToEmpty<TTuple<enum_GLTF::EMessageSeverity,FText>,int> @ 14e6ae3e0

void __thiscall
TArray<TTuple<enum_GLTF::EMessageSeverity,FText>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<TTuple<enum_GLTF::EMessageSeverity,FText>,int>
          (void *this,TTuple<GLTF::EMessageSeverity,FText> *param_1,int param_2,int param_3)

{
  *(int *)((longlong)this + 8) = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    *(undefined4 *)((longlong)this + 0xc) = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,param_2,param_3,this,param_2,(int *)((longlong)this + 0xc));
  ConstructItems<TTuple<enum_GLTF::EMessageSeverity,FText>,TTuple<enum_GLTF::EMessageSeverity,FText>,int>
            (*(void **)this,param_1,param_2);
  return;
}

// CopyToEmpty<GLTF::FAnimation,int> @ 14e6ae460

void __thiscall
TArray<GLTF::FAnimation,TSizedDefaultAllocator<32>_>::CopyToEmpty<GLTF::FAnimation,int>
          (TArray<GLTF::FAnimation,TSizedDefaultAllocator<32>_> *this,FAnimation *param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x90,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<GLTF::FAnimation,GLTF::FAnimation,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// RemoveAtImpl @ 14e6d0be0

void __thiscall
TArray<UE::Interchange::FVariant,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::Interchange::FVariant,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FVariant *_Dst;
  
  _Dst = (FVariant *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x20);
  DestructItems<UE::Interchange::FVariant,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 5);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// AddUniqueImpl<FPolygonID_const_&> @ 14e6d8740

int __thiscall
TArray<FPolygonID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FPolygonID_const_&>
          (TArray<FPolygonID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,
          FPolygonID *param_1)

{
  ForElementType<FPolygonID> FVar1;
  ForElementType<FPolygonID> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FPolygonID> FVar6;
  ForElementType<FPolygonID> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<FPolygonID>)this;
  if (FVar2 != (ForElementType<FPolygonID>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<FPolygonID>)((longlong)FVar7 + (longlong)this->ArrayNum * 4);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(FPolygonID *)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 2);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<FPolygonID>)((longlong)FVar6 + 4);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<FPolygonID>)this;
  if (FVar2 != (ForElementType<FPolygonID>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FPolygonID>)this;
    if (FVar2 != (ForElementType<FPolygonID>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FPolygonID *)((longlong)FVar7 + (longlong)this->ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPolygonID>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FPolygonID>)0x0) {
    this = (TArray<FPolygonID,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(FPolygonID *)((longlong)this + (longlong)iVar5 * 4) = *param_1;
  return iVar5;
}

// RemoveAtImpl @ 14e727de0

void __thiscall
TArray<FMeshDescription,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMeshDescription,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FMeshDescription *_Dst;
  
  _Dst = (FMeshDescription *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x2c0);
  DestructItems<FMeshDescription,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x2c0);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

