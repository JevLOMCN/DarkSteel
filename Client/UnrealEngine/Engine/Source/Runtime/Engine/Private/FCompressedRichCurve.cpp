// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 147a0f5d0

UScriptStruct * __cdecl FCompressedRichCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCompressedRichCurve.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCompressedRichCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCompressedRichCurve,(UObject *)pUVar1,
                         L"CompressedRichCurve");
  }
  return Z_Registration_Info_UScriptStruct_FCompressedRichCurve.OuterSingleton;
}

// operator== @ 147a2c370

bool __thiscall
FCompressedRichCurve::operator==(FCompressedRichCurve *this,FCompressedRichCurve *param_1)

{
  int iVar1;
  
  if (((((this->CompressionFormat).Value == (param_1->CompressionFormat).Value) &&
       ((this->KeyTimeCompressionFormat).Value == (param_1->KeyTimeCompressionFormat).Value)) &&
      ((this->PreInfinityExtrap).Value == (param_1->PreInfinityExtrap).Value)) &&
     (((this->PostInfinityExtrap).Value == (param_1->PostInfinityExtrap).Value &&
      ((this->ConstantValueNumKeys).NumKeys == (param_1->ConstantValueNumKeys).NumKeys)))) {
    iVar1 = (this->CompressedKeys).ArrayNum;
    if (iVar1 == (param_1->CompressedKeys).ArrayNum) {
      if ((iVar1 != 0) &&
         (iVar1 = memcmp((this->CompressedKeys).AllocatorInstance.Data,
                         (param_1->CompressedKeys).AllocatorInstance.Data,(longlong)iVar1),
         iVar1 != 0)) {
        return false;
      }
      return true;
    }
  }
  return false;
}

// Eval @ 147a40ce0

float __thiscall FCompressedRichCurve::Eval(FCompressedRichCurve *this,float param_1,float param_2)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  FStaticEvalArgs local_38;
  
  bVar1 = (this->CompressionFormat).Value;
  bVar2 = (this->KeyTimeCompressionFormat).Value;
  local_38.PreInfinityExtrap = (ERichCurveExtrapolation)(this->PreInfinityExtrap).Value;
  local_38.PostInfinityExtrap = (ERichCurveExtrapolation)(this->PostInfinityExtrap).Value;
  local_38.ConstantValueNumKeys = this->ConstantValueNumKeys;
  local_38.CompressedKeys = (uchar *)(this->CompressedKeys).AllocatorInstance.Data;
  local_38.KeyTimeCompressionFormat = (ERichCurveKeyTimeCompressionFormat)bVar2;
  local_38.CompressionFormat = (ERichCurveCompressionFormat)bVar1;
  local_38.Time = param_1;
  local_38.DefaultValue = param_2;
  fVar3 = (*UE::Anim::RichCurve::Private::InterpEvalMap[bVar1][bVar2])(&local_38);
  return fVar3;
}

// PopulateCurve @ 147a66980

