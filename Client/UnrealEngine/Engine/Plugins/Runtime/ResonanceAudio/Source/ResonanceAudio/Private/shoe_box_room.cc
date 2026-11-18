// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 1

// ComputeReflections @ 14f07ae70

void __cdecl
vraudio::ComputeReflections
          (WorldPosition *param_1,WorldPosition *param_2,float *param_3,
          vector<vraudio::Reflection,std::allocator<vraudio::Reflection>_> *param_4)

{
  Reflection *pRVar1;
  float fVar2;
  Reflection *pRVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = __real_3b3f112b;
  fVar5 = *(float *)param_1;
  fVar9 = *(float *)param_2 * __real_3f000000;
  if ((float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar9) {
    fVar7 = *(float *)&param_1->field_0x4;
    fVar6 = *(float *)&param_2->field_0x4 * __real_3f000000;
    if (((float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar6) &&
       (fVar8 = *(float *)&param_2->field_0x8 * __real_3f000000,
       (float)(*(uint *)&param_1->field_0x8 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar8)) {
      fVar4 = fVar9 + fVar5 + __real_3f800000;
      fVar10 = (fVar9 - fVar5) + __real_3f800000;
      fVar5 = fVar6 + fVar7 + __real_3f800000;
      fVar9 = fVar8 + *(float *)&param_1->field_0x8 + __real_3f800000;
      fVar7 = (fVar6 - fVar7) + __real_3f800000;
      fVar6 = (fVar8 - *(float *)&param_1->field_0x8) + __real_3f800000;
      ((param_4->_Mypair)._Myval2._Myfirst)->delay_time_seconds = fVar4 * __real_3b3f112b;
      ((param_4->_Mypair)._Myval2._Myfirst)->magnitude = *param_3 / fVar4;
      (param_4->_Mypair)._Myval2._Myfirst[1].delay_time_seconds = fVar10 * fVar2;
      (param_4->_Mypair)._Myval2._Myfirst[1].magnitude = param_3[1] / fVar10;
      (param_4->_Mypair)._Myval2._Myfirst[2].delay_time_seconds = fVar5 * fVar2;
      (param_4->_Mypair)._Myval2._Myfirst[2].magnitude = param_3[2] / fVar5;
      (param_4->_Mypair)._Myval2._Myfirst[3].delay_time_seconds = fVar7 * fVar2;
      (param_4->_Mypair)._Myval2._Myfirst[3].magnitude = param_3[3] / fVar7;
      (param_4->_Mypair)._Myval2._Myfirst[4].delay_time_seconds = fVar9 * fVar2;
      (param_4->_Mypair)._Myval2._Myfirst[4].magnitude = param_3[4] / fVar9;
      (param_4->_Mypair)._Myval2._Myfirst[5].delay_time_seconds = fVar6 * fVar2;
      (param_4->_Mypair)._Myval2._Myfirst[5].magnitude = param_3[5] / fVar6;
      return;
    }
  }
  pRVar1 = (param_4->_Mypair)._Myval2._Mylast;
  for (pRVar3 = (param_4->_Mypair)._Myval2._Myfirst; pRVar3 != pRVar1; pRVar3 = pRVar3 + 1) {
    pRVar3->delay_time_seconds = 0.0;
    pRVar3->magnitude = 0.0;
  }
  return;
}