void __thiscall FCompressedRichCurve::PopulateCurve(FCompressedRichCurve *this,FRichCurve *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int local_res8 [4];
  int local_res18 [2];
  FScriptContainerElement *local_res20;
  TArray<FRichCurveKey,TSizedDefaultAllocator<32>_> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  
  if ((this->CompressionFormat).Value != '\x01') {
    iVar9 = (this->ConstantValueNumKeys).NumKeys;
    iVar10 = 0;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    if (0 < iVar9) {
      do {
        bVar2 = (this->KeyTimeCompressionFormat).Value;
        bVar3 = (this->CompressionFormat).Value;
        local_res20 = (this->CompressedKeys).AllocatorInstance.Data;
        local_res8[0] = iVar10;
        local_res18[0] = iVar9;
        UE::Core::Private::Function::CheckCallable(*(void **)(ToRichCurveMap[bVar3] + bVar2));
        pcVar4 = *(code **)(ToRichCurveMap[bVar3] + bVar2);
        plVar7 = *(longlong **)&ToRichCurveMap[bVar3][bVar2].field_0x28;
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)&ToRichCurveMap[bVar3][bVar2].field_0x10;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar4)(&local_58,uVar6,local_res18,&local_res20,local_res8);
        if (((local_68.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 <
             local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x1c)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (local_68.ArrayNum == local_68.ArrayMax) {
          local_68.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x41c,&local_68.AllocatorInstance,&local_68.ArrayMax);
        }
        iVar1 = local_68.ArrayNum + 1;
        iVar10 = iVar10 + 1;
        lVar8 = (longlong)local_68.ArrayNum * 0x1c;
        *(undefined8 *)(local_68.AllocatorInstance.Data + lVar8) = local_58;
        *(undefined8 *)(local_68.AllocatorInstance.Data + lVar8 + 8) = uStack_50;
        *(undefined8 *)(local_68.AllocatorInstance.Data + lVar8 + 0x10) = local_48;
        *(undefined4 *)(local_68.AllocatorInstance.Data + lVar8 + 0x18) = local_40;
        iVar9 = (this->ConstantValueNumKeys).NumKeys;
        local_68.ArrayNum = iVar1;
      } while (iVar10 < iVar9);
    }
    FRichCurve::SetKeys(param_1,&local_68);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 147a87ca0

bool __thiscall FCompressedRichCurve::Serialize(FCompressedRichCurve *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  uchar *puVar3;
  longlong *plVar4;
  uint local_res8 [2];
  TConstantValueNumKeys local_res10 [2];
  
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,1);
  }
  else {
    (this->CompressionFormat).Value = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->KeyTimeCompressionFormat,1);
  }
  else {
    (this->KeyTimeCompressionFormat).Value = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->PreInfinityExtrap,1);
  }
  else {
    (this->PreInfinityExtrap).Value = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar3 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->PostInfinityExtrap,1);
  }
  else {
    (this->PostInfinityExtrap).Value = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = this->ConstantValueNumKeys;
  if ((TConstantValueNumKeys *)plVar4[1] < (TConstantValueNumKeys *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_res10[0].NumKeys);
    }
  }
  else {
    local_res10[0] = *(TConstantValueNumKeys *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  this->ConstantValueNumKeys = local_res10[0];
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) != 0) {
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if (-1 < (int)local_res8[0]) {
      piVar1 = &(this->CompressedKeys).ArrayMax;
      piVar2 = &(this->CompressedKeys).ArrayNum;
      *piVar2 = 0;
      if (*piVar1 != local_res8[0]) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_res8[0],&(this->CompressedKeys).AllocatorInstance,0,piVar1);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_res8[0],&(this->CompressedKeys).AllocatorInstance,piVar2,piVar1);
      (**(code **)(*(longlong *)param_1 + 0x188))
                (param_1,(this->CompressedKeys).AllocatorInstance.Data,(longlong)(int)local_res8[0])
      ;
      return true;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
  }
  local_res8[0] = (this->CompressedKeys).ArrayNum;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,(this->CompressedKeys).AllocatorInstance.Data,(longlong)(int)local_res8[0]);
  return true;
}

// StaticEval @ 147a94e40

float __cdecl FCompressedRichCurve::StaticEval(FStaticEvalArgs *param_1)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147a94e56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (*UE::Anim::RichCurve::Private::InterpEvalMap[(int)param_1->CompressionFormat]
            [(int)param_1->KeyTimeCompressionFormat])(param_1);
  return fVar1;
}

// StaticEval @ 147a94e60

float __cdecl
FCompressedRichCurve::StaticEval
          (ERichCurveCompressionFormat param_1,ERichCurveKeyTimeCompressionFormat param_2,
          ERichCurveExtrapolation param_3,ERichCurveExtrapolation param_4,
          TConstantValueNumKeys param_5,uchar *param_6,float param_7,float param_8)

{
  float fVar1;
  FStaticEvalArgs local_38;
  
  local_38.ConstantValueNumKeys = param_5;
  local_38.CompressedKeys = param_6;
  local_38.Time = param_7;
  local_38.DefaultValue = param_8;
  local_38.CompressionFormat = param_1;
  local_38.KeyTimeCompressionFormat = param_2;
  local_38.PreInfinityExtrap = param_3;
  local_38.PostInfinityExtrap = param_4;
  fVar1 = (*UE::Anim::RichCurve::Private::InterpEvalMap[(int)param_1][(int)param_2])(&local_38);
  return fVar1;
}

